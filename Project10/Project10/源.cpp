
#include<stdio.h>
#include<stdlib.h>
int number(int  *a){

		int i = 0;
		while (a[i])
			i++;
		return i;
}
int main(){
	int a[10] = { 1, 1, 2, 3, 4, 5, 6, 7, 8, 9 };  //�������ں��������
	//char a[] = "abcd0000efhh";  //���ֿ����ú����������
	int count=number(a);
	printf("%d", count);
	system("pause");
	return 0;
}