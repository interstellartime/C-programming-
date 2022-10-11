#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, power;
    int temppower;
    int result= 1;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the power: ");
    scanf("%d", &power);
    temppower=power;
    while(power>0)
    {
        result = result * num;
        power--;
         }
    printf("%d in the power of %d = %d \n", num, temppower, result);
    return 0;
}
