#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<time.h>

int day[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

Is_prime(int year)
{


}

int main()
{
	int age;
	printf("请输入你的年龄：");
	scanf("%d",&age);
	//
	//Is_prime();
	
	//time_t current_time;
	//struct tm *local_time;

	//time(&current_time);

	//local_time = localtime(&current_time);

	//int year = local_time->tm_year + 1900;

	//第一次进

	printf("%d", 365 * age);

	return 0;
}