#include<stdio.h>
int main(){
	int n1,n2,n3,c,x;
	char a,b;
	a='-',b='>';
	printf("please enter n1 n2 n3:");
	scanf("%d%d%d",&n1,&n2,&n3);
	int data[]={n1,n2,n3};
	for(x=1;x>=0;x--){
	for(int k=0;k<=x;k++){
	if(data[k]>data[k+1]){
	c=data[k],data[k]=data[k+1],data[k+1]=c;}
	else{
	}
    }    
    }
    for (int m=0;m<=2;m++){
    	printf("%d",data[m]);
    	if(m==2){
		}else{
    	printf("%c%c",a,b);}
	} 
	return 0;
}
