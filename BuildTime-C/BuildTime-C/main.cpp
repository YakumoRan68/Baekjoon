#include <stdio.h>
#include <windows.h> //�ʿ�

LARGE_INTEGER Frequency;
LARGE_INTEGER BeginTime;
LARGE_INTEGER Endtime;

int main() {
	QueryPerformanceFrequency(&Frequency); // Ŭ������ ���α׷� ���ۿ� ����
	QueryPerformanceCounter(&BeginTime); // ���� ������ �κ�


	QueryPerformanceCounter(&Endtime); // ���� ����
	int elapsed = Endtime.QuadPart - BeginTime.QuadPart;
	double duringtime = (double)elapsed / (double)Frequency.QuadPart;
	printf("%lf", duringtime);
	getchar();
}