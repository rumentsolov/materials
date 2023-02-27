using System;
using System.Collections.Generic;
using System.Linq;

namespace CS_Algorithms
{
    internal class Program
    {
        private static Dictionary< int, List<int >> graph;
        private static HashSet<int> visited;
        static void Main()
        {
            graph = new Dictionary<int, List<int>>
           {
               {1, new List<int> { 19, 21, 14 }},
               {19, new List<int> { 7, 12, 31 ,21 }},
               {7, new List<int> { 1 }},
               {31, new List<int> { 21 }},
               {21, new List<int> { 14 }},
               {6, new List<int> {  }},
               {14, new List<int> { 23, 6 }},
               {12, new List<int> {  }},
               {23, new List<int> { 21 }},
           };

            visited = new HashSet<int>();

            foreach ( var node in graph.Keys ) // проверка ако всички nodo-ве са били посетени
            {
                DFS(node);
            }

        }

        private static void DFS(int node)
        {
            if (visited.Contains(node))
            {
                return;
            }
            visited.Add(node);

            foreach ( var child in graph[node])
            {
               DFS(child);
            }
            Console.WriteLine(node);
        }

    }
}

