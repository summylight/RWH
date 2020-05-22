/* 定义了图读取与随机游走生成图元
    graph class:    
        read_graph: read graph into graph class;
        randomwalk: random walk on graph ;
        */
#ifndef _GRAPH_
#define _GRAPH_
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Graphlet.h"
#include "alg.h"
using namespace std;

class Graph{
    public:
        void read_graph(char *filename);// read graph into vector
        int get_types();
        int get_nodes();
        vector<int> get_neighs(int v);
        void random_sample();

    private:
        vector<vector<int>> G;
        vector<int> type_vec;
        int type_nums;
        int vertex_nums;
        int edge_nums;



};

#endif