#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void print(int x){
	for (int i = 1; i < x; ++i){
		for (int j = 1; j < x; ++j){
			printf("%d*%d=%d\t\t", j, i,i*j);

		}
		printf("\n");
	}
	
	}
void change(int x, int y){
	int c = 0;
     c = x;
	 x = y;
	 y = c;
	 printf("�����Ľ��Ϊ%d %d\n", x, y);


}

void judge(int x){
	if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0){
		printf("%d��������\n",x);
	}
	else{
		printf("%d�겻������\n", x);
	}



}

void init(int *a,int x){
	for (int row = 0; row < x; row++){
		printf("��������Ҫ������\n");
		scanf("%d", &a[row]);
	
	}
}

void reverse(int *a, int x){
	int y[100];
	int i = x - 1;
	for (int j=0; i >= 0,j<x;--i,++j){
		y[j] = a[i];
     }
	
	for (int c = 0; c < x; ++c){
		a[c] = y[c];
	
	
	}
	
}
void prinfshuzu(int *a, int length){
	for (int row = 0; row < length; ++row){
		printf("%d\t\n", a[row]);
	
	}


}

void empty(int *a, int length){    //�������������⡣����������������������ʵ��
	while (1){                     
		int d;
		printf("�Ƿ�����������(1/0)\n");
		scanf("%d", &d);
		if (d == 1){
			for (int i = 0; i < length; ++i){
				a[i] = { 0 };
			}
			break;
		}
		else if (d == 0){ break; }
		    
		       else  { printf("�����������������\n"); continue; }


		}
	
	
	}

void sushu(int x){

	int i;
	do {
		for (i = 2; i < x; i++)
		if (x%i == 0)break;
		if (i == x)
		{

			printf("%d������\n", x); break;
		}
		else
		{
			printf("%d��������\n", x); break;
		}
	} while (x != 0);




}







int main(){
	int a = 0;
	printf("������һ������\n");
	scanf("%d", &a);
	print(a);    //����˷��ھ���
	
	int a1 = 0;
	int a2 = 0;
	printf("��������Ҫ���뽻��������\n");
	scanf("%d %d", &a1, &a2);
    change(a1, a2);  //��������


	printf("��������Ҫ�жϵ����\n");
	int year = 0;
	scanf("%d", &year);
	judge(year);    //�ж��Ƿ�����

	int length = 0;
	printf("������������鳤��(��󲻵ó���100)\n");
	scanf("%d", &length);
	int x[100];
	init(x,length);      //��ʼ��
	reverse(x, length); //����
	prinfshuzu(x, length);//�����������
	empty(x, length);//���



	int number = 0;
	printf("��������Ҫ�жϵ�����\n");
	scanf("%d", &number);
	sushu(number);





	system("pause");
	return 0;
}