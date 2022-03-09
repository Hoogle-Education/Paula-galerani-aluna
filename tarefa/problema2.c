// #include <stdio.h>
// #define MAXN 100000

int *expadir_vetor(const int *vetor, int n_compactado, int *n_expandido){

  int lastUpdate = 0;

  for(int i=1; i<n_compactado; i+=2){
    *n_expandido += vetor[i];
  }

  const int expandedSize = *n_expandido;
  int exp[expandedSize];

  for(int i=1; i<n_compactado; i+=2){
    
    int finalUpdate = (lastUpdate + vetor[i] - 1);
    int repeat = vetor[i-1];

    for(int j=lastUpdate; j<=finalUpdate; j++){
      exp[j] = repeat;
    }

    lastUpdate = finalUpdate+1;
  }

  return (&exp);
}

// int main( ){

//   int n;
//   scanf("%d", &n);
//   int compactado[MAXN];

//   for(int i=0; i<n; i++)  scanf("%d", &compactado[i]);

//   int newSize = 0;


//   int expanded = expadir_vetor(compactado, n, &newSize);

//   printf("new size = %d\n", newSize);

//   for(int i=0; i<newSize; i++){
//     printf("%d ", expanded[i]);
//   }
  
//   return 0;
// }
