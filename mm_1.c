#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


//shirt alt r
// 交换2个给定值 
/*int main(){


	int a = 100;
	int b = 50;
	int c;
	c = a;
	a = b;
	b = c;
	printf("%d  %d \n", a, b);
	

	system("pause");
	return 0;
} */



//输入十个数中最大值
/*int i;
	int a[10];
	int max=0;
	printf("input 10 number\n");
	for (i = 0; i < 10; i++){
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 10; i++){
		if (a[i]>max){
			max = a[i];
		}

	}

		printf(" max=  %d    \n", max);
		system("pause");
	return 0;
	}*/



//按从大到小输出3个输入的数
/*
int main(){
	int a, b, c;
	int d = 0;
	printf("input 3 number\n");
	scanf("%d%d%d", &a,&b, &c);
	if (a < b){
		d = a;
		a = b;
		b = d;
	}
	if (a < c){
		d = a;
		a = c;
		c = d;
	}
	if (b < c){
		d = b;
		b = c;
		c = d;
	}
	printf("%d %d %d\n", a, b, c);

	system("pause");
		return  0;




}*/



//求最大公约数
/*
int main(){
	int m, n;
	int c = 0;
	printf("input 2 number\n");
	scanf("%d %d", &m, &n);
	int gg(int a,int  b);
	printf("俩个数最大公约数为%d： \n", gg(m, n));

	system("pause");
	return 0;
}
	int gg(int a,int  b){
	while (a != b){
		if (a > b){
			a = a - b;
		}
		else
			b = b - a;

		return a;

	}
}*/
	
/*
int main(){
	int x, y;
	printf("input 2 number:  ");
	scanf("%d %d", &x, &y);
	printf("%d %d \n", x, y);
	x = x + y;
	y = x - y;
	x = x - y;
	printf("%d %d  \n", x, y);

	system("pause");

	return 0;
}
	*/


/*
int main(){
	int i, j, k, a;
	for (i = 100; i <= 999; i++){
		j = i / 100;
		a = i % 10;
		k = (i-a*100)/10;
		if (i == j*j*j + k*k*k + a*a*a)
			printf("%d", i);
	
		}
		system("pause");
		return 0;


	}

	*/



/*
int main(){
	int i, j;
	for (i = 1; i <=1000; ++i){
		int sum = 0;
		for (j = 1; j < i; ++j){
			if (i%j == 0){
				sum = sum + j;
			}
			
		}
		if (sum == i){
			printf("%d its factors are: ", i);
			for (j = 1; j < i; ++j){
				if (i%j == 0){
					printf("%d   ", j);
				}
			}
			printf("\n");
		}
	
	}




	system("pause");
	return 0;


}*/
/*
int main(){
	for (int i = 1; i <= 10; i++){
		printf("%d\n", i);

	}
	system("pause");

	return 0;
}
*/



/*
int main(){
	int i, j, k;
	for (i = 0; i < 4; i++){
		for (j = 0; j < 3 - i; j++)
			printf(" ");
		for (k = 0; k < 2*i + 1; k++)
			printf("*");
		printf("\n");
	}
	for (i = 0; i < 3; i++){
		for (j = 0; j <= i; j++)
			printf(" ");
		for (k = 0; k <= 4 - 2 * i; k++)
			printf("*");
		printf("\n");
	}
	system("pause");
	return 0;
}*/

/*
int main(){
	int a[20][20] = { 0 };
	int i, j;
	for (i = 0; i < 20; i++){
		for (j = 0; j < 20; j++){
			a[i][0] = 1;
			if (i == j){
				a[i][j] = 1;
			}
		}
	}
	for (i = 2; i < 20; i++){
		for (j = 1; j <= i-1; j++){
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	for (i = 0; i < 20; i++){
		for (j = 0; j < 20; j++){
			if (a[i][j] != 0){
				printf("%6d", a[i][j]);
			}
		}
		printf("\n");
	
	system("pause");
	return 0;
}*/

