//
// Created by 19012 on 10/11/2022.
//

#include "../include/AdjList.h"
#include <algorithm>

std::ostream &operator<<(std::ostream &out, const Graph &graph) {
  std::for_each(
      graph.vertices.begin(), graph.vertices.end(), [&out](auto vert) {
        out << vert->index << " ---> ";
        std::for_each(vert->neighbors.begin(), vert->neighbors.end(),
                      [&out](auto neighbor) { out << neighbor->index << " "; });

        out << std::endl;
      });

  return out;
}

void Graph::add() {
  auto temp = new Vertex;
  temp->index = size++;

  vertices.push_back(temp);
}

std::vector<Graph::Vertex *> Graph::getVertices() const { return vertices; }

void Graph::accept(TraversalVisitor &visitor) const { visitor.visit(*this); }

Graph::Graph() : size(0) {}

Graph::~Graph() {
  vertices.clear();
  // vector stl probably does this for us anyway, better to be safe
  // Memory freed!
}

/**
 *
 * @tparam T
 * @param n  - index with 0 based indexing
 * @param val
 */
void Graph::addNeighbor(int n, int g) {
  Vertex *v = vertices[n];
  v->neighbors.push_back(vertices[g]);

  std::sort(vertices[n]->neighbors.begin(), vertices[n]->neighbors.end(),
            [](Vertex *v1, Vertex *v2) { return v1->index < v2->index; });
}