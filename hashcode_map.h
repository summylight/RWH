#ifndef  _HASH_
#define _HASH_
#include<vector>
#include <iostream>
#include<hash_map>
#include<math.h>
using namespace std;


class hashcode_map {
public:
	void init(int degree_maxsize,int type_maxsize);
	void add(vector<int> &degrees, vector<int> &types);//将对应子图的度数与节点种类转换为hashcode_map 并添加至hashmap中
	int encode(vector<int>& degrees, vector<int>& types);
	~hashcode_map();

private:
	hash_map<int, int> map;//<hashcode_map , count>
	int map_size;
	int degree_offset, type_offset;
};
//本头文件定义了将采样子图转换为对应hashcode_map的方法
#endif // ! _RWH
