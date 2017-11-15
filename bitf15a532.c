#include <stdio.h>
#include <unistd.h>
int main()
{
	int a[100];
	for(int i=0;i<100;i++){
		a[i]=i+1;
	}
	int sum=0,cpid1,cpid2,cpid3;
	int sum1=0,sum2=0,sum3=0,sum4=0;	
	int c1=0,c2=0,c3=0,c4=0;
	cpid1=fork();
	cpid2=fork();
	cpid3=fork();
	if(cpid3==0){		
		if(c1==0)
		{
			for(int i=0;i<25;i++){
				sum1+=a[i];
			}
			c1++;
		}
		
	}
	if(cpid2==0){
		if(c2==0)
		{
			for(int i=25;i<50;i++){
				sum2+=a[i];
			}
			c2++;
		}
	}
	if(cpid1==0){
		if(c3==0)
		{
			for(int i=50;i<75;i++){
				sum3+=a[i];
			}
			c3++;
		}
	}
	if(cpid1>0){
		if(c4==0)
		{
			for(int i=75;i<100;i++){
				sum4+=a[i];
			}
			c4++;
		}		
	}
	sum=sum1+sum2+sum3+sum4;
	printf("%d",sum); 
	printf("\n");	
	return 0;
}
