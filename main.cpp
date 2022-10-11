#include <iostream>

#include "include/UndirectedGraph.h"

int main() {
    UndirectedGraph g;

    g.add();
    g.add();
    g.addNeighbor(0, 1);

    std::cout << g << std::endl;

    return 0;
}
