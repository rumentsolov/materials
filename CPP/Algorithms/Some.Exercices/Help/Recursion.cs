using System;

namespace CS_Algorithms
{
    internal class Program
    {
        static void Main(string[] args)
        {
            var rows = int.Parse(Console.ReadLine());
            var cols = int.Parse(Console.ReadLine());   

            var lab = new char[rows, cols];

            for (int r = 0; r < rows; r++)
            {
                var colElements = Console.ReadLine();

                for ( int c = 0; c < colElements.Length; c++)
                {
                    lab[r, c] = colElements[c];
                }
            }
            FindPaths(lab, 0, 0 , new List<string> () , string.Empty);
        }
        private static void FindPaths(char[,] lab , int row, int col , List<string> directions, string direction)
        {
            if (row < 0 || row >= lab.GetLength(0)|| col < 0 || col >= lab.GetLength(1)) return; // Validates row & col are existing

            if (lab[row, col] == '*' || lab[row, col] == 'v')
            {
                return; // validates if there is wall
            }

            directions.Add(direction);

            if (lab[row, col] == 'e') // Validates the end of the matrix
            {
                Console.WriteLine(string.Join(string.Empty, directions));
                directions.RemoveAt(directions.Count - 1);
                return;
            }

            lab[row, col] = 'v'; // this flag tells that our algorigthm have passed already true that cell
            
            FindPaths(lab, row - 1, col , directions, "U"); // UP
            FindPaths(lab, row + 1, col, directions, "D"); // DOWN
            FindPaths(lab, row , col - 1, directions, "L"); // LEFT
            FindPaths(lab, row , col + 1, directions, "R"); // RIGHT

            lab[row, col] = '-'; // this removes the flag of that cell
            directions.RemoveAt(directions.Count - 1);
        }
    }
}

