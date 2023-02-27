using System;
using System.Collections.Generic;
using System.Linq;

namespace CS_Algorithms
{
    internal class Program
    {
        private static Dictionary<string, List<string>> graph;

        private static HashSet<string> visited;
        static void Main()
        {
            graph = new Dictionary<string, List<string>>();


            ReadInput();
            //Console.WriteLine();

            visited = new HashSet<string>();

            foreach (string node in graph.Keys) // проверка ако всички nodo-ве са били посетени
            {
                DFS(node);
            }
            Console.WriteLine(String.Join(" ", visited.Reverse()));
        }


        private static void ReadInput()
        {
            string command;

            while (( command = Console.ReadLine() )!= "End")
            {
                string[] cmdArgs = command
                    .Split(separator:"->" , StringSplitOptions.RemoveEmptyEntries);

                string preStory = cmdArgs[0].Trim();

                if (!graph.ContainsKey(preStory))
                {
                    graph[preStory] = new List<string>();
                } 

                if(cmdArgs.Length < 2) // no post stories
                {
                    continue;
                }
                string[] postStories = cmdArgs[1]
                    .Split(separator: ' ', StringSplitOptions.RemoveEmptyEntries);

                graph[preStory].AddRange(postStories);

            }
        }

        private static void DFS(string node)
        {
            if (visited.Contains(node))
            {
                return;
            }

            foreach (string child in graph[node])
            {
                
                DFS(child);
                
            }

            visited.Add(node);
            //Console.WriteLine(node);
        }

    }
}

/*
Mort -> Time Space
Time -> Future Robot
Space -> Metro
Future -> Space Metro
Robot -> Future
Metro ->
End

By -> The
Story -> The Told
Told -> Narrator
The -> Narrator Ever Greatest
Narrator ->
Some -> Told Ever
Greatest ->
Ever ->
End

*/
