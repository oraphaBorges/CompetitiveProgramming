#include<stdio.h>
#include<stdlib.h>

int compare ( const void * a, const void * b ) {
  return ( * ( int* ) b - * ( int* ) a );
}

int main ( ) {
  int a[11234], aux[11234];
  int n, k, i, sum;
  while (scanf( "%d %d", &n, &k) != EOF) {
      aux[0] = 0;a[0]= 0;
      for ( i=1;i<n;i++) {
          scanf ( "%d", &aux[i] );
          a[i] = aux[i] - aux[i - 1];
      }
      qsort (a, n, sizeof(int), compare);
      sum = 0;
      for (i=k - 1;i<n;i++)
          sum += a[i];
      printf ("%d\n", sum );
  }
  return 0;
}
