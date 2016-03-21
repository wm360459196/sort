#include<stdio.h>
#include"inc/swap.h"
#include"inc/genrand.h"
#include"inc/print_array.h"

#define CUR_NUM 100

void choise_sort(int *a, int num)
{
    int i, j, k;
    for(i=0;i<num-1;i++) {
	k = i;
	for(j=i+1;j<num;j++) {
	   if(a[k] > a[j]) k = j;
	   if(k != i) {
		swap_xy1(a[i], a[k]);
	   }
	}
    }
}

void main()
{
    int *a = NULL;
    a = (int *)malloc(CUR_NUM * sizeof(int));
    if(NULL == a) {
	printf("malloc error, memory not enough!\n");
	exit(1);
    }

    genrand100(a, CUR_NUM);

    choise_sort(a, CUR_NUM);

    print_array(a, CUR_NUM);
}
