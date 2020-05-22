/* main:
    cmdline-> read graph -> random walk -> (Convergence judgment) -> hashcode -> next randomwalk -> ... -> hashencode -> graphlet ios -> compute count -> output
    */
#include <iostream>
#include "Graph.h"
#include <string>

using namespace std;


int main() {
    char filename[] = "dbpedia";
    Graph G;
    G.read_graph(filename);
    return 0;
    
}