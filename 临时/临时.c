#define _CRT_SECURE_NO_WARNINGS 1
////#include"stdio.h"
////int main()
////{
//	//int a;
//	//printf("������ѧ���ĳɼ����ж��Ƿ�Ϸ�\n");
//	//scanf_s("%d", &a);
//	//	if (a >= 0 && a <= 100)
//	//		printf("��ѧ���ɼ��Ϸ�");
//	//	else
//	//		printf("��ѧ���ɼ����Ϸ�");
//
//	//int a, b, c, max, min;
//	//printf("�����������������������С�������\n");
//	//scanf_s("%d%d%d", &a, &b, &c);
//	//if (a < b)
//	//	max = b, min = a;
//	//else
//	//	max = a, min = b;
//	//if (max < c)
//	//	max = c;
//	//if (min > c)
//	//	min = c;
//	//printf("���ֵΪ%d\n�м�ֵ%d\n��СֵΪ%d\n", max,a+b+c-max-min, min);
//
//	/*int i = 1;
//	while (i <= 1000)
//	{
//		printf("%d\n", i);
//		i++;
//	}*/
//
//	/*int a, b, c, sum,i=1;
//	float avg;
//	while (i <= 4)
//	{
//		printf("�������%dͬѧ�ĸ��Ƴɼ�\n",i);
//		scanf_s("%d%d%d", &a, &b, &c);
//		sum = a + b + c;
//		avg = sum / 3;
//		printf("��ѧ�����ܷ���%d\n��ѧ����ƽ����Ϊ%f\n", sum, avg);
//		i++;
//	}*/
//
//	/*int a=0, i = 1;
//	while (i <= 100)
//	{
//		a += i;
//		i++;
//	}
//	printf("%d", a);*/
//
//
//	//1��ʮ����ת��Ϊ�����ƣ���ͳ�������ֹ�����а�����1��0�͸���
//		//int num10, num2;
//		//int i
//		//printf("������ʮ������:\n");
//		//scanf("%d", num10);
//		//for ()
//		//{
//		//	num10=
//		//}
//	//2��������ת��Ϊ10����
//
//
//
//		//char c;
//		//c = getchar();
//		//while ((c = getchar()) != '?')
//		//	putchar(++c);
//	//int x, y;
//	//for (x = 1; x <= 29; x++)
//	//{
//	//	y = 30 - x;
//	//	if ((2 * x + 4 * y) == 90)
//	//		printf("%d,%d", x, y);
//	//}
//
//	/*int a=1, b=2, t = 0;
//	if (a = 2)t = a, a = b, b = t;
//	printf("%d,%d", a, b);*/
//
//	/*int i, j;
//	for (i = 0, j = 10; i < j; i += 2, j--)
//	{
//		printf("%d;%d\n", i, j);
//	}*/
//
//	/*int i = 0, j = 0, k = 0, m;
//	for(m=0;m<4;m++)
//		switch(m)
//		{
//		case 0:i = m++;
//		case 1:j = m++;
//		case 2:k = m++;
//		case 3:m++;
//		}
//	printf("%d", m);*/
//
//	/*int k, j, m;
//	for (k = 5; k >= 1; k--)
//	{
//		m = 0;
//		for (j = k; j <= 5; j++)
//			m = m + k * j;
//	}
//	printf("%d", m);*/
//
////int k = 1; char ch = 'A';
////do
////{
////	switch (ch++)
////	{
////	case 'A':k++; break;
////	case 'B':k--;
////	case 'C':k+=2; break;
////	case 'D':k %= 2; continue;
////	case 'E':k*=2; break;
////	default:k /= 3;
////	}
////	k++;
////} while (ch <= 'F');
////printf("k=%d\n", k);
//
//
////(14)
////	int s;
////	while ((s = getchar()) != '\n')
////	{
////		switch (s - '2')
////		{
////		case 0:
////		case 1:putchar(s + 4);
////		case 2:putchar(s + 4); break;
////		case 3:putchar(s + 3);
////		default:putchar(s + 2); break;
////		}
////	}
////	printf("\n");
//
//
//	//5.10
//	//int i, n;
//	//float sum=0;
//	//printf("������n��ֵ��");
//	//scanf_s("%d", &n);
//	//for (i = 1; i <= n; i++)
//	//{
//	//	sum += 1.0 / i;
//	//}
//	//printf("%f", sum);
//
//
//	////5.13
//	//int i, j;
//	//float t,sum = 0;
//	//for (i = 1; i <= 20; i++)
//	//{
//	//	t = 1;
//	//	for (j = 1; j <=i; j++)
//	//	{
//	//		t = t * j;
//	//	}
//	//	sum = sum + t;
//	//}
//	//printf("%f", sum);
//	//int i, j, index, temp, a[10];
//	//printf("����10������");
//	//for (i = 0; i < 10; i++)
//	//	scanf_s("%d", &a[i]);
//	//for (i = 0; i < 10 - 1; i++)	//10��Ԫ��ѡ��9��
//	//{
//	//	for (j = i + 1; j < 10; j++)
//	//	{
//	//		if (a[i] > a[j])
//	//		{
//	//			temp = a[i];
//	//			a[i] = a[j];
//	//			a[j] = temp;
//	//		}
//	//	}
//	//}
//	//for (i = 0; i < 10; i++)
//	//	printf("%3d", a[i]);
//
//
//
//	/*int i, j, temp, a[5];
//	for (i = 0; i < 5; i++)
//		scanf_s("%d", &a[i]);
//	for(i=0;i<5-1;i++)
//		for (j = i + 1; j < 5; j++)
//			if (a[i] > a[j])
//			{
//				temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//	for (i = 0; i < 5; i++)
//		printf("%3d", a[i]);*/
//
//
//	/*char str[3][20] = { "C program","VC++6.0","Data structure" };
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 20; j++)
//			printf("%c", str[i][j]);
//		printf("\n");
//	}
//	return 0;*/
//
////#include"stdio.h"
////int main()
////{
////	int i, j, array[4][4];
////	int row = 0, col = 0;
////	for (i = 0; i < 4; i++)
////		for (j = 0; j < 4; j++)
////			array[i][j] = i + j;
////	for (i = 0; i < 4; i++)
////	{
////		for (j = 0; j < 4; j++)
////			printf("%6d", array[i][j]);
////		printf("\n");
////	}
////	for (i = 0; i < 4; i++)
////		for (j = 0; j < 4; j++)
////			if (array[i][j] > array[row][col])
////			{
////				row = i;
////				col = j;
////			}
////	printf("�����ֵ���ڵ��к��зֱ�ΪΪ��%3d%3d\nֵΪ%3d", row + 1, col + 1, array[row][col]);
//
//
//
//
////int a[] = { 1,2,3 };
////int* p, i;
////p = a;
////for (i = 0; i < 3; i++)
////	printf("%d\t%d\t%d\t%d\t\n", a[i], p[i], *(p + i), *(a + i));
//
//
////	return 0;
////}
//
////8.3.3
////void fun(char* str, int i)
////{
////	str[i] = '\0';
////	printf("%s\n", str);
////	if (i > 1)
////		fun(str, i - 1);
////}
////int main()
////{
////char str[] = "abcd";
////fun(str, 4);
////return 0;
////}
//
////8.3.4
////int main()
////{
////	//int a[10], i, * p;
////	//p = a;
////	//for (i = 0; i < 10; i++)
////	//{
////	//	*(p+i) = i;
////	//}
////	//for (i = 0; i < 10; i++)
////	//	printf("%d\n", *(p+i));
////
////
////
////	return 0;




