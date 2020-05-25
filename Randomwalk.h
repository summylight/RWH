#ifndef  _RANDOM_
#define _RANDOM_
#include <vector>
#include "hashcode_map.h"
#include "Graph.h"
#include <random>
using namespace std;
//
class walk
{
public:
	walk(Graph &G, int sample_nums, int graphlet_size,int type_nums);
	void run();
	void convergence();
	void run_one_step();
	void choose_next_node(int node);
private:
	vector<int> walkroad_nodes;//记录随机游走经过的3个节点
	vector<vector<int>> nodes_neighs; //记录N个节点的邻居节点，分为N个向量
	int graphlet_size;	//初始化定义的子图大小
	int sample_nums;	//初始化定义的采样总数
	hashcode_map map; //定义一个hashcode_map 结构，将游走采样得到的节点转换为hashcode
	int current_node; //游走目前所在节点
	int current_step; // 游走目前已走步数
	int seed; //产生随机数的种子，每生成一次种子
};
/* 这个头文件将包括随机程序，例如随机选取下一跳*/

#endif // ! RANDOM