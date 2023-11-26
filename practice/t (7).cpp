#include<stdio.h>
int main(){
	int n,z,x,c,o,h,j,u,l;
	printf("enter number between 100 and 999:");
	scanf("%d",&n);
	while(n!=495){
		int i,g,s;
	z=n/100,x=n/10%10,c=n%10;
	int data[]={z,x,c};
	for(o=1;o>=0;o--){
	for(int k=0;k<=o;k++){
	if(data[k]>data[k+1]){
	h=data[k],data[k]=data[k+1],data[k+1]=h;}
	z=data[0],x=data[1],c=data[2];}}
	j=c*100+x*10+z,u=z*100+x*10+c;
	l=j-u;
    printf("%d-%d=%d\n",j,u,l);
    n=l;
	}
	return 0;
	}
