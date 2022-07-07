#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*건물 위치 input받기
집 위치 input받기
건물 각 점당 가장 위에 건물이랑 기울기 m_minus, m_plus(x마이너스면 왼쪽 위랑 오른쪽 아래. x플러스면 왼쪽 아래랑 오른쪽 위)

0<m_plus<1, -1<m_minus<0. 집에서 -1이랑 1 각각 범위 잡아서 0까지 쭈우욱 내려옴.
이떄 m_plus나 m_minus 직선중에 교점이 있으면 yes, 없으면 no.
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

    //기울기 양수 음수 분류
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

    // x양수 지점에서 가장 위에 건물 찾기

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

    // x음수 지점에서 가장 위에 건물 찾기

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
    // x양수에서 각 건물별로 가장 높은 건물과 기울기 정하기

    // x음수에서 각 건물별로 가장 높은 건물과 기울기 정하기
}

int main()
{
    calculating();
}