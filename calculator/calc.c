#include <stdio.h><math.h>

int main()
{
    int input; //common
    int calchoice, a, b, sum; //계산
    int testchoice, c, summ; //짝홀
    int primeinput, e, f, divsum; //소수판별
    float d; //소수판별

    printf("선택\n1:계산기\n2:짝홀 판별기\n3:소수판별\n:");
    scanf("%d", &input);

    if(input==1){ //계산기
        printf("덧셈은 1, 뺄셈은 2, 곱셈은 3, 나눗셈은 4를 입력하세요.\n");
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
    if(input==2){ //짝홀 판별기
        printf("검사할 수를 입력하세요\n");
        scanf("%d", &testchoice);
        c=testchoice%2;
        if(c==0){ //짝수
        printf("입력한 수는 짝수입니다.");
        }
        if(c==1){ //홀수
        printf("입력한 수는 홀수입니다.");
        }
    }
    if(input==3){ //소수 판별기
        printf("판별할 수를 입력하세요\n");
        scanf("%d",&primeinput);
        d=sqrt(primeinput);
        int f=(int)d;
        for (int i=1; i<=primeinput; i++)
        {
            divsum=primeinput%f;
        }
        
        if(divsum==0){
            printf("입력한 수는 소수가 아닙니다.");
        }
        if(divsum!=0){
            printf("입력한 수는 소수입니다.");
        }
        
    }
    
}