#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*�ǹ� ��ġ input�ޱ�
�� ��ġ input�ޱ�
�ǹ� �� ���� ���� ���� �ǹ��̶� ���� m_minus, m_plus(x���̳ʽ��� ���� ���� ������ �Ʒ�. x�÷����� ���� �Ʒ��� ������ ��)

0<m_plus<1, -1<m_minus<0. ������ -1�̶� 1 ���� ���� ��Ƽ� 0���� �޿�� ������.
�̋� m_plus�� m_minus �����߿� ������ ������ yes, ������ no.
*/

int calculating()
{
    int building_amount;
    int x_house, y_house;
    float plus_y_max_value;
    float minus_y_max_value;
    // input
    scanf("%d\n", &building_amount);
    int building_x1_list[building_amount];
    int building_y1_list[building_amount];
    int building_x2_list[building_amount];
    int building_y2_list[building_amount];
    scanf("%d %d\n", &x_house, &y_house);
    for (int i = 0; i <= building_amount-1; i++)
    {
        scanf("%d %d %d %d\n", &building_x1_list[i], &building_y1_list[i], &building_x2_list[i], &building_y2_list[i]);
    }
    /*
        printf("\n\n\n%d\n\n\n\n", building_amount);
        for (int test = 0; test < building_amount; test++)
        {
            printf("%d   %d   %d   %d\n", building_x1_list[test], building_y1_list[test], building_x2_list[test], building_y2_list[test]);
        }
        */

    //���� ��� ���� �з�
    float m_minus, m_plus;
    float building_m;
    int building_m_minus[building_amount];
    int building_m_plus[building_amount];
    int builing_m_zero[building_amount];
    for (int i = 0; i <= building_amount; i++)
    {
        building_m = (float)(building_y1_list[i] - building_y2_list[i]) / (building_x1_list[i] - building_x2_list[i]);
        if (building_m < 0)
        {
            building_m_minus[i] = building_m;
        }
        if (building_m > 0)
        {
            building_m_plus[i] = building_m;
        }
        if (building_m == 0)
        {
            builing_m_zero[i] = building_m;
        }
    }

    // x��� �������� ���� ���� �ǹ� ã��

    for (int z = 1; z <= building_y1_list[building_amount]; z++)
    {
        plus_y_max_value = building_y1_list[0];

        if (building_y1_list[z] > plus_y_max_value)
        {
            if (building_x2_list[z] > 0)
            {
                plus_y_max_value = building_y1_list[z];
            }
        }
    }

    // x���� �������� ���� ���� �ǹ� ã��

    for (int x = 1; x <= building_y1_list[building_amount]; x++)
    {

        minus_y_max_value = building_y1_list[0];

        if (building_y1_list[x] > minus_y_max_value)
        {
            if (building_x1_list[x] < 0)
            {
                minus_y_max_value = building_y1_list[x];
            }
        }
    } 
    printf("\n%f\n", plus_y_max_value);
    printf("%f\n", minus_y_max_value);
    // x������� �� �ǹ����� ���� ���� �ǹ��� ���� ���ϱ�

    // x�������� �� �ǹ����� ���� ���� �ǹ��� ���� ���ϱ�
}

int main()
{
    calculating();
}