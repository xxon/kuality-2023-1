#include <stdio.h>
#include <string.h>

int main()
{
    char meal[20]="nice";
    int num;
    char* good;

    int r1 = strcmp (meal, "jeyuk");
    int r2 = strcmp (meal, "duenjangjjigye");
    int r3 = strcmp (meal, "ramen");
    int r4 = strcmp (meal, "jjajangmyun");
    int r5 = strcmp (meal, "samgyupsal");

    if (!r1)
    {
        num = 1;
    }
    else if (!r2)
    {
        num = 2;
    }
    else if (!r3)
    {
        num = 3;
    }
    else if (!r4)
    {
        num = 4;
    }
    else if (!r5)
    {
        num = 5;
    }
    else
    {
        printf("오늘 영업은 끝났습니다");
    }

    switch (num)
    {
        case 1:
            printf("제육덮밥");
            break;
        case 2:
            printf("된장찌개");
            break;
        case 3:
            printf("라멘");
            break;
        case 4:
            printf("짜장면\n");
            break;
        case 5:
            printf("삼겹살\n");
            break;
    }

        if(num == 4)
        {
            printf("군만두 서비스");
        }

        if(num == 5)
        {
            printf("1500원 추가시 비빔면 제공");
        }

       good = (num==1||num==2||num==3||num==4||num==5) ? \
        "\n잘먹었습니다" : "\n다음에 다시 와주세요";
    
    printf("%s", good);
    return 0;
}