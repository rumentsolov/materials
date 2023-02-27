using System;
using System.Collections.Generic;
using System.Collections;
using System.Linq;
using System.Globalization;
using System.Numerics;

/*
t ? t ? t ? 4 : 1 : 2 : 3
(t ? (t ? (t ? 4 : 1) : 2) : 3)
*/

namespace CS_Algorithms
{
    internal class Program
    {

        
        public static int[] iArr;

        public static List<int> nums;

        static void Main(string[] args)
        {
            string input = Console.ReadLine();
            string needle = "?";
            int rounds = (input.Length - input.Replace(needle, "").Length) / needle.Length;

            //Console.WriteLine(rounds);

            Stack<bool> bArr = new Stack<bool>();

            iArr = new int[rounds+1];



            string[] cmdArgs = input.Split(separator: " ", StringSplitOptions.RemoveEmptyEntries);

            nums = new List<int>();

            List<string> lArgs = new List<string>(cmdArgs);
            
            //Console.WriteLine(Sum(array, 0));
            RemoveSongs(lArgs);
            bArr = FillList(lArgs,bArr);
            Console.WriteLine(Result(rounds, bArr));
            //
        }
        static int Sum(int[] array, int index)
        {
            if (index == array.Length - 1) return array[index]; // Bottom

            return array[index] + Sum(array, index + 1); // Reverse Sum
        }

        static void RemoveSongs(List<string> lArgs)
        {
            for (int i = 0; i < lArgs.Count; i++) if (lArgs[i] == "?" || lArgs[i] == ":") lArgs.RemoveAt(lArgs.IndexOf(lArgs[i]));

           // for (int i = 0; i < lArgs.Count; i++) Console.Write($"|{lArgs[i]}"); // Prints
        }

        static Stack<bool> FillList(List<string> lArgs ,  Stack <bool> bArr )
        {
            int idx = 0;

            for (int i = 0; i < lArgs.Count; i++)
            {
                string cur = lArgs[i];

                if (cur == "t")
                {
                    bArr.Push(true);
                    idx++;
                }
                else if (cur == "f")
                {
                    bArr.Push(false);
                    idx++;
                }
                else
                {
                    int newInt = Int32.Parse(cur);
                    nums.Add(newInt);
                }
            }
            return bArr;
            // for (int i = 0; i < lArgs.Count; i++) Console.Write($"|{lArgs[i]}"); // Prints
        }
        static int Result(int rounds, Stack<bool> bArr)
        {
/*
t ? t ? t ? 4 : 1 : 2 : 3
(t ? (t ? (t ? 4 : 1) : 2) : 3)

t ? t ? f ? 4 : 1 : 2 : 3
(t ? (t ? (f ? 4 : 1) : 2) : 3)
*/

            int exmas = nums[0];


            for(int i = 0; i < rounds; i++)
            {
                bool boolll = bArr.Peek();
                int num1 = nums[i];
                int num2 = nums[i + 1];

                if (boolll == true)
                {
                    bArr.Pop();
                }
                else if (boolll == false)
                {
                    exmas = num2;
                    bArr.Pop();
                }

            }

            return exmas;
        }
    }
}