//#include"stdio.h"
////�Ӽ�������һ��ѧ���ĳɼ����ٷ��ƣ�������ɼ�������Χ��������������������ʾ��
////���򣬸����ɼ��ȼ�����ΪA��B��C��D��E,5���ȼ�����
//int cjdjjc()
//{
//	int score;	//�������scoreΪ����
//	printf("input score\n");
//	scanf_s("%d", &score);
//	if (score >= 0 && score <= 100)		//ѧ���ĳɼ����ٷ��ƣ�
//	{
//		switch (score/10)
//		{
//		case 0:
//		case 1:
//		case 2:printf("E"); break;
//		case 3:
//		case 4:printf("D"); break;
//		case 5:
//		case 6:printf("C"); break;
//		case 7:
//		case 8:printf("B"); break;
//		case 9:
//		case 10:printf("A"); break;	//��ΪA��B��C��D��E,5���ȼ�
//		default:printf("error");
//		}
//	}
//	else
//		printf("error");	//�ɼ�������Χ
//	return 0;
//}
//�Ӽ�������һ����ѧ������ʽ�������Ӽ��˳��Լ��ݣ��磺a + b,
//a - b, a* b, a / b, a^ b����Ҫ�����ñ��ʽ��ֵ��������ΪN��nʱֹͣ���㣻
//int jssxysbds()
//{
//	int i;
//	double a, b, c=0;
//	char d;
//	printf("������ʽ��\n");
//	scanf_s("%lf%c%lf", &a,&d,&b);
//	switch (d)
//	{
//	case'+': c = a + b; break;
//	case'-': c = a - b; break;
//	case'*': c = a * b; break;
//	case'^': for (i = b, c = 1; i > 0; i--) c *= a; break;
//	case'/':
//		if (b != 0)
//			c = a / b;
//		else
//			printf("��������Ϊ0");
//		break;
//	}
//	printf("%lf\n", c); 
//	return 0;
//}
//int pymmdw()
//{
//	char c;
//	c = getchar();
//	while (c != '\n')
//	{
//		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
//		{
//			if ((c >= 'v' && c <= 'z') || (c >= 'v' && c <= 'Z'))
//			{
//				c = c - 21;
//			}
//			else
//				c = c + 5;
//		}
//		printf("%c", c);
//		c = getchar();
//	}
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int i;
//	printf("1.�ɼ��ȼ����\n2.������ѧ������ʽ\n3.�����������");
//	printf("��ѡ��˵�1~3\n");
//	scanf_s("%d", &i);
//	if (i == 1) cjdjjc();
//	if (i == 2) jssxysbds();
//	if (i == 3) pymmdw();
//	return 0;
//}


