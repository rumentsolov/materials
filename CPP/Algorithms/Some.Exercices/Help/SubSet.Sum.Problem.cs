using System;
using System.Collections.Generic;
using System.Linq;

namespace CS_Algorithms
{
    internal class Program
    {

        private static Dictionary <int, long> cache = new Dictionary<int, long> ();
        static void Main()
        {

            var nums = new[] { 3, 5, 1, 4, 2 };

            var target = int.Parse(Console.ReadLine());

            var possibleSums = GetAllPossibleSums(nums);

            if (possibleSums.ContainsKey(target)) 
            {
                var subSet = FindSubset(possibleSums, target);

                Console.WriteLine(string.Join(" ", subSet));
            }
            else
            {
                Console.WriteLine("Sum not possible");
            }
            
        }

        private static List<int> FindSubset(Dictionary<int, int> sums, int target) 
        { 
            var subset = new List<int> ();

            while ( target > 0)
            {
                var num = sums[target];
                target -= num;

                subset.Add(num);
            }
            return subset;
        }

        private static Dictionary<int, int> GetAllPossibleSums(int[] nums)
        {
            var sums = new Dictionary<int,int> { { 0 , 0} };

            foreach ( var num in nums)
            {
                var currentSums = sums.Keys.ToArray();

                foreach ( var sum in currentSums)
                {
                    var newSum = sum + num;
                    if (sums.ContainsKey(newSum))
                    {
                        continue;
                    }
                    sums.Add(sum + num, num);
                }
      
            }
            return sums;
        }


    }
}