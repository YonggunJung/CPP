#include "code3.h"


card::card(const char* symbol, int number) // ������
{
	printf("created\n");
	// card Ŭ������ ������
	this->number = number;
	this->symbol = symbol;
	//printf(this->symbol.c_str());
}

card::~card() // �Ҹ���
{
	printf("destroy\n");
}

void card::to_string(char* str) {
	sprintf_s(str, 8, "%s%d", symbol.c_str(), number);
}
void card::print() {
	printf("%s%d", symbol.c_str(), number);
}