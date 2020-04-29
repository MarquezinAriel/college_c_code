#include <stdio.h>

int tetranacci(int n) {
if (n < 4)
return 0;
else
if (n == 4)
return 1;
else
return (tetranacci(n-1) + tetranacci(n-2) + tetranacci(n-3) + tetranacci(n-4));
}

int main() {
int n, k, i;
printf("\nInforme o numero: ");
scanf("%d",&n);
while (n < 4) {
printf("O número precisa ser positivo. Reinforme o número: ");
scanf("%d",&n);
}
for (i=1; i<=n; i++)
printf("\t%d", tetranacci(i));
return 0;
}

