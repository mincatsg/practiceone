#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


int main(){
		int i, j, k, z;
		printf("������3����\n");
		scanf("%d %d %d", &i, &j, &z);
		if (i < j){
			k = i;
			i = j;
			j = k;
		}
		if (i < z){
			k = i;
			i = z;
			z = k;
		}
		if (j < z){
			k = j;
			j = z;
			z = k;
		}
		printf("%d %d %d", i, j, z);
		system("pause");
		return 0;
	}





int main(){
	int m, n;
	int c = 0;
	printf("input 2 number\n");
	scanf("%d %d", &m, &n);
	printf("���������Լ��Ϊ%d�� \n", gg(m, n));
	system("pause");
	return 0;
}
int gg(int a, int  b){         // int c  // c������ 
	while (a != b){              // while(a%b != 0){                            
		if (a > b){              //    c = a % b;
			a = a - b;            //   a = b;
		}                        //    b = c;}
		else{                    //  return a;
			b = b - a;
     }
		return a;

	}
}



int main(){
	int a[10], b[10];
	int i, j = 0;
	printf("������һ�������ֵ\n");
	for (i = 0; i < 10; i++){
		scanf("%d", &a[i]);
	}
	printf("��������һ�������ֵ\n");
	for (i = 0; i < 10; i++){
		scanf("%d", &b[i]);
	}
	for (i = 0; i < 10; i++){
		j = a[i];
		a[i] = b[i];
		b[i] = j;
		printf("%d ", a[i]);
	}
	printf("\n");
	for (i = 0; i < 10; i++){
		printf("%d ", b[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}



int main(){
	int i, j, k;
	for (i = 1; i <= 7; i++){
		for (k = 1; k <= 7 - i; k++){
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; ++j){
			printf("*");
		}
		printf("\n");
	}
	for (i = 1; i <= 6; i++){
		for (j = 1; j <= i; ++j){
			printf(" ");
		}
		for (k = 1; k <= 13 - 2 * i; k++){
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}

void Daffodil(int n){
	int bits, ten, hundred;  //��λ�� ʮλ�� ��λ
	bits = n % 100 % 10;
	ten = n / 10 % 10;
	hundred = n / 100;
	if (n == bits*bits*bits + ten*ten*ten + hundred*hundred*hundred){
		printf("%d = %d^3 + %d^3 + %d^3 \n", n, hundred, ten, bits);
	}
}
int main(){
	for (int i = 0; i <= 999; i++){
		Daffodil(i);
	}
	system("pause");
	return 0;

}



int main(){
	int a = 1, b, sum = 0;
	int i = 1;
	printf("����������Ҫ������:");
	scanf("%d", &a);
	b = a;
	while (i <= 5){
		sum = sum + a;
		a = a * 10 + b;
		i++;
	}
	printf("%d\n",sum);
	system("pause");
	return 0;
}

