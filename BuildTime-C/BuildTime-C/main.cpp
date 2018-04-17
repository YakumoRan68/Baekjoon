#include <stdio.h>
#include <windows.h> //필요

LARGE_INTEGER Frequency;
LARGE_INTEGER BeginTime;
LARGE_INTEGER Endtime;

int main() {
	QueryPerformanceFrequency(&Frequency); // 클래스나 프로그램 시작에 선언
	QueryPerformanceCounter(&BeginTime); // 측정 시작할 부분


	QueryPerformanceCounter(&Endtime); // 측정 종료
	int elapsed = Endtime.QuadPart - BeginTime.QuadPart;
	double duringtime = (double)elapsed / (double)Frequency.QuadPart;
	printf("%lf", duringtime);
	getchar();
}