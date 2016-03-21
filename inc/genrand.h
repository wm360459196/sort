#ifndef __GENRAND100_H__
#define __GENRAND100_H__
void genrand100(int *,int);

void genrand100(int *dat, int num)
{
    int i;
    srand((unsigned int)time(0));
    printf("random array:");
    for(i=0;i<num;i++) {
	dat[i] = rand()%100 + 1;
	if(!(i%10)) printf("\n");
	printf("%d\t", dat[i]);
    }
}
#endif
