/*  39. Uma empresa decide dar um aumento aos seus funcionarios de acordo com uma tabela que considera 
    o salário atual e o tempo de serviço de cada funcionário. Os funcionários com menor salario terão 
    um aumento proporcionalmente maior do que os funcionários com um salário maior, e conforme o tempo
    de serviço na empresa, cada funcionário irá receber um bônus adicional de salário. Faça um programa que leia:
        • o valor do salario atual do funcionário;
        • o tempo de serviço desse funcionário na empresa (número de anos de trabalho na nempresa).
    Calcule e imprima o valor do salário final reajustado, ou uma mensagem caso o funcionário não tenha direito a 
    nenhum aumento. */

#include <stdio.h>

int main() {

    float salAtual, reajuste, bonus;
    int tempoServ;

        printf("\nInsira:");
    do{
        printf("\nSalario atual do funcionario: ");
        scanf("%f", &salAtual);
        printf("\nAnos trabalhados na empresa: ");
        scanf("%d", &tempoServ);

        if(salAtual < 100 || tempoServ < 0){
            printf("\nATENCAO! Um dos valores eh invalido. \nPor favor, insira os dados novamente.\n");
        }

    }while(salAtual < 100 || tempoServ < 0);

    /*
        Fazer ifs para calcular cada aumento e cada bônus    
    */
    if (salAtual <= 500) {
            reajuste = (salAtual*25)/100;
    } else {
        if (salAtual <= 1000) {
            reajuste = (salAtual*20)/100;
        } else {
            if (salAtual <= 1500) {
                reajuste = (salAtual*15)/100;
            } else {
                if (salAtual <= 2000) {
                    reajuste = (salAtual*10)/100;
                } else {
                    printf("\nO funcionario nao tem direito ao reajuste.");
                }
            }
        }
    }  
    

    if (tempoServ > 1 && tempoServ < 4) {
        bonus = 100.00;
    } else {
        if (tempoServ > 3 && tempoServ < 7) {
            bonus = 200.00;
        } else {
            if (tempoServ > 6 && tempoServ < 11) {
                bonus = 300.00;
            } else {
                if (tempoServ > 10) {
                    bonus = 500;
                } else {
                    printf("\nO funcionario nao tem direito ao bonus.");
                }
            }
        }
    }

    printf("\n\nSalario apos reajuste e bonus: %.2f\n", salAtual + (reajuste + bonus));
    return 0;
}