#ifndef SENSOR_H
#define SENSOR_H

typedef struct {
    float temperature;
    float humidity;
    int   timestamp;
} SensorData;

float calc_avg_temperature(const SensorData *data, int count);
float calc_max_temperature(const SensorData *data, int count);
float calc_min_temperature(const SensorData *data, int count);
float calc_avg_humidity(const SensorData *data, int count);

#endif /* SENSOR_H */
