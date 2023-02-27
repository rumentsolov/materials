using System;
using System.Collections.Generic;
using System.Linq;

namespace CS_Algorithms
{
    internal class Program
    {
        public static int[] arr;
        static void Main()
        {
            var idx = int.Parse(Console.ReadLine());

            int[] arr = new int[idx];
                Gen01(arr , 0);
        }

        static void Gen01(int[] arr , int index)
        {
            if (index >= arr.Length)

                Console.WriteLine(string.Join(String.Empty, arr));
            else
            {
                for (int i = 0; i <= 1; i++)
                {
                    arr[index] = i;

                    Gen01(arr , index + 1);
                }
            }
        }

    }
}
