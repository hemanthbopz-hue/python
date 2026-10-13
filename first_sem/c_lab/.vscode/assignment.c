#include <stdio.h>

int main()
{
    int roll[5], marks[5][5];
    char name[5][20];
    int i, j, total[5];
    float average[5], percentage[5];
    int pass[5];

    // Input student details
    for(i = 0; i < 5; i++)
    {
        printf("\nEnter roll number: ");
        scanf("%d", &roll[i]);

        printf("Enter name: ");
        scanf("%19s", name[i]);

        total[i] = 0;
        pass[i] = 1;

        for(j = 0; j < 5; j++)
        {
            printf("Enter marks in subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);

            total[i] = total[i] + marks[i][j];

            if(marks[i][j] < 35)
            {
                pass[i] = 0;
            }
        }

        average[i] = total[i] / 5.0;
        percentage[i] = (total[i] / 500.0) * 100;
    }

    // Display result
    printf("\nROLL\tNAME\tTOTAL\tAVERAGE\tPERCENTAGE\tRESULT\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d\t%s\t%d\t%.2f\t%.2f%%\t\t",
               roll[i], name[i], total[i],
               average[i], percentage[i]);

        if(pass[i] == 1)
        {
            printf("PASS\n");
        }
        else
        {
            printf("FAIL\n");
        }
    }

    return 0;
}
