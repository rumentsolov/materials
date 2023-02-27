using System;
using System.Collections.Generic;
using System.Linq;

namespace CS_Algorithms
{
    internal class Program
    {
        private static Dictionary<string, List<string>> graph;
        private static Dictionary<string, int> dependancies;
        private static Stack<string> sorted;
        private static HashSet<string> visited;
        private static HashSet<string> cycles;
        static void Main()
        {
            var n = int.Parse(Console.ReadLine());

            graph = ReadGraph(n);

            dependancies = ExtractDependancies(graph);

            sorted = new Stack<string>();
            visited = new HashSet<string>();
            cycles = new HashSet<string>();

            var hashCycle = false;

            foreach (var node in graph.Keys)
            {
                try
                {
                    DFS(node);
                }
                catch (InvalidOperationException ex)
                {
                Console.WriteLine(ex.Message);
                    throw;
                    hashCycle = true;
                }

            }
            if (!hashCycle)
            {
                Console.WriteLine(String.Join(" ", sorted));
            }
            
        }

        private static void DFS(string node)
        {
            if (cycles.Contains(node))
            {
                throw new InvalidOperationException("The given graph is cyclic.");
            }

            if (visited.Contains(node))
            {
                return;
            }

            cycles.Add(node);
            visited.Add(node);

            foreach(var child in graph[node])
            {
                DFS(child);
            }

            sorted.Push(node);
            cycles.Remove(node);
            
        }

        private static Dictionary <string, int> ExtractDependancies(Dictionary<string, List<string>> graph)
        {
            var result = new Dictionary <string, int> ();

            foreach (var kvp in graph)
            {
                var node = kvp.Key;
                var children = kvp.Value;

                if (!result.ContainsKey(node))
                {
                    result[node] = 0;
                }

                foreach (var child in children)
                {
                    if (!result.ContainsKey(child))
                    {
                        result[child] = 1;
                    }
                    else
                    {
                        result[child] += 1;
                    }
                }

            }
            return result;
        }


        private static Dictionary <string, List<string>> ReadGraph(int n)
        {
            var result = new Dictionary<string , List<string>>();

            for(int i = 0; i < n; i++)
            {
                var parts = Console.ReadLine()
                    .Split("->", StringSplitOptions.RemoveEmptyEntries)
                    .Select(e => e.Trim())
                    .ToArray();

                var key = parts[0];

                if (parts.Length == 1)
                {
                    result[key] = new List<string>();
                }
                else
                {
                    var children = parts[1].Split(", ").ToList();
                    result[key] = children;
                }
                
            }
            return result;
        }

    }
}

/*
6
A -> B, C
B -> D, E
C -> F
D -> C, F
E -> D
F ->
 */