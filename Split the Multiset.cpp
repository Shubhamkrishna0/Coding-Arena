#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d",&a);
	while(a--)
	{
		scanf("%d%d",&b,&c);
		printf("%d\n",(b-3+c)/(c-1));
	}
}
