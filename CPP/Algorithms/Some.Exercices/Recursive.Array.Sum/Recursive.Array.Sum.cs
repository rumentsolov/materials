using System;
using System.Collections.Generic;
using System.Linq;

namespace CS_Algorithms
{
    internal class Program
    {
        static void Main()
        {
            var array = Console.ReadLine()
                .Split()
                .Select(int.Parse)
                .ToArray();

            Console.WriteLine(Sum(array,0));
         
        }
        static int Sum(int[] array, int index)
        {
        if (index == array.Length -1 ) return array[index]; // Bottom
        
        return array[index] + Sum(array, index +1 ); // Reverse Sum
        }
    }
}

