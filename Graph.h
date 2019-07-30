#include <iostream>
#include <list>
using namespace std;

#ifndef GRAPH_H
#define GRAPH_H

class Graph
{
private:

  int size;

  list<int>* adjency_table;

  void DFSUtil(int v, bool* visited)
  {
    visited[v] = true;
    cout << v << ", ";
    list<int>::iterator i;
    for (i = this->adjency_table[v].begin(); i != this->adjency_table[v].end(); ++i)
    {
      if (!visited[*i])
      {
        DFSUtil(*i, visited);
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

  void BreadthSearch(int v)
  {
    bool* visited = new bool[this->size];
    for (int i = 0; i < this->size; i++)
    {
      visited[i] = false;
    }

    visited[v] = true;
    list<int> queue;
    queue.push_back(v);

    list<int>::iterator i;
    while (!queue.empty())
    {
      v = queue.front();
      cout << v << ", ";
      queue.pop_front();

      for (i = adjency_table[v].begin(); i != adjency_table[v].end(); i++)
      {
        if (!visited[*i])
        {
          queue.push_back(*i);
          visited[*i] = true;
        }
      }
    }
  }

  bool IsEdge(int v, int u)
  {
    return this->adjency_table;
  }

  void AddEdge(int v, int u)
  {
    this->adjency_table[v].push_back(u);
  }

  Graph()
  {
    this->size = 0;
    this->adjency_table = nullptr;
  }

  Graph(int size)
  {
    this->size = size;
    this->adjency_table = new list<int>[this->size];
  }
};

#endif
