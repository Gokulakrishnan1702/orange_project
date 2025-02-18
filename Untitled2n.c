#include <stdio.h>

int main()
{
    int nums[5][4];
    printf("\n ENTER THE NUMBER:");
    scanf("%d",&nums[5][4]);
    for (int i=0;i<5;i++) //row
    {
        for(int j=0;j<4;j++) //column
        {
            scanf("%d",&nums[i][j]);
        }
    }
    printf("ACESSING ARRAY ELEMENTS AFTER DYANAMIC INITILATION");
    for (int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d\t",nums[i][j]);
        }
        printf("\n");
    }
    return 0;
}
