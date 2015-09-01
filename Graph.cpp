/* 
 * File:        Graph.cpp
 * Author:      Connor Stanford 
 * Submitted:   April 1, 2015                          
 * Certificate of Authenticity: I certify that this assignment is entirely my
 * own work. 
 */

#include "Graph.h"

Graph::Graph() {
    
    counter = 1;
    inFile.open("inputFile.txt");
    
    
    inFile >> numEdges >> numVertices;
    
 
    vertexList = new vertex[numVertices];
    
    // reads inputFile and adds edges to adjList
    int v1, v2;
    for(int i = 0; i < numEdges; i++)
    {
        inFile >> v1 >> v2; 
        vertexList[v1-1].adjList.push_back(v2-1); 
        vertexList[v2-1].adjList.push_back(v1-1);
    }
 
    
    assignLow(0);   /* assignLow assigns each vertices low, num, parent, and 
                     * determines if that vertex is an articulation point.
                     * We will always pass vertex 0 as a parameter because we are
                     * guaranteed to have at least one vertex in the input file --
                     * this vertex is in position vertexList[0]. */
    
   
    
    
   inFile.close(); 
}

Graph::Graph(const Graph& orig) {
}

Graph::~Graph() {
    delete [] vertexList;
}



void Graph::assignLow(int v)
{
    vertexList[v].num = counter++;
    vertexList[v].low = vertexList[v].num;
    
    //for each index adjacent to v
    for(int i = 0; i < vertexList[v].adjList.size(); i++)
    {
        int w = vertexList[v].adjList[i];
        if(vertexList[w].num == 0)
        {
            vertexList[w].parent = vertexList[v].num;
            assignLow(w);
        
            if(vertexList[w].low >= vertexList[v].num){
                vertexList[v].articulationpoint = true;
            }
            vertexList[v].low = min(vertexList[v].low, vertexList[w].low);
        }
        else
        {
            if(vertexList[v].parent != vertexList[w].num){
                vertexList[v].low = min(vertexList[v].low, vertexList[w].num);
            }
        }
    }      
}

void Graph::printArtPoints() // prints articulation points to console
{
    bool checkIfArtPoints = false;
    
    cout << "Articulation Points: " << endl << endl;
    for(int i = 1; i < numVertices; i++)
    {
        if(vertexList[i].articulationpoint)
        {
            cout << i + 1 << " is an articulation point." << endl;
            checkIfArtPoints = true;
        }
    }
    if(checkIfArtPoints == false)
        cout << "There are no articulation points in this graph." << endl;
    
    cout << endl << endl;
        
}

void Graph::printNumLowParent() //prints the num, low, and parent of each vertices
{                               //  to the console
    cout << "Num, low, and parent for each vertex: " << endl << endl;
    for(int i = 0; i < numVertices; i++)
    {
        cout << "NUM: " << vertexList[i].num << "  LOW: " << vertexList[i].low 
                  << "   Parent: " << vertexList[i].parent << endl;
    }
    cout << endl << endl;
}

void Graph::printAdjList()
{
    // outputs the adjList for each vertices
    
    cout << "Adjacency list for each vertex: " << endl << endl;
    for(int i = 0; i < numVertices; i++)
    {
        cout << "Vertex #" << i + 1 << ": ---";
        for(int j = 0; j < vertexList[i].adjList.size(); j++)
        {
        
            cout<< " " << vertexList[i].adjList[j] + 1 << " ";
        }
        cout << endl;
    }
    cout<< endl << endl;
}
