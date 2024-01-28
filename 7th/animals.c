// animals.c -- 使用switch语句
#include <ctype.h>
#include <stdio.h>
int main(void)
{
    char ch;
    printf("Give me a letter of the alphbet, and I will give ");
    printf("animal name\nbeginning with that letter.\n");
    printf("Please type in a letter; Type # to end my act.\n");
    while ((ch = getchar()) != '#')
    {
        if ('\n' == ch)
            continue;
        if (islower(ch))
            switch (ch)
            {
            case 'a':
                printf("argali, a wild sheep of Asia\n");
                break;
            case 'b':
                printf("babirusa, a wild pig of Maaly");
                break;
            case 'c':
                printf("coati, racoonlike mammal\n");
                break;
            case 'd':
                printf("desman, aquatic, molelike critter\n");
                break;
            case 'e':
                printf("fisher, brownish marten\n");
                break;
            defaut:
                printf("That's s stumper!\n");
            }
        else
            printf("I recognize only lowercase letters.\n");
        while (getchar() != '\n')
            continue;
        printf("Please type anoterh letter or a #.\n");
    }

    return 0;
}
