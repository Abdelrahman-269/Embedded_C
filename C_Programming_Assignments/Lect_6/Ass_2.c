#include<stdio.h>



void main()
{
	int x=10;
	int y=20;
	int z=30;
	int *p=&x;
	int *q=&y;
	int *r=&z;
	
	printf("--------Before Swapping -----------\n");
	
	
	
	printf("x=%d\ny=%d\nz=%d\np=%d\nq=%d\nr=%d\n*p=%d\n*q=%d\n*r=%d\n",x,y,z,p,q,r,*p,*q,*r);
	
	
	
	printf("---------After Swapping-------------\n");
	r=p;
	p=q;	
	q=r;	
	
	
	printf("x=%d\ny=%d\nz=%d\np=%d\nq=%d\nr=%d\n*p=%d\n*q=%d\n*r=%d\n",x,y,z,p,q,r,*p,*q,*r);
}
