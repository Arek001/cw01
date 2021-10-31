#include <stdio.h>
#include <stdlib.h>

int main()
{
   float cale, wynik;
   printf("Program przelicza cale na centymetry\n");
   printf("Prosze o podanie dlugosci w calach:");
   scanf("%f",&cale);
   wynik=cale*2.54;
   printf("%.2f cali jest rowne %.2f centymetrow",cale,wynik);

    return 0;
}
