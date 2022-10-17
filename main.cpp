#include <iostream>

#include "include/UndirectedGraph.h"
#include "Visitors/DFSVisitor.h"

void traverse(const Graph& g, int start) {
    DFSVisitor dfs(start);
    g.accept(dfs);
}





int main() {

    UndirectedGraph g;

    for (int i = 0; i < 10; ++i) {
        g.add();
    }

    g.addNeighbor(0, 2);
    g.addNeighbor(1, 3);
    g.addNeighbor(1, 4);
    g.addNeighbor(2, 3);
    g.addNeighbor(2, 5);
    g.addNeighbor(2, 8);
    g.addNeighbor(3, 5);
    g.addNeighbor(3, 6);
    g.addNeighbor(3, 7);
    g.addNeighbor(4, 6);
    g.addNeighbor(4, 7);
    g.addNeighbor(5, 6);
    g.addNeighbor(5, 8);
    g.addNeighbor(6, 7);
    g.addNeighbor(6, 8);
    g.addNeighbor(6, 9);

    std::cout << g << std::endl;

    traverse(g, 0);

    return 0;
}
