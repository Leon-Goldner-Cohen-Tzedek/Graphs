#include "Graph.h"
#include <iostream>

int main(int argc, char const *argv[]) {

  Graph g(10);
  g.AddEdge(0, 2);
  g.AddEdge(2, 5);
  g.AddEdge(5, 7);
  g.AddEdge(7, 6);
  g.AddEdge(5, 4);
  g.AddEdge(4, 3);
  g.AddEdge(3, 7);

  g.BreadthSearch(0);
  cout << endl;
  g.DepthSearch(0);
  cout << endl;
  return 0;
}
