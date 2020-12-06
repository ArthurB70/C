// C //


#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int i;
bool fim (char palavra[]){
  return  palavra[0] == 'F' && palavra[1] == 'I' && palavra[2] =='M';
}
bool ehmaiusculo(char letra){
  if(letra>='A' && letra<='Z')
  {
    return true;
  }
  else{
    return false;
  }
}
int contadordemaiusculas(char palavra[]){
  int contador = 0;
  if(palavra[i]!='\0'){
    if(ehmaiusculo(palavra[i])){
      i++;
      contador = contadordemaiusculas(palavra)+1;
    }
    else{
      i++;
      contador += contadordemaiusculas(palavra) ;
    }
  }
  return contador;
}
int main(void) {
  char palavra[10];
  scanf("%s",palavra);
  while(!fim(palavra)){
    i = 0;
    int cont = contadordemaiusculas(palavra);
    printf("\nCONT:%d\n", cont);
    scanf("%s", palavra);
  }
  return 0;
}


// JAVA //
import java.util.Scanner;
import java.io.*;
class Main
{
   public static int j;
   public static boolean  ehmaiusculo(char letra)
   {
      if(letra >= 'A' && letra <= 'Z')
         return true;
      else
         return false;
   }
   public static void contadordemaiusculas(String palavra, int i, int contador, int length){
      
      if(i < length){
         if(ehmaiusculo(palavra.charAt(i)) == true){
            contador++;
         }
         i++;
         contadordemaiusculas(palavra, i, contador, length);
      }
      else
         System.out.println(contador);
   }
   public static int contadordemaiusculas2(String palavra){
    int contador = 0;
    if(j<palavra.length()){
      if(ehmaiusculo(palavra.charAt(j)) == true){
        j++;
        contador = contadordemaiusculas2(palavra)+1;
      }
      else {
        j++;
        contador += contadordemaiusculas2(palavra);
      }
    }
    return contador;
   }
   public static boolean isFim(String s)
   {
      return (s.length() == 3 && s.charAt(0) == 'F' && s.charAt(1) == 'I' && s.charAt(2) == 'M');
   }
   public static void main (String[] args)
   {
      Scanner sc = new Scanner(System.in);
      String entrada = sc.nextLine();
      
      while (!isFim(entrada))
      {
        
        // MÉTODO 1
        /*int tamanho = entrada.length();
        contadordemaiusculas(entrada, 0, 0, tamanho);
        entrada = sc.nextLine();*/
        //MÉTODO 2
        j = 0;
        int cont = contadordemaiusculas2(entrada);
        System.out.println("Numero de maiusculas: "+ cont);
        entrada = sc.nextLine();
      }    
   }
}