#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//int main(){
//	int i, j, count = 0;
//	for (i = 101; i <= 200; i += 2){
//		for (j = 2; j <= sqrt(i); j++){
//			if (i%j == 0){
//				break;
//			}
//		}
//		if (j > sqrt(i)){
//			printf("%d\n", i);
//			count++;
//		}
//	}
//	printf("count = %d\n", count);
//	system("pause");
//	return 0;
//}*/


//
//#include<stdio.h>
//int main(){
//	int i, j;
//	for (i = 1; i < 10; i++){
//		for (j = 1; j <= i; j++){
//			printf("%d*%d=%-2d  ",j,i,i*j);  //�Ӹ�������룬�����Ҷ��롣
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

//
//#include<stdio.h>
//int main(){
//	int i, j=0;
//	for (i = 1000; i <= 2000; i++){
//		if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0)){
//			printf("%d   ", i);
//			j++;
//			if (j % 10 == 0){
//				printf("\n");
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}


//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������
//int Fibonacci_number(int number){
//	if (number == 1){
//		return 1;
//	}
//	 if (number == 2){
//		return 1;
//	}
//	 if (number > 2){
//		 return Fibonacci_number(number - 1) + Fibonacci_number(number - 2);
//	 }
//}
//
//int main(){
//	int number = 0;
//	printf("��������Ҫ�������: ");
//	scanf("%d", &number);
//	printf("%d��쳲�������Ϊ %d \n", number, Fibonacci_number(number));
//	system("pause");
//	return 0;
//}
//
//
//
//int Fib(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	if (n == 2)
//	{
//		return 1;
//	}
//	int f1 = 1;
//	int f2 = 1;
//	int c = 0;
//	for (int i = 3; i <= n; i++)
//	{
//		c = f1 + f2;
//		f1 = f2;
//		f2 = c;
//	}
//
//	return c;
//}
//int main()
//{
//	    int number;
//	    printf("��������Ҫ�������: ");
//		scanf("%d", &number);
//		printf("%d��쳲�������Ϊ %d \n", number, Fib(number));
//		system("pause");
//		return 0;
//}
//
//��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
//int square(int n, int k){
//	if (k == 0){
//		return 1;
//	}
//	if (k == 1){
//		return n;
//	}
//	if (k > 1){
//		return n * square(n, k - 1);
//	}
//}
//
//
//int main(){
//	int n, k;
//	printf("��������Ҫƽ��������ƽ������: ");
//	scanf("%d %d", &n, &k);
//	printf("���Ϊ%d \n", square(n, k));
//	system("pause");
//	return 0;
//}
//
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//int DigitSum(int n){
//	if (n < 9){
//		return n;
//	}
//	return n % 10 + DigitSum(n / 10);
//}
//
//
//int main(){
//	int n;
//	printf("���������������: ");
//	scanf("%d", &n);
//	printf("%d\n", DigitSum(n));
//	system("pause");
//	return 0;
//}
//
//
//��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//void reverse_string(char*  string){
//	int i = 0;
//	char b;
//	if (*(++string)  != '\0'){
//		reverse_string(string);
//	}
//	printf("%c", *(string-1));
//}
//int main(){
//	char string[] = "abcdfd";
//	printf("%s\n", string);
//	reverse_string(string);
//	printf("\n");
//	system("pause");
//	return 0;
//}
//
//
//
//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//int i = 0;
//void strlen(char* string){
//	if ( *(string++) != '\0'){
//		 ++i;
//		strlen(string);
//	}
//
//}
//
//int main(){
//	char string[] = "abcdef";
//	strlen(string);
//	printf("%d\n", i);
//	system("pause");
//	return 0;
//}
//
//
//
//int main(){
//	char str[] = "abcdef";
//	int i = 0;
//	int len = 0;
//	while (str[i] != '\0'){
//		len++;
//		i++;
//	}
//	printf("%d\n", len);
//	system("pause");
//	return 0;
//}
//
//
//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳� 
//int Factorial(int n){
//	if (n == 1 || n == 0){
//		return 1;
//	}
//	if (n > 1){
//		return n * Factorial(n - 1);
//	}
//}
//int main(){
//	int number = 0;
//	printf("��������Ҫ�Ľ׳���: ");
//	scanf("%d", &number);
//	printf("%d\n", Factorial(number));
//	system("pause");
//	return 0;
//}
//
//
//int main(){
//	int number = 0;
//	int sum = 1;
//	printf("��������Ҫ�Ľ׳���: ");
//	scanf("%d", &number);
//	for (int i = 1; i <= number; i++){
//		sum = sum * i;
//	}
//
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}
//
//
////�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ 
//void Integer(int n){
//	if (n > 9){
//		Integer(n / 10);
//	}
//	printf("%d  ", n % 10);
//}
//
//int main(){
//	int number;
//	printf("�������������: ");
//	scanf("%d", &number);
//	Integer(number);
//	system("pause");
//	return 0;
//}


