//
// Created by 19012 on 10/11/2022.
//

#ifndef GRAPHS_ADJLIST_H
#define GRAPHS_ADJLIST_H

#include "../Visitors/TraversalVisitor.h"
#include <iostream>
#include <vector>

class TraversalVisitor;

/**
 * Provides underlying implementation for graph
 */
class Graph {
public:
  Graph();

  ~Graph(); // not trivial

    struct Vertex {
        int index;
        std::vector<Vertex*> neighbors;
    };

  void add(); // will add a vertex

  virtual void addNeighbor(int n, int g); // adds a neighbor to n-th vertex

  friend std::ostream &operator<<(std::ostream &out, const Graph &graph);

  std::vector<Vertex*> getVertices() const;

  /**
   * accepts visitors to implement traversals
   */
  void accept(TraversalVisitor &visitor) const;


protected:
    // each vertex will have its own list of neighbors

    std::vector<Vertex*> vertices; // total amount of vertices

    int size;
};

#endif // GRAPHS_ADJLIST_H
