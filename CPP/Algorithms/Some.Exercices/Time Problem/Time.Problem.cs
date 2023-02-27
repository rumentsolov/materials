using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;

namespace CS_Algorithms
{
    internal class Program
    {
        private static int[][] matrix;
        static void Main()
        {
            int[] firstSequence = Console.ReadLine()
            .Split()
            .Select(int.Parse)
            .ToArray();

            int[] secondSequence = Console.ReadLine()
           .Split()
           .Select(int.Parse)
           .ToArray();

            InitializeMatrix(firstSequence, secondSequence);

            Stack<int> longestCommonSubseqyence = new Stack<int>();

            int row = firstSequence.Length ;
            int col = secondSequence.Length ;

            while (row > 0 && col >0)
            {
                if (firstSequence[row - 1] == secondSequence[col - 1])
                {
                    longestCommonSubseqyence.Push(firstSequence[row - 1]);
                    row--;
                    col--;

                }
                else if (matrix[row][col-1] >= matrix[row - 1][col])
                {
                    col--;
                }
                else
                {
                    row--;
                }
            }
            int matrixLenght = matrix[^1][^1]; // counting from last direction
            Console.WriteLine(String.Join(" ", longestCommonSubseqyence));
            Console.WriteLine(matrixLenght);

        }

        private static void InitializeMatrix(int[] firstSequence, int[] secondSequence)
        {
            matrix = new int[firstSequence.Length + 1][];

            for(int row = 0; row < matrix.Length; row++)
            {
                matrix[row] = new int[secondSequence.Length + 1];
                
            }

            for (int row = 1; row < matrix.Length; row++)
            {
                for (int col = 1; col < matrix[row].Length; col++)
                {
                    if (firstSequence[row - 1] == secondSequence[col - 1])
                    {
                        matrix[row][col] = matrix[row - 1][col - 1] + 1; // if we have equal values
                    }
                    else
                    {
                        matrix[row][col] = Math.Max(matrix[row - 1][col], matrix[row][col - 1]);
                    }
                  
                }
            }

        }
    }
}

/*
13 42 69 73 42 84 26
13 54 73 42 8 15 29

5 69 78 5 3 5 5 5
1 2 3 5 5 5 5 5

*/

