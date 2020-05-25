/* main:
    cmdline-> read graph -> random walk -> (Convergence judgment) -> hashcode -> next randomwalk -> ... -> hashencode -> graphlet ios -> compute count -> output
    */
#include <iostream>
#include "Graph.h"
#include <string>
#include "Randomwalk.h"
using namespace std;


int main() {
    char filename[] = "dbpedia";
    Graph G(filename);
    int graphlet_size = 4;
    int sample_nums = 10000;
    
    walk(G, sample_nums, graphlet_size,G.get_types());
    walk.run();
    return 0;
    
}