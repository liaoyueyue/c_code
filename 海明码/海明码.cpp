#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>//����system����
#include <malloc.h>
#include <math.h>
#include <dos.h>//ע��pow(double,int)������pow(int,int)
#define M 100 //��������λ��
#define N 50//����У��λ��

struct Hamming {
	int flag;
	int value;//���������ֵ
}H[M];//��ź�������Ϣ

int P[N];//���У��λ��Ϣ
int C[N];//��ż���λ��Ϣ
int m[M + N];//�����Ҫ�����ĺ�����
int DC = 0, PC = 0, EC = 0, HC = 0, ERROR = 0, ERROR1 = 0;//DC�����ݵ�λ��,PC��У��λ��λ��,�����ڴ˸�����Щ���ݵ�ֵ���������

void showInf() {//��ʾ��Ϣ
	printf("-------------------------------------------------------------------------------\n");
	printf("*****************************************������********************************\n");
	printf("***************************************�����ʽ����:***************************\n");
	printf("*****************************���Ҫ����1101�������� 1 1 0 1 -1******************\n");
	printf("**************�������� 1 1 0 1 -1�Ĺ����У����ܻ���ɾ��������ᷢ������*********\n");
	printf("-----------------------------ѡ�������----------------------------------------\n");
	printf("1 �������ݺ����ɺ����� 2 ���뺣����  3 ����  4 ���������� 5 ������ҳ 6 ��������\n\n");
	printf("��ѡ�����,ֻ������һ����: ");
}

int inputData(int choice) {//�������ݻ����룬������1�ͱ�ʾ����������ݣ�������2�ͱ�ʾ������Ǻ����롣����-1�ͱ�ʾ�������ݴ���
	int data, i = 1;
	scanf("%d", &data);
	if (data != 0 && data != 1) {
		system("cls");
		printf("\n\n��ʾ��Ϣ:�����ʽ����ȷ,��һλֻ����0��1,������ѡ�����\n\n\n");
		return -1;
	}
	DC = 1;
	PC = 1;
	while (data != -1) {
		if (pow(2.0, PC - 1) != i) {//�������ֵ��������ṹ����
			H[i].flag = 0;//����λ��λ�ñ��Ϊ0
			H[i].value = data;
			m[i] = data;
			DC++;
			scanf("%d", &data);
		}
		else if (pow(2.0, PC - 1) == i && choice == 1) {//����У��λ
			H[i].flag = 1;//У��λ��λ�ñ��Ϊ1
			PC++;
		}
		if ((pow(2.0, PC - 1) == i) && choice == 2) {//�Ѻ������е�У��λ�ŵ�У��λ�����У��Ա������У��λ�������������ɵ�У��λ�����������һλ����
			H[i].flag = 1;
			P[PC++] = data;
			m[i] = data;
			scanf("%d", &data);
		}
		i++;
	}
	//�ۼƴ����Ƕ����һ�Σ���������
	DC--;
	PC--;
	if (PC + DC < 3)
		ERROR = 2;
	return 0;
}

void caculateHammingCode() {//���ݺ�����ṹ��������λ������ֵ���㺣���룬������ȷ�ĺ�����ŵ�������ṹ���С�
	int m, j, k, temp = 0;
	for (m = 3; m <= DC + PC; m++) {
		temp = 0;
		if (H[m].flag == 0) {//����λ
			for (j = PC; j >= 1; j--) {
				k = (int)pow(2.0, j - 1);
				if (k < m) {
					H[k].value = H[k].value ^ H[m].value;
					temp = k;
					break;
				}
			}
			for (k = j - 1; k >= 1; k--) {
				if (H[k].flag == 1) {//У��λ
					if (temp + pow(2.0, k - 1) == m) {
						H[k].value = H[k].value ^ H[m].value;
						break;
					}
					if (temp + pow(2.0, k - 1) < m) {
						H[k].value = H[k].value ^ H[m].value;
						temp = temp + pow(2.0, k - 1);
					}
				}
			}
		}
	}
}

void caculateC(int pc) {//�������λ��ֵ�����ŵ�����λ�������С����ܵĲ�����У��λ�ĸ���
	int i, k;
	for (i = 1; i <= pc; i++) {
		k = (int)pow(2.0, i - 1);
		C[i] = P[i] ^ H[k].value;
	}
}

void initial() {//ʹ������ṹ������
	int i;
	for (i = 1; i <= DC + PC; i++) {
		H[i].value = 0;
	}
}

