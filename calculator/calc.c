#include <stdio.h>
#include <math.h>

int main()
{
    int input;
    int calchoice, a, b, sum;
    int testchoice, c, summ;
    printf("계산기: 1, 짝홀 검사기: 2, 소수판별기: 3을 입력하세요.");
    scanf("%d", &input);

    if(input==1){ //계산기
        printf("덧셈은 1, 뺄셈은 2, 곱셈은 3, 나눗셈은 4를 입력하세요.");
        scanf("%d", &calchoice);

        if(calchoice==1){ //덧셈
            printf("첫번째 수 입력");
            scanf("%d",&a);
            printf("두번째 수 입력");
            scanf("%d",&b);
            sum=a+b;
            printf("결과는 %d",sum);
        }

        if(calchoice==2){ //뺄셈
            printf("첫번째 수 입력");
            scanf("%d",&a);
            printf("두번째 수 입력");
            scanf("%d",&b);
            sum=a-b;
            printf("결과는 %d",sum);
        }

        if(calchoice==3){ //곱셈
            printf("첫번째 수 입력");
            scanf("%d",&a);
            printf("두번째 수 입력");
            scanf("%d",&b);
            sum=a*b;
            printf("결과는 %d",sum);
        }

        if(calchoice==4){ //나눗셈
            printf("첫번째 수 입력");
            scanf("%d",&a);
            printf("두번째 수 입력");
            scanf("%d",&b);
            sum=a/b;
            printf("결과는 %d",sum);
        }
    }
    if(input==2){ //짝홀 검사기
        printf("검사할 수를 입력하세요");
        scanf("%d", &testchoice);
        c=testchoice%2;
        if(c==0){ //짝수
        printf("입력한 수는 짝수입니다.");
        }
        if(c==1){ //홀수
        printf("입력한 수는 홀수입니다.");
        }
    }
}