#include <stdio.h>

int main()
{
    char name[40],country[40],skill;
    int age;
    printf("Welcome to Hacktoberfest 2021\n");
    printf("Enter your name : ");//Get User name
    scanf("%s",&name);
    printf("Enter your Country of Residence : ");//Get user country
    scanf("%s",&country);
    printf("Enter your Age : ");//Get user Age
    scanf("%d",&age);
    printf("Rate your programming skills from A-D (A being the highest and D being the lowest) : ");//Get user skill level
    scanf("%s", &skill);
    printf("Thank you %s, Happy Hacking", name);//Thank the user

    return 0;
}
