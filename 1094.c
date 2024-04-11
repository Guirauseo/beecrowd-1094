#include <stdio.h>

int main() {
    int casos, quantidade;
    char tipo;
    int total_cobaias = 0, total_coelhos = 0, total_ratos = 0, total_sapos = 0;

    scanf("%d", &casos);

    for (int i = 0; i < casos; i++) {
        scanf("%d %c", &quantidade, &tipo);
        total_cobaias += quantidade;

        if (tipo == 'C') {
            total_coelhos += quantidade;
        } else if (tipo == 'R') {
            total_ratos += quantidade;
        } else if (tipo == 'S') {
            total_sapos += quantidade;
        }
    }

    printf("Total: %d cobaias\n", total_cobaias);
    printf("Total de coelhos: %d\n", total_coelhos);
    printf("Total de ratos: %d\n", total_ratos);
    printf("Total de sapos: %d\n", total_sapos);
    printf("Percentual de coelhos: %.2f %%\n", (float)total_coelhos / total_cobaias * 100);
    printf("Percentual de ratos: %.2f %%\n", (float)total_ratos / total_cobaias * 100);
    printf("Percentual de sapos: %.2f %%\n", (float)total_sapos / total_cobaias * 100);

    return 0;
}
