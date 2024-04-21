#include <stdio.h>
#include <string.h>
struct Student
{
    char name[50];
    int id;
    int hin, eng, mat, sci;
    float avg;
};

int main()
{
    struct Student s[5];
    int i, j;
    float average[5],t;
    char n[50];

    for (i = 0; i < 5; i++)
    {
        printf("Enter Student's Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        // Remove the trailing newline character, if present
        s[i].name[strlen(s[i].name) - 1] = '\0';

        //printf("Enter Student's id: ");
        //scanf("%d", &s[i].id);
        printf("Enter marks obtained in Hindi, English, Maths and Science respectively: ");
        scanf("%d %d %d %d", &s[i].hin, &s[i].eng, &s[i].mat, &s[i].sci);
        fflush(stdin);
        s[i].avg = (s[i].hin + s[i].eng + s[i].mat + s[i].sci) / 4.0;
    }
    
    printf("1. Students who got marks > 70 and < 80 in Hindi\n");
    for(i=0; i<5 ; i++)
    {
        if(s[i].hin > 70 && s[i].hin < 80)
        printf("# %s\n",s[i].name);
    }
    printf("\n");
    printf("2. Students who got marks > 90 in Science but < 50 in english \n");
    for(i=0; i<5 ; i++)
    {
        if(s[i].sci > 90 && s[i].eng < 50)
        printf("# %s\n",s[i].name);
    }
    printf("\n");
    printf("3. Students who got avegrage score > 75 \n");
    for(i=0; i<5 ; i++)
    {
        if(s[i].avg > 75)
        printf("# %s\n",s[i].name);
    }
    printf("\n");
    
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(s[i].avg < s[j].avg)
            {
                t = s[i].avg;
                s[i].avg = s[j].avg;
                s[j].avg = t;
                strcpy(n, s[i].name );
                strcpy(s[i].name, s[j].name);
                strcpy(s[j].name, n);
            }
        }
    }
    printf("4. Performance Table: \n");
    for(i=0;i<5;i++)
    {
        printf("%d. %s\t%f\n",i+1,s[i].name, s[i].avg);
    }
    return 0; 

}