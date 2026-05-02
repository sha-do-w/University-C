#include <stdio.h>
#include <string.h>
#include <ctype.h>

void helloFinder();
void oldSenators();
void textToAscii();

void main()
{
    int Exit;
    int userChoices[2] = {0, 0};
    do
    {
        puts("======== MAIN MENU ========\n");
        puts("[1] hello  finder");
        puts("[2] old  senators");
        puts("[3] text to ascii");
        puts("[9] exit");
        puts("Select a program:");

        userChoices[0] = userChoice(userChoices[0], 0);

        switch (userChoices[0])
        {
        case 1:
            helloFinder();
            break;
        case 2:
            oldSenators();
            break;
        case 3:
            textToAscii();
            break;
        case 9:
            Exit = 1;
            break;
        }

        if (Exit == 1)
            break;

        do
        {
            puts("\n[1] restart \t [2] main menu \t [9] exit");
            puts("Select an option:");
            userChoices[1] = userChoice(userChoices[1], 1);
            switch (userChoices[1])
            {
            case 1:
                Exit = 0;
                switch (userChoices[0])
                {
                case 1:
                    helloFinder();
                    break;
                case 2:
                    oldSenators();
                    break;
                case 3:
                    textToAscii();
                    break;
                }
                break;
            case 2:
                Exit = 0;
                break;
            case 9:
                Exit = 1;
                break;
            }
        } while (userChoices[1] == 1);

    } while (Exit != 1);
}

int userChoice(int choice, int type)
{
    scanf(" %d", &choice);
    int max;
    if (choice == 9)
        return 9;
    if (type == 0)
        max = 3;
    else if (type == 1)
        max = 2;
    while (choice > max || choice < 1)
    {
        while (getchar() != '\n')
            ;
        puts("Invalid input! Please enter a number.");
        scanf("%d", &choice);
    }
    while (getchar() != '\n')
        ;
    return choice;
}

void helloFinder()
{
    puts("\n======== HELLO  FINDER ========\n");
    puts("Say hello.");
    char text[101];
    fgets(text, 101, stdin);
    int helloLtr[5] = {0, 0, 0, 0, 0};
    int isHello = 1;
    int constance = 0;

    for (int i = 0; i < strlen(text); i++)
    {
        switch (tolower(text[i]))
        {
        case 'h':
            if (helloLtr[0] == 0 && constance == 0)
            {
                helloLtr[0] = 1;
                constance = 1;
            }
            break;

        case 'e':
            if (helloLtr[1] == 0 && constance == 1)
            {
                helloLtr[1] = 1;
                constance = 2;
            }
            break;

        case 'l':
            if (helloLtr[2] == 0 && constance == 2)
            {
                helloLtr[2] = 1;
                constance = 3;
            }
            else if (helloLtr[3] == 0 && constance == 3)
            {
                helloLtr[3] = 1;
                constance = 4;
            }
            break;

        case 'o':
            if (helloLtr[4] == 0 && constance == 4)
            {
                helloLtr[4] = 1;
                constance = 5;
            }
            break;

        default:
            if (constance < 5)
            {
                constance = 0;
                for (int j = 0; j < 5; j++)
                {
                    helloLtr[j] = 0;
                }
            }
            break;
        }
    }

    if (constance < 5)
    {
        isHello = 0;
        for (int i = 0; i < 5; i++)
        {
            helloLtr[i] = 0;
            break;
        }
    }

    if (isHello == 1)
    {
        puts("Hi.");
    }
    else
    {
        puts("What?");
    }
}

void oldSenators()
{
    puts("\n======== OLD  SENATORS ========\n");
    puts("Please enter the age of the parleman's members\n");
    int oldAges[2] = {0, 0};
    int ageContainer = 0;

    for (int i = 0; i >= 0; i++)
    {
        printf("member %d\n", i + 1);
        if (scanf(" %d", &ageContainer) != 1)
        {
            puts("Invalid input!");
            continue;
        }

        if (ageContainer < 10 || ageContainer > 90)
        {
            if (ageContainer == -1)
            {
                break;
            }
            else
            {
                puts("Error! out of range!");
                i--;
                continue;
            }
        }

        if (ageContainer > oldAges[0])
        {
            oldAges[1] = oldAges[0];
            oldAges[0] = ageContainer;
        }
        else if (ageContainer > oldAges[1])
        {
            oldAges[1] = ageContainer;
        }
    }

    puts("\nresult");
    puts("--------");
    printf("1st oldest one : %d\n", oldAges[0]);
    printf("2nd oldest one : %d\n", oldAges[1]);
}

void textToAscii()
{
    char text[151];
    puts("\n======== TEXT TO ASCII ========\n");
    puts("Please enter your text. [max=150]");
    fgets(text, 151, stdin);
    puts("\nthe translated text to ascii:");
    for (int i = 0; i < strlen(text) - 1; i++)
    {
        printf("%d ", text[i]);
    }
}