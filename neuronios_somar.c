#include <stdio.h>
#include <math.h>

double taxa_aprendizado = 0.05;
typedef struct estrutura_neuronio{
  double x0,x1;  // 2 entradas
  double w0,w1; // dois pesos
  double saida_correta;
  double saida_neuronio;

}estrutura_neuronio;
void print_neuronio(estrutura_neuronio n)
{
  printf("\nx0: %.4lf x1: %.4lf  w0: %.4lf w1: %.4lf  saidaN: %.4lf saidaC: %.4lf", n.x0,n.x1,n.w0,n.w1,n.saida_neuronio,n.saida_correta);
}
void neuronio_soma(estrutura_neuronio *n)
{
  n->saida_neuronio = (n->x0*n->w0) + (n->x1*n->w1);
  double erro = n->saida_correta - n->saida_neuronio;
  print_neuronio(*n); 
  n->w0 = n->w0 + (taxa_aprendizado*erro*n->x0);
  n->w1 = n->w1 + (taxa_aprendizado*erro*n->x1);
}
int main(void) {
  estrutura_neuronio neuronio1;
  neuronio1.w0 = 0;
  neuronio1.w1 = 0.8;

  for(int i = 1; i<11;i++){
    neuronio1.x0 = i;
    neuronio1.x1 = i;
    neuronio1.saida_correta = i + i;
    neuronio_soma(&neuronio1);
    getchar();
  }

  return 0;
}





/*double fun_sigmoid(double x){
  return 1.0/(1.0 + exp(-x));
}*/
//n->saida_neuronio = fun_sigmoid(n->saida_neuronio);
