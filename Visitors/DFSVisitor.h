//
// Created by 19012 on 10/12/2022.
//

#ifndef GRAPHS_DFSVISITOR_H
#define GRAPHS_DFSVISITOR_H


#include "TraversalVisitor.h"


class DFSVisitor : public TraversalVisitor {
public:

    DFSVisitor();

    explicit DFSVisitor(int s);

    void visit(const Graph& graph) override;


private:
    int start;

    //helper function for recursive backtracking
    void visitHelper(Graph::Vertex* vertex);
};


#endif //GRAPHS_DFSVISITOR_H