//#define Number 10
////ʵ���������
//int main(){
//	int arr[Number][Number] = { 0 };
//	for (int i = 0; i < Number; ++i){
//		arr[i][0] = 1;
//		for (int j = 0; j < Number; ++j){
//			if (i == j){
//				arr[i][j] = 1;
//			}
//		}
//	}
//	for (int i = 2; i < Number; ++i){
//		for (int j = 1; j < i; ++j){
//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		}
//	}
//	for (int i = 0; i < Number; ++i){
//		for (int j = 0; j < Number; ++j){
//			if (arr[i][j] != 0){
//				printf("%-4d ", arr[i][j]);
//			}
//		}
//		printf("\n");
//	}
//
//	system("pause");
//	return 0;
//}



//int main(){
//	int  A, B, C, D, E;
//	for (A = 1; A < 6; A++){
//		for (B = 1; B < 6; B++){
//			for (C = 1; C < 6; C++){
//				for ( D = 1; D < 6; D++){
//					for (E = 1; E < 6; E++){
//						if ((B == 2) + (A == 3) == 1 && (B == 2) + (E == 4) == 1 &&
//							(C == 1) + (D == 2) == 1 && (C == 5) + (D == 3) == 1 &&
//							(E == 4) + (A == 1) == 1 && (A * B * C * D * E) == 120){
//							printf("A��: %d\n", A);
//							printf("B��: %d\n", B);
//							printf("C��: %d\n", C);
//							printf("D��: %d\n", D);
//							printf("E��: %d\n", E);
//						}
//
//					}
//				}
//			}
//
//		}
//	}
//	
//	system("pause");
//	return 0;
//}


//��&����  n&(n-1) ��ÿ�ζ������һ��������1,�����������ж������ж���1.
// ��ƽ��ֵλ����.


//int DiffBit(int num1, int num2){
//	int count = 0;
//	int temp = num1 ^ num2;
//	while (temp != 0){
//		count++;
//		temp = temp & (temp - 1);
//	}
//	return count;
//}
//
//
//int main(){
//	int ret = DiffBit(2, 3);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}


//��һ������,ֻ��һ�����ֳ���һ�Σ���������ֶ��٣�Ҫ��ֻ�ܱ���һ������
//int dd(int arr[], int len){
//	int ret = 0;
//	for (int i = 0; i < len; i++){
//		ret ^= arr[i];
//	}
//	return ret;
//}
//
//int main(){
//	int arr[] = { 1, 3, 5, 2, 1, 5, 2 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", dd(arr, len));
//	system("pause");
//	return 0;
//}


