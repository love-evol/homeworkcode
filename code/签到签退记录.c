#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


struct Time {
    int hour;
    int minute;
    int second;
};
int main() {
    struct Time sign_in, sign_out;
    printf("请输入签到时间（时 分 秒）：");
    scanf("%d %d %d", &sign_in.hour, &sign_in.minute, &sign_in.second);
    printf("请输入签退时间（时 分 秒）：");
    scanf("%d %d %d", &sign_out.hour, &sign_out.minute, &sign_out.second);
    printf("签到时间：%02d:%02d:%02d\n", sign_in.hour, sign_in.minute, sign_in.second);
    printf("签退时间：%02d:%02d:%02d\n", sign_out.hour, sign_out.minute, sign_out.second);
}
    