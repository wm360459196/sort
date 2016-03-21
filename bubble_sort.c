#include<stdio.h>

#define CUR_NUM 100

void bubble_sort(int[], int);
void swap_xy1(int *, int *);
void swap_xy2(int *, int *);
void genrand(int *,int);

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

void swap_xy1(int *x, int *y)
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}

void swap_xy2(int *x, int *y)
{
    *x ^= *y;
    *y ^= *x;
    *x ^= *y;
}

void genrand(int *dat, int num)
{
    int i;
/*    dat = (int *)malloc(num * sizeof(int));
    if(NULL == dat) {
	printf("malloc error, memory not enough!\n");
	exit(1);
    }
*/
    srand((unsigned int)time(0));
    for(i=0;i<num;i++) {
	dat[i] = rand()%100 + 1;
	printf("dat[%d]=%d\n", i, dat[i]);
    }
}

void main()
{
    int i;
    int *a;
    //printf("insert the array:");
    //for(i=0;i<10;i++)
	//scanf("%d", a+i);
    a = (int *)malloc(CUR_NUM * sizeof(int));
    if(NULL == a) {
	printf("malloc error, memory not enough!\n");
	exit(1);
    }

    genrand(a, CUR_NUM);
    printf("\nThe array is:\t\t");
    for(i=0;i<CUR_NUM;i++) {
	if(!(i%10)) printf("\n");
	printf("%d\t", a[i]);
	
    }

    bubble_sort(a, CUR_NUM);
    printf("\nThe array sorted is:\t");
    for(i=0;i<CUR_NUM;i++) {
	if(!(i%10)) printf("\n"); 
	printf("%d\t", a[i]);
    }
    printf("\n");
}
