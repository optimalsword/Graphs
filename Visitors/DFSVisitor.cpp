//
// Created by 19012 on 10/12/2022.
//

#include "DFSVisitor.h"
#include <iostream>


DFSVisitor::DFSVisitor() : start(0) {}

DFSVisitor::DFSVisitor(int s) : start(s) {}


//assume that the graph has at least one vertex
//recursive backtracking
void DFSVisitor::visit(const Graph &graph) {
    Graph::Vertex* s;
    for (auto cur : graph.getVertices()) {
        if (cur->index == start) {
            s = cur;
            break;
        }
    }

    //s should point to start
    visitHelper(s);
    while (discovered.size() != graph.getVertices().size()) {
        //need to get the first undiscovered vertex
        for (auto cur : graph.getVertices()) {
            if (!isDiscovered(cur->index)) {
                s = cur;
            }
        }

        visitHelper(s);
    }

}


//index is current vertex being worked on
void DFSVisitor::visitHelper(Graph::Vertex* vertex) {

    discovered.push_back(vertex->index);

    std::cout << vertex->index << std::endl;

    for (int i = 0; i < vertex->neighbors.size(); ++i) {
        if (!isDiscovered(vertex->neighbors[i]->index)) {
            visitHelper(vertex->neighbors[i]);
        }
    }
}