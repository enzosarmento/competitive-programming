#include <stdio.h>

int main() {

  int numeroConta;
  float novoSaldo, saldoDevedor, saldoInicial, totalCobrancas, totalCreditos, limiteCredito;

  printf("Entre com o numero da conta(0 para finalizar): ");
  scanf("%d", &numeroConta);

  while(numeroConta != 0) {
    printf("Entre com o saldo inicial: ");
    scanf("%f", &saldoInicial);
    printf("Entre com o total de cobrancas: ");
    scanf("%f", &totalCobrancas);
    printf("Entre com o total de creditos: ");
    scanf("%f", &totalCreditos);
    printf("Entre com o limite de credito: ");
    scanf("%f", &limiteCredito);

    novoSaldo = saldoInicial + totalCobrancas - totalCreditos;

    if(novoSaldo > limiteCredito)
      printf("Conta: %d\nLimite de credito: %.2f\nSaldo: %.2f\nLimite de Credito Excedido\n", numeroConta, limiteCredito, novoSaldo);

    printf("Entre com o numero da conta(0 para finalizar): ");
    scanf("%d", &numeroConta);
  }
  
  return 0;
}