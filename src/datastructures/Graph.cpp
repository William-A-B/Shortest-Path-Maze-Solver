//
// Created by William-A-B on 05/06/2024.
//

#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Graph.h"

void Graph::populateGraph()
{

}

void Graph::initialiseGraph()
{
    std::srand(std::time(nullptr));
    int min = 1;
    int max = 20;
    if (xNodes != 0 && yNodes != 0)
    {
        for (int x = 0; x < xNodes; x++)
        {
            for (int y = 0; y < yNodes; y++)
            {
                int randomValue = std::rand()%(max-min + 1) + min;
                graph[x][y] = randomValue;
            }
        }
    }
}

void Graph::printGraph()
{
    std::cout << "Vertex   Distance from Source\n";
    for (int x = 0; x < xNodes; x++)
    {
        for (int y = 0; y < yNodes; y++)
        {
            printf("\t%d \t%d \t\t\t\t %d\n", x, y, graph[x][y]);
        }
    }
}

