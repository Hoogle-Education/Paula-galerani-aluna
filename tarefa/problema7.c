// #include <stdio.h>

void remover_numeros (int l, int c, int n_linhas, int n_colunas, int matriz[n_linhas][n_colunas]){

  int copy = matriz[l][c];
  matriz[l][c] = 0;

  if(l == 0 && c == 0){ 
    if(copy == matriz[l][c+1]) remover_numeros(l, c+1, n_linhas, n_colunas, matriz);

    if(copy == matriz[l+1][c]) remover_numeros(l+1, c, n_linhas, n_colunas, matriz);

  } else if( l == 0 && c == n_colunas - 1){
    if(copy == matriz[l][c-1]) remover_numeros(l, c-1, n_linhas, n_colunas, matriz);

    if(copy == matriz[l+1][c]) remover_numeros(l+1, c, n_linhas, n_colunas, matriz);
  }else if( l == n_linhas-1 && c == 0){
    if(copy == matriz[l][c+1]) remover_numeros(l, c+1, n_linhas, n_colunas, matriz);

    if(copy == matriz[l-1][c]) remover_numeros(l-1, c, n_linhas, n_colunas, matriz);
  } else if( l == n_linhas-1 && c == n_colunas-1){
    if(copy == matriz[l][c-1]) remover_numeros(l, c-1, n_linhas, n_colunas, matriz);

    if(copy == matriz[l-1][c]) remover_numeros(l-1, c, n_linhas, n_colunas, matriz);
  } else if( l == 0 ){
    if(copy == matriz[l][c+1]) remover_numeros(l, c+1, n_linhas, n_colunas, matriz);

    if(copy == matriz[l+1][c]) remover_numeros(l+1, c, n_linhas, n_colunas, matriz);

    if(copy == matriz[l][c-1]) remover_numeros(l, c-1, n_linhas, n_colunas, matriz);

  } else if( l == n_linhas-1 ){
    if(copy == matriz[l][c+1]) remover_numeros(l, c+1, n_linhas, n_colunas, matriz);

    if(copy == matriz[l-1][c]) remover_numeros(l-1, c, n_linhas, n_colunas, matriz);

    if(copy == matriz[l][c-1]) remover_numeros(l, c-1, n_linhas, n_colunas, matriz);
  } else if( c == 0 ){

    if(copy == matriz[l][c+1]) remover_numeros(l, c+1, n_linhas, n_colunas, matriz);

    if(copy == matriz[l+1][c]) remover_numeros(l+1, c, n_linhas, n_colunas, matriz);


     if(copy == matriz[l-1][c]) remover_numeros(l-1, c, n_linhas, n_colunas, matriz);

  } else if( c == n_colunas -1 ){
    if(copy == matriz[l][c-1]) remover_numeros(l, c-1, n_linhas, n_colunas, matriz);

    if(copy == matriz[l+1][c]) remover_numeros(l+1, c, n_linhas, n_colunas, matriz);


    if(copy == matriz[l-1][c]) remover_numeros(l-1, c, n_linhas, n_colunas, matriz);

  } else {
    if(copy == matriz[l][c-1]) remover_numeros(l, c-1, n_linhas, n_colunas, matriz);

    if(copy == matriz[l+1][c]) remover_numeros(l+1, c, n_linhas, n_colunas, matriz);


    if(copy == matriz[l-1][c]) remover_numeros(l-1, c, n_linhas, n_colunas, matriz);


    if(copy == matriz[l][c+1]) remover_numeros(l, c+1, n_linhas, n_colunas, matriz);

  }

} 

// int main(int argc, char const *argv[]){
  
//   int n;
//   scanf(" %d", &n);

//   int matriz[n][n];

//   for(int i=0; i<n; i++){
//     for(int j=0; j<n; j++){
//       scanf(" %d", &matriz[i][j]);
//     }
//   }

//   remover_numeros(2, 0, n, n, matriz);

//   for(int i=0; i<n; i++){
//     for(int j=0; j<n; j++){
//       printf("%d ", matriz[i][j]);
//     }

//     printf("\n");
//   }
  
//   return 0;
// }
