//
// Created by 19012 on 10/11/2022.
//


#include "../include/AdjList.h"
#include <algorithm>


std::ostream& operator<<(std::ostream& out, const Graph& graph) {
    std::for_each(graph.vertices.begin(), graph.vertices.end(), [&out](auto vert) {
        out << vert->index << " ---> ";
        std::for_each(vert->neighbors.begin(), vert->neighbors.end(), [&out](auto neighbor) {
            out << neighbor->index << " ";
        });

        out << std::endl;
    });


    return out;
}



void Graph::add() {
    auto temp = new Vertex;
    temp->index = size++;

    vertices.push_back(temp);
}




Graph::Graph() : size(0) {}



Graph::~Graph() {
    std::for_each(vertices.begin(), vertices.end(), [](auto vert) {
        delete vert;
    });
    //Memory freed!
}




/**
 *
 * @tparam T
 * @param n  - index with 0 based indexing
 * @param val
 */
void Graph::addNeighbor(int n, int g) {
    Vertex* v = vertices[n];
    v->neighbors.push_back(vertices[g]);
}