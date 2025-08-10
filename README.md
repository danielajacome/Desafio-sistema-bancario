# Sistema de Conta Bancária Simples

Este projeto em C implementa um sistema de conta bancária para um único usuário. Ele permite realizar operações fundamentais como depósito, saque e consulta de extrato, de forma simples e clara.

## Funcionalidades

- **Deposita** dinheiro na conta (só valores positivos).  
- **Faz saques** com limite de 3 por dia e até R$ 500,00 por saque.  
- **Mostra o extrato** com todas as movimentações e o saldo atual.

## Como usar?

1. Rode o programa.  
2. Escolha uma opção do menu:  
   - `[d]` para depositar  
   - `[s]` para sacar  
   - `[e]` para ver o extrato  
   - `[q]` para sair  
3. Siga as instruções na tela.  
4. O sistema alerta se algo não estiver certo (ex: saldo insuficiente, valor inválido, limite de saque).

## Objetivo

Este exercício é uma prática para entender conceitos básicos em C, como estruturas condicionais, loops, manipulação de strings e controle de fluxo.