/*
题目：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？

程序分析：可填在百位、十位、个位的数字都是1、2、3、4。组成所有的排列后再去 掉不满足条件的排列。
int main(){

	int i, j, k;
	int count = 0;
	for (i = 1; i <= 4; i++){
		for (j = 1; j <= 4; j++){
			for (k = 1; k <= 4; k++){
				if (i != j && i != k && j != k){
					printf("%d%d%d   ", i, j, k);
				}
				
				count++;
				if (count % 4 == 0){
					printf("\n");

				}
			}
		}
	}
	system("pause");
	return 0;
}*/

/*
int main(){
	int   c,i;
	int a;
	printf("请输入你的月利润: ");
	scanf("%d", &i);
	if (i > 1000000) c = 11;
	else 	c = i / 100000;  
	switch (c){
	case 0: a = i*0.1; printf("%d\n", a); break;
	case 1: a = 100000 * 0.1 + (i - 100000)*0.075; printf("%d\n", a); break;
	case 2: a = 100000 * 0.1 + (i - 100000)*0.075; printf("%d\n", a); break;
	case 3: a = 100000 * 0.1 + 100000 * 0.075 + (i - 200000)*0.05; printf("%d\n", a); break;
	case 4: a = 100000 * 0.1 + 100000 * 0.075 + (i - 200000)*0.05; printf("%d\n", a); break;
	case 5: a = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + (i - 400000)*0.03; printf("%d\n", a); break;
	case 6: a = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + (i - 400000)*0.03; printf("%d\n", a); break;
	case 7: a = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 400000 * 0.03 + (i - 600000)*0.015; printf("%d\n", a); break;
	case 8: a = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 400000 * 0.03 + (i - 600000)*0.015; printf("%d\n", a); break;
	case 9: a = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 400000 * 0.03 + (i - 600000)*0.015; printf("%d\n", a); break;
	case 10: a = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 400000 * 0.03 + (i - 600000)*0.015; printf("%d\n", a); break;
	case 11: a = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 400000 * 0.03 + 600000 * 0.015 + (i - 1000000)*0.01; printf("%d\n", a); break;
	default: printf("error"); break;
	}
	
	system("pause");
	return 0;


}*/


/*
int main(){
	int x, y, z;
	int t;
	printf("输入3个数: ");
	scanf("%d%d%d",&x,&y,&z);
	if (x > y){
		t = x;
		x = y;
		y = t;
	}
	if (x > z){
		t = x;
		x = z;
		z = t;
	}
	if (y > z){
		t = y;
		y = z;
		z = t;
	}
	printf("从小到大排序为: %d  %d  %d\n", x, y, z);
	system("pause");
	return 0;
}
*/






/*
int main(){


		char a = 176, b = 219;
		printf("%c%c%c%c%c\n", b, a, a, a, b);
		printf("%c%c%c%c%c\n", a, b, a, b, a);
		printf("%c%c%c%c%c\n", a, a, b, a, a);
		printf("%c%c%c%c%c\n", a, b, a, b, a);
		printf("%c%c%c%c%c\n", b, a, a, a, b);
		system("pause");
		return 0;
	





}
*/

/*
int main(){

	int i, j;
	for (i = 9; i>=1; i--){
		for (j = 1; j <= i; j++){
			printf("%d*%d=%-2d  ", j, i, i*j);
		}
		printf("\n");
	}
	system("pause");
	return 0;

}*/



//古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，
//假如兔子都不死，问每个月的兔子总数为多少？（输出前40个月即可).
 // 1 1 2 3 5 
/*
int main(){
	int i, j = 1, k = 1;
	for (i = 1; i <=20; i++){
		printf("%-12d%-12d", j, k);
		if (i % 2 == 0) printf("\n");
		j = j + k;
		k = j + k;
	}
	system("pause");
	return 0;
}*/


