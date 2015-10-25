#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<Windows.h>

#pragma warning(disable:4996)

#define MAX 512
#define _CRT_SECURE_NO_WARNINGS 1

int CalculatorMain();

int CalculatorPlus(void)
{
	long long  int val1, val2;
	long long int answer = 0;
	val1 = 0;
	val2 = 0;
	char buffer[MAX];
	char word[MAX] = { "このプログラムは足し算のプログラムだよ\n" };
	char word2[MAX] = { "最初に足したい数字を入力してね。\n" };
	char word3[MAX] = { "次に足したい数字を入力してね。\n" };
	char word4[MAX] = { "ピ・ピ・ピ・ピ、計算した結果は\n" };
	char word5[MAX] = { "だよ！\n" };

	//while (_getch() != 0x1b) {

	for (int i = 0; word[i] != NULL; i++) {
		printf("%c", word[i]);
		Sleep(50);
	}

	for (int i = 0; word2[i] != NULL; i++) {
		printf("%c", word2[i]);
		Sleep(50);

	}
	while (fgets(buffer, sizeof(buffer), stdin) != NULL) {

		if (sscanf(buffer, "%d", &val1) == 1) {

			printf("Read (%d)\n", val1);
			break;
		}
	}
	for (int i = 0; word3[i] != NULL; i++) {
		printf("%c", word3[i]);
		Sleep(50);
	}

	while (fgets(buffer, sizeof(buffer), stdin) != NULL) {
		if (sscanf(buffer, "%d", &val2) == 1) {

			printf("Read (%d)\n", val2);
			break;
		}
	}

	for (int i = 0; word4[i] != NULL; i++) {
		printf("%c", word4[i]);
		Sleep(50);

	}
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
	long long int val1, val2;
	long long int answer = 0;
	val1 = 0;
	val2 = 0;
	char buffer[MAX];
	char word[MAX] = { "このプログラムは引き算のプログラムだよ\n" };
	char word2[MAX] = { "最初に計算したい数字を入力してね。\n" };
	char word3[MAX] = { "次に計算したい数字を入力してね。\n" };
	char word4[MAX] = { "ピ・ピ・ピ・ピ、計算した結果は\n" };
	char word5[MAX] = { "だよ！\n" };

	//while (_getch() != 0x1b) {

	for (int i = 0; word[i] != NULL; i++) {
		printf("%c", word[i]);
		Sleep(50);
	}

	for (int i = 0; word2[i] != NULL; i++) {
		printf("%c", word2[i]);
		Sleep(50);

	}
	while (fgets(buffer, sizeof(buffer), stdin) != NULL) {

		if (sscanf(buffer, "%d", &val1) == 1) {

			printf("Read (%d)\n", val1);
			break;
		}
	}
	for (int i = 0; word3[i] != NULL; i++) {
		printf("%c", word3[i]);
		Sleep(50);
	}

	while (fgets(buffer, sizeof(buffer), stdin) != NULL) {
		if (sscanf(buffer, "%d", &val2) == 1) {

			printf("Read (%d)\n", val2);
			break;
		}
	}

	for (int i = 0; word4[i] != NULL; i++) {
		printf("%c", word4[i]);
		Sleep(50);

	}
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
	long long int val1, val2;
	long long int answer = 0;
	val1 = 0;
	val2 = 0;
	char buffer[MAX];
	char word[MAX] = { "このプログラムは掛け算のプログラムだよ\n" };
	char word2[MAX] = { "最初に計算したい数字を入力してね。\n" };
	char word3[MAX] = { "次に計算したい数字を入力してね。\n" };
	char word4[MAX] = { "ピ・ピ・ピ・ピ、計算した結果は\n" };
	char word5[MAX] = { "だよ！\n" };

	//while (_getch() != 0x1b) {

	for (int i = 0; word[i] != NULL; i++) {
		printf("%c", word[i]);
		Sleep(50);
	}

	for (int i = 0; word2[i] != NULL; i++) {
		printf("%c", word2[i]);
		Sleep(50);

	}
	while (fgets(buffer, sizeof(buffer), stdin) != NULL) {

		if (sscanf(buffer, "%d", &val1) == 1) {

			printf("Read (%d)\n", val1);
			break;
		}
	}
	for (int i = 0; word3[i] != NULL; i++) {
		printf("%c", word3[i]);
		Sleep(50);
	}

	while (fgets(buffer, sizeof(buffer), stdin) != NULL) {
		if (sscanf(buffer, "%d", &val2) == 1) {

			printf("Read (%d)\n", val2);
			break;
		}
	}

	for (int i = 0; word4[i] != NULL; i++) {
		printf("%c", word4[i]);
		Sleep(50);

	}
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
	long long int val1, val2;
	long long int answer = 0;
	val1 = 0;
	val2 = 0;
	char buffer[MAX];
	char word[MAX] = { "このプログラムは割り算のプログラムだよ\n" };
	char word2[MAX] = { "最初に計算したい数字を入力してね。\n" };
	char word3[MAX] = { "次に計算したい数字を入力してね。\n" };
	char word4[MAX] = { "ピ・ピ・ピ・ピ、計算した結果は\n" };
	char word5[MAX] = { "だよ！\n" };

	//while (_getch() != 0x1b) {

	for (int i = 0; word[i] != NULL; i++) {
		printf("%c", word[i]);
		Sleep(50);
	}

	for (int i = 0; word2[i] != NULL; i++) {
		printf("%c", word2[i]);
		Sleep(50);

	}
	while (fgets(buffer, sizeof(buffer), stdin) != NULL) {

		if (sscanf(buffer, "%d", &val1) == 1) {

			printf("Read (%d)\n", val1);
			break;
		}
	}
	for (int i = 0; word3[i] != NULL; i++) {
		printf("%c", word3[i]);
		Sleep(50);
	}

	while (fgets(buffer, sizeof(buffer), stdin) != NULL) {
		if (sscanf(buffer, "%d", &val2) == 1) {

			printf("Read (%d)\n", val2);
			break;
		}
	}

	for (int i = 0; word4[i] != NULL; i++) {
		printf("%c", word4[i]);
		Sleep(50);

	}
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
