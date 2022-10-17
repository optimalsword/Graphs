//
// Created by 19012 on 10/12/2022.
//

#ifndef GRAPHS_TRAVERSALVISITOR_H
#define GRAPHS_TRAVERSALVISITOR_H

#include "../include/AdjList.h"
#include <vector>

class Graph;


class TraversalVisitor {
public:
    virtual void visit(const Graph&) = 0;


protected:
    std::vector<int> discovered;

    bool isDiscovered(int index) const {
        for (int i = 0; i < discovered.size(); ++i) {
            if (discovered[i] == index)
                return true;
        }
        return false;
    }

};


#endif //GRAPHS_TRAVERSALVISITOR_H
