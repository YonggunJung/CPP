#include "code3.h"


card::card(const char* symbol, int number) // 생성자
{
	printf("created\n");
	// card 클래스의 포인터
	this->number = number;
	this->symbol = symbol;
	//printf(this->symbol.c_str());
}

card::~card() // 소멸자
{
	printf("destroy\n");
}

void card::to_string(char* str) {
	sprintf_s(str, 8, "%s%d", symbol.c_str(), number);
}
void card::print() {
	printf("%s%d", symbol.c_str(), number);
}