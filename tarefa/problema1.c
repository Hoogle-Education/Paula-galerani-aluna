#include <stdio.h>
#define MAXN 100000

int main( ){

  int n;
  scanf("%d", &n);
  int v[MAXN];

  for(int i=0; i<n; i++)  scanf("%d", &v[i]);
  
  int table[MAXN], posMaior = 0;
  table[0] = 1;

  for(int i=1; i<n; i++){

    
    if(v[i] == v[i-1]+1) // crescente
      table[i] = table[i-1] + 1;
    else // nao e crescente
      table[i] = 1;

    // --------------------

    if(table[i] >= table[posMaior])
      posMaior = i;
  }

  // descobri o inicio da sequencia crescente
  int start = posMaior - table[posMaior] + 1;

  // final da sequencia crescente
  int end = posMaior;

  for(int i=start; i<=end; i++){
    printf("%d ", v[i]);
  }

  // 10 20 30 1 2 3 4 11 22
  // 1  2  3  1 2 3 4 5  6

  return 0;
}

