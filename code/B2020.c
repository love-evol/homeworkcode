#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*题目描述
某个幼儿园里，有 5 位小朋友编号依次为 1,2,3,4,5 他们按照自己的编号顺序围坐在一张圆桌旁。他们身上有若干糖果，现在他们玩一个分糖果游戏。
从 1 号小朋友开始，将自己的糖果均分成 3 份（如果有多余的糖果，就自己立即吃掉），自己留一份，其余两份分给和他相邻的两个小朋友。
接着 2,3,4,5 号小朋友也这样做。问一轮结束后，每个小朋友手上分别有多少糖果。
输入格式
一行，5 个用空格隔开的 int 范围内的正整数，分别是游戏开始时 1,2,3,4,5 号小朋友手里糖果的数量。
输出格式
2 行，第 1 行是用一个空格隔开的 5 个整数，表示一轮游戏结束后 1,2,3,4,5 号小朋友手里糖果的数量。第 2 行是一个整数，表示一轮游戏过程中吃掉的糖果的总数。*/
int main()
{
    int candy_start[6];  // 初始糖果数量，使用索引1-5
    int candy_eat[6];    // 每个小朋友吃掉的糖果数量
    int candy_current[6]; // 当前糖果数量
    int candy_eat_all;    // 被吃掉的糖果总数
    int i;               //循环数
    int share;           // 每次分出去的每份糖果数
    // 初始化
    candy_eat_all = 0;
    for (i = 1; i <= 5; i++)
    {
        candy_eat[i] = 0;
    }
    // 输入初始化糖果数量
    for (i = 1; i <= 5; i++)
    {
        scanf("%d", &candy_start[i]);  // 注意取地址
        candy_current[i] = candy_start[i];
    }
    // 按照顺序分享糖果
    for (i = 1; i <= 5; i++)
    {
        // 计算每份糖果数和吃掉的数量
        share = candy_current[i] / 3;
        candy_eat[i] = candy_current[i] % 3;
        candy_eat_all += candy_eat[i];
        // 自己留一份
        candy_current[i] = share;
        // 分给相邻的两个小朋友
        // 确定左右邻居，注意圆桌
        int left, right;
        if (i == 1)
        {
            left = 5;
        }
        else
        {
            left = i - 1;
        }
        if (i == 5)
        {
            right = 1;
        }
        else
        {
            right = i + 1;
        }
        candy_current[left] += share;
        candy_current[right] += share;
    }
    // 输出最终糖果数量
    for (i = 1; i <= 5; i++)
    {
        printf("%d ", candy_current[i]);
    }
    printf("\n%d", candy_eat_all);

}