//判断101到200之间的素数。
/*#include<math.h>
int main(){
	int i, j, k,sum=0;
	for (i = 101; i <= 200;i++){
		k = sqrt(i);
		for (j = 2; j <= k; j++){
			if (i%j == 0) break;
			else printf("%d  ", i);
			sum++;
			break;

		}
		if (sum % 4 == 0)
			printf("\n");
	}



	system("pause");
	return 0;


}*/
//打印出所有的"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该数 本身。
//例如：153是一个"水仙花数"，因为153 = 1的三次方＋5的三次方＋3的三次方
/*

int main(){
	int i, j, l, k;
	for (i = 101; i < 1000; i++){
		j = i / 100;
		k = (i / 10) % 10;
		l = i - (j * 100 + k * 10);
		if (i == j*j*j + k*k*k + l*l*l){
			printf("%d\n",i);
			}
		}
	system("pause");
	return 0;

}*/

//将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5。
/*
int main(){
	int n, i;
	printf("请输入整数：");
	scanf("%d", &n);
	printf("%d=", n);
	for (i = 2; i <= n; i++)
	{
		while (n%i == 0)
		{
			printf("%d", i);
			n /= i;
			if (n != 1) printf("*");
		}
	}

	printf("\n");
	system("pause");
	return 0;
}
*/



//利用条件运算符的嵌套来完成此题：学习成绩 >= 90分的同学用A表示，60 - 89分之间的用B表示，60分以下的用C表示。

//程序分析：(a>b) ? a : b这是条件运算符的基本例子。
/*
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
*/
/*
int main(){
	int a,b,c;
	
	printf("input two number: ");
	scanf("%d%d", &a, &b);
	c = a*b;
	while (a != b){
	if (a > b){
		a = a - b;
}
	else b = b - a;
}
	printf("%d  %d\n", a, c / b);
	system("pause");
	return 0;
}*/


//输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
/*
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
}*/

/*
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

}*/



//一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？
/*
int main(){
	float high=100,hh,k=1,sum=0;
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

	printf("%f %f",hh,sum);
	system("pause");
	return 0;
}*/



//猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，还不瘾，又多吃了一个
//第二天早上又将剩下的桃子吃掉一半，又多吃了一个。以后每天早上都吃了前一天剩下
//的一半零一个。到第10天早上想再吃时，见只剩下一个桃子了。求第一天共摘了多少。
/*
int main(){
	int i = 1, j = 1;
	while (i < 10){
		j = 2 * (j + 1);
		i++;

	}
	printf("%d",j);
	system("pause");
	return 0;
}
/*


/*
打印出如下图案（菱形）。

   *
  ***
 *****
*******
 *****
  ***
   *
int main(){
	int i, j, k;
	for (i = 1; i <= 4; i++){
		for (j = i; j <= 3; j++){
			printf(" ");
		}
		for (k = 1; k <= 2*i -1; k++){
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
*/
//这里
/*
//有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。

int main(){
	float i, sum = 0, t;
	float a = 2, b = 1;
	for (i = 1; i <= 20; i++){
		sum += a / b;
		t = a;
		a = a + b;
		b = t;
	}
	printf("%9.6f\n", sum);
	system("pause");
	return 0;
}
*/

/*
//求1+2!+3!+...+20!的和。

int main(){
	int i, j;
	double  sum, z;
	sum = 0, z = 1;
	for (i = 1; i < 21; i++){
		z = 1;
		for (j= 1; j <= i; j++){
			 z = z * j;
		}
		sum = sum + z;
	}



	printf("%f\n",sum);
   system("pause");
	return 0;

}
*/


/*
//利用递归方法求5!。
int size(int z){
	if (z == 0){
		return 1;
	}
	else{
		return z =z * size(z - 1);
	}
	return z;

}

int main(){
	int size(int);
	int i;
	for (i = 1; i <= 5; i++){
		printf("%d!=%d",i,size(i));
		printf("\n");

	}
	system("pause");
	return 0;

}
*/


//一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同


/*
int main(){
	int i, j, k, l, m, n;
	printf("请输入一个五位数: ");
	scanf("%d", &i);
	j = i / 10000;  //万位
	k = i / 1000 % 10;  //千位
	l = i / 100 % 100 % 10;   //百位
	n = i / 10 % 1000 % 100 % 10;   // 十位
	m = i % 10;    //个位
	if (m == j && n == k){
		printf("这个数为回文数");
		printf("%d\n", i);
	}
	else
		printf("这个数不是回文数\n");


	system("pause");
	return 0;
}
*/

