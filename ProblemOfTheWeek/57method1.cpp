// 57. จงเขียนโปรแกรมรับ string มา 1 ชุด แล้วหาว่าตัวอักษรใดที่เป็นตัวอักษรหลังสุด (Level 3)

#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string.h>

int main()
{
	char sen[1000];
	scanf("%s", sen);
	int length = strlen(sen);
	printf("%c", sen[length-1]);


	return 0;
}