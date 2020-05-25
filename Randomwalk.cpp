#include "Randomwalk.h"

//定义randomwalk数据结构，其中包含了随机游走初始化，run()运行

walk::walk(Graph& G, int sample_nums, int graphlet_size,int type_nums) {
	this->sample_nums = sample_nums;
	this->graphlet_size = graphlet_size;
	map.init(graphlet_size - 1, type_nums);
}


void walk::run() {

}

void walk::run_one_step() {
	
}

void walk::choose_next_node(int node) {
	
}
void walk::convergence() {
	int con_walk_steps = 10000;

	for (int i = 0; i != con_walk_steps; ++i) {
		
	}
}