// 有5个人坐在一起，问第五个人多少岁？他说比第4个人大2岁。问第4个人岁数，他说比第3个人大2岁。问第三个人，又说比第2人大两岁。
//问第2个人，说比第一个人大两岁。最后问第一个人，他说是10岁。请问第五个人多大？
/*
int age(int a){
	int c;
	if (a == 1){
		return c=  10;
	}
	if (a > 1){
		return c= age(a - 1) + 2;
	}
}

int main(){
	int b;
	printf("输入要求的第几人: ");
	scanf("%d", &b);
	printf("年龄为%d", age(b));

	system("pause");
	return 0;
}*/


// 青蛙跳n级变态台阶算法
/*
     int c;
int qq(int b){

	if (b == 1){
		return c = 1;
	}
	if (b > 1){
		return c = qq(b - 1) * 2;
	}
	return c;
}

int main(){
	int x;
	printf("你的青蛙要跳哪级台阶: ");
	scanf("%d", &x);
	printf("跳%d的台阶有%d种方法:\n", x, qq(x));

	system("pause");
	return 0;
}*/
/*
#include<math.h>
int main(){
	int x, i;
	printf("请输入一个数:");
	scanf("%d", &x);
	for (i = 2; i <= sqrt(x); i++){
		if (x%i == 0){
			break;
		}
	}
	if ( i<= sqrt(x)){
		printf("%d不是素数\n",x);
	}
	else
		printf("%d是素数\n",x);
	
	system("pause");
	return 0;
}*/


/*
	void hello_world()
	{
		printf("Hello, world!\n");
	}
	void three_hellos()
	{
		int counter;
		for (counter = 1; counter <= 3; counter++)
			hello_world();//调用此函数
	}
	int main(void)
	{
		three_hellos();//调用此函数

	system("pause");
	return 0;

}*/
//字符串反转，如将字符串 "www.runoob.com" 反转为 "moc.boonur.www"。
/*
void reverse(char *a){
	char *b = a;
	int len = 0;
	while (*b != 0){
		b++;
		len++;
	}

	int i = 0;
	char c;
	while (i <= len / 2 - 1){
		c = *(a + i);
		*(a + i) = *(a + len - 1 - i);
		*(a + len - 1 - i) = c;
		i++;
	}


}


int main(){
	char str[] = "www.runoob.com";
	printf("%s\n", str);
	reverse(str);
	printf("反转后%s\n",str);
	system("pause");
	return 0;




}
*/

/*编码完成下面的处理函数，函数将字符串中的字符’*’移到字符串的前部分，
前面的非’*’字符后移，但是不能改变非’*’字符的先后顺序, 函数返回字符串中非’*’字符的数量。
例如：原始串为Hel**l**o**bi*ter, 处理后为*******Hellobiter函数返回10.
函数原型：void MoveStr(char *str)；*/
/*
#include<stdlib.h>
#include<string.h>
void MoveStr(char *str){
	char *a;
	char *b;
	a = str;
	b = str;
	int i;
	int c = 0;
	char d = 0;
	while (*a != 0){
		while (*a = '*'){
			a++;
			b++;
		}
		while (*b != '0'&& *b != '*'){
			b++;
		}
		if (*b != 0){
			c = b - a;
			for (i = 0; i < c; i++){
				d = *(b - i);
				*(b - i) = *(b - i - 1);
				*(b - i - 1) = d;
			}
			a++;
		}

	}


}

int main(){
	void MoveStr(char *str);
	char str[30] = "Hel**l**o**bi*ter";
     MoveStr(str);
	 printf("%s",str);
	system("pause");
	return 0;
}
*/


