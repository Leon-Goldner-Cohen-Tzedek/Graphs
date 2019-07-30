#include "WeightedGraph.h"
#include <iostream>
#include <fstream>

int main(int argc, char const *argv[])
{
  int u = 0;
  int v = 0;
  int weight = 0;
  Graph g(600);
  ifstream stream("USairport500.txt");


  while(stream)
  {
    stream >> u >> v >> weight;
    cout << u << v << weight;

    g.AddEdge(u, v, weight);
  }

  for(int i = 1; i < 500; ++i)
  {
    for(int j = 1; j < 500; ++i)
    {
      cout << g.IsEdge(i, j) << endl;
    }
  }

  return 0;
}
