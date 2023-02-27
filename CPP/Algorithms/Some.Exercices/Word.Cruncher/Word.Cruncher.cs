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
        private static string target;
        private static Dictionary<int, List<string>> wordsByIdx;
        private static Dictionary<string, int> wordsCount;
        private static LinkedList<string> usedWords;
        static void Main(string[] args)
        {
            wordsByIdx = new Dictionary<int, List<string>> ();
            wordsCount = new Dictionary<string, int> ();
            usedWords = new LinkedList<string> () ;

            var words = Console.ReadLine().Split(", ");
            target = Console.ReadLine();

            foreach(var word in words)
            {
                var idx = target.IndexOf(word);

                if(idx == -1)
                {
                    continue;
                }
                
                if(wordsCount.ContainsKey(word))
                {
                    wordsCount[word]+=1;
                    continue;
                }

                wordsCount[word] =1;

                while(idx!= -1)
                {
                    if (!wordsByIdx.ContainsKey(idx))
                    {
                        wordsByIdx[idx]=new List<string>();
                    }

                    wordsByIdx[idx].Add(word);

                    idx = target.IndexOf(word, idx + 1);
                }
            }

            GenSolution(0);
        }

        private static void GenSolution( int idx)
        {
            if(idx == target.Length)
            {
                Console.WriteLine(string.Join(" ", usedWords));
                return;
            }

            if (!wordsByIdx.ContainsKey(idx)) return;

            foreach(var word in wordsByIdx[idx])
            {
                if (wordsCount[word] == 0)
                {
                    continue;
                }
                wordsCount[word] -= 1;
                usedWords.AddLast(word);

                GenSolution(idx + word.Length);

                wordsCount[word] += 1;
                usedWords.RemoveLast();
            }
        }

/*
text, me, so, do, m, ran
somerandomtext

Word, cruncher, cr, h, unch, c, r, un, ch, er
Wordcruncher

tu, stu, p, i, d, pi, pid, s, pi
stupid
*/
    }
}

