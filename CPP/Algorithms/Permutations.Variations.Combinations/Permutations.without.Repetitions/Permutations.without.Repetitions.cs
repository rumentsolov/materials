using System;
using System.Collections.Generic;
using System.Linq;

namespace CS_Algorithms
{
    public class Program
    {
        private static string[] elements;
        private static string[] permutations;
        private static bool[] used;
        public static void Main()
        {
            elements = Console.ReadLine().Split();    
            permutations = new string[elements.Length];
            used = new bool[elements.Length];
            Permute(0);
        }


        private static void Permute ( int idx)
        {
            if ( idx >= permutations.Length )
            {
                Console.WriteLine(string.Join(" ", permutations));
                return;
            }

            for(int i = 0; i < permutations.Length; i++)
            {
                if (!used[i]) 
                {
                    used[i] = true;
                    permutations[idx] = elements[i];
                    Permute(idx + 1);
                    used[i] = false;
                }
            }
               
        }

    }
}
