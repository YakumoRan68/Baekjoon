#include <stdio.h>

int main() {
	char a[101]; //NULL���� �������� 1�� �߰�

	while (gets(a)) {
		if (a[0] == '\0')
			break;
		puts(a);
	}
	//for (int i = 1;i <= 100 ;i++){ �Է��ϴ� ������ �׻� 100���� �ƴ�
	//scanf("%s", &a); ����ǥ�� �ȵ�
	//printf("%s", a); �迭�� �տ� &�� ������ ����
}