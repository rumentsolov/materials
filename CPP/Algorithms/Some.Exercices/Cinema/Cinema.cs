using System;
using System.Collections.Generic;
using System.Collections;
using System.Linq;
using System.Globalization;
using System.Numerics;

namespace CS_Algorithms
{
    internal class Program
    {
        private static List<string> nonStaticPpl;
        private static string[] ppl;
        private static bool[] locked;
        static void Main(string[] args)
        {
            nonStaticPpl = Console.ReadLine().Split(", ").ToList();
            ppl = new string[nonStaticPpl.Count];
            locked = new bool[nonStaticPpl.Count];

            while (true)
            {
                var line = Console.ReadLine();

                if (line == "generate") break;

                var parts = line.Split(" - ");
                var name = parts[0];
                var possition = int.Parse(parts[1])-1;

                ppl[possition] = name;
                locked[possition] = true;
                nonStaticPpl.Remove(name);
            }
            Permute(0);
        }
       
        private static void Permute( int idx)
        {
            if( idx >= nonStaticPpl.Count)
            {
                PrintPermutation();
                return;
            }
            Permute(idx + 1);

            for (int i = idx + 1; i < nonStaticPpl.Count; i++)
            {
                Swap(idx, i);
                Permute(idx + 1);
                Swap(idx, i);
            }
        }

        private static void Swap(int first, int second)
        {
            var tmp = nonStaticPpl[first];
            nonStaticPpl[first] = nonStaticPpl[second];
            nonStaticPpl[second] = tmp;
        }
        private static void PrintPermutation()
        {
            var pplIdx = 0;

            var sb = new System.Text.StringBuilder();

            for (int i = 0; i < ppl.Length; i++)
            {
                    if (locked[i])
                    {
                        sb.Append($"{ppl[i]} ");
                    }
                    else
                    {
                        sb.Append($"{nonStaticPpl[pplIdx++]} ");
                    }
            }
            Console.WriteLine(sb.ToString().Trim());
        }
/*
Peter, Amy, George, Rick
Amy - 1
Rick - 4
generate


Garry, Liam, Teddy, Anna, Buddy, Simon
Buddy - 3
Liam - 5
Simon - 1
generate

*/
    }
}

