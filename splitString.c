#include <stdio.h>
int countDiv(char *string, char div){
  int i =0, size =0;
  while(i<strlen(string)-1){
    if(string[i] == div) 
      size++,i++;
    else
      i++;
  }
  size++; 
  return size;
}
void splitString(char *string, char div, char splitedString[][strlen(string)]){
  int i =0, j =0, k =0;
  while(i<strlen(string)){
    while(string[i]!=div){
      splitedString[j][k] = string[i];
      k++,i++;
    }
    k =0;
    j++,i++;
    
  }

}
int main(void) {
  char line[] = "Arthur.Moura.20.Belo Horizonte.Minas Gerais.";
  char div = '.';
  int i =0;
  int size = countDiv(line, div);
  char splitedString[size][strlen(line)];
  splitString(line, div, splitedString);

  for(int i =0;i<size;i++){
    printf("\n%s", splitedString[i]);
  }
  return 0;
}