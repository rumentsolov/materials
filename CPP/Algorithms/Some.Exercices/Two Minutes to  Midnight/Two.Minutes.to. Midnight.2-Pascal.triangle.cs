using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;

namespace CS_Algorithms
{
    internal class Program
    {
        private static Dictionary<string, ulong> cache;
        static void Main()
        {
            cache = new Dictionary<string, ulong>();    
            int n = int.Parse(Console.ReadLine());
            int k = int.Parse(Console.ReadLine());

            //BigInteger binomalCoefficient = GetFactoriel(n) / (GetFactoriel(k) * GetFactoriel(n - k));

            ulong binomalCoefficient = GetBinomalCoefficient(n,k);
            Console.WriteLine(binomalCoefficient);

        }

        private static ulong GetBinomalCoefficient(int row, int col)
        {

            string indentifier = $"{row}-{col}";

            if (cache.ContainsKey(indentifier))
            {
                return cache[indentifier];
            }

            if (col == 0 || col == row)
                return 1;

            ulong result = GetBinomalCoefficient(row - 1, col - 1) + GetBinomalCoefficient(row - 1, col);
            cache[indentifier] = result;

            return result;
        }

        private static BigInteger GetFactoriel(int n)
        {
            BigInteger factoriel = 1;
        
            for ( int i = 2; i <= n; i++)
            {
                factoriel *= i; 
            }

        return factoriel;
        }
    }
}

