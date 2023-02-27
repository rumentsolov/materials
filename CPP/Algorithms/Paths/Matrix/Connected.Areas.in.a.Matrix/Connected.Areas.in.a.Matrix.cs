using System;
using System.Collections.Generic;
using System.Collections;
using System.Linq;
using System.Globalization;
using System.Numerics;

namespace CS_Algorithms
{
    public class Area
    {
        public int Row { get; set; }  
        public int Col { get; set; }
        public int Size { get; set; }
    }
    internal class Program
    {
        private static char[,] matrix;
        private static int size = 0;
        private const char visitedSymbol = 'v';

        static void Main(string[] args)
        {
            var rows = int.Parse(Console.ReadLine());
            var cols = int.Parse(Console.ReadLine());

            matrix = new char[rows, cols];


            for (int r = 0; r < rows; r++)
            {
                var colElements = Console.ReadLine();

                for (int c = 0; c < cols; c++)
                {
                    matrix[r, c] = colElements[c];
                }
            }

            var areas = new List<Area>();

            for (int r = 0; r < rows; r++)
            {

                for (int c = 0; c < cols; c++)
                {
                    size = 0;
                    ExploreArea(r, c);
                    if(size != 0)
                    {
                        areas.Add(new Area {  Row = r, Col = c , Size = size });
                    }
                }
            }
            
            var sorted = areas
                .OrderByDescending(a => a.Size)
                .ThenBy(a => a.Row)
                .ThenBy(a => a.Col)
                .ToList();

            Console.WriteLine($"Total areas found: {areas.Count}");

            for ( int i = 0; i < sorted.Count; i++)
            {
                var area = sorted[i];
                Console.WriteLine($"Area #{i + 1} at ({area.Row}, {area.Col}), size: {area.Size}");
            }
        }

            private static void ExploreArea(int row, int col)
            {
                if (IsOutside(row, col) || IsWall(row, col) || IsVisited(row, col))
                {
                    return;
                }
                else
                {
                    size += 1;
                    matrix[row, col] = visitedSymbol;
                    ExploreArea(row - 1, col);
                    ExploreArea(row + 1, col);
                    ExploreArea(row, col - 1);
                    ExploreArea(row, col + 1);
                }
                
            }

            private static bool IsVisited(int row, int col)
            {

                return (matrix[row, col] == visitedSymbol);
            }

            private static bool IsOutside(int row, int col)
            {

                return row < 0 || col < 0 || row >= matrix.GetLength(0) || col >= matrix.GetLength(1);
            }

            private static bool IsWall(int row, int col)
            {
            if (matrix[row, col] == '*')
                return true;
            else
                return false;
            }

/*
4
9
---*---*-
---*---*-
---*---*-
----*-*--

5
10
*--*---*--
*--*---*--
*--*****--
*--*---*--
*--*---*--

*/
    }
}

