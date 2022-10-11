//
// Created by 19012 on 10/11/2022.
//

#ifndef GRAPHS_ADJLIST_H
#define GRAPHS_ADJLIST_H

#include <vector>



/**
 * Provides underlying implementation for graph
 * @tparam T
 */
template <typename T>
class AdjList {
private:
    //each vertex will have its own list of neighbors
    struct Vertex {
        int index;
        std::vector<Vertex*> neighbors;
    };

    std::vector<Vertex*> vertices; //total amount of vertices

    int size;


public:
    AdjList();

    ~AdjList(); //not trivial

    void add(); //will add a vertex

    void addNeighbor(int n, int g); //ads a neighbor to n-th vertex
};



#endif //GRAPHS_ADJLIST_H