//#include"stdio.h"
//int main()
//{
//	int i,a[3],*pi;
//	for (i = 0; i < 3; i++)
//	{
//		printf("input a[%d]=",i);
//		scanf_s("%d", &a[i]);
//	}
//	pi = a;
//	printf("���Ϊ��\n");
//		for (i = 0; i < 3; i++)
//		{
//			printf("%d\t", *(pi + i));
//		}
//		printf("\n");
//		for (i = 0; i < 3; i++)
//		{
//			printf("%d\t", *(a+i));
//		}
//	return 0;
//}
//
//
//
//
//
//#include"stdio.h"
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i, sum = 3;
//	for (i = 0; i < 5; i++)
//		arr[i] = i * (i + 1);
//	for (i = 0; i < 4; i++)
//		sum += arr[i] * 3;
//	printf("%d", sum);
//	return 0;
//}

//#include"stdio.h"
//int main()
//{
//	int a, b, c, max, min, sum;
//	printf("input a,b,c\n");
//	scanf_s("%d%d%d", &a, &b, &c);
//	max = a;
//	min = a;
//	sum = a + b + c;
//	if (b > max)
//	{
//		max = b;
//		if (c > max)
//			max = c;
//	}
//	if (b < min)
//	{
//		min = b;
//		if (c < min)
//			min = c;
//	}
//	printf("��С:%d\n���:%d\n", min, max);
//	printf("%d\t%d\t%d", min, sum-min-max, max);
//	return 0;
//}
////�����������
//#include"stdio.h"
//int main()
//{
//	int num;
//	printf("input num\n");
//	scanf_s("%d", &num);
//	while (num != 0)
//	{
//		printf("%d", num % 10);
//		num /= 10;
//	}
//	return 0;
//}

//#include"stdio.h"
//int main()
//{
//	struct student		//�����ṹ�� student
//	{
//		char id[5];		//ѧ��ѧ�� (��λ)
//		char name[40];	//ѧ�� ����
//		float score;	//��ĩ�ܳɼ�
//		int num;		//����
//	} stu[100], temp;	//����ṹ���������stu��
//	int i, j, n;
//	char ch;
//	FILE* fin, * fout;	//�� ���ļ�ָ��
//	fin = fopen("scoreln. txt", "r"); 
//	fout = fopen("scoreOut. txt", "w"); 
//	if (fin == NULL || fout == NULL)
//	{
//		printf("�ļ���ȡʧ��! ");
//		exit(1);
//	}
//	fscanf(fin, "%d\n", &n);	//��ȡѧ������
//	for (i = 0; i < n; i++)	// A:���ж�ȡѧ����Ϣ
//	{
//		fscanf(fin, "%s",stu[i].id);
//		fscanf(fin, "%s", stu[i].name);
//		fscanf(fin, "%f\n", &stu[i].score);
//	 }
//	for (i = 0; i < n; i++)		//���ɼ�����
//	{
//		for (j = i + 1; j < n; j++)
//			if (stu[i].score < stu[j].score)
//			{
//				temp = stu[i];
//				stu[i] = stu[j];
//				stu[j] = temp;
//			}		//�ṹ��������彻��
//		stu[i].num = i + 1;
//	}
//	for (i = 0; i < n; i++)		// B:����������ļ�
//	{
//		fprintf(fout, "%s ", stu[i].id);
//		fprintf(fout, "%s ", stu[i].name);
//		fprintf(fout, "%. 2f " ,stu[i].score);
//		fprintf(fout, "%dIn", stu[i].num);	//�������
//	}
//	fclose(fin);
//	fclose(fout);
//	fin = fopen(" scoreln. txt", "r");
//	fscanf(fin, "%c", &ch);
//	printf(" scoreln. txt������Ϊ: \n");
//	while (!feof(fin))
//	{
//		putchar(ch);
//		fscanf(fin, "%c", &ch);
//	}
//	fclose(fin);
//	fout = fopen(" scoreOut. txt", "r");
//	fscanf(fout, "%c", &ch);
//	printf("\n\nscore0ut. txt������Ϊ: \n");
//	while (!feof(fout))
//	{
//		putchar(ch);
//		fscanf(fout, "%c", &ch);
//	}
//	fclose(fout);
//	return 0;
//}
//
//#include"stdio.h"
//#include"math.h"
//void ASCII()
//{
//	char ch;
//	printf("input letters : \n");
//	scanf_s("%c,&ch");
//	printf("��д��ĸ��%c\nСд��ĸ��д��ӦASCII��Ϊ��%d", ch - 32, ch, ch - 32);
//
//}
//void qiuzhi()
//{
//float a, b;
//printf("input a,b\n");
//scanf_s(" % f % f", &a,&b); 
//printf("��Ϊ%.0f\t��Ϊf\t����Ϊ%d\tƽ��ֵΪ%f\t", a + b, a / b, (int)a % (int)b, (a + b) / 2.0);
//}
//
//void exchange()
//{
//	int a, b, c;
//	printf("input a, b\n");
//	scanf_s("% d % d", &a, &b);
//	c = a; a = b; b = c;
//	printf("%d\t%d", a, b);
//}
//
//void qiushishugen()
//{
//	float a, b, c, delta, x1=0, x2=0;
//	printf("input a,b,c\n");
//	scanf("%f%f%f", &a, &b, &c);
//	delta = b * b - 4 * a * c;
//	x1 = (-b + sqrt(delta)) / (2 * a);
//	x1 = (-b - sqrt(delta)) / (2 * a);
//	printf("\nx1=%f\nx2=%f\n");
//}


