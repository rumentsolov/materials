using System;
using System.Collections.Generic;
using System.Linq;

namespace CS_Algorithms
{
    internal class Program
    {
        public static string str;
        static void Main()
        {
            str = "*";
            var idx = int.Parse(Console.ReadLine());

            Recursion(idx);

        }
        private static void Recursion(int idx)
        {

            if (idx == 0)
            {

                str = "#";
                return;
            }

                

            
            
            PrintFigure(idx, str); // Pre-action: print n asterisks


            Recursion(idx - 1);

            if (str == "#") // Post-action: print n hashtags
            {
                PrintFigure(idx, str);
            }

        }

        private static void PrintFigure(int idx , string str)
        {
            string newStr = "";
            for ( int i = 0 ; i < idx; i++)
            {
                newStr = newStr.Insert(0, str);
            }
            Console.WriteLine(newStr);
        }
    }
}

