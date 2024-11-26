#include<stdio.h>
void swap(int *x,int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
}
void array(int *a,int n){
	int i;
	for(i=0;i<n;i++){
		printf("element %d: %d\n",i+1,a[i]);
	}
}
int main(){
	int n,*p;
	printf("enter any number\n");
	scanf("%d",&n);
	p=&n;
	printf("address: %x\n",p);
	printf("value: %d\n",*p);
	int a[]={1,2,3,4,5};
	p=&a[0];
	printf("adress of a[1]: %d\n",p);
	p=p+1;
	printf("address of %d a[2] is %d\n",*p,p);
	
	int x,y;
	printf("enter num 1: \n");
	scanf("%d",&x);
	printf("enter num 2: \n");
	scanf("%d",&y);
	swap(&x,&y);
	printf("x:%d\n",x);
	printf("y:%d\n",y);
	int b[]={1,2,3,4,5};
	int n=sizeof(b)/sizeof(b[0]);
	array(b,n);
	return 0;
}
