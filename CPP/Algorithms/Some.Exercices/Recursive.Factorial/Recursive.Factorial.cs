using System;
using System.Collections.Generic;
using System.Linq;

namespace CS_Algorithms
{
    internal class Program
    {

        static void Main()
        {
            var idx = int.Parse(Console.ReadLine());

            Console.WriteLine(CalcFactorielRec(idx));
        }

        private static int CalcFactorielRec(int idx)
        {
            if (idx == 0) return 1;
            return idx * CalcFactorielRec(idx - 1);
        }
    }
}
