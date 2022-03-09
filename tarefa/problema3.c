// #include <stdio.h>

void frequencia_string(const char *str, const char *texto, int *qtd){

  for(int i=0; texto[i] != '\0'; i++){

    char current = texto[i];
    char current_str = str[0];
    if( current > 90 && current < 123 ) current -= 32;
    if( current_str > 90  && current < 123 ) current_str -= 32;

    if( current == current_str ){

      int isEqual = 1;

      for(int j=0; str[j] != '\0'; j++){
        current = texto[i];
        current_str = str[j];

        if( current > 90  && current < 123 ) current -= 32;
        if( current_str > 90  && current < 123 ) current_str -= 32;

        if(current_str != current){
          isEqual = 0;
          break;
        } else i++;
      }

      if(isEqual == 1) (*qtd)++;

      i--;
    }
  }

}

// int main(){

//   int qtd = 0;

//   const char* texto = "texto tExTo Texto text TEXTO";
//   const char* str = "texto";

//   frequencia_string(str, texto, &qtd);

//   printf("%d\n", qtd);

//   return 0;
// }