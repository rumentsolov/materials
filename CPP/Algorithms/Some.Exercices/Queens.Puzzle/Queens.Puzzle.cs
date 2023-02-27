using System;
using System.Collections.Generic;
using System.Linq;

namespace CS_Algorithms
{
    public class Program
    {
        private static HashSet<int> attackedRows = new HashSet<int>();
        private static HashSet<int> attackedCols = new HashSet<int>();
        private static HashSet<int> leftDiagonals = new HashSet<int>();
        private static HashSet<int> rigthDiagonals = new HashSet<int>();
        static void Main()
        {
        var board = new bool[8, 8];
            PlaceQueens(board, 0);
        }

        private static void PlaceQueens(bool[,] board, int row)
        {
             if(row >= board.GetLength(0))
             {
                PrintBoard(board);
                    return;
             }

             for ( int col = 0; col < board.GetLength(1); col++ )
             {
                        if ( CanPlaceQueen(row,col) )// if I can place queen
                        {
                            attackedRows.Add(row);
                            attackedCols.Add(col);
                            leftDiagonals.Add(row - col);
                            rigthDiagonals.Add(row + col);
                            board[row, col] = true;

                            PlaceQueens(board, row + 1);

                            attackedRows.Remove(row);
                            attackedCols.Remove(col);
                            leftDiagonals.Remove(row - col);
                            rigthDiagonals.Remove(row + col);
                            board[row, col] = false;

                        }
             }
        }
        private static bool CanPlaceQueen(int row, int col)
        {
            return (!attackedRows.Contains(row) && !attackedCols.Contains(col) && !leftDiagonals.Contains(row - col) && !rigthDiagonals.Contains(col + row));
        }
        private static void PrintBoard(bool[,] board)
        {
            for( int row = 0; row < board.GetLength(0); row++ )
            {
                for(int col = 0; col < board.GetLength(1); col++ )
                {
                    if(board[row, col] == true)
                    {
                        Console.Write("* ");
                    }
                    else 
                    {
                        Console.Write("- ");
                    }
                }
                Console.WriteLine();
            }
            Console.WriteLine();
        }
    }
}
