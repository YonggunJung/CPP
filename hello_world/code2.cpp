#include <stdio.h>
//목적파일
//오프젝트파일
// 실행파일의 전역 변수
// c++의 static 이 파일 안으로 이름을 제한 시킴
//static int a;	// 파일내로 접근제한( 다른 파일에서 안보임)
extern int a; // 여기말고 다른 파일에 있어

// 함수는 이름을 바꿔야 한다.
void print3() {
	printf("print3: %d\n", a);
}