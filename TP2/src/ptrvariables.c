#include <stdio.h>

int main(void)
{
    char c = 'A';
    short s = 10;
    int i = 20;
    long l = 30;
    long long ll = 40;
    float f = 1.5f;
    double d = 2.5;
    long double ld = 3.5L;
    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long *pl = &l;
    long long *pll = &ll;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    printf("Avant : c=%c, s=%hd, i=%d, l=%ld, ll=%lld, f=%.2f, d=%.2f, ld=%.2Lf\n",
           c, s, i, l, ll, f, d, ld);
    *pc = 'Z'; *ps = 11; *pi = 21; *pl = 31; *pll = 41;
    *pf = 2.5f; *pd = 3.5; *pld = 4.5L;
    printf("Adresses : c=%p s=%p i=%p l=%p ll=%p f=%p d=%p ld=%p\n",
           (void *)pc, (void *)ps, (void *)pi, (void *)pl, (void *)pll,
           (void *)pf, (void *)pd, (void *)pld);
    printf("Apres : c=%c, s=%hd, i=%d, l=%ld, ll=%lld, f=%.2f, d=%.2f, ld=%.2Lf\n",
           c, s, i, l, ll, f, d, ld);
    return 0;
}