//#include"stdio.h"
//int main()
//{
//	int a=0, b=10;
//	while (b > a)
//	{
//		printf("\a");
//		a++;
//	}
//	return 0;
//}


//#include"stdio.h"
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	while (num != 0)
//	{
//		printf("%d",num % 10);
//		num /= 10;
//	}
//	return 0;
//}
//


////����n�Ľ׳�
//#include"stdio.h"
//int main1()
//{
//	int i, n,sum=1;
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	printf("%d", sum);
//	return 0;
//}

////����n�Ľ׳˵�ǰn���
//#include"stdio.h"
//int main()
//{
//	int i, n, sum1 = 1, sum2 = 0;
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum1 *= i;
//		sum2 += sum1;
//	}
//	printf("%d", sum2);
//	return 0;
//}

////��һ�����������в��Ҿ����ĳ������n
//#include"stdio.h"
//int main()
//{
//	int i;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 } , n = 2;
//	for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
//	{
//		if (arr[i] == n)
//		{
//			printf("�������������%d\n", n);
//			break;	//����ҵ�������ѭ��
//		}
//	}
//	if (i == sizeof(arr) / sizeof(arr[0]))
//		printf("�����鲻��������%d\n",n);
//	return 0;
//}


////����ַ��������ƶ����м��ۣ�
//#include"stdio.h"
//#include"string.h"
//#include"windows.h"
//int main()
//{
//	char arr1[] = "Welcome to jingzhou";
//	char arr2[] = "                                            ";
//	int left = 0;//�����һ���±�
//	int right = strlen(arr1)-1;//�������һ���±�
//	
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//		Sleep(1000);//˯��һ��
//		system("cls");//�����Ļ��clear(�����
//	}
//
//	printf("%s", arr2);
//	return 0;
//}
//

////ģ���û���¼��ֻ�ܵ�½���Σ�������ȷ����ʾ�ɹ������ζ��������˳�����
//#include"stdio.h"
//#include"string.h"
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	/*������ȷ���������ַ���"123456"*/
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s", password);
//		if ((strcmp(password, "123456")) == 0)//�����ַ����Ƚϲ�����==��Ӧ��ʹ��strcmp
//		{
//			printf("������ȷ����¼�ɹ�!\n");
//			break;
//		}
//		else
//		{
//			printf("�����������������!\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("������������˳�����\n");
//	}
//	return 0;
//}

//#include"stdio.h"
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	while (num != 0)
//	{
//		printf("%d",num % 10);
//		num /= 10;
//	}
//	return 0;
//}
//


////����n�Ľ׳�
//#include"stdio.h"
//int main1()
//{
//	int i, n,sum=1;
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	printf("%d", sum);
//	return 0;
//}

////����n�Ľ׳˵�ǰn���
//#include"stdio.h"
//int main()
//{
//	int i, n, sum1 = 1, sum2 = 0;
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum1 *= i;
//		sum2 += sum1;
//	}
//	printf("%d", sum2);
//	return 0;
//}

////��һ�����������в��Ҿ����ĳ������n
//#include"stdio.h"
//int main()
//{
//	int i;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 } , n = 2;
//	for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
//	{
//		if (arr[i] == n)
//		{
//			printf("�������������%d\n", n);
//			break;	//����ҵ�������ѭ��
//		}
//	}
//	if (i == sizeof(arr) / sizeof(arr[0]))
//		printf("�����鲻��������%d\n",n);
//	return 0;
//}


////����ַ��������ƶ����м��ۣ�
//#include"stdio.h"
//#include"string.h"
//#include"windows.h"
//int main()
//{
//	char arr1[] = "Welcome to jingzhou";
//	char arr2[] = "                                            ";
//	int left = 0;//�����һ���±�
//	int right = strlen(arr1)-1;//�������һ���±�
//	
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//		Sleep(1000);//˯��һ��
//		system("cls");//�����Ļ��clear(�����
//	}
//
//	printf("%s", arr2);
//	return 0;
//}
//

