#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, *num;
	int x, z, ord;
	printf("Entre com um numero:");
	scanf("%d",&n);
	num = (int*) malloc(n*sizeof(int));
	printf("Entre com N numeros:");
	for(x=0; x<n; x++)
	{
		scanf("%d", &num[x]);
	}
	if(x==n)
	{
		for(x=0; x<n; x++)
		{
			for(z=0; z<n; z++)
		}
		if (num[x]< num[z])
		{
			ord= num[x];
			num[x]=num[z];
			num[z]=ord;			
		}
		if(x==n)
		{
			printf("Ordem crescente:");
		}
		for(x=0; x<n; x++)
		{
			printf("%d", num[x]);
		}
	}
	return 0;
}
