#include<stdio.h>
#include<math.h>
int main(){
	int a,b,s=0;
	printf("enter a b:");
	scanf("%d%d",&a,&b);
	for(int n=0;n<=b;n++){
		int c=0;
	for(int k=0;k<n;k++){
	c=c+2*pow(10,k);}
	s=s+c;}
	printf("s=%d",s);
    return 0;
}
