//
// Created by William-A-B on 05/06/2024.
//

#ifndef SHORTESTPATHGAME_GRAPH_H
#define SHORTESTPATHGAME_GRAPH_H


class Graph {



public:

    Graph(int xNodes, int yNodes)
    {
        xNodes = xNodes;
        yNodes = yNodes;
        initialiseGraph();
    }

    void populateGraph();
    void printGraph();

private:
    int xNodes = 0;
    int yNodes = 0;

    int graph[0][0];

    void initialiseGraph();

};


#endif //SHORTESTPATHGAME_GRAPH_H
