#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


//���������������Ƕ������ɴ��⣺ѧϰ�ɼ� >= 90�ֵ�ͬѧ��A��ʾ��60 - 89��֮�����B��ʾ��60�����µ���C��ʾ��

//���������(a>b) ? a : b��������������Ļ������ӡ�

int main(){
	int a;
	char b;
	printf("��������ĳɼ� :");
	scanf("%d", &a);
	b = (a >= 90) ? 'A' : (60 >= a >= 0) ? 'C' : 'B';
	printf("%c\n", b);
	system("pause");
	return 0;

}


//����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����

int main(){

	char c;
	int letters = 0, spaces = 0, digits = 0, others = 0;
	printf("������һЩ��ĸ��\n");
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
	printf("��ĸ=%d,����=%d,�ո�=%d,����=%d\n", letters, digits, spaces, others);






	system("pause");
	return 0;
}

//һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ"����"������6 = 1��2��3.����ҳ�1000���ڵ�����������

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

//һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻�����£������ڵ�10�����ʱ�������������ף���10�η�����ߣ�
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


//���ӳ������⣺���ӵ�һ��ժ�����ɸ����ӣ���������һ�룬����񫣬�ֶ����һ��
//�ڶ��������ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ����һ�����Ժ�ÿ�����϶�����ǰһ��ʣ��
//��һ����һ��������10���������ٳ�ʱ����ֻʣ��һ�������ˡ����һ�칲ժ�˶��١�

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
��ӡ������ͼ�������Σ���

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
