using System;
using System.Collections.Generic;
using System.Linq;

namespace CS_Algorithms
{
    internal class Program
    {

        static void Main(string[] args)
        {

            var nums = new[] { 3, 2, 5 };
            var target = int.Parse(Console.ReadLine()); // 17

            var sums = new bool[target + 1];

            sums[0] = true;


            for (int sum = 0; sum < sums.Length; sum++)
            {
                if(!sums[sum])
                {
                    continue;
                }
                foreach (var num in nums)
                {
                    var newSum = sum + num;

                    if ( newSum > target)
                    {
                        continue;
                    }

                    sums[newSum] = true;
                }
            }

            var subset = new List<int>();

            while ( target > 0)
            {
                foreach(var num in nums)
                {
                    var prevSum = target - num;

                    if (prevSum >= 0 && sums[prevSum])
                    {
                        subset.Add(num);
                        target = prevSum;
                        if (target == 0)
                        {
                            break;
                        }
                    }
                   
                }
              
            }

            Console.WriteLine(string.Join(" ", subset));
        }
    }
}