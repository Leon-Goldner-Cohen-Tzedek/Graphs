#include "Graph.h"
#include <iostream>

int main(int argc, char const *argv[]) {

  Graph g(10);
  g.AddEdge(0, 2);
  g.AddEdge(0, 5);
  g.AddEdge(5, 4);
  g.DepthSearch(0);
  cout << endl;
  return 0;
}
