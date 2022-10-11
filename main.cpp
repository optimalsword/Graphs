#include <iostream>

#include "include/UndirectedGraph.h"

int main() {
    UndirectedGraph g;

    for (int i = 0; i < 6; ++i) {
        g.add();
    }

    g.addNeighbor(0, 1);
    g.addNeighbor(0, 4);
    g.addNeighbor(3, 4);
    g.addNeighbor(3, 2);
    g.addNeighbor(3, 5);

    std::cout << g << std::endl;

    return 0;
}
