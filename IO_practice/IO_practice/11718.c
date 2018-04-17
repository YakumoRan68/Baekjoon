#include <stdio.h>

int main() {
	char a[101]; //NULL문자 전용으로 1개 추가

	while (gets(a)) {
		if (a[0] == '\0')
			break;
		puts(a);
	}
	//for (int i = 1;i <= 100 ;i++){ 입력하는 갯수는 항상 100개가 아님
	//scanf("%s", &a); 공백표시 안됨
	//printf("%s", a); 배열은 앞에 &을 붙이지 않음
}