//int main(){
//	int i, j, k;
//	printf("请输入俩个数: ");
//	scanf("%d %d", &i, &j);
//	printf("交换前\n");
//	printf("%d %d\n", i, j);
//	k = i;
//	i = j;
//	j = k;
//	printf("交换后\n");
//	printf("%d %d\n", i, j);
//	system("pause");
//	return 0;
//
//}


//int main(){
//	int i, j;
//		printf("请输入俩个数: ");
//		scanf("%d %d", &i, &j);
//		printf("交换前\n");
//		printf("%d %d\n", i, j); // a = 2; b =7;
//		i = i + j;   // a = a ^ b;   a 0010 b 0111    a ^ b = 0101;  ^ 是异或   
//		j = i - j;   // b = a ^ b;
//		i = i - j;   //  a = a ^ b;
//		printf("交换后\n");
//		printf("%d %d\n", i, j);
//		system("pause");
//		return 0;
//}



//int main(){
//	int i, max;
//	int a[10];
//	printf("请输入10个数: \n");
//	for (i = 0; i < 10; i++){
//		scanf("%d", &a[i]);
//	}
//    max = a[0];
//	for (i = 1; i < 10; i++){
//		if (a[i] > max){
//			max = a[i];
//		}
//	}
//	printf("max = %d\n", j);
//	system("pause");
//	return 0;
//}


//
//int main(){
//	int i, j, k, z;
//	printf("请输入3个数\n");
//	scanf("%d %d %d", &i, &j, &z);
//	if (i < j){
//		k = i;
//		i = j;
//		j = k;
//	}
//	if (i < z){
//		k = i;
//		i = z;
//		z = k;
//	}
//	if (j < z){
//		k = j;
//		j = z;
//		z = k;
//	}
//	printf("%d %d %d", i, j, z);
//	system("pause");
//	return 0;
//}



//int main(){
//	int m, n;
//	int c = 0;
//	printf("input 2 number\n");
//	scanf("%d %d", &m, &n);
//	printf("俩个数最大公约数为%d： \n", gg(m, n));
//	system("pause");
//	return 0;
//}
//int gg(int a, int  b){         // int c  // c是余数 
//	while (a != b){              // while(a%b != 0){                            
//		if (a > b){              //    c = a % b;
//			a = a - b;            //   a = b;
//		}                        //    b = c;}
//		else{                    //  return a;
//			b = b - a;
//     }
//		return a;
//
//	}
//}




//int main(){
//	int a[10], b[10];
//	int i, j = 0;
//	printf("请输入一个数组的值\n");
//	for (i = 0; i < 10; i++){
//		scanf("%d", &a[i]);
//	}
//	printf("请输入另一个数组的值\n");
//	for (i = 0; i < 10; i++){
//		scanf("%d", &b[i]);
//	}
//	for (i = 0; i < 10; i++){
//		j = a[i];
//		a[i] = b[i];
//		b[i] = j;
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 10; i++){
//		printf("%d ", b[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}




//int main(){
//	int num = 1;
//	int count = 0;
//	while (num <= 100){
//		if (num % 10 == 9){
//			count++;
//			num++;
//		}
//		if (num / 10 == 9){
//          count++
//			num++;
//		}
//
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}




//int main(){
//	double sum = 0.0;
//	int i;
//	int b = 1;
//	for (i = 1; i <= 100; i++){
//		sum = sum + (1.0 * b) / i;
//		b = -b;
//	}
//	printf("%f\n", sum);
//	system("pause");
//	return 0;
//}



/*
int main(){
	int i, j, k;
	for ( i = 1; i <= 7; i++){
		for(k = 1; k <= 7 - i; k++){
			printf(" ");
		}
		for ( j = 1; j <= 2*i - 1; ++j){
			printf("*");
		}
		printf("\n");
	}
	for ( i = 1; i <= 6; i++){
		for ( j = 1; j <= i; ++j){
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
*/





