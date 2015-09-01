/* 
 * main.cpp
 * 
 * File name:   Assignment #3
 * Author:      Connor Stanford 
 * Due Date :   April 1, 2015
 * Due Time :   10:00 pm                             
 * Certificate of Authenticity: I certify that this assignment is entirely my
 * own work. 
 * 
 * Problem Description:
 * Name: Biconnectivity Solution
 * Problem Statement:
 * This program will implement a solution to the biconnectivity problem. The
 * program will read a list of edges and vertices from a text file, and store this
 * information in a graph data structure. Once the graph has been formed, an 
 * algorithm will determine if the graph contains any articulation points. 
 * 
 * Problem Specification:
 * The program is intended to read specifically formatted data from a text file
 * one input at a time to create an undirected graph data structure. The first
 * input will contain an integer indicating the number of edges in the graph. 
 * The second input will contain an integer indicating the number of vertices in 
 * the graph. The following inputs will contain two integers indicating an edge 
 * - the first is the integer representation of vertex v1, the second is the 
 * integer representation of vertex v2, where v1 and v2 are the two incident 
 * vertices of the edge. After the file has been read and the graph has been 
 * properly formed, this implementation will use an adjacency list to indicate 
 * the adjacent vertices for each vertex. Finally, an algorithm will perform a 
 * depth-first traversal of the graph to identify if there are any articulation 
 * points in the graph. The results of this algorithm will be displayed to the user. 
 * 
 * 
 * System Architecture Description:
 * Object: testGraph    Class: Graph
 * testGraph is the fundamental object in the application. Its purpose is to 
 * contain and organize the input data from “inputFile.txt.” It does so with the 
 * assistance of the struct “vertex” which is included in the Graph class.
 * 
 * 
 */

#include <iostream> 
#include <iomanip> 
#include <cstdlib> 
#include "Graph.h"

using namespace std;

int main(){
    
    Graph testGraph;
    testGraph.printArtPoints();     //prints articulation points
    testGraph.printNumLowParent();  //prints num, low, and parent for each vertex
    testGraph.printAdjList();       //prints adjacency list of each vertex
    
 
    
    return 0;
}
