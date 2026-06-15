#include <stdio.h>
#include "../lib/sensor.h"

int main(void)
{
    SensorData test_data[] = {
        {25.3f, 60.0f, 1000},
        {27.1f, 58.5f, 1060},
        {24.8f, 62.3f, 1120},
        {26.5f, 61.0f, 1180},
        {28.0f, 55.2f, 1240},
    };

    int count = sizeof(test_data) / sizeof(test_data[0]);

    printf("=== センサーデータ解析結果 ===\n");
    printf("データ件数  : %d\n", count);
    printf("平均気温    : %.2f ℃\n",
           calc_avg_temperature(test_data, count));
    printf("最高気温    : %.2f ℃\n",
           calc_max_temperature(test_data, count));
    printf("最低気温    : %.2f ℃\n",
           calc_min_temperature(test_data, count));
    printf("平均湿度    : %.2f %%\n",
           calc_avg_humidity(test_data, count));

    return 0;
}