//void Daffodil(int n){
//	int bits, ten, hundred;  //个位， 十位， 百位
//	bits = n % 100 % 10;
//	ten = n / 10 % 10;
//	hundred = n / 100;
//	if (n == bits*bits*bits + ten*ten*ten + hundred*hundred*hundred){
//		printf("%d = %d^3 + %d^3 + %d^3 \n", n, hundred, ten, bits);
//	}
//}
//int main(){
//	for (int i = 0; i <= 999; i++){
//		Daffodil(i);
//	}
//	system("pause");
//	return 0;
//
//}
//
//
//
//int main(){
//	int a = 1, b, sum = 0;
//	int i = 1;
//	printf("请输入你想要的数字:");
//	scanf("%d", &a);
//	b = a;
//	while (i <= 5){
//		sum = sum + a;
//		a = a * 10 + b;
//		i++;
//	}
//	printf("%d\n",sum);
//	system("pause");
//	return 0;
//}

//#include<stdlib.h>
//#include<time.h>
//
//void  put(){
//	printf("********************************************\n");
//	printf(" 1. 开始游戏\n");
//    printf(" 2. 游戏结束\n");
//	printf("********************************************\n");
//}
//void game(){
//	int count = 0;
//	int i = 1;
//	srand((unsigned)time(0));
//	int random = rand() % 100 + 1;
//	while (1){
//	printf("请输入一个数字\n");
//		scanf("%d", &i);
//		if (i > random){
//			printf("高了,应该在(1 ~ %d)之间\n", i);
//			count++;
//		}
//		else if (i < random){
//			printf("低了,应该在(%d ~ 100)之间\n", i);
//			count++;
//		}
//		else if (i == random){
//			printf("猜对了\n");
//			count++;
//			printf("共猜了%d次\n", count);
//			break;
//		}
//	}
//}
//int main(){
//	put();
//	int choice = 1;
//	while (1){
//		printf("请选择\n");
//		scanf("%d", &choice);
//		if (choice == 1){
//			game();
//		}
//		else if (choice == 2){
//			printf("游戏结束\n");
//			break;
//		}
//		else{
//			printf("你的输入有误,请重输 \n");
//		}
//	}
//	system("pause");
//	return 0;
//}
//
//
//
//
//
//
//
//
//
//#include<string.h>
//
//int main(){
//	char str1[] = {"123456"};
//	char str[] = {""};
//	int i = 3;
//	while(i > 0){
//		printf("请输入密码:  ");
//	    scanf("%s", str);
//		if (strcmp(str, str1) == 0){
//			printf("密码正确\n");
//			break;
//		}
//		else{
//			--i;
//			printf("请重新输入，你还有%d机会\n", i);
//		}
//
//	}
//	system("pause");
//	return 0;
//}
//
//
//
//
//int main(){
//	char c;
//	printf("请输入字符:  \n");
//	while ((c = getchar()) != '\n'){
//		if (c >= 'a' && c <= 'z'){
//			printf("%c", c - 32);
//		}
//		else if (c >= 'A' && c <= 'Z'){
//			printf("%c", c + 32);
//		}
//		else if (c >= 0 && c <= 9){
//			;
//		}
//		else {
//			;
//		}
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}


//int main(){
//	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int len = sizeof(a) / sizeof(a[0]);
//	int right = len - 1;
//	int left = 0;
//	int number, mid;
//	printf("请输入你想要的数字: ");
//	scanf("%d", &number);
//	while (left <= right){
//		mid = (left + right) / 2;
//		if (number > a[mid]){
//			left = mid + 1;
//		}
//		else if (number < a[mid]){
//			right = mid - 1;
//		}
//		else{
//			printf("查到了, %d 的下标为%d \n", a[mid], mid);
//			break;
//		}
//
//	}
//	if (left > right){
//		printf("无这个值的下标");
//	}
//	system("pause");
//	return 0;
//}

