using System;
using System.Collections.Generic;
using System.Linq;

namespace CS_Algorithms
{
    internal class Program
    {
        private static List<int>[] graph;

        private static bool[] visited;
        static void Main()
        {

            var n = int.Parse(Console.ReadLine());

            graph = new List<int>[n];
            visited = new bool[n];
       
            for( int node = 0; node < n; node++)
            {

                var line = Console.ReadLine();

                if (string.IsNullOrEmpty(line))
                {
                    graph[node] = new List<int>();

                }
                else
                {
                    var children = line.Split()
                        .Select(int.Parse)
                        .ToList();

                    graph[node] = children;
                }

            }
            for ( int node = 0; node < graph.Length; node++)
            {
                if(visited[node])
                {
                    continue;
                }
                var component = new List<int>();
                DFS(node,component);
                Console.WriteLine($"Connected component: {string.Join(" ", component)}");
            }
            
        }

        private static void DFS(int node, List<int> component)
        {
            if ( visited[node])
            {
                return;
            }
            visited[node] = true;

            foreach (var child in graph[node])
            {
                DFS(child, component);
            }
            component.Add(node);
        }
    }
}

/*
9
3 6
3 4 5 6
8
0 1 5
1 6
1 3
0 1 4

2
 */