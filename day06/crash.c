#include <stdio.h>
#include <stdlib.h>

void process_data(int *data, int size)
{
    int i;
    for (i = 0; i <size; i++) {   /* バグ：<= は 1 つ多い */
        data[i] = i * 2;
    }
}

int main(void)
{
    int buf[5];
    process_data(buf, 5);
    printf("完了\n");
    return 0;
}
