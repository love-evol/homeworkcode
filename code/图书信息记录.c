#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct book {
    char bookname[50];
    float unit_price;
    char writer[30];
    char press[50];
    char press_time[20];
    int loan_volume;
};
int main() {
    char choice;
    int i = 0, n;
    struct book books[100];
    printf("图书信息记录系统\n");
    printf("请输入图书信息:\n");
    do {
        printf("请输入第%d本书的书名:", i + 1);
        scanf("%s", books[i].bookname);
        printf("请输入第%d本书的单价:", i + 1);
        scanf("%f", &books[i].unit_price);
        printf("请输入第%d本书的作者:", i + 1);
        scanf("%s", books[i].writer);
        printf("请输入第%d本书的出版社:", i + 1);
        scanf("%s", books[i].press);
        printf("请输入第%d本书的出版时间:", i + 1);
        scanf("%s", books[i].press_time);
        printf("请输入第%d本书的借阅量:", i + 1);
        scanf("%d", &books[i].loan_volume);
        i++;
        printf("是否继续录入图书信息？(y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    printf("图书信息录入结束.\n");
    printf("录入的图书信息如下:\n");
    for (n = 0; n < i; n++) {
        printf("第%d本书的书名:%s\n", n + 1, books[n].bookname);
        printf("第%d本书的单价:%.2f\n", n + 1, books[n].unit_price);
        printf("第%d本书的作者:%s\n", n + 1, books[n].writer);
        printf("第%d本书的出版社:%s\n", n + 1, books[n].press);
        printf("第%d本书的出版时间:%s\n", n + 1, books[n].press_time);
        printf("第%d本书的借阅量:%d\n", n + 1, books[n].loan_volume);
    }
    printf("程序结束.\n");
    return 0;
}