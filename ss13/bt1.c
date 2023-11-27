#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() 
{
    char str[100];
    int i,choice;
    do {
        printf("\n1.nhap vao chuoi ki tu\n");
        printf("2.in ra do dai va chuoi vua nhap\n");
        printf("3.in ra chuoi dao nguoc\n");
        printf("4.in ra so luong chu so trong chuoi\n");
        printf("5.in ra so luong chu cai trong chuoi\n");
        printf("6.in ra so luong ki tu dac biet trong chuoi\n");
        printf("7.thoat\n");
        printf("nhap lua chon cua ban\n");
        scanf("%d" ,&choice);
        switch(choice) {
            case 1:
                printf("nhap vao chuoi ki tu: ");
                scanf("%s", &str);
                printf("\n");
                break;
            case 2:
                printf("chuoi vua nhap la: ");
                puts(str);
                printf("\n");
                break;
            case 3:
                for (i=strlen(str)-1;i>=0;i--)
                printf("%c",str[i]);
                printf("\n");
                break;
            case 4:
                int digit_count = 0;
                for (i=0;i<strlen(str);i++) {
                    if ( isdigit(str[i]) ) 
                        digit_count++;
                }
                printf("so luong chu so trong chuoi la %d",digit_count);
                break;
            case 5:
                int letter_count = 0;
                for (i=0;i<strlen(str);i++) {
                    if ( isalpha(str[i]) )
                        letter_count++;
                }
                printf("\nso luong chu cai trong chuoi la %d",letter_count);
                break;
            case 6:
                int special_count = 0;
                for (i=0;i<strlen(str);i++) {
                    if ( (isalpha(str[i])) || (isdigit(str[i])) ) {
                        printf("");
                    } else special_count++;
                }
                printf("\nso cac ki tu dac biet trong mang la %d",special_count);
                break;
            case 7:
                printf("\nthoat");
                break;
            default:
                printf("\nkhong hop le");
                break;
        }
    } while(choice != 7);
}