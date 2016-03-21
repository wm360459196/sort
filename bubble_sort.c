#include<stdio.h>
#include"inc/swap_xy.h"
#include"inc/genrand.h"
#include"inc/print_array.h"

#define CUR_NUM 50000
#define CUR_MAX 10000

void bubble_sort(int[], int);

void bubble_sort(int a[], int count)
{
    int i, j;
    for(i=count-1;i>0;i--)
	for(j=0;j<i;j++) {
	    if(a[j]>a[j+1]) {
		//swap_xy1(a+j, a+j+1);
		swap_xy2(a+j, a+j+1);
	    }
	}
}

void main()
{
    int i;
    int *a;
    a = (int *)malloc(CUR_NUM * sizeof(int));
    if(NULL == a) {
	printf("malloc error, memory not enough!\n");
	exit(1);
    }

    genrand100(a, CUR_NUM, CUR_MAX);

    bubble_sort(a, CUR_NUM);
    
   // print_array(a, CUR_NUM);
   printf("OK!\n");
}
