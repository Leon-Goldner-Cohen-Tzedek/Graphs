#include <iostream>
using namespace std;

#ifndef GRAPH_H
#define GRAPH_H

class Graph
{
private:

  int size;

  bool** matrix;

  void DFSUtil(int v, bool* visited)
  {
    visited[v] = true;
    cout << v << ", ";
    for (int i = 0; i < this->size - 1; i++)
    {
      if (!visited[i])
      {
        DFSUtil(i, visited);
      }
    }
  }

public:

  void DepthSearch(int v)
  {
    bool* visited;
    visited = new bool[this->size];
    for (int i = 0; i < this->size; i++)
    {
      visited[i] = false;
    }

    DFSUtil(v, visited);

  }

  bool IsEdge(int v, int u)
  {
    return this->matrix[v][u];
  }

  void TurnOn(int u, int v)
  {
    this->matrix[u][v] = true;
    this->matrix[v][u] = true;
  }

  void TurnOff(int u, int v)
  {
    this->matrix[u][v] = false;
    this->matrix[v][u] = false;
  }

  Graph()
  {
    size = 0;
    matrix = nullptr;
  }

  Graph(int size)
  {
    this->size = size;

    this->matrix = new bool*[this->size];

    for (int i = 0; i < this->size; i++)
    {
      this->matrix[i] = new bool[this->size];

      for(int j = 0; j < this->size; j++)
      {
        this->matrix[i][j] = false;
      }
    }
  }
};

#endif
