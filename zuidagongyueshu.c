#include <stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		if(a%b==0)
			printf("%d是%d,%d的最大公约数.",b,a,b);
		else
		{
			for(c=1;c!=b;c++)
				if(a%c==0&&b%c==0)
					d=c;
		}
		printf("%d是%d,%d的最大公约数.",d,a,b);
	}
	else
	{
		if(b%a==0)
			printf("%d是%d,%d的最大公约数.",a,a,b);
		else
		{
			for(c=1;c!=a;c++)
				if(a%c==0&&b%c==0)
					d=c;
		}
		printf("%d是%d,%d的最大公约数.",d,a,b);
	}
	getchar();
	getchar();
	return 0;
}
