// 57. จงเขียนโปรแกรมรับ string มา 1 ชุด แล้วหาว่าตัวอักษรใดที่เป็นตัวอักษรหลังสุด (Level 3)

#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>


int main()
{
	char sen[1000];
	scanf("%s", sen);
	int i = 0;
	while (sen[i + 1] != '\0')
	{
		i++;
	}
	printf("%c", sen[i]);

	return 0;
}