#include"stdio.h"	//预加载标准函数
int main()	//定义主函数
{
	float area,l,r;	//定义area（面积），l（周长），r（半径）为单精度实型；
	float PI = 3.1415926; 
	printf("请输入圆的半径，即可求出其周长和面积(默认保留6位小数）\n");	//在屏幕上打印出你想说的话
		scanf_s("%f",&r);	//你输入的实型给你定义的变量r
		area = PI * r * r;	
		l = 2 * PI * r;	
		printf("以%f为半径的圆的周长和面积分别为%f，%f", r, l, area);	
	return 0;	//返还函数值0
}