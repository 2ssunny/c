#pragma region

/*직방, 원방 교점 개수과 교점 좌표 찾기
직방(기울기, 한 점), 원방(중심, 반지름 길이)*/

extern int input;
double m, liney;       //직선
double cx, cy, cr;     //원
int back, Do;          // summary and interacting
double xa, ya, xb, yb; // summary

int stline_gi() //직선의 방정식
{
    double lx, ly;
    printf("직선의 기울기 입력: ");
    scanf("%Lf", &m);
    printf("직선이 지나는 한 점의 x좌표: ");
    scanf("%Lf", &lx);
    printf("직선이 지나는 한 점의 y좌표: ");
    scanf("%Lf", &ly);
    printf("-------------------------\n");
    liney = ly - (m * lx);
}

int circle() //원의 방정식
{
    int x, y;
    printf("원의 중심의 x좌표 입력: ");
    scanf("%Lf", &cx);
    printf("원의 중심의 y좌표 입력: ");
    scanf("%Lf", &cy);
    printf("원의 반지름 길이 입력: ");
    scanf("%Lf", &cr);
    printf("-------------------------\n");
}

int calcD() //판별식D 계산
{
    double A, B, C, D, rootD;
    double lineycy;
    lineycy = liney - cy;
    A = m * m + 1;
    B = m * lineycy - cx; // x항 1/2 => 2B로 계산해서 x항
    C = cx * cx + lineycy * lineycy - cr * cr;
    D = 4 * B * B - 4 * A * C;
    rootD = sqrt(D);

    xa = (-2 * B + rootD) / (2 * A);
    xb = (-2 * B - rootD) / (2 * A);
    ya = m * xa + liney;
    yb = m * xb + liney;

    if (liney >= 0)
    {
        printf("\n직선의 방정식:\n y=%Lfx+%Lf\n", m, liney);
    }
    if (liney < 0)
    {
        printf("\n직선의 방정식:\n y=%Lfx%Lf\n", m, liney);
    }

    printf("원의 방정식:\n(x-%Lf)²+(y-%Lf)²=%Lf", cx, cy, cr * cr);

    printf("\n\n판별식 D=%Lf\n\n", D); // Output D

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
    printf("교점이 %d개 입니다.\n", Do);
    if (Do == 1) //교점 1개
    {
        printf("\n교점1 (%Lf,%Lf)", xa, ya);
    }
    if (Do == 2) //교점 2개
    {
        printf("\n교점1 (%Lf,%Lf)\n교점2 (%Lf,%Lf)\n", xa, ya, xb, yb);
    }
}
int process()
{
    stline_gi();
    circle();
    calcD();
    summary();
}
#pragma endregion