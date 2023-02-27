using System;
using System.Collections.Generic;
using System.Linq;

namespace CS_Algorithms
{
    internal class Program
    {
        private static List<int>[] graph;
        private static bool[] visited;
        private static int[] parent;
        static void Main()
        {

        var n = int.Parse(Console.ReadLine());
        var e = int.Parse(Console.ReadLine());

        graph = new List<int> [ n + 1];
        visited = new bool[ graph.Length ];

        parent = new int[graph.Length];
        Array.Fill(parent, -1); 

        for (int node = 0; node < graph.Length; node++)
        {
            graph[node] = new List<int>();
        }

            for (int i = 0; i < e; i++)
            {
                var edge = Console.ReadLine()
                .Split()
                .Select(int.Parse)
                .ToArray();

                var firsNode = edge[0];
                var secondNode = edge[1];

                graph[firsNode].Add(secondNode);
                graph[secondNode].Add(firsNode);
            }
            var start = int.Parse(Console.ReadLine());
            var destination = int.Parse(Console.ReadLine());
            
            BFS(start, destination);
        }

       private static void BFS(int startNode, int destination)
        {
            var queue = new Queue<int>();
            queue.Enqueue(startNode);

            visited[startNode] = true;

            while(queue.Count > 0)
            {
                var node = queue.Dequeue();

                if ( node == destination)
                {
                    var path = GetPath(destination);

                    Console.WriteLine($"Shortest path length is: {path.Count - 1 }");
                    Console.WriteLine(string.Join(" ", path));
                    break;
                }

                foreach( var child in graph[node])
                {
                    if (!visited[child])
                    {
                        parent[child] = node;
                        visited[child] = true;
                        queue.Enqueue(child);
                    }
                }
            }
       }

        private static Stack<int> GetPath(int destinatoin)
        {
            var path = new Stack<int>();
            var node = destinatoin;

            while ( node != -1 )
            {
                path.Push(node);
                node = parent[node];
            }
            return path;
        }

    }
}

/*
8
10
1 2
1 4
2 3
4 5
5 8
5 6
5 7
5 8
6 7
7 8
1
7
 */