//дһ���������ز����������� 1 �ĸ���
//���磺 15 0000 1111 4 �� 1
//����ԭ�ͣ�
//int count_one_bits(unsigned int value)
//{
//	// ���� 1��λ�� 
//}
//int count_one_bits(unsigned int value){
	// 1.	//	int count = 0;
	//	while (value != 0){
	//		if (value % 2 == 1){
	//			count++;
	//		}
	//		value = value / 2;
	//	}
	//	return count;
	//}
	// 2.//	int count = 0;
	//	for (int i = 0; i < 32; i++){
	//		if (((value >> i) & 1)){
	//			count++;
	//		}
	//	}
	//	return count;
	//}
//3.//	int count = 0;
//	while (value != 0){
//		count++;
//		value = value & (value - 1);
//	}
//	return count;
//}
//int main(){
//
//	printf("%d\n", count_one_bits(10));
//	system("pause");
//	return 0;
//}

	//��ȡһ�������������������е�ż��λ������λ��
	//	�ֱ�������������С�
//int number = 10;
//int num[] = new int[32];
//int i = 0;
//while (i < 32){
//	num[i] = (number >> i) & 1;
//	i++;
//}
//
//for (int j = 31; j >= 0; j -= 2){
//	System.out.print(num[j] + " ");
//}
//System.out.println();
//for (int j = 30; j >= 0; j -= 2){
//	System.out.print(num[j] + " ");
//}
//	}


//int main(){
//	char killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++){
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3){
//			printf("%c\n", killer);
//		}
//	}
//	system("pause");
//	return 0;
//}

//void Function(int number){
//	while (number != 0){
//		printf("%d ", number % 10);
//		number = number / 10;
//	}
//}
//
//
//int main(){
//	Function(1232);
//	system("pause");
//	return 0;
//}
//��ƽ��ֵλ����.
 // 3  0011
//  5  0101
 // 4  0100
  //����λ��������÷�������ʾ��
  //��1�� | ����λ��������ֻҪ��һ����1����1������8 | 5��8�Ķ���������00001000��5�Ķ��������ǣ�00000101��8 | 5��ֵ
  //����00001101��ʮ����Ϊ13��λ�������ʵ���Կ��ɽ���������һ���ĵط���һ���ĵط����������Ϊ1 | 1����1��
  //����˵ֻ�������һ�룬����1������һ��1������˵ֻ�����һ��
  //��2��&����λ�룬��������Ϊ1���棩�����Ϊ1���棩������Ϊ0���٣�������8 & 5��8�Ķ���������00001000��5�Ķ�����
  //���ǣ�00000101��8 & 5��ֵΪ00000000��λ�����&��ʵ���Կ����ǽ�������һ���ĵط������һ�룬�ͻ�����һ��
  //1 & 1֮���ֻʣ����һ��1��������������˵��Ҳֻ���������һ��
  //��3��~:��λȡ������������1�������0����0���1�ͺã�����һ��������ʮ�������Ƕ���ʱ���ͽ�����λȡ���ټ�1ת��
  //��ʮ���ƾͺ�
  //��4��^ : ��λ�����������һ����Ϊ1������Ϊ0������8 ^ 5��8�Ķ���������00001000��5�Ķ��������ǣ�00000101��8 ^ 5��
  //ֵ����00001101��00001100, λ����������Կ����ǽ���������һ���ĵط��������
  //��5�� << ��λ���ƣ�������������������ֵ��λ������ұߵ���������λ���ұߣ���λ����0���൱�ڽ�ԭ����2���Լ�����
  //���������൱�ڳ��Զ��ٽ��ƣ�����԰˽������������൱�ڳ���8����ʮ���������������൱�ڳ���16������17
  //�Ķ���������00010001������֮��00100010�������ʮ����������34���൱��17 * 2��17�İ˽�����021������֮�� : 210
  //����һλ֮���൱�����8��210��ʮ����������136����17 * 8��
  //��6�� >> ��λ���ƣ�������������������ֵ��λ������ұߵ���������λ����߲�����λ���൱��������Ͱ�λ����һ������
  //���ٽ��ƾͳ��Զ��ٽ��ƣ������������⣬������㿿��
