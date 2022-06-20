#include <stdio.h>
#include <stdlib.h>

//직방, 원방 교점 개수과 교점 좌표 찾기
//직방(기울기, 한 점), 원방(중심, 반지름 길이)

double m, lx, ly, liney;        //직선
double cx, cy, cr, xx, yy, crr; //원
int back, Do;                   // summary and interacting

int stline_gi() //기울기와 한 점
{
    int xl, yl;
    printf("직선의 기울기 입력:\n");
    scanf("%Lf", &m);
    printf("직선이 지나는 한 점의 x좌표:\n");
    scanf("%Lf", &lx);
    printf("직선이 지나는 한 점의 y좌표:\n");
    scanf("%Lf", &ly);
    liney = ly - (m * lx);
    xl = (yl - liney) / m;
    yl = m * xl + liney;

    printf("직선의 방정식:\n y=%Lfx+%Lf\n", m, liney);
}

int circle() //원의 방정식
{
    int x, y;
    printf("원의 중심의 x좌표 입력:\n");
    scanf("%Lf", &cx);
    printf("원의 중심의 y좌표 입력:\n");
    scanf("%Lf", &cy);
    printf("원의 반지름 길이 입력:\n");
    scanf("%Lf", &cr);

    xx = (x - cx) * (x - cx);
    yy = (y - cy) * (y - cy);
    crr = cr * cr;
    printf("원의 방정식:\n(x-%Lf)²+(y-%Lf)²=%Lf\n", cx, cy, crr);
}

int calcD()
{
    double D; //판별식 D
    D = (2 * m * liney) * (2 * m * liney) - 4 * (m * m + 1) * ((liney * liney) - (cr * cr));
    // D = b * b - (4 * a * c) =>판별식 D 계산
    printf("%Lf\n\n\n", D);
    if (D == 0) // D=0 -> 교점이 1개
    {
        Do = 1;
        back = 30;
    }
    if (D > 0) // D>0 -> 교점이 2개
    {
        Do = 2;
        back = 30;
    }
    if (D < 0) // D<0 ->교점이 0개
    {
        Do = 0;
        back = 30;
    }
}
int summary()
{
    if (Do == 0) //교점 0개
    {
        printf("y=%Lfx+%Lf와 (x-%Lf)²+(y-%Lf)²=%Lf 사이에는 교점이 %d개 입니다.\n", m, liney, cx, cy, crr, Do);
    }
    if (Do == 1) //교점 1개
    {
        printf("y=%Lfx+%Lf와 (x-%Lf)²+(y-%Lf)²=%Lf 사이에는 교점이 %d개 입니다.\n", m, liney, cx, cy, crr, Do);
    }
    if (Do == 2) //교점 2개
    {
        printf("y=%Lfx+%Lf와 (x-%Lf)²+(y-%Lf)²=%Lf 사이에는 교점이 %d개 입니다.\n", m, liney, cx, cy, crr, Do);
    }
}
int main()
{

    stline_gi();
    circle();
    calcD();
    summary();
    system("pause");
    return 0;
}