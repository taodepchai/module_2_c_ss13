#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    int i,j,count;
    int max = 0;
    int temp1,temp2;
    printf("nhap chuoi:");
    scanf("%s", &str);
    for (i=0;i<strlen(str)-1;i++) {
        count = 1;
        for (j=i+1;j<strlen(str);j++) {
            if (str[i] == str[j]) {
                if (max < count) {
                    max = count;
                    temp1 = i;
                    temp2 = j;
                    }
                break;
                }
            count++;
            }
        }
    printf("chuoi phan biet co do dai lon nhat la %d:",max);
    for (i=temp1;i<temp2;i++)
        printf("%c",str[i]);
}