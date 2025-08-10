#include <stdio.h>
#include <string.h>

#define LIMITE_SAQUES 3
#define LIMITE_VALOR 500

int main() {
    double saldo = 0.0;
    int numero_saques = 0;
    int quant_de_deposito = 0;
    char extrato[1000] = ""; // armazena histórico
    char opcao;

    do {
        printf("\n[d] Depositar\n[s] Sacar\n[e] Extrato\n[q] Sair\n=> ");
        scanf(" %c", &opcao);

        if (opcao == 'd') {
            double deposito;
            printf("Qual valor voce quer depositar: ");
            scanf("%lf", &deposito);

            if (deposito <= 0) {
                printf("Nao e possivel adicionar esse valor.\n");
            } else {
                saldo += deposito;
                quant_de_deposito++;
                char linha[100];
                sprintf(linha, "Deposito: R$%.2lf\n", deposito);
                strcat(extrato, linha);
                printf("Novo saldo: R$%.2lf | Quantidade de depositos: %d\n", saldo, quant_de_deposito);
            }

        } else if (opcao == 's') {
            if (numero_saques >= LIMITE_SAQUES) {
                printf("Voce ja atingiu o limite maximo de saques diarios.\n");
                continue;
            }

            double saque;
            printf("Quanto voce quer sacar? ");
            scanf("%lf", &saque);

            if (saque > saldo) {
                printf("Saldo insuficiente!!!\n");
            } else if (saque > LIMITE_VALOR) {
                printf("O valor excedeu o limite de saque.\n");
            } else if (saque <= 0) {
                printf("Valor de saque invalido.\n");
            } else {
                saldo -= saque;
                numero_saques++;
                char linha[100];
                sprintf(linha, "Saque: R$%.2lf\n", saque);
                strcat(extrato, linha);
                printf("Novo saldo: R$%.2lf\n", saldo);
            }

        } else if (opcao == 'e') {
            printf("\n--- Extrato ---\n%s", extrato);
            printf("Saldo atual: R$%.2lf\n", saldo);

        } else if (opcao == 'q') {
            printf("Saindo...\n");
        } else {
            printf("Operacao invalida, tente novamente.\n");
        }

    } while (opcao != 'q');

    return 0;
}