////ģ���û���¼��ֻ�ܵ�½���Σ�������ȷ����ʾ�ɹ������ζ��������˳�����
//#include"stdio.h"
//#include"string.h"
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	/*������ȷ���������ַ���"123456"*/
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s", password);
//		if ((strcmp(password, "123456")) == 0)//�����ַ����Ƚϲ�����==��Ӧ��ʹ��strcmp
//		{
//			printf("������ȷ����¼�ɹ�!\n");
//			break;
//		}
//		else
//		{
//			printf("�����������������!\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("������������˳�����\n");
//	}
//	return 0;
//}


////������С��Ϸ
//#include"stdio.h"
//#include"stdlib.h"
//#include"windows.h"
//#include"time.h"
//void menu()
//{
//	printf("*****************************\n");
//	printf("*********  1.play    ********\n");
//	printf("*********  0.exit    ********\n");
//	printf("*****************************\n");
//}
//
//void game()
//{
////	1. �Զ�����һ��1~100֮��������
////	2. ������
////		a.�¶��ˣ��͹�ϲ�㣬��Ϸ����
////		b.��´��ˣ�����߲´��ˣ����ǲ�С�ˣ������£�ֱ���¶�
////	3. ��Ϸһ��һֱ�棬�����˳���Ϸ
//
//	int t=1;//����
//	int ret = rand() % 100 + 1;
//	int guess = 0;
//	printf("��ӭ�����������Ϸ������1~100֮������һ����\n");
//	while (1)
//	{
//		printf("���ǵ�%d�β�\n", t);
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("�¶��ˣ���ϲ�㣡����\n");
//			break;
//		}
//			t++;
//	}
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//
//	do
//	{
//		menu();//�򿪲˵�
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			Sleep(2000);
//			system("cls");
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("����������������룡\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

////��ӡ100~200֮�������
////����ֻ�ܱ��������1��������
//#include"stdio.h"
//#include"math.h"
//int main()
//{
//	int i,j;
//	int count=0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int flag = 1;//����i������
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}	
//		if (flag==1)
//		{
//			printf("%-5d", i);
//			count++;
//		}
//	}
//	printf("\nһ����%d��", count);
//	return 0;
//}


////�ú���������ʱ�������ַ�������
//#include"stdio.h"
//int my_strlem(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";
//	printf("%d", my_strlem(arr));
//	return 0;
//}

////�ú�����������ʱ�������ַ�������
//#include"stdio.h"
//int my_strlem(char* str)
//{
//	if (*str != '\n')
//		return 1 + my_strlem(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	printf("%d", my_strlem(arr));
//	return 0;
//}

////n!
//#include"stdio.h"
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d", ret);
//	return 0;
//}

////��ӡ�Ʋ�������ǰn��
//#include"stdio.h"
//#define n 30
//int main()
//{
//	int fib[n];
//	int i = 0;
//	fib[0] = 1;
//	fib[1] = 1;
//	for (i = 2; i < n; i++)
//	{
//		fib[i] = fib[i - 1] + fib[i - 2];
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", fib[i]);
//	}
//	return 0;
//}

////��Ʋ�������ǰn���
//#include"stdio.h"
//#define n 20
//int main()
//{
//	int fib[n];
//	int i = 0;
//	int sum = 0;
//	fib[0] = 1;
//	fib[1] = 1;
//	for (i = 2; i < n; i++)
//	{
//		fib[i] = fib[i - 1] + fib[i - 2];
//	}
//	for (i = 0; i < n; i++)
//	{
//		sum += fib[i];
//	}
//	printf("%d", sum);
//	return 0;
//}


//#include"stdio.h"
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 2) + fib(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d", ret);
//	return 0;
//}


////������̨��
////һֻ����һ�ο�������1��̨�ף�Ҳ��������2��
////�����������һ��n����̨���ܹ��ж�����������
//// ������1��̨����1��������2��̨����2��������3��̨����3�֣�4��̨����5�֣�5��̨����8��
//// *������쳲��������У�fib[n]=fib[n-2]+fib[n-1])
//// ����2��̨������ʱ������������̨�׵���������ǰһ̨�׵�������ǰ��̨�׵�����֮��
//#include"stdio.h"
//int Fib(int n)
//{
//	if (n <= 0)
//	{
//		printf("error!");
//		return -1;
//	}
//	if (1 == n)
//	{
//		return 1;
//	}
//	else if (2 == n)
//	{
//		return 2;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("������%d��̨��һ����%d�ַ���",n,Fib(n));
//}

////9*9�˷��ھ���
//#include"stdio.h"
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-6d",i,j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//
////��ӡһλ����ÿһλ
//#include"stdio.h"
//void print(int num)
//{
//	if (num > 9)
//		print(num / 10);
//	printf("%d ", num%10);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}


////�������ַ����е��ַ��������У������������
////����ʹ�ÿ⺯��
//#include"stdio.h"
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str)-1;
//	while (left<right)
//	{
//		char temp = str[left];
//		str[left] = str[right];
//		str[right] = temp;
//		left++;
//		right--;
//	}
//}
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);//fedcba
//	return 0;
//}

////�ú����ݹ�ʵ��������˳���ӡ
//#include"stdio.h"
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num;
//	scanf("%u", &num);
//	print(num);
//	return 0;
//}



