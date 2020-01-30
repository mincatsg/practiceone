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
//			printf("%d*%d=%-2d  ",j,i,i*j);  //加负号左对齐，不加右对齐。
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


//递归和非递归分别实现求第n个斐波那契数。
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
//	printf("请输入你要求的数字: ");
//	scanf("%d", &number);
//	printf("%d的斐波那契数为 %d \n", number, Fibonacci_number(number));
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
//	    printf("请输入你要求的数字: ");
//		scanf("%d", &number);
//		printf("%d的斐波那契数为 %d \n", number, Fib(number));
//		system("pause");
//		return 0;
//}
//
//编写一个函数实现n^k，使用递归实现
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
//	printf("请输入你要平方的数和平方次数: ");
//	scanf("%d %d", &n, &k);
//	printf("结果为%d \n", square(n, k));
//	system("pause");
//	return 0;
//}
//
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
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
//	printf("请输入你所求的数: ");
//	scanf("%d", &n);
//	printf("%d\n", DigitSum(n));
//	system("pause");
//	return 0;
//}
//
//
//编写一个函数 reverse_string(char* string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
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
//递归和非递归分别实现strlen
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
//递归和非递归分别实现求n的阶乘 
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
//	printf("请输入你要的阶乘数: ");
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
//	printf("请输入你要的阶乘数: ");
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
////递归方式实现打印一个整数的每一位 
//void Integer(int n){
//	if (n > 9){
//		Integer(n / 10);
//	}
//	printf("%d  ", n % 10);
//}
//
//int main(){
//	int number;
//	printf("请输入你的整数: ");
//	scanf("%d", &number);
//	Integer(number);
//	system("pause");
//	return 0;
//}


//#define Number 10
////实现杨辉三角
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
//							printf("A是: %d\n", A);
//							printf("B是: %d\n", B);
//							printf("C是: %d\n", C);
//							printf("D是: %d\n", D);
//							printf("E是: %d\n", E);
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


//用&操作  n&(n-1) 后每次都会减少一个二进制1,可用来算数中二进制有多少1.
// 求平均值位操作.


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


//有一个数组,只有一个数字出现一次，求这个数字多少？要求：只能遍历一遍数组
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


//写一个函数返回参数二进制中 1 的个数
//比如： 15 0000 1111 4 个 1
//程序原型：
//int count_one_bits(unsigned int value)
//{
//	// 返回 1的位数 
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

	//获取一个数二进制序列中所有的偶数位和奇数位，
	//	分别输出二进制序列。
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
//求平均值位操作.
 // 3  0011
//  5  0101
 // 4  0100
  //各个位运算符的用法如下所示：
  //（1） | ：按位或，两个数只要有一个是1就是1，例如8 | 5，8的二进制数是00001000，5的二进制数是：00000101，8 | 5的值
  //就是00001101，十进制为13，位运算或其实可以看成将两个数不一样的地方和一样的地方提出来，因为1 | 1等于1，
  //所以说只提出来了一半，两个1最后成了一个1，所以说只提出来一半
  //（2）&：按位与，两个数都为1（真）结果才为1（真），否则为0（假），例如8 & 5，8的二进制数是00001000，5的二进制
  //数是：00000101，8 & 5的值为00000000，位运算符&其实可以看成是将两个数一样的地方提出来一半，和或运算一样
  //1 & 1之后就只剩下了一个1，对于两个数来说，也只算提出来了一半
  //（3）~:按位取反：就是遇到1将他变成0；把0变成1就好，计算一个负数的十进制数是多少时，就将他按位取反再加1转化
  //成十进制就好
  //（4）^ : 按位异或：两个数不一样就为1，否则为0，例如8 ^ 5，8的二进制数是00001000，5的二进制数是：00000101，8 ^ 5的
  //值就是00001101，00001100, 位运算符异或可以看成是将两个数不一样的地方提出来。
  //（5） << 按位左移：将二进制数向左移右值（位运算符右边的数）数的位，右边（低位）补0，相当于将原数乘2，对几进制
  //数操作就相当于乘以多少进制，如果对八进制数操作就相当于乘以8，对十六进制数操作就相当于乘以16，例如17
  //的二进制数是00010001，左移之后：00100010，换算成十进制数就是34，相当于17 * 2，17的八进制是021，左移之后 : 210
  //左移一位之后相当与乘以8，210的十进制数就是136等于17 * 8。
  //（6） >> 按位右移：将二进制数向右移右值（位运算符右边的数）数的位，左边补符号位，相当与除法，和按位左移一样，是
  //多少进制就除以多少进制，存在整除问题，结果向零靠近
