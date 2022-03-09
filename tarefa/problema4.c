// #include <stdio.h>

void subtituir_palavra(char texto[], char *palavra1, char palavra2[]){

  for(int i=0; texto[i] != '\0'; i++){
    if( texto[i] == palavra1[0] ){

      int initial_pos = i;
      int isEqual = 1;
      int sizeof_palavra = 1;

      for(int j=0; palavra1[j] != '\0'; j++){

        if(palavra1[j] != texto[i]){
          isEqual = 0;
          break;
        } else {
          i++;
          sizeof_palavra++;
        }
      }

      if(isEqual == 1){        
        int t=0;

        for(int u = initial_pos; u < (initial_pos + sizeof_palavra - 1); u++) {
          texto[u] = palavra2[t]; 
          t++;
        }

      } 

      i--;
    }
  }

}

// int main(){

//   int qtd = 0;

//   char texto[] = "texto tExTo Texto text texto TEXTO";
 
//   subtituir_palavra( texto , "texto", "bingo");

//   printf("%s\n", texto);

//   return 0;
// }