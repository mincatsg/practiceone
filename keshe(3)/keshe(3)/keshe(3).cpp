#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define flowercost 2                //���ļ۸�
#define vasecost 5                  //��ƿ�ļ۸�
int huapingmultiple = 0;                 //�������Ż�����
int huamultiple = 0;                      //��ƿ�����Ż�����
void print(int number[99][99], int flower, int vase){
	for (int i = 0; i < flower; ++i){
		for (int j = 0; j < vase; ++j){
			printf(" %d\t", number[i][j]);
		}
		printf("\n");
	}



}     //��ӡ��񣬲���ʹ��
int min(int a, int b){
	if (a < b){ return a; }
	else{ return b; }
	return a;

}   //�ȽϺ���
void initflower(int number[99][99], int flowernum, int flowerprice){

	int a = 0;
	int b = 0;

	for (int j = 1; j < 99; ++j){
		if (j >= flowernum){
			a = j % flowernum;
			b = (j - a) / flowernum;
			number[j][0] = b * flowerprice + a * flowercost;

		}
		else{ number[j][0] = flowercost * j; }    //����
	}


}            //��ʼ�������Żݼ۸�
void initvase(int number[99][99], int vasenum, int vaseprice){
	int a = 0;
	int b = 0;
	for (int i = 1; i < 99; ++i){
		if (i >= vasenum){
			a = i % vasenum;
			b = (i - a) / vasenum;
			number[0][i] = b * vaseprice + a*vasecost;

		}
		else{ number[0][i] = vasecost * i; }  //��ƿ
	}




}  //��ʼ����ƿ���Żݼ۸�
void initmix(int number[99][99], int x, int y, int z, int flower){

	for (int i = 1; i <= flower; ++i){
		number[i*x][i*y] = i*z;
	}
}   //����ֵ
void initdigui(int number[99][99],int flower,int vase,int huadiscount,int vasediscount){
	for (int i = 1; i <= flower; i++){
		for (int j = 1; j <= vase; j++){
			if (number[i][j] != 0){
				if (huapingmultiple != 0)
				for (int x = 1; x <= vase; x++)
					number[i][j + x*huapingmultiple] = number[i][j] + x*vasediscount;
				if (huamultiple != 0)
				for (int y = 1; y <= flower; y++)
					number[i + y*huamultiple][j] = number[i][j] + y*huadiscount;
				
			}
            if (huadiscount != 0 &&vasediscount != 0)  //�����������������ɴ���Ի����Żݷ��������ɴ���Ի�ƿ���Żݷ���
					number[i*huamultiple][j*huapingmultiple] = i*huadiscount + j*vasediscount;


			}
		}
	}


  //������
void judge(int number[99][99]){
	for (int i = 1; i < 99; ++i){
		for (int j = 1; j < 99; ++j){
			if (number[i][j] == 0){
				number[i][j] = min(number[i][j - 1] + vasecost, number[i - 1][j] + flowercost);
			}
			else { continue; }


		}
	}



}	//�Ƴ�����ֵ
int main(){
	int flower = 0;          //�û���Ҫ�Ļ���
	int vase = 0;             //�û���Ҫ�Ļ�ƿ��
	int number[99][99] = { { 0 } };    //��ʼ�����
	int a = 0;
	int b = 0;
	int c = 0;
	int huadiscount = 0;               //�������Żݼ۸�	
	int vasediscount = 0;              //��ƿ�����Żݼ۸�
	printf("��������Ҫ�Ļ� ��ƿ��������������С��99��\n");
	scanf("%d %d", &flower, &vase);
		for (int i = 0; i < 99; i++){                        //��ʼ��û�ŻݵĻ��ļ۸�
			number[i][0] = 2 * i;
		}

		for (int j = 0; j < 99; j++){                        //��ʼ��û�ŻݵĻ�ƿ�۸�
			number[0][j] = 5 * j;
		}




	while (1){                   //ѭ����������
		printf("�����뻨 ��ƿ�Żݵ����ߣ�������  ��ƿ���� �۸�\n");
		scanf("%d %d %d", &a, &b, &c);

		if (a !=0 && b == 0){
			initflower(number, a, c);
			huamultiple = a;
			huadiscount = c;
			//print(number, flower, vase);
		}
		
		else if (a == 0 && b !=0 )
		{
			initvase(number, b, c);
			huapingmultiple = b;
			vasediscount = c;
			//print(number, flower, vase);
		}
		else if (a != 0 && b != 0){

			initmix(number, a, b, c, flower);//��ʼ������ֵ
			//print(number, flower, vase);
			initdigui(number, flower, vase,huadiscount,vasediscount);
			//print(number, flower, vase);
		}
		else if (a == 0 && b == 0 && c == 0){
		break;}
	}
	   
	judge(number);   //�Ƚ������б�
	print(number, flower, vase);


	printf("��ͼ۸�Ϊ��%d\n", number[flower][vase]);
	system("pause");
	return 0;

}




