#ifndef __GENRAND100_H__
#define __GENRAND100_H__
void genrand100(int *,int, int);

void genrand100(int *dat, int num, int max)
{
    int i;
    srand((unsigned int)time(0));
//    printf("random array:");
    for(i=0;i<num;i++) {
	dat[i] = rand()%max + 1;
//	if(!(i%10)) printf("\n");
//	printf("%d\t", dat[i]);
    }
}
#endif
