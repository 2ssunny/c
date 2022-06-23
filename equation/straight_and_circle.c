#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*직방, 원방 교점 개수과 교점 좌표 찾기
직방(기울기, 한 점), 원방(중심, 반지름 길이)*/

double m, lx, ly, liney;        //직선
double cx, cy, cr; //원
int back, Do;                   // summary and interacting
double xa, ya, xb, yb, D;       // summary

int stline_gi() //기울기와 한 점
{
    printf("직선의 기울기 입력:\n");
    scanf("%Lf", &m);
    printf("직선이 지나는 한 점의 x좌표:\n");
    scanf("%Lf", &lx);
    printf("직선이 지나는 한 점의 y좌표:\n");
    scanf("%Lf", &ly);
    liney = ly - (m * lx);

    if (liney >= 0)
    {
        printf("직선의 방정식:\n y=%Lfx+%Lf\n", m, liney);
    }
    else
    {
        printf("직선의 방정식:\n y=%Lfx%Lf\n", m, liney);
    }
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
    printf("원의 방정식:\n(x-%Lf)²+(y-%Lf)²=%Lf\n\n", cx, cy, cr*cr);
}

int calcD() //판별식 계산
{
    double A, B, C, rootD;
    double lineycy;
    lineycy = liney - cy;
    A = m * m + 1;
    B = m * lineycy - cx; // x항 1/2 => 2B로 계산해서 x항
    C = cx * cx + lineycy * lineycy - cr*cr;
    D = 4 * B * B - 4 * A * C;
    rootD = sqrt(D);

    xa=(-2*B+rootD)/(2*A);
    xb=(-2*B-rootD)/(2*A);
    ya=m*xa+liney;
    yb=m*xb+liney;
    /*xa = (-4 * B + rootD) / (2 * A);
    xb = (-4 * B - rootD) / (2 * A);
    ya = m * xa + liney;
    yb = m * xb + liney;
    */

    printf("\n\n\nD=%Lf\n\n\n", D); // D값 확인

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
int summary() //결과 출력
{
    if (Do == 0) //교점 0개
    {
        printf("y=%Lfx+%Lf와 (x-%Lf)²+(y-%Lf)²=%Lf 사이에는 교점이 %d개 입니다.\n", m, liney, cx, cy, cr*cr, Do);
    }
    if (Do == 1) //교점 1개
    {
        printf("y=%Lfx+%Lf와 (x-%Lf)²+(y-%Lf)²=%Lf 사이에는 교점이 %d개 입니다.\n", m, liney, cx, cy, cr*cr, Do);
        printf("교점의 좌표:(%Lf,%Lf)", xa, yb);
    }
    if (Do == 2) //교점 2개
    {
        printf("y=%Lfx+%Lf와 (x-%Lf)²+(y-%Lf)²=%Lf 사이에는 교점이 %d개 입니다.\n", m, liney, cx, cy, cr*cr, Do);
        printf("교점의 좌표:(%Lf,%Lf), (%Lf,%Lf)\n", xa, ya, xb, yb);
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