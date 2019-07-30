#include <iostream>
using namespace std;

class Graph
{
private:
  int size;
  int** adjency_table;

public:

  bool IsEdge(int v, int u) // make sure it is not being passed anything less then one DO BOUNDS CHECKING
  {
    return this->adjency_table[v - 1][u - 1] > 0;
  }

  void AddEdge(int v, int u, int weight)
  {
    if (v < 1 || u < 1)
    {
    //put exceptions here
    }
    this->adjency_table[v - 1][u - 1] = weight;
    this->adjency_table[u - 1][v - 1] = weight;
  }

  void DeleteEdge(int v, int u)
  {
    this->adjency_table[v - 1][u - 1] = 0;
    this->adjency_table[u - 1][v - 1] = 0;
  }

  Graph()
  {
    this->size = 0;
    this->adjency_table = nullptr;
  }

  Graph(int size)
  {
    this->size = size;
    this->adjency_table = new int*[this->size];

    for (int i = 0; i < this->size - 1; i++)
    {
      this->adjency_table[i] = new int[this->size];
      for (int j = 0; j < this->size - 1; j++)
      {
        this->adjency_table[i][j] = 0;
      }
    }
  }
};
