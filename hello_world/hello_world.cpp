// '#'은 전처리기 지시어  
// '처리기'는 컴파일러, 컴파일 하기 전에 #의 헤더파일을 가져온다
#include <stdio.h>
#include "code3.h"

//void print3();	// 어딘가에 있다 선언. 이걸 헤더 파일로

int a;

int main() {
	printf("main strat\n");
	card c("h", 2);
	card* d = new card("h", 3);

	card* cards[52];
	
	int idx = 0;
	const char* s = "H";
	const char* symbols[] = { "H", "S", "D", "C" };
	for (int i = 0; i < 4; i++)
	{
		for (int j = 1; j <= 13; j++) {
			cards[idx++] = new card(symbols[i], j);
		}
	}

	for (int i = 0;i < sizeof(cards) / sizeof(cards[0]); i++) {
		
		cards[i]->print();
		printf(" ");
	}
	printf("\n");

	char str[32];
	c.to_string(str);	printf(str);

	// 이건 c의 주소
	card* pcard = &c;	pcard->to_string(str);  printf(str);
	card& rcard = c;	rcard.to_string(str);   printf(str);

	card* e = d;
	e->to_string(str);  printf(str);
	card& r = *d;
	r.to_string(str);  printf(str);


	for (int i = 0; i < sizeof(cards) / sizeof(cards[0]); i++) 
	{

		delete cards[i];
	}

	delete d;
	printf("main end\n");
}