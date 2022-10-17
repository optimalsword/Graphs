//
// Created by 19012 on 10/11/2022.
//

#ifndef GRAPHS_UNDIRECTEDGRAPH_H
#define GRAPHS_UNDIRECTEDGRAPH_H

#include "AdjList.h"

class UndirectedGraph : public Graph {
public:
  using Graph::Graph;

  void addNeighbor(int n, int g) override;
};

#endif // GRAPHS_UNDIRECTEDGRAPH_H
