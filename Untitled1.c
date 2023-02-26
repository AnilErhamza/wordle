#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int i,j,k=0,m,n=5,p=0,a=0,f=0,t=0;
	char h[]="roket",o[n],c,v[24],y[24],g[n];
	for(i=0;i<n;i++) o[i]='_';
	for(i=0;i<24;i++) y[i]=' ';
	for(i=0;i<24;i++) v[i]=' ';
	for(i=0;i<n;i++)
	while(1)
	{
		printf("girdi:");
		scanf("%s",g);
		for(i=0;i<n;i++)
		{
			if(g[i]==h[i]) o[i]=g[i];
		}
		for(m=0;m<n;m++)
		{
			for(j=0;j<n;j++)
			{
				if(g[j]==h[m] && m!=j )
				{
					while(1)
					{
						for(p=0;p<n;p++)
						{
							if(g[j]==v[p])
							{
								a+=1;		
							}
						}
						if(a==1) break;
						if(g[j]==h[m] && m!=j)	
						{
							v[k]=g[j];
							k+=1;
							
						}
						break;
					}
					a==0;
				}
				else if(g[j]!=h[m] || h[m]!=g[j])
				{
					while(1)
					{
						for(p=0;p<n;p++)
						{
							if(g[j]==y[p])
							{
								t+=1;
							
							}
						}
						if(t==1) break;
						if(g[j]!=h[m])	
						{
							y[f]=g[j];
							f+=1;
						
						}
						break;
					}
					t==0;	
				}
				
			}
		}
		puts(o);
		for(i=0;i<n;i++) o[i]='_';
		printf("var ama yeri yanlis:");
		puts(v);
		printf("yok:");
		puts(y);	
	}
	return 0;
}
