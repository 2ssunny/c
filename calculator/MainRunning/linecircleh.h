#pragma region

/*����, ���� ���� ������ ���� ��ǥ ã��
����(����, �� ��), ����(�߽�, ������ ����)*/

extern int input;
double m, liney;       //����
double cx, cy, cr;     //��
int back, Do;          // summary and interacting
double xa, ya, xb, yb; // summary

int stline_gi() //������ ������
{
    double lx, ly;
    printf("������ ���� �Է�: ");
    scanf("%Lf", &m);
    printf("������ ������ �� ���� x��ǥ: ");
    scanf("%Lf", &lx);
    printf("������ ������ �� ���� y��ǥ: ");
    scanf("%Lf", &ly);
    printf("-------------------------\n");
    liney = ly - (m * lx);
}

int circle() //���� ������
{
    int x, y;
    printf("���� �߽��� x��ǥ �Է�: ");
    scanf("%Lf", &cx);
    printf("���� �߽��� y��ǥ �Է�: ");
    scanf("%Lf", &cy);
    printf("���� ������ ���� �Է�: ");
    scanf("%Lf", &cr);
    printf("-------------------------\n");
}

int calcD() //�Ǻ���D ���
{
    double A, B, C, D, rootD;
    double lineycy;
    lineycy = liney - cy;
    A = m * m + 1;
    B = m * lineycy - cx; // x�� 1/2 => 2B�� ����ؼ� x��
    C = cx * cx + lineycy * lineycy - cr * cr;
    D = 4 * B * B - 4 * A * C;
    rootD = sqrt(D);

    xa = (-2 * B + rootD) / (2 * A);
    xb = (-2 * B - rootD) / (2 * A);
    ya = m * xa + liney;
    yb = m * xb + liney;

    if (liney >= 0)
    {
        printf("\n������ ������:\n y=%Lfx+%Lf\n", m, liney);
    }
    if (liney < 0)
    {
        printf("\n������ ������:\n y=%Lfx%Lf\n", m, liney);
    }

    printf("���� ������:\n(x-%Lf)��+(y-%Lf)��=%Lf", cx, cy, cr * cr);

    printf("\n\n�Ǻ��� D=%Lf\n\n", D); // Output D

    if (D == 0) // D=0 -> ������ 1��
    {
        Do = 1;
        back = 30;
    }
    if (D > 0) // D>0 -> ������ 2��
    {
        Do = 2;
        back = 30;
    }
    if (D < 0) // D<0 ->������ 0��
    {
        Do = 0;
        back = 30;
    }
}

int summary() //��� ���
{
    printf("������ %d�� �Դϴ�.\n", Do);
    if (Do == 1) //���� 1��
    {
        printf("\n����1 (%Lf,%Lf)", xa, ya);
    }
    if (Do == 2) //���� 2��
    {
        printf("\n����1 (%Lf,%Lf)\n����2 (%Lf,%Lf)\n", xa, ya, xb, yb);
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