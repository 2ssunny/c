#pragma region 
int oddeven() //짝홀판별
{
    int choice, a;
    printf("\n\n검사할 수를 입력하세요\n");
    scanf("%d", &choice);
    a = choice % 2;
    if (a == 0) //짝수
    {
        printf("입력한 수는 짝수입니다.");
    }
    else // a!=0 -> 홀수
    {
        printf("입력한 수는 홀수입니다.");
    }
}
#pragma endregion