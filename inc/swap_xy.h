#ifndef __SWAP_XY_H__
#define __SWAP_XY_H__

void swap_xy1(int *, int *);
void swap_xy2(int *, int *);

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
#endif