void showHammingCode(int dc, int pc) {//��ӡ������ṹ���е�ֵ�����ܵĲ�����dcΪ����λ�ĸ�����pcΪУ��λ�ĸ�����
	int i;
	printf("\n\n���ɵĺ�����Ϊ:\n");
	for (i = 1; i <= dc + pc; i++) {
		printf("��%dλ:", i);
		printf("  %d\n", H[i].value);
	}
	printf("\n");
}
void judge(int pc) {//�жϳ���һλ��������ӡ����һλ������λ����У��λ
	int i, result = 0, flag = 0;
	//system("cls");
	for (i = 1; i <= pc; i++) {
		if (C[i] == 1) flag++;

	}
	for (i = 1; i <= pc; i++) {
		if (flag == 0)
			result = result + C[i] * pow(2.0, pc - i);
		else result = result + C[i] * pow(2.0, i - 1);
	}
	if (result != 0) {
		printf("\n\n\n��ʾ��Ϣ:��%dλ����,", result);
		EC = result;
		if (flag >= 2)
			printf(" ��һλ������λ!\n\n");
		else printf(" ��һλ��У��λ!\n\n");
	}
	else printf("\n\n��ʾ��Ϣ:��������ȷ!\n\n\n");
}
void mend(int mc) {//��������ĺ����롣����ӡ������ǰ����ĺ�����;�������ȷ�ĺ�����
	int i, k = 0, p = 1;
	if (EC == 0) {
		printf("\n\n��ʾ��Ϣ:��������ȷ�����Ѿ��������ߺ�����Ϊ��,������ѡ�����\n\n\n");
		return;
	}
	system("cls");
	printf("\n��ʾ��Ϣ:�������%dλ�д���\n\n", EC);
	printf("\n����Ĵ���ĺ�������:\n\n");
	for (i = 1; i <= mc; i++)
		printf("��%dλ%d\n", i, m[i]);
	m[EC] = !m[EC];
	printf("\n\n���������ȷ�ĺ�������:\n\n");
	for (i = 1; i <= mc; i++)
		printf("��%dλ%d\n", i, m[i]);
}

void run(int command) {//���в�ͬ�Ĳ���ģʽ��commandΪ1��ʾ���������λ��commandΪ2��ʾ������Ǻ�����
	int i;
	if (command == 1) {//�����������
		printf("\n\n����������,��-1����������");
		i = inputData(1);//�������������λ��
		if (i == -1) return;
		caculateHammingCode();
		showHammingCode(DC, PC);
		initial();
		HC = PC + DC;
		DC = 0;
		PC = 0;
	}
	else {//������Ǻ�����
		printf("\n\n�����뺣����,��-1��������,ֻ����һλ����:");
		i = inputData(2);
		if (i == -1) return;
		caculateHammingCode();
		if (ERROR == 1 || ERROR == 2) {
			system("cls");
			printf("\n\n��ʾ��Ϣ:�����ʽ����ȷ,��һλֻ����0��1,���������λ��Ҫ���ڵ���3.����ѡ����\n\n\n");
			ERROR = 0;
			PC = 0;
			return;
		}
		caculateC(PC);
		judge(PC);
		initial();
		HC = PC + DC;
		PC = 0;
		DC = 0;
	}
}
void main() {
	int function, flag = 1, command, md = 0, back = 0;
	showInf();
	scanf("%d", &function);
	while (flag) {
		switch (function) {
		case 1: command = 1;
			run(command);//��������
			md = 0;
			break;
		case 2: command = 2;//���뺣����
			run(command);
			md = 1;
			break;
		case 3: system("cls");//����
			break;
		case 4:system("cls");
			if (md == 1)//����������
				mend(HC);
			else printf("\n\n��ʾ��Ϣ:����û�����뺣�����������ĺ������Ѿ���������.\n\n\n");
			md = 0;
			EC = 0;
			break;
		case 5: system("cls");//������ҳ
			back = 1;
			break;
		case 6:exit(1);//�˳�
		default: system("cls");
			printf("\n\n\n��ʾ��Ϣ:��������ȷ��������ѡ��!\n\n");
			break;
		}
		if (back == 1) {
			showInf();
			back = 0;
		}
		else {
			printf("\n1 �������ݺ����ɺ����� 2 ���뺣����  3 ����  4 ���������� 5 ������ҳ 6 ��������\n\n");
			printf("��ѡ�����,ֻ������һ����: ");
		}
		scanf("%d", &function);
	}
}