////�õݹ����һ������ÿλ֮��
//#include"stdio.h"
//int Digitsum(int n)
//{
//	if (n > 9)
//	{
//		return Digitsum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d",Digitsum(num));
//	return 0;
//}

////�ú����������������
//#include"stdio.h"
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	while (num != 0)
//	{
//		printf("%d ", num % 10);
//		num /= 10;
//	}
//}


////���n��쳲�������(�ݹ飩
//#include"stdio.h"
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 2) + fib(n - 1);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = fib(num);
//	printf("%d", ret);
//	return 0;
//}



////���n��쳲�������
//#include"stdio.h"
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = fib(num);
//	printf("%d", ret);
//	return 0;
//}

//#include"stdio.h"
//int main()
//{
//	int a[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10-1; i++)
//	{
//		for (j = 0; j < 10 - 1 - i; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				int temp = 0;
//				temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", a[i]);
//	}
//	return 0;
//}

//
////my_strcpy��ʵ��
//#include"stdio.h"
//#include"string.h"
//
//void my_strcpy(char* desr,const char* src)
//{
//	while (*desr != '\0')
//	{
//		*desr++ = *src++;
//	}
//}
//
//int main()
//{
//	char arr1[] = "xxxxxxxxxxxx";
//	char arr2[] = "hello";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//
//int NumberOf1_2(int n)
//{
//	unsigned int m = n;
//	int count = 0;
//	while (m)
//	{
//		if (m % 2 == 1)
//		{
//			count++;
//		}
//		m /= 2;
//	}
//	return count;
//}
//
//int NumberOf1_3(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//#include"stdio.h"
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = NumberOf1(n);
//	printf("%d", ret);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int n;
//    while (scanf("%d", &n) != EOF) {
//        int i, j;
//        for (i = 0; i < n; i++) {
//            for (j = 0; j < n; j++) {
//                if (i == j || i + j == n - 1) {
//                    printf("*");
//                }
//                else {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//    }
//}
//
////�ú���ָ������дһ��������
//#include"stdio.h"
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("********************************\n");
//	printf("********************************\n");
//	printf("*********1���򿪼�����***********\n");
//	printf("*********0���˳�������***********\n");
//	printf("********************************\n");
//	printf("********************************\n");
//}
//
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	do 
//	{	
//		printf("������x,y��ֵ��\n");
//		scanf("%d %d", &x, &y);
//		printf("-------------------------\n");
//		int (*pr[4])(int, int) = { Add, Sub, Mul, Div };
//		int i = 0;
//		for (i = 0; i < 4; i++)
//		{
//			int ret = pr[i](x, y);
//			printf("%d\n", ret);
//		}
//		printf("-------------------------\n");
//	} while (1);
//	return 0;
//}


////qsort����ϰ
//
//#include"stdio.h"
//#include"stdlib.h"
//
//int int_cmp(const void* e1, const void* e2)
//{
//	return(*(int*)e1 - *(int*)e2);
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//
////ʹ��qsort���������ε�����
//int main()
//{
//	int arr[] = { 5,9,8,4,2,3,1,6,7,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	qsort(arr, sz, sizeof(arr[0]), int_cmp);
//	print(arr, sz);
//	return 0;
//}


////qosrt����ʵ��char������
//#include<stdio.h>
//#include<stdlib.h>
//int char_cmp(const void* str1, const void* str2)
//{
//    return *(char*)str1 - *(char*)str2;
//}
//
//int main()
//{
//     char str[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//     qsort(str, sizeof(str) / sizeof(str[0]), sizeof(char), char_cmp);
//     for (int i = 0; i < sizeof(str) / sizeof(str[0]); i++)
//     {
//         printf("%d ", str[i]);
//     }
//
//     return 0;
// }

//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct Student
//{
//    int x;
//    int y;
//    //����x��С�������򣬵�x���ʱ����y�Ӵ�С����
//}Student;
//
//Student student[7];
//
//int cmp(const void* a, const void* b)
//{
//    Student* pa1 = (Student*)a;
//    Student* pa2 = (Student*)b;
//
//    return (pa1->x) > (pa2->x) ? 1 : -1;
//}
//
////չʾһ�¶��ڽṹ���︳ֵ�ĺ�Ľ��
//void Display()
//{
//    for (int i = 0; i < 7; ++i)
//    {
//        printf("%d\n", student[i].x);
//    }
//}
//
//int main()
//{
//    int arr[7] = { 1,3,5,2,6,9,7 };
//    for (int i = 0; i < 7; ++i)
//    {
//        //������arr�е�Ԫ�ظ�ֵ���ṹ��x��
//        student[i].x = arr[i];
//    }
//    Display();
//    qsort(student, 7, sizeof(Student), cmp);
//    for (int i = 0; i < 7; ++i)
//    {
//        printf("%d", student[i].x);
//    }
//
//    return 0;
//}

