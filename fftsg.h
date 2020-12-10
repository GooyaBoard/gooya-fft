#ifndef FFTSG_H
#define FFTSG_H
 
void cdft(int n, int isgn, float *a, int *ip, float *w);
void rdft(int n, int isgn, float *a, int *ip, float *w);
void ddct(int n, int isgn, float *a, int *ip, float *w);
void ddst(int n, int isgn, float *a, int *ip, float *w);
void dfct(int n, float *a, float *t, int *ip, float *w);
void dfst(int n, float *a, float *t, int *ip, float *w);
 
#endif

