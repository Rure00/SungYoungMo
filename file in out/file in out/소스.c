#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define MAX 1000


int main()
{
    FILE* fp;
    FILE* fp2;

    char nums[MAX] = { 0 };
    int numary[MAX] = { 0 };

    int numary_time = 0;
    int comnum1;

    fp = fopen("myInput.txt", "r");
    fp2 = fopen("myOutput.txt","w");

    if (fp == NULL) {
        printf("���Ͽ��� ����\n");
        return -1;
    }
    else 
    {
        printf("���Ͽ��� ����\n");
    }

    fread(nums, sizeof(char), MAX, fp);
  

    for (int i = 0; i < MAX; i++)
    {
        if (i == 0)
        {
            comnum1 = atoi(&nums[i]);

            numary[numary_time] = comnum1;
            printf("%d\n", comnum1);
            numary_time = numary_time + 1;
        }
        else 
        {
            if (nums[i] == '\n')
            {            
                if (comnum1 == NULL)
                {

                }
                else
                {
                    comnum1 = atoi(&nums[i + 1]);

                    numary[numary_time] = comnum1;

                    numary_time = numary_time + 1;

                    printf("%d\n", comnum1);
                }
            }
        }
    }

    printf("\n");
    int c = 0;
    int Ascending[MAX] = { 0 };

    for (int i = 0; i < numary_time; i++)
    {
        if (i == 0) 
        {
        Ascending[c] == numary[i];    
        }
        if (numary[i] < Ascending[c])
        {
            Ascending[c] = numary[i];
        }



            printf("%d\n", numary[i]);
        
    }
//�迭 �ϳ� �� ����� ó�� �� �迭 0�� �����ϰ� �� ������ ���ϰ� ���� �۴ٸ� �迭 0�� ����,  



    /*fprintf(fp2, "%s\n", nums);
    fprintf(fp2, "\n");
    fprintf(fp2, "%p\n", numary);*/


    fclose(fp);
    fclose(fp2);

    return 0;
}