//void Multiplication_table(int n){
//	int i, j;
//	for (i = 1; i <= n; i++){
//		for (j = 1; j <= i; j++){
//			printf("%d*%d=%-2d ", j, i, j*i);
//		}
//		printf("\n");
//	}
//}
//
//int main(){
//	int number;
//	printf("请输入你想输出的乘法口诀表的数: ");
//	scanf("%d", &number);
//	Multiplication_table(number);
//	system("pause");
//	return 0;
//}
//
//void swap(int* a, int* b){
//	int temp = 1;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//
//int main(){
//	int a = 10;
//	int b = 20;
//	printf("a = %d\nb = %d\n", a, b);
//	printf("交换后\n");
//	swap(&a, &b);
//	printf("a = %d\nb = %d\n", a, b);
//	system("pause");
//	return 0;
//}
//
//
//void leap_year(int year){
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
//		printf("%d是闰年\n", year);
//	}
//	else{
//		printf("%d不是闰年\n", year);
//	}
//
//}
//
//int main(){
//	int year;
//	printf("输出你要判断的年份：");
//	scanf("%d", &year);
//	leap_year(year);
//	system("pause");
//	return 0;
//}
//
//
//#include<math.h>
//
//void prime_number(int number){
//	int i = 1;
//	for (i = 2; i <= sqrt(number); i++){
//		if (number % i == 0){
//			printf("%d不是素数\n", number);
//			break;
//		}
//	}
//	if (i > sqrt(number)){
//		printf("%d是素数\n", number);
//
//	}
//
//}
//
//
//int main(){
//	int number;
//	printf("请输入你要判断的数字： ");
//	scanf("%d", &number);
//	prime_number(number);
//
//	system("pause");
//	return 0;
//}
//
////但是，如果是通过传递数组名参数到子函数中，上边的方法获取数组长度是不可行的 简单的说在函数中无法用sizeof（）去求数组长度去返回主函数。
//void init(int arr[], int length){
//	for (int i = 0; i < length; i++){
//		scanf("%d", &arr[i]);
//	}
//}
//void empty(int arr[], int length){
//	for (int i = 0; i < length; i++){
//		arr[i] = 0;
//	}
//}
//void reverse(int arr[], int length){
//	int temp = 1;
//	for (int i = 0; i <= (length / 2) - 1; i++){
//		temp = arr[i];
//		arr[i] = arr[length - i - 1];
//		arr[length - i - 1] = temp;
//	}
//}
//
//int main(){
//	int arr[10];
//	int length = sizeof(arr) / sizeof(arr[0]);
//	init(arr, length);
//	reverse(arr, length);
//	printf("数组反转\n");
//	for (int i = 0; i < length; i++){
//		printf("%d\n", arr[i]);
//	}
//	empty(arr, length);
//	printf("清空数组\n");
//	for (int i = 0; i < length; i++){
//		printf("%d\n", arr[i]);
//	}
//	system("pause");
//	return 0;
//}

//1.编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值value的二进制位模式从左到右翻转后的值。
//
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832
//
//unsigned int reverse_bit(unsigned int value){
//	unsigned int tmp, sum = 0;
//	for (int i = 0; i < 32; i++, value /= 2){
//		tmp = value % 2;
//		sum = sum * 2 + tmp;
//	}
//	return sum;
//}
//int main(){
//	printf("%u\n", reverse_bit(25));
//	system("pause");
//	return 0;
//}
//
//2.不使用（a + b） / 2这种方式，求两个数的平均值。
//int average(int *a,int *b){
//	*a = *a ^ *b;
//	*b = *a ^ *b;
//	*a = *a ^ *b;
//	printf("%d %d", *a, *b);
//}
//int main(){
//	int a, b;
//	scanf("%d%d", &a, &b);
//	average(&a, &b);
//	system("pause");
//	return 0;
//}
//
//3.编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
//
//int main(){
//	int a[10] = { 5, 1, 1, 2, 3, 3, 2, 4, 4 };
//	int temp = 0;
//	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++){
//		temp ^= a[i];
//	}
//	printf("%d\n", temp);
//	system("pause");
//	return 0;
//}
//有一个字符数组的内容为:"student a am i",
//	请你将数组的内容改为"i am a student".
//	要求：
//	不能使用库函数。
//	只能开辟有限个空间（空间个数和字符串的长度无关）。
//
//	student a am i
//	i ma a tneduts
//	i am a student
//
//
//void reverse(char *left, char *right){
//	char temp;
//	while (left < right){
//		temp = *right;
//		*right = *left;
//		*left = temp;
//		left++;
//		right--;
//	}
//}
//void reverse_str(char arr[], int sz)
//{
//	char *left = arr;
//	char *right = arr + sz - 1;
//	char *start = arr;
//	char *end = arr;
//	reverse(left, right);
//	printf("%s\n", arr);
//	while (*end != '\0')
//	{
//		while ((*end != ' ') && (*end != '\0'))
//		{
//			end++;
//		}
//		reverse(start, end - 1);
//		if (*end != '\0')
//		{
//			start = end + 1;
//			end = start;
//		}
//	}
//}
//int main()
//{
//	char arr[] = "student a am i";
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	reverse_str(arr, sz);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}


