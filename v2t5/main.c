#include <stdio.h>
#include <stdbool.h>

int main()
{
    int idNumber;
    char studentName[20];
    float exam[3];
    float examAverage;
    int x;

    printf("Opiskelijatunniste: ");
    scanf("%d", &idNumber);

    printf("Opiskelija nimi: ");
    scanf("%s", &studentName);

    for(x=0;x<3;x++){
        printf("\n%d:n kokeen arvosana: ",x+1);
        scanf("%f",&exam[x]);

    }
    examAverage=(exam[0]+exam[1]+exam[2])/3.0;
    printf("\n%.2f",examAverage);
    printf("\n\t");
    if(examAverage>=80)
        printf("Kiitettava :)");
    else if (examAverage>=60)
        printf("Hyva");
    else if(examAverage>=40)
        printf("Valttava");
    else
        printf("Hylatty :(");
    printf("\n");

    return 0;
}
