using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;

namespace CS_Algorithms
{
    internal class Program
    {
        static void Main()
        {
           int n = int.Parse(Console.ReadLine());
           int k = int.Parse(Console.ReadLine());

            BigInteger binomalCoefficient = GetFactoriel(n) / (GetFactoriel(k) * GetFactoriel(n-k));
            Console.WriteLine(binomalCoefficient);

        }
        private static BigInteger GetFactoriel(int n)
        {
            BigInteger factoriel = 1;
        
            for ( int i = 2; i <= n; i++)
            {
                factoriel *= i; 
            }

        return factoriel; // Reverse Sum
        }
    }
}

