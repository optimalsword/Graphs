#include <iostream>

#include "Graph.cpp"
#include "src/AdjList.cpp"

int main() {
    AdjList<int> g;
    g.add();
    g.add();

    g.addNeighbor(0, 1);


    return 0;
}
