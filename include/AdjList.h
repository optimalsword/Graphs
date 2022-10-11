//
// Created by 19012 on 10/11/2022.
//

#ifndef GRAPHS_ADJLIST_H
#define GRAPHS_ADJLIST_H

#include <vector>
#include <iostream>



/**
 * Provides underlying implementation for graph
*/
class Graph {
protected:
    //each vertex will have its own list of neighbors
    struct Vertex {
        int index;
        std::vector<Vertex*> neighbors;
    };

    std::vector<Vertex*> vertices; //total amount of vertices

    int size;


public:
    Graph();

    ~Graph(); //not trivial

    void add(); //will add a vertex

    virtual void addNeighbor(int n, int g); //adds a neighbor to n-th vertex

    friend std::ostream& operator<<(std::ostream& out, const Graph& graph);
};



#endif //GRAPHS_ADJLIST_H
