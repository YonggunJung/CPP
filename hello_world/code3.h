#ifndef __CODE3_H__
#define __CODE3_H__
#include <string>
using namespace std;

class card {
public:
	card(const char* symbol, int number); // 持失切
	~card(); // 社瑚切
	
	string symbol;
	int number;

	void to_string(char* str);
	void print();
};

#endif
