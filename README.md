# biconnectivity-solution
=========================

Problem Description:
 
Name: Biconnectivity Solution

Problem Statement:
This program will implement a solution to the biconnectivity problem. The
program will read a list of edges and vertices from a text file, and store this
information in a graph data structure. Once the graph has been formed, an 
algorithm will determine if the graph contains any articulation points. 
 
 
Problem Specification:

The program is intended to read specifically formatted data from a text file
one input at a time to create an undirected graph data structure. The first
input will contain an integer indicating the number of edges in the graph. 
The second input will contain an integer indicating the number of vertices in 
the graph. The following inputs will contain two integers indicating an edge-
the first is the integer representation of vertex v1, the second is the 
integer representation of vertex v2, where v1 and v2 are the two incident 
vertices of the edge. After the file has been read and the graph has been 
properly formed, this implementation will use an adjacency list to indicate 
the adjacent vertices for each vertex. Finally, an algorithm will perform a 
depth-first traversal of the graph to identify if there are any articulation 
points in the graph. The results of this algorithm will be displayed to the user. 
