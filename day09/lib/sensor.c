#include "sensor.h"

float calc_avg_temperature(const SensorData *data, int count)
{
    float sum = 0.0f;
    int i;

    if (count <= 0) {
        return 0.0f;
    }

    for (i = 0; i < count; i++) {
        sum += data[i].temperature;
    }

    return sum / count;
}

float calc_max_temperature(const SensorData *data, int count)
{
    float max;
    int i;

    if (count <= 0) {
        return 0.0f;
    }

    max = data[0].temperature;

    for (i = 1; i < count; i++) {
        if (data[i].temperature > max) {
            max = data[i].temperature;
        }
    }

    return max;
}

float calc_min_temperature(const SensorData *data, int count)
{
    float min;
    int i;

    if (count <= 0) {
        return 0.0f;
    }

    min = data[0].temperature;

    for (i = 1; i < count; i++) {
        if (data[i].temperature < min) {
            min = data[i].temperature;
        }
    }

    return min;
}

float calc_avg_humidity(const SensorData *data, int count)
{
    float sum = 0.0f;
    int i;

    if (count <= 0) {
        return 0.0f;
    }

    for (i = 0; i < count; i++) {
        sum += data[i].humidity;
    }

    return sum / count;
}
