#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int t,n,total=0;
int P[1123],W[1123];
int g,MW[112];
int pd[1123][1123];

int max(int *C){
  int maximum = 0;
  int i;
  for(i = 1;i<=g;i++){
    if(maximum < C[i]) maximum = C[i];
  }
  return maximum;
}

int maximo(int a, int b){
  return (a>b)?a:b;
}

void knapsack(int maximum){
  int i,j;
  for(i = 1; i <= n;i++){
    for(j = 1; j <= maximum; j++){
      if(W[i]>j) pd[i][j] = pd[i-1][j];
      else{
        pd[i][j] = maximo(pd[i-1][j] , pd[i-1][j-W[i]]+P[i]);
      }
    }
  }
}

int main(){
  int i;
  scanf("%d",&t);
  while(t--){
    scanf("%d",&n);
    for(i=1;i<=n;i++){
      scanf("%d %d",&P[i],&W[i]);
    }
    scanf("%d",&g);
    for(i=1;i<=g;i++){
     scanf("%d",&MW[i]);
   }
     knapsack(max(MW));
     total = 0;
     for(i=1;i<=g;i++){
       total += pd[n][MW[i]];
    }
    printf("%d\n",total );
  }
  return 0;
}
