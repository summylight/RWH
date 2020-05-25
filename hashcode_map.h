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
	void add(vector<int> &degrees, vector<int> &types);//����Ӧ��ͼ�Ķ�����ڵ�����ת��Ϊhashcode_map �������hashmap��
	int encode(vector<int>& degrees, vector<int>& types);
	~hashcode_map();

private:
	hash_map<int, int> map;//<hashcode_map , count>
	int map_size;
	int degree_offset, type_offset;
};
//��ͷ�ļ������˽�������ͼת��Ϊ��Ӧhashcode_map�ķ���
#endif // ! _RWH
