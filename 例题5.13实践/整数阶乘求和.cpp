//Çó1!+2!+3!+...+19!+20!
#include"stdio.h"
int main()
{
	int i, j;
	float t, sum = 0;
	for (i = 1; i <= 20; i++)
	{
		t = 1;
		for (j = 1; j <= i; j++)
		{
			t = t * j;
		}
		sum = sum + t;
	}
	printf("%f", sum);
	return 0;
}