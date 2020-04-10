#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


//利用条件运算符的嵌套来完成此题：学习成绩 >= 90分的同学用A表示，60 - 89分之间的用B表示，60分以下的用C表示。

//程序分析：(a>b) ? a : b这是条件运算符的基本例子。

int main(){
	int a;
	char b;
	printf("请输入你的成绩 :");
	scanf("%d", &a);
	b = (a >= 90) ? 'A' : (60 >= a >= 0) ? 'C' : 'B';
	printf("%c\n", b);
	system("pause");
	return 0;

}


//输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。

int main(){

	char c;
	int letters = 0, spaces = 0, digits = 0, others = 0;
	printf("请输入一些字母：\n");
	while ((c = getchar()) != '\n')
	{
		if ((c >= 'a'&&c <= 'z') || (c >= 'A'&&c <= 'Z'))
			letters++;
		else if (c >= '0'&&c <= '9')
			digits++;
		else if (c == ' ')
			spaces++;
		else
			others++;
	}
	printf("字母=%d,数字=%d,空格=%d,其他=%d\n", letters, digits, spaces, others);






	system("pause");
	return 0;
}

//一个数如果恰好等于它的因子之和，这个数就称为"完数"。例如6 = 1＋2＋3.编程找出1000以内的所有完数。

int main(){
	int i, j;
	for (i = 2; i <= 1000; i++){
		int sum = 0;
		for (j = 1; j < i; j++){
			if (i%j == 0){
				sum += j;
			}
		}
		if (sum == i){
			printf("%d=1", i);
			for (j = 2; j < i; j++){
				if (i%j == 0){
					printf("+%d", j);
				}
			}
			printf("\n");
		}
	}

	system("pause");
	return 0;

}

//一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？
int main(){
	float high = 100, hh, k = 1, sum = 0;
	//	int m;
	//	scanf("%d", &m);
	//	while (k <= m);
	while (k <= 10){
		hh = high / 2;
		sum = sum + hh + high;
		high = hh;
		k++;
	}
	sum = sum - hh;

	printf("%f %f", hh, sum);
	system("pause");
	return 0;
}


//猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，还不瘾，又多吃了一个
//第二天早上又将剩下的桃子吃掉一半，又多吃了一个。以后每天早上都吃了前一天剩下
//的一半零一个。到第10天早上想再吃时，见只剩下一个桃子了。求第一天共摘了多少。

int main(){
	int i = 1, j = 1;
	while (i < 10){
		j = 2 * (j + 1);
		i++;

	}
	printf("%d", j);
	system("pause");
	return 0;
}

/*
打印出如下图案（菱形）。

*
***
*****
*******
*****
***
*
*/

int main(){
	int i, j, k;
	for (i = 1; i <= 4; i++){
		for (j = i; j <= 3; j++){
			printf(" ");
		}
		for (k = 1; k <= 2 * i - 1; k++){
			printf("*");
		}
		printf("\n");
	}
	for (i = 1; i <= 3; i++){
		for (j = 1; j <= i; j++){
			printf(" ");
		}
		for (k = 1; k <= 7 - 2 * i; k++){
			printf("*");
		}
		printf("\n");
	}



	system("pause");
	return 0;
}
