#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int str_point(void)
{
    int light_speed = 300000;
    int distance = 149600000;
    int time_m;
    int time_s;

    time_m = (distance / light_speed) / 60; //분
    time_s = (distance / light_speed) % 60; //초

    printf("빛의 속도는 %dkm/s\n", light_speed);
    printf("태양과 지구와의 거리 %dkm\n", distance);
    printf("도달 시간은 %d분 %d초", time_m, time_s);

    return 0;
}