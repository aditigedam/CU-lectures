#include<stdio.h>
#include<string.h>
struct student {
    char name[20];
    int age;
    float grade;
};
int main() {
    int n;
    scanf("%d",&n);
    struct student s[n];
    int i, max = 0;
    for(i=0; i<n; i++) {
        scanf("%d %f %s", &(s[i].age), &(s[i].grade),&(s[i].name));
        if(s[i].grade > s[max].grade) {
            max = i;
        }
    }
    printf("%s %d %0.2f", s[max].name, s[max].age, s[max].grade);
    return 0;
}
