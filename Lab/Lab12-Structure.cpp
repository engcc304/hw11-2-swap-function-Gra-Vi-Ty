#include <stdio.h>

void A(int *i, int *j) {
    int c = *i;
    *i = *j;
    *j = c;
}

int main() {
    char name1[50], name2[50];
    int age1, age2;

    printf("Input A\n");
    printf("Name : \n");
    scanf("%s", name1);
    printf("Age :  \n");
    scanf("%d", &age1);

    printf("Input B\n");
    printf("Name : \n");
    scanf("%s", name2);
    printf("Age :  \n");
    scanf("%d", &age2);

    printf("** RESULT **\n");
    printf("Name: %s (%d)\n", name1, age1);
    printf("Name: %s (%d)\n", name2, age2);

    A(&age1, &age2);

    printf("** SWAP AGE **\n");
    printf("Name: %s (%d)\n", name1, age1);
    printf("Name: %s (%d)\n", name2, age2);

    return 0;
}
