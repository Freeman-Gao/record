#include<stdio.h>
#include<math.h>
int main(){
	printf("Enter n between 3 and 7:");
	int n,g;
	scanf("%d",&n);
	for(int p=pow(10,n-1);p<pow(10,n);p++){
		int a;
		a=p;
		int sum=0;
	    for(int k=1;k<=n;k++){
		int c,h,r;
		c=a%10;
		h=a/10;
		a=h;
		   sum=sum+pow(c,n);
		   g=sum;
	    }if(g==p){
	    	printf("%d\n",p);
		}
	}
	return 0;
}
