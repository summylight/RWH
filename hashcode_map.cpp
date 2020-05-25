#include "hashcode_map.h"

void hashcode_map::add(vector<int>& degrees, vector<int>& types) {
	int code = encode(degrees, types);
	if (map.find(code)==map.end()) {
		map.insert(pair<int, int>(code, 1));//不存在的code添加进map中，并计数为一
		map_size++;
	}
	else {
		map[code]++;
	}
}

void hashcode_map::init(int degree_maxsize, int type_maxsize) {
	//计算出degree和type对应的位，初始化hashcode——map
	int size = 1;
	int tmp=degree_maxsize;
	while (tmp != 1) {
		tmp = tmp / 2;
		size++;
	}
	this->degree_offset = size;
	size = 1;
	tmp = type_maxsize;
	while (tmp != 1) {
		tmp = tmp / 2;
		size++;
	}
	this->type_offset = size;
}


int hashcode_map::encode(vector<int>& degrees, vector<int>& types) {
	//通过degree和type数组，计算对应的hashcode
	int size = degrees.size();
	int hashcode = 0;
	if (size != types.size()||size==0) {
		cout << "there is an degree_type_size_notequal_error in hashcode_map" << endl;
		exit(1);
	}
	for (int i = 0; i != size; i++) {
		hashcode = hashcode << degree_offset;
		hashcode = hashcode | degrees[i];
		hashcode = hashcode << type_offset;
		hashcode = hashcode | types[i];
	}
	return hashcode;
}

hashcode_map::~hashcode_map() {
	map.clear();
}