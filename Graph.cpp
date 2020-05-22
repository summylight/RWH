#include "Graph.h"
vector<int> Graph::get_neighs(int v) {
    return this->G[v];
}

int Graph::get_nodes() {
    return this->vertex_nums;
}

int Graph::get_types() {
    return this->type_nums;
}

void Graph::random_sample() {

}

void Graph::read_graph(char* filename){
    if(filename == NULL ) return;
    string f(filename);
    string edgefile = "./data/"+f+"/"+f+".edges";
    string typefile = "./data/"+f+"/"+f+".types";
    ifstream fein(edgefile,ios::in);
    ifstream ftin(typefile,ios::in);
    if (! fein.is_open()||!ftin.is_open())
        { cout<<"Please check data contain "<<f<<endl;
        exit(1);}
    string line;
    vector<string> sv;

    while(getline(fein,line)){
        sv=split(line,",");
        cout<<sv[0]<<" "<<sv[1]<<endl;
    }
    return ;
}