////���������������ֵ
//
//#include"stdio.h"
//
//int get_max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	int ret = get_max(x, y);
//	printf("max=%d", ret);
//}


//#include <stdio.h>
//#include <string.h>
//
//struct StudentList
//{
//    char Name[5];
//    int Age;
//    char Gender[5];
//}stu;
//
//void ShowOneStu(struct StudentList stu)
//{
//    printf("%-8s%-7s%-6s\n", "Name", "Age", "Gender");
//    printf("---------------------\n");
//    printf("%-8s%-7d%-6s\n", stu.Name, stu.Age, stu.Gender);
//}
//
//int main()
//{
//    //     printf("Name    Age    Gender\n");//%-8s%-7s%-6s
//    //     printf("---------------------\n");//�����
//    //     printf("Jack    18     man\n");
//
//    strcpy(stu.Name, "Jack");
//    stu.Age = 18;
//    strcpy(stu.Gender, "Man");
//
//    ShowOneStu(stu);
//
//    return 0;
//}


////ģ��strlen
//
//#include"stdio.h"
//#include"assert.h"
//
//int my_strlen(const char* arr)
//{
//	assert(arr != NULL);
//	if (*arr != '\0')
//	{
//		return 1 + my_strlen(arr+1);
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr[] = "we come to bite";
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}
//


////ģ��strcpy
//
//#include"stdio.h"
//#include"assert.h"
//
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while ((*dest++ = *src++))
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[100];
//	char arr2[] = "abcdef";
//	printf("%s", my_strcpy(arr1, arr2));
//	return 0;
//}



//#include "stdio.h"
//
//int main()
//{
//    int num, m, c, i = 0;
//    int n = 8;
//    int a[32];
//    printf("����һ��������");
//    scanf("%d", &num);
//    m = num;
//    while (num > 0)
//    {
//        c = (num % n);
//        a[i] = c;
//        num = num / n;
//        i++;
//    }
//    printf("ʮ������%dת���ɰ˽������ǣ�", m);
//    for (i--; i >= 0; i--)
//    {
//        printf("%d", a[i]);
//    }
//    printf("\n");
//    return 0;
//}


//#include"stdio.h"
//#include"string.h"
//
//void* my_memcpy(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memcpy(arr1+2, arr1, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}
//
//

//д���뽫�������������Ӵ�С�����
//���磺
//
//���룺2 3 1
//
//�����3 2 1
//
//�Ӵ�С���

//#include"stdio.h"
//
//int main()
//{
//    int a = 2;
//    int b = 3;
//    int c = 1;
//    scanf("%d%d%d", &a, &b, &c);
//    if (a < b)
//    {
//        int tmp = a;
//        a = b;
//        b = tmp;
//    }
//    if (a < c)
//    {
//        int tmp = a;
//        a = c;
//        c = tmp;
//    }
//    if (b < c)
//    {
//        int tmp = b;
//        b = c;
//        c = tmp;
//    }
//    printf("%d %d %d\n", a, b, c);
//    return 0;
//}

////дһ�������ӡ1 - 100֮������3�ı���������
//
//#include"stdio.h"
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


////�����������Լ��
//
//#include"stdio.h"
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	scanf("%d%d", &x, &y);
//	while (z = x % y)
//	{
//		x = y;
//		y = z;
//	}
//	printf("%d", y);
//	return 0;
//}


//��ӡ����

//#include"stdio.h"
//
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//

//#include <stdio.h>
//
//
//int  main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//


////atoi    ��һ���ַ���ת��Ϊһ������
//#include<stdio.h>
//#include<assert.h>	
//#include<limits.h>
//#include<ctype.h>
//enum state
//{
//	Value,
//	ErrValue
//};
//state statue = ErrValue;
//int my_atoi(const char* str)
//{
//	assert(str);
//
//	char* p = (char*)str;
//
//	long long n = 0;
//	int flag = 1;
//	//�ַ�������Ϊ0
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	//�ַ���ǰ���кܶ�ո�
//	while (*p == ' ')
//	{
//		p++;
//	}
//	//�жϷ���
//	if (*p == '+')
//	{
//		flag = 1;
//		p++;
//	}
//	else if (*p == '-')
//	{
//		flag = -1;
//		p++;
//	}
//	//��ʼ����
//	while (*p != '\0')
//	{
//		if (isdigit(*p))
//		{
//			n = n * 10 + flag * (*p - '0');
//			if (n > INT_MAX)
//			{
//				n = INT_MAX;
//				break;
//			}
//			else if (n < INT_MIN)
//			{
//				n = INT_MIN;
//				break;
//			}
//		}
//		else
//		{
//			break;
//		}
//		p++;
//	}
//
//	if (*p == '\0')
//	{
//		statue = Value;
//	}
//
//	return (int)n;
//}/**
// �������
// 1ǰ����һ��ѿո�
// 2��������ָ��
// 3�ַ�������Ϊ0
// 4�������
// 5���������ַ�
// */
//
//int main()
//{
//	char arr[] = "5684   7";
//	int m = my_atoi(arr);
//	if (statue == Value)
//	{
//		printf("%d\n", m);
//	}
//	if (statue == ErrValue)
//	{
//		printf("�Ƿ�ת��\n");
//	}
//
//	return 0;
//}

