#include <stdio.h>
#include <stdlib.h>

int primerange() //범위내 소수
{
    int ranf, rant, a, b;
    printf("\n범위를 시작 할 수 입력\n:");
    scanf("%d", &ranf);
    printf("\n범위를 끝낼 수 입력\n:");
    scanf("%d", &rant);
    printf("\n%d와 %d사이의 소수:\n ", ranf, rant);
    for (a = ranf; a <= rant; a++)
    {
        for (b = 2; b < a; b++) // a이 소수면 b가 a이 되면 반복문이 끝남
        {
            if (a % b == 0) // b는 a의 약수
            {
                break; // b가 a보다 작은 상태로 반복문 탈출
            }
        }
        if (b == a) //소수임
        {
            printf("%d  ", b);
        }
    }
    printf("\n");
}

int main()
{
    primerange();
    return 0;
}