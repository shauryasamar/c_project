#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char USERNAME[10], PASSWORD[10], USERNAME1[10], PASSWORD1[10], PASSWORD2[10], SQUESTION[10], SQUESTION1[10];
char FNAME[10], LNAME[10], GENDER[10];
int MOBILE_NO;
void SIGN_IN()
{
    int in, k = 0, ch;
    do
    {
        printf("***********************************\n");
        printf("USERNAME:-");
        scanf("%s", USERNAME1);
        printf("-----------------------------------\n");
        printf("PASSWORD:-");
        scanf("%s", PASSWORD1);
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("***********************************\n");
        printf("\n");
        printf("\n");

        if (strcmp(PASSWORD, PASSWORD1) != 0 || strcmp(USERNAME, USERNAME1) != 0)
        {
            k = 1;
        }
        else
        {
            k = 0;
        }
        if (k == 1)
        {
            printf("***********************************\n");
            printf("INVALID USERNAME/PASSWORD \n");
            printf("-----------------------------------\n");
            printf("PRESS 0 TO RE-ENTER USERNAME\n");
            printf("-----------------------------------\n");
            printf("PRESS 1 TO GO BACK\n");
            printf("-----------------------------------\n");
            printf("\n");
            printf("\n");
            printf("***********************************\n");
            scanf("%d", &in);
            printf("\n");
            printf("\n");
        }
        else
        {
            printf("***********************************\n");
            printf("PRESS 1 TO SIGN IN\n");
            printf("-----------------------------------\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("***********************************\n");
            scanf("%d", &in);
            printf("\n");
            printf("\n");
        }

    } while (k == 1 && in == 0);

    if (strcmp(PASSWORD, PASSWORD1) == 0 && strcmp(USERNAME, USERNAME1) == 0)
    {
        printf("\n");
        printf("\n");
        printf("\n");
        printf("***********************************\n");
        printf("                                   \n");
        printf("        ------WELCOME------        \n");
        printf("                                   \n");
        printf("                                   \n");
        printf("              %s                   \n", FNAME);
        printf("                                   \n");
        printf("                                   \n");
        printf("            SIGNING IN!!!          \n");
        printf("***********************************\n");
        printf("\n");
        printf("\n");
    }
    if (strcmp(PASSWORD, PASSWORD1) == 0 && strcmp(USERNAME, USERNAME1) == 0)
    {
        printf("***********************************\n");
        printf("PRESS 0 TO SIGN OUT\n");
        printf("-----------------------------------\n");
        printf("PRESS 1 TO SHUT DOWN\n");
        printf("-----------------------------------\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("***********************************\n");

        scanf("%d", &ch);
        printf("\n");
        printf("\n");
        switch (ch)
        {
        case 0:
            break;
        case 1:
            printf("***********************************\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("           SHUTING DOWN...         \n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("***********************************\n");
            exit(0);
            break;
        default:
            printf("***********************************\n");
            printf("PLEASE ENTER VALID INPUT!!!\n");
            printf("-----------------------------------\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("***********************************\n");
            printf("\n");
            printf("\n");
        }
    }
}
void SIGN_UP()
{
    char SIGNUPPASS[10], pass[10] = "admin@123";
    int p = 0, in, len;

    do
    {
        printf("***********************************\n");
        printf("ENTER THE SIGN UP PASSWORD PROVIDED\n BY SELLER:-");
        scanf("%s", SIGNUPPASS);
        printf("-----------------------------------\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("***********************************\n");
        printf("\n");
        printf("\n");

        if (strcmp(SIGNUPPASS, pass) == 0)
        {
            printf("***********************************\n");
            printf("FIRST NAME:-");
            scanf("%s", FNAME);
            printf("-----------------------------------\n");
            printf("LAST NAME:-");
            scanf("%s", LNAME);
            printf("-----------------------------------\n");
            printf("GENDER:-");
            scanf("%s", GENDER);
            printf("-----------------------------------\n");
            printf("MOBILE NUMBER:-");
            scanf("%d", &MOBILE_NO);
            printf("-----------------------------------\n");
            printf("CHOSE YOUR USERNAME:-");
            scanf("%s", USERNAME);
            printf("***********************************\n");
            printf("\n");
            printf("\n");
            do
            {
                printf("***********************************\n");
                printf("** PASSWORD should atleast contain\n 8 charactert **\n");
                printf("-----------------------------------\n");
                printf("CREAT PASSWORD:-");
                scanf("%s", PASSWORD);
                printf("-----------------------------------\n");
                printf("REENTER PASSWORD:-");
                scanf("%s", PASSWORD2);
                printf("-----------------------------------\n");
                printf("\n");
                printf("\n");
                printf("\n");
                printf("***********************************\n");
                printf("\n");
                printf("\n");
                if (strcmp(PASSWORD, PASSWORD2) != 0)
                {
                    p = 1;
                }
                else
                {
                    p = 0;
                }
                if (p == 1)
                {
                    printf("***********************************\n");
                    printf("PASSWORD DIDN'T MATCHED\n");
                    printf("-----------------------------------\n");
                    printf("PLEASE RE-ENTER!\n");
                    printf("-----------------------------------\n");
                }
                if (strlen(PASSWORD) < 8)
                {
                    printf("***********************************\n");
                    printf("PASSWORD IS NOT CONTANING 8 \nCHARACTER!\n");
                }

            } while (strcmp(PASSWORD, PASSWORD2) != 0 || strlen(PASSWORD) < 8);
            printf("***********************************\n");
            printf("ENTER A SECURITY QUESTION IN CASE\n YOU FORGET YOUR PASSWORD\n");
            printf("-----------------------------------\n");

            printf("YOUR FAVOURITE BOOK:-");
            scanf("%s", SQUESTION);
            printf("-----------------------------------\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("***********************************\n");
            printf("\n");
            printf("\n");

            printf("***********************************\n");
            printf("YOUR ACCOUNT IS READY TO SIGN IN\n");
            printf("-----------------------------------\n");
            printf("PRESS 0 TO SAVE INFORMATION\n");
            printf("-----------------------------------\n");
            printf("PRESS 1 TO RE-ENTER INFORMATION\n");
            printf("-----------------------------------\n");
            printf("\n");
            printf("\n");
            printf("***********************************\n");
            scanf("%d", &in);
            printf("\n");
            printf("\n");
        }
        else
        {
            printf("***********************************\n");
            printf("INVALID SIGN UP PASSWORD!!\n");
            printf("-----------------------------------\n");
            printf("PRESS 0 TO GO BACK\n");
            printf("-----------------------------------\n");
            printf("PRESS 1 TO RE-ENTER INFORMATION\n");
            printf("-----------------------------------\n");
            printf("\n");
            printf("\n");
            printf("***********************************\n");
            scanf("%d", &in);
            printf("\n");
            printf("\n");
        }
    } while (in != 0);
}

void FORGET()
{

    int k, in, p;
    do
    {
        printf("***********************************\n");
        printf("YOUR FOVOURITE BOOK? :-");
        scanf("%s", SQUESTION1);
        printf("-----------------------------------\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("***********************************\n");
        printf("\n");
        printf("\n");

        if (strcmp(SQUESTION, SQUESTION1) != 0)
        {
            k = 1;
        }
        else
        {
            k = 0;
        }
        if (strcmp(SQUESTION, SQUESTION1) == 0)
        {

            do
            {
                printf("***********************************\n");
                printf("** PASSWORD should atleast contain\n 8 charactert **\n");
                printf("-----------------------------------\n");
                printf("CREAT PASSWORD:-");
                scanf("%s", PASSWORD);
                printf("-----------------------------------\n");
                printf("REENTER PASSWORD:-");
                scanf("%s", PASSWORD2);
                printf("-----------------------------------\n");
                printf("\n");
                printf("\n");
                printf("\n");
                printf("***********************************\n");
                printf("\n");
                printf("\n");
                if (strcmp(PASSWORD, PASSWORD2) != 0)
                {
                    p = 1;
                }
                else
                {
                    p = 0;
                }
                if (p == 1)
                {
                    printf("***********************************\n");
                    printf("PASSWORD DIDN'T MATCHED\n");
                    printf("-----------------------------------\n");
                    printf("PLEASE RE-ENTER!\n");
                    printf("-----------------------------------\n");
                }
                if (strlen(PASSWORD) < 8)
                {
                    printf("***********************************\n");
                    printf("PASSWORD IS NOT CONTANING 8 \nCHARACTER!\n");
                }

            } while (strcmp(PASSWORD, PASSWORD2) != 0 || strlen(PASSWORD) < 8);
        }
        if (k == 1)
        {
            printf("***********************************\n");
            printf("INVALID ANSWER!\n");
            printf("-----------------------------------\n");
            printf("PRESS 0 TO RE-ENTER\n");
            printf("-----------------------------------\n");
            printf("PRESS 1 TO GO BACK\n");
            printf("-----------------------------------\n");
            printf("\n");
            printf("\n");
            printf("***********************************\n");
            scanf("%d", &in);
            printf("\n");
            printf("\n");
        }
        else
        {
            printf("***********************************\n");
            printf("PASSWORD CHANGED!\n");
            printf("-----------------------------------\n");
            printf("PRESS 1 TO SAVE\n");
            printf("-----------------------------------\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("***********************************\n");

            scanf("%d", &in);
            printf("\n");
            printf("\n");
        }

    } while (k == 1 && in == 0);
}

void FUSERNAME()
{
    int k, in, p;
    do
    {
        printf("***********************************\n");
        printf("YOUR FOVOURITE BOOK? :-");
        scanf("%s", SQUESTION1);
        printf("-----------------------------------\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("***********************************\n");
        printf("\n");
        printf("\n");

        if (strcmp(SQUESTION, SQUESTION1) != 0)
        {
            k = 1;
        }
        else
        {
            k = 0;
        }
        if (strcmp(SQUESTION, SQUESTION1) == 0)
        {
            printf("***********************************\n");
            printf("CHOSE YOUR USERNAME:-");
            scanf("%s", USERNAME);
            printf("-----------------------------------\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");

            printf("***********************************\n");
            printf("\n");
            printf("\n");
        }

        if (k == 1)
        {

            printf("***********************************\n");
            printf("INVALID ANSWER!\n");
            printf("-----------------------------------\n");
            printf("PRESS 0 TO RE-ENTER\n");
            printf("-----------------------------------\n");
            printf("PRESS 1 TO GO BACK\n");
            printf("-----------------------------------\n");
            printf("\n");
            printf("\n");
            printf("***********************************\n");
            scanf("%d", &in);
            printf("\n");
            printf("\n");
        }
        else
        {
            printf("***********************************\n");
            printf("USERNAME CHANGED!\n");
            printf("-----------------------------------\n");
            printf("PRESS 1 TO SAVE\n");
            printf("-----------------------------------\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("***********************************\n");
            scanf("%d", &in);
            printf("\n");
            printf("\n");
        }

    } while (k == 1 && in == 0);
}

void USER_INFO()
{
    int inp, in, k, l, inp1, g;
    do
    {
        printf("***********************************\n");
        printf("1.VIEW INFORMATION\n");
        printf("-----------------------------------\n");
        printf("2.CHANGE INFORMATION\n");
        printf("-----------------------------------\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("***********************************\n");
        scanf("%d", &inp);

        switch (inp)
        {
        case 1:
            do
            {
                printf("***********************************\n");
                printf("LOG IN FIRST\n");
                printf("-----------------------------------\n");
                printf("USERNAME:-");
                scanf("%s", USERNAME1);
                printf("-----------------------------------\n");
                printf("PASSWORD:-");
                scanf("%s", PASSWORD1);
                printf("\n");
                printf("\n");
                printf("\n");
                printf("\n");
                printf("***********************************\n");
                printf("\n");
                printf("\n");

                if (strcmp(PASSWORD, PASSWORD1) != 0 || strcmp(USERNAME, USERNAME1) != 0)
                {
                    k = 1;
                }
                else
                {
                    k = 0;
                }
                if (k == 1)
                {
                    printf("***********************************\n");
                    printf("INVALID USERNAME/PASSWORD \n");
                    printf("-----------------------------------\n");
                    printf("PRESS 0 TO RE-ENTER USERNAME\n");
                    printf("-----------------------------------\n");
                    printf("PRESS 1 TO GO BACK\n");
                    printf("-----------------------------------\n");
                    printf("\n");
                    printf("\n");
                    printf("***********************************\n");
                    scanf("%d", &in);
                    printf("\n");
                    printf("\n");
                }
                else
                {
                    printf("***********************************\n");
                    printf("NAME:- %s %s\n", FNAME, LNAME);
                    printf("-----------------------------------\n");
                    printf("GENDER:- %s\n", GENDER);
                    printf("-----------------------------------\n");
                    printf("MOBILE NO:- %d\n", MOBILE_NO);
                    printf("-----------------------------------\n");

                    printf("\n");
                    printf("\n");
                    printf("PRESS 1 TO GO BACK\n");
                    printf("***********************************\n");
                    scanf("%d", &in);
                    printf("\n");
                    printf("\n");
                }
            } while (k == 1 && in == 0);

            break;
        case 2:
            do
            {
                printf("***********************************\n");
                printf("LOG IN FIRST\n");
                printf("-----------------------------------\n");
                printf("USERNAME:-");
                scanf("%s", USERNAME1);
                printf("-----------------------------------\n");
                printf("PASSWORD:-");
                scanf("%s", PASSWORD1);
                printf("\n");
                printf("\n");
                printf("\n");
                printf("\n");
                printf("***********************************\n");
                printf("\n");
                printf("\n");

                if (strcmp(PASSWORD, PASSWORD1) != 0 || strcmp(USERNAME, USERNAME1) != 0)
                {
                    l = 1;
                }
                else
                {
                    l = 0;
                }
                if (l == 1)
                {
                    printf("***********************************\n");
                    printf("INVALID USERNAME/PASSWORD \n");
                    printf("-----------------------------------\n");
                    printf("PRESS 0 TO RE-ENTER USERNAME\n");
                    printf("-----------------------------------\n");
                    printf("PRESS 1 TO GO BACK\n");
                    printf("-----------------------------------\n");
                    printf("\n");
                    printf("\n");
                    printf("***********************************\n");
                    scanf("%d", &in);
                    printf("\n");
                    printf("\n");
                }
                else
                {
                    printf("***********************************\n");
                    printf("WHAT INFO WANT TO CHANGE?\n");
                    printf("-----------------------------------\n");
                    printf("1.FIRST NAME\n");
                    printf("-----------------------------------\n");
                    printf("2.LAST NAME\n");
                    printf("-----------------------------------\n");
                    printf("3.GENDER\n");
                    printf("-----------------------------------\n");
                    printf("4.MOBILE NUMBER\n");
                    printf("***********************************\n");
                    printf("\n");
                    printf("\n");
                    scanf("%d", &inp1);
                    switch (inp1)
                    {
                    case 1:
                        printf("***********************************\n");
                        printf("FIRST NAME:-");
                        scanf("%s", FNAME);
                        printf("-----------------------------------\n");
                        printf("\n");
                        printf("\n");
                        printf("\n");
                        printf("***********************************\n");

                        break;
                    case 2:
                        printf("***********************************\n");
                        printf("LAST NAME:-");
                        scanf("%s", LNAME);
                        printf("-----------------------------------\n");
                        printf("\n");
                        printf("\n");
                        printf("\n");
                        printf("***********************************\n");
                        break;
                    case 3:
                        printf("***********************************\n");
                        printf("GENDER:-");
                        scanf("%s", GENDER);
                        printf("-----------------------------------\n");
                        printf("\n");
                        printf("\n");
                        printf("\n");
                        printf("***********************************\n");
                        break;
                    case 4:
                        printf("***********************************\n");
                        printf("MOBILE NUMBER:-");
                        scanf("%d", &MOBILE_NO);
                        printf("-----------------------------------\n");
                        printf("\n");
                        printf("\n");
                        printf("\n");
                        printf("***********************************\n");
                        break;
                    default:
                        printf("***********************************\n");
                        printf("PLEASE ENTER VALID INPUT!!!\n");
                        printf("-----------------------------------\n");
                        printf("\n");
                        printf("\n");
                        printf("\n");
                        printf("\n");
                        printf("***********************************\n");
                    }

                    printf("***********************************\n");
                    printf("PRESS 1 TO SAVE\n");
                    printf("-----------------------------------\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("***********************************\n");
                    scanf("%d", &in);
                    printf("\n");
                    printf("\n");
                }
            } while (l == 1 && in == 0);
            break;
        default:
            printf("***********************************\n");
            printf("PLEASE ENTER VALID INPUT!!!\n");
            printf("-----------------------------------\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("***********************************\n");
        }
        printf("***********************************\n");
        printf("PRESS 1 FOR MAIN MENU\n");
        printf("-----------------------------------\n");
        printf("PRESS 0 FOR PREVIOUS MENU\n");
        printf("-----------------------------------\n");
        printf("\n");
        printf("\n");
        printf("***********************************\n");
        scanf("%d", &g);
        printf("\n");
        printf("\n");
    } while (g == 0);
}

int main()
{
    int ch;
    do
    {
        printf("***********************************\n");
        printf("            1.SIGN IN              \n");
        printf("-----------------------------------\n");
        printf("            2.SIGN UP              \n");
        printf("-----------------------------------\n");
        printf("           3.USER INFO             \n");
        printf("-----------------------------------\n");
        printf("        4.FORGET PASSWORD          \n");
        printf("-----------------------------------\n");
        printf("        5.FORGET USERNAME          \n");
        printf("-----------------------------------\n");
        printf("        6.SHUT DOWN SYSTEM         \n");
        printf("***********************************\n");
        scanf("%d", &ch);
        printf("\n");
        printf("\n");

        switch (ch)
        {
        case 4:
            FORGET();
            break;

        case 2:
            SIGN_UP();
            break;

        case 1:
            SIGN_IN();
            break;

        case 5:
            FUSERNAME();
            break;

        case 3:
            USER_INFO();
            break;

        case 6:
            printf("***********************************\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("           SHUTING DOWN...         \n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("***********************************\n");
            printf("\n");
            printf("\n");
            exit(0);
            break;
        default:
            printf("***********************************\n");
            printf("PLEASE ENTER VALID INPUT!!!\n");
            printf("-----------------------------------\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("***********************************\n");
            printf("\n");
            printf("\n");
        }
    } while (ch != 6);

    return 0;
}
