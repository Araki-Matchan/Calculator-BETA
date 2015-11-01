#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<Windows.h>

#pragma warning(disable:4996)

#define MAX 512
#define _CRT_SECURE_NO_WARNINGS 1

int CalculatorMain();
int CalculatorInputProcess();

int CalculatorWordProcess(long long int *data,long long int *data2)
{

	long long  int val1, val2;
	long long int answer = 0;
	val1 = 0;
	val2 = 0;
	
	char word2[MAX] = { "最初に計算したい数字を入力してね。\n" };
	char word3[MAX] = { "次に計算したい数字を入力してね。\n" };
	char word4[MAX] = { "ピ・ピ・ピ・ピ、計算した結果は\n" };
	



	for (int i = 0; word2[i] != NULL; i++) {
		printf("%c", word2[i]);
		Sleep(50);

	}
	*data = CalculatorInputProcess();
	for (int i = 0; word3[i] != NULL; i++) {
		printf("%c", word3[i]);
		Sleep(50);
	}

	*data2 = CalculatorInputProcess();

	for (int i = 0; word4[i] != NULL; i++) {
		printf("%c", word4[i]);
		Sleep(50);

	}
	return (0);

}

int CalculatorInputProcess(void)
{
	char buffer[MAX];
	long long int val;
	val = 0;
	while (fgets(buffer, sizeof(buffer), stdin) != NULL) {
		if (sscanf(buffer, "%d", &val) == 1) {

			printf("Read (%d)\n", val);
			break;
		}
	}

	return val;
}

int CalculatorPlus(void)
{
	long long  int val1, val2;
	long long int answer = 0;
	val1 = 0;
	val2 = 0;
	long long int *val1p = 0;
	long long int *val2p =  0;

	val1p = &val1;
	val2p = &val2;

	char word[MAX] = { "このプログラムは足し算のプログラムだよ\n" };
	char word5[MAX] = { "だよ！\n" };

	//while (_getch() != 0x1b) {
	for (int i = 0; word[i] != NULL; i++) {
		printf("%c", word[i]);
		Sleep(50);
	}

	CalculatorWordProcess(val1p,val2p);

	getchar();

	answer = val1 + val2;

	printf("「 %d ", val1);
	printf(" + ");
	printf(" %d 」", val2);
	printf("= %d\n", answer);


	for (int i = 0; word5[i] != NULL; i++) {
		printf("%c", word5[i]);
		Sleep(50);

	}

	CalculatorMain();

	return 0;
}


int CalculatorMinus(void)
{
	long long  int val1, val2;
	long long int answer = 0;
	val1 = 0;
	val2 = 0;
	long long int *val1p = 0;
	long long int *val2p = 0;

	val1p = &val1;
	val2p = &val2;

	char word[MAX] = { "このプログラムは引き算のプログラムだよ\n" };
	char word5[MAX] = { "だよ！\n" };

	//while (_getch() != 0x1b) {
	for (int i = 0; word[i] != NULL; i++) {
		printf("%c", word[i]);
		Sleep(50);
	}

	CalculatorWordProcess(val1p, val2p);

	getchar();

	answer = val1 - val2;

	printf("「 %d ", val1);
	printf(" - ");
	printf(" %d 」", val2);
	printf("= %d\n", answer);


	for (int i = 0; word5[i] != NULL; i++) {
		printf("%c", word5[i]);
		Sleep(50);

	}

	CalculatorMain();

	return 0;
}


int CalculatorTimes(void)
{
	long long  int val1, val2;
	long long int answer = 0;
	val1 = 0;
	val2 = 0;
	long long int *val1p = 0;
	long long int *val2p = 0;

	val1p = &val1;
	val2p = &val2;

	char word[MAX] = { "このプログラムは掛け算のプログラムだよ\n" };
	char word5[MAX] = { "だよ！\n" };

	//while (_getch() != 0x1b) {
	for (int i = 0; word[i] != NULL; i++) {
		printf("%c", word[i]);
		Sleep(50);
	}

	CalculatorWordProcess(val1p, val2p);

	getchar();

	answer = val1 * val2;

	printf("「 %d ", val1);
	printf(" × ");
	printf(" %d 」", val2);
	printf("= %d\n", answer);


	for (int i = 0; word5[i] != NULL; i++) {
		printf("%c", word5[i]);
		Sleep(50);

	}

	CalculatorMain();

	return 0;
}


int CalculatorDivision(void)
{
	long long  int val1, val2;
	long long int answer = 0;
	val1 = 0;
	val2 = 0;
	long long int *val1p = 0;
	long long int *val2p = 0;

	val1p = &val1;
	val2p = &val2;

	char word[MAX] = { "このプログラムは割り算のプログラムだよ\n" };
	char word5[MAX] = { "だよ！\n" };

	//while (_getch() != 0x1b) {
	for (int i = 0; word[i] != NULL; i++) {
		printf("%c", word[i]);
		Sleep(50);
	}

	CalculatorWordProcess(val1p, val2p);

	getchar();

	answer = val1 / val2;

	printf("「 %d ", val1);
	printf(" ÷ ");
	printf(" %d 」", val2);
	printf("= %d\n", answer);

	for (int i = 0; word5[i] != NULL; i++) {
		printf("%c", word5[i]);
		Sleep(50);

	}

	CalculatorMain();

	return 0;
}

int CalculatorCheck(void)
{
	char buffer[MAX];
	char str1[256] = { 0 };
	char word1[MAX] = { "電卓を開始します。 + - * /　のいずれか一文字半角文字で入力してね\n" };

	for (int i = 0; word1[i]; i++) {
		printf("%c", word1[i]);
		Sleep(50);

	}
START:
	while (fgets(buffer, sizeof(buffer), stdin) != NULL) {
		if (sscanf(buffer, "%s", str1) == 1) {

			printf("Read (%s)\n", str1);
			break;
		}
	}

	if (!strcmp(str1, "+")) {
		CalculatorPlus();

	}
	else if (!strcmp(str1, "-")) {

		CalculatorMinus();
	}

	else if (!strcmp(str1, "*")) {

		CalculatorTimes();

	}
	else if (!strcmp(str1, "/")) {

		CalculatorDivision();
	}
	else { goto START; }



	return 0;
}

int CalculatorMain(void)
{
	CalculatorCheck();

	return 0;

}

int main(void)
{
	CalculatorMain();
	return 0;

}
