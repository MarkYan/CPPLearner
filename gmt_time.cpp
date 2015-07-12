#include<iostream>
#include<stdio.h>
#include<ctime>

using namespace std;

int main(){
	int total_s = time(0);

	int now_s = total_s % 60;

	int total_m = total_s / 60;

	int now_m = total_m % 60;

	int total_h = total_m / 60;

	int now_h = total_h % 24;

	printf("Current time is %d:%d:%d GMT\n", now_h + 8, now_m, now_s);
	return 0;
}