//调整数组使奇数全部都位于偶数前面。
//
//题目：
//
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。

//void Sort(int num[], int len) {
//	for (int i = 0; i < len - 1; ++i) {
//		for (int j = 0; j < len - i - 1; ++j) {
//			if (num[j] % 2 == 0 && num[j + 1] % 2 != 0) {
//				int tmp = num[j];
//				num[j] = num[j + 1];
//				num[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main() {
//	int num[] = { 1, 2, 3, 4, 5, 6, 7,  8, 9 };
//	Sort(num, sizeof(num) / sizeof(int));
//	for (int i = 0; i < sizeof(num) / sizeof(int); ++i) {
//		printf("%d ", num[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}

//杨氏矩阵
//int Reseach_sou(int arr[][3], int row, int col, int key)
//{
//	int i = 0;
//	int j = col - 1;
//	//从第一行,最后一列开始寻找
//	while ((j >= 0) && (i <= 2))
//	{
//		if (arr[i][j] == key){
//			return 1;
//		}
//		else if (arr[i][j] < key){
//			i++;
//		}
//		else{
//			j--;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[][3] = { 1, 2, 3, 2, 3, 4, 3, 4, 5 };
//	int key = 0;
//	int row = 3;
//	int col = 3;
//	printf("输入你要找的数字:");
//	scanf("%d", &key);
//	if (Reseach_sou(arr, row, col, key)){
//		printf("找到了\n");
//	}
//	else{
//		printf("没有找到\n");
//	}
//	system("pause");
//	return 0;
//}


//实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//void reverse(char arr[], int k){
//	int sz = strlen(arr);
//	char temp;
//	for (int i = 0; i < k; i++){
//		temp = arr[0];
//		for (int j = 0; j < sz - 1 ; j++){
//			arr[j] = arr[j + 1];
//		}
//		arr[sz - 1] = temp;
//	}
//}
//
//int main(){
//	char arr[] = "ABCD";
//	int k;
//	printf("请输入你要左旋字符个数 : ");
//	scanf("%d", &k);
//	reverse(arr, k);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
//
//int reverse(char arr[], char arr1[]){
//	int sz = strlen(arr);
//	char temp;
//	for (int i = 0; i < sz - 1; i++){
//		temp = arr[0];
//		for (int j = 0; j < sz - 1; j++){
//			arr[j] = arr[j + 1];
//		}
//		arr[sz - 1] = temp;
//		if (!strcmp(arr, arr1)){
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main(){
//	char arr[] = "AABCD";
//	char arr1[] = "BCDAA";
//	printf("%d\n", reverse(arr, arr1));
//
//	system("pause");
//	return 0;
//}

//判断任意整数是否为回文数 也就是数倒序是否与正着来一样
//int main(){
//	int num, dnum = 0, now, now1;
//	printf("请输入整数:");
//	scanf("%d", &num);
//	now = num;
//	while (num != 0){
//		now1 = num % 10;
//		dnum = 10 * dnum  + now1;
//		num = num / 10;
//	}
//	if (now == dnum){
//		printf("是回文数\n");
//
//	}
//	else{
//		printf("不是回文数\n");
//	}
//
//	system("pause");
//	return 0;
//	
//}