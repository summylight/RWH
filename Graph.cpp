#include "Graph.h"


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
