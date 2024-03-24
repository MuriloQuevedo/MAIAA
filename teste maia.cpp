#include<stdio.h>

main()
{
	float a,b,c;
	printf("me de um numerador e um denominador, e tera sua divisao");
	scanf("%f %f", &a, &b);
	if (b==0)
	{
		printf("impossivel dividir por zero");
		
	}
	else
	{
		c=a/b;
		printf("o valor da divisao e %f", c);
	}
}

