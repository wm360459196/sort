#ifndef __PRINT_ARRAY_H__
#define __PRINT_ARRAY_H__

void print_array(int *, int);
void print_array(int *a, int num)
{
    int i;
    printf("\nThe array sorted is:\t");
    for(i=0;i<num;i++) {
	if(!(i%10)) printf("\n"); 
	printf("%d\t", a[i]);
    }
    printf("\n");
}
#endif
