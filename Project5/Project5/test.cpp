#include<stdio.h>
#include<stdlib.h>
int one_number(unsigned int x){
	int count = 0;
	while (x != 0){            //000000000000000000000000 0000 1111
		if (x & 1 == 1){       //000000000000000000000000 0000 0001
			++count;             
			x=x >> 1;
		
		
		}
		else { x = x >> 1; }
	
	
	}



	return count;
}
void odd_even_number(int x){
	/*for (int i = 0; i < 33; ++i){
		if (x & 1 == 1){ printf("1"); x=x >> 1; }  //С�������
		else { printf("0"); x=x >> 1; }
	}*/
	int a[33];
	printf("����%d�Ķ��������Ϊ��\n", x);
	for (int i = 0; i < 33; ++i){
		if (x & 1 == 1){ a[i]=1; x = x >> 1; }  //���������������
		else { a[i]=0; x = x >> 1; }
	}
	for (int j = 31; j >= 0; --j){
		printf("%d", a[j]);
	}
	printf("\n");
	printf("����ż��λΪ:\n");
	for (int j = 31; j >= 0; j=j-2){	
	printf("%d", a[j]);
	 
	}
	printf("\n");
	printf("��������λΪ:\n");
	for (int j = 30; j >= 0; j=j-2){ 
		printf("%d", a[j]);
	 
	}
	printf("\n");

}
void print(int num){
	if (num > 0){
		print(num / 10);
		printf("%d", num % 10);          //�ݹ����?
	}
}
void diff_count(int x, int y){
	int count = 0;
	for (int i = 1; i < 33; ++i){
	if (((x & 1)== 1 ) && ((y & 1) == 1)){
		++count;              
		x = x >> 1;            
		y = y >> 1;
		continue;
	}
	else if (((x & 1) == 0) && ((y & 1) == 0)){
		++count;
		x = x >> 1;
		y = y >> 1;
		continue;
	}
	else {
	x = x >> 1;
	y = y >> 1;
	}
}
	printf("%d\n", 32-count);


}
int main(){
	/*1.дһ���������ز����������� 1 �ĸ���*/ 
	printf("%d\n",one_number(1048575) );
	//2.��ȡһ�������������������е�ż��λ������λ���ֱ��������������
	//odd_even_number(120);
	//3.���һ��������ÿһλ��
	//print(120);
	//4.����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ�� 
	//diff_count(1999, 2299);
	system("pause");
	return 0;
}