//#include <stdlib.h>
//#include <stdio.h>
//#include "string.h"
//int main()
//{
//	int i = 0, num;
//	char arr[20] = { 0 };
//	char* p;
//	//get(arr);
//	p = arr;
//	int len = strlen(arr);
//	printf("%d", len);
//	//for (i = 0; i < len; i++)
//	//{
//	//	if ((*p >= '0') && (*p <= '9'))
//	//	{
//	//		num = num * 10 + *p - '0';
//	//	}
//	//	p++;
//	//}
//
//	
//	//printf("%d", num);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char str[2] = "a";
//	char* pf = str;
//	printf("%s", pf);
//	return 0;
//}

//#include"stdio.h"
//
//int main()
//{
//	char ch = 'A';
//	printf("%c", ch*10 + ch);
//	return 0;
//}
//
//
////#include <stdio.h>
////int main()
////{
////	char str[7] = "abc123";
////	char* pf = str;
////	while (*pf)
////	{
////		if ((*pf) >= '0' && (*pf) <= '9')
////		{
////			printf("%d\n", (char*)pf);
////		}
////		pf++;
////	}
////	return 0;
////}

//#include<stdio.h>
//#include<string.h>
//int change(char* s, int* p)
//{
//    int num = 0;
//    while (*s != '\0')
//    {
//        if (*s >= '0' && *s <= '9')
//        {
//            *p = *s - '0';
//            p++;
//            num++;
//        }
//        s++;
//    }
//    return num;
//}
//
//void main()
//{
//    char str1[30];
//    int str2[30], num, i = 0;
//    //str1���ԭʼ�ַ�����str2��ű������ֵ��ַ���
//    // ���ڴ���Ӵ��룬��ɱ�������
//   /********** Begin *********/
//    gets_s(str1);
//    num = change(str1, str2);
//    printf("ֻ�������ֺ���ַ���\"");
//    for (i = 0; i < num; i++)
//    for (i = 0; i < num; i++)
//        printf("%d", str2[i]);
//    printf("\"�ĳ���Ϊ%d��\n", num);
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    char a, b;
//    a = getchar();
//    b = a - 32;
//    printf("%c", b);
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int a = printf("Hello world!");
//    printf("\n");
//    printf("%d", a);
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    char ch = 0;
//    scanf("%c", &ch);
//    for (int i = 1; i <= 5; i++)
//    {
//        for (int j = 5 - i; j >= 0; j--)
//        {
//            printf(" ");
//        }
//        for (int x = 1; x <= i; x++)
//        {
//            printf("%c ", ch);
//        }
//        printf("\n");
//    }
//    return 0;
//}


//#include <stdio.h>
//
//void SwapValue(int* x, int* y)
//{
//    *x = (*x) ^ (*y);
//    *y = (*x) ^ (*y);
//    *x = (*x) ^ (*y);
//}
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("a=%d,b=%d", &a, &b);
//    SwapValue(&a, &b);
//    printf("a=%d,b=%d", a, b);
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    float a = 0.0;
//    scanf("%f", &a);
//    printf("%d", ((int)a % 10));
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int a = 1;
//    int b = 2;
//    a = 1 ^ a;
//    b = 1 ^ b;
//    printf("%d %d", a, b);
//    return 0;
//}

// #include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%o %x", &a, &b);
//    printf("%#o %#x", a, b);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i;
//    for (i = 10000; i < 100000; i++)
//    {
//        if (i == (i / 10000) * (i % 10000) + (i / 1000) * (i % 1000) + (i / 100) * (i % 100) + (i / 10) * (i % 10))
//            printf("%d ", i);
//    }
//    return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int cmp_int(void* e1, void* e2)
//{
//    return *(int*)e1 - *(int*)e2;
//}
//
//int main()
//{
//    int arr[10] = { 2, 4, 6, 8, 10, 1, 3, 5, 7, 9 };
//    qsort(arr,//Ҫ�Ƚϵ�����
//        10,//Ҫ�Ƚϵĸ���
//        sizeof(arr[0]),//ÿ��Ԫ�صĴ�С(�ֽ�)
//        cmp_int);//�Զ���ȽϺ���
//    for (int i = 0; i < 10; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

////������
//#include <stdio.h>
//
//int main() {
//    int n = 0;
//    while (~scanf("%d", &n)) {
//        for (int i = 1; i <= n; i++) {
//            for (int k = n - i; k > 0; k--) {
//                printf(" ");
//            }
//            for (int j = i; j > 0; j--) {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    //�ϰ벿��
    for (int i = n; i >= 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            printf(" ");
        }
        for (int k = 0; k <= n - i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    //�°벿��
    for (int i = n; i > 0; i--)
    {
        for (int j = n - i; j >= 0; j--)
        {
            printf(" ");
        }
        for (int k = i; k > 0; k--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}