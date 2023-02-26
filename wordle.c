#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define n 5
int main()
{
	int *s;
	int *p;
	int i,j,k=0,a=0,t=0,b,c;
	s=(int*) malloc(27*sizeof(int));
	*s=0;
	p=(int*) malloc(27*sizeof(int));
	*p=0;
	char *h="roket";
	puts(h);
	char *g;
	char *o;
	char *y;
	char *v;
	v = (char*) malloc(*s*sizeof(char));
	y = (char*) malloc(*s*sizeof(char));
	g = (char*) malloc(n+1*sizeof(char));
	o = (char*) malloc(n+1*sizeof(char));
	for(i=0;i<n;i++) o[i]='_';
	for(i=0;i<n;i++) g[i]='_';
	for(i=0;i<n;i++) y[i]=' ';
	for(i=0;i<n;i++) v[i]=' ';
	while(1)
	{
		printf("girdi:");
		gets(g);
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(g[j]==h[j]) o[j]=g[j];
				else if(g[j]==h[i] && i!=j)
				{
					for(k=0;k<n;k++)
					{
						if(g[j]==v[k]) a+=1;
					}
					if(a==0)
					{
						v[*s]=g[j];
						*s+=1;
					}
				}
				a=0;
			}
		}
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(g[j]!=h[i])
				{
					for(t=0;t<n;t++)
					{
						if(g[j]==y[t]) b+=1;
						else if(g[j]==v[t]) b+=1;
						else if(g[j]==o[t]) b+=1;
					}
					if(b==0)
					{
						y[*p]=g[j];
						*p+=1;
					}
				}
				b=0;
			}
		}
		
		puts(o);
		for(i=0;i<n;i++) o[i]='_';
		printf("var ama yeri yanlis:");
		puts(v);
		printf("yok:");
		puts(y);	
		c=strcmp(g,h);
		if(c==0) break;
	}
	
	return 0;
	
	
}
