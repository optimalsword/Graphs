//
// Created by 19012 on 10/11/2022.
//


#include "../include/AdjList.h"
#include <algorithm>


template <typename T>
void AdjList<T>::add() {
    auto temp = new Vertex;
    temp->index = size++;

    vertices.push_back(temp);
}



template <typename T>
AdjList<T>::AdjList() : size(0) {}



template <typename T>
AdjList<T>::~AdjList() {
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
template <typename T>
void AdjList<T>::addNeighbor(int n, int g) {
    Vertex* v = vertices[n];
    v->neighbors.push_back(vertices[g]);
}