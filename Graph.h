/* 
 * File:        Graph.h
 * Author:      Connor Stanford 
 * Submitted:   April 1, 2015                          
 * Certificate of Authenticity: I certify that this assignment is entirely my
 * own work. 
 * 
 */

#ifndef GRAPH_H
#define	GRAPH_H

#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <vector>
#include <algorithm>


using namespace std;

class Graph {
public:

    struct vertex{
        int num = 0;
        int low = 0;
        int parent = 0;
        bool articulationpoint = false;
        
        vector<int> adjList;      
    };
    
    Graph();
    Graph(const Graph& orig);
    virtual ~Graph();
    void assignLow(int v);
    void printArtPoints();
    void printNumLowParent();
    void printAdjList();
    
    
private:
    
    fstream inFile;
    int counter;
    vertex *vertexList;
    int numEdges, numVertices;
    
};
    
   
    
  

#endif	/* GRAPH_H */

