#include<stdio.h>
int conversion();
int main()
{
    printf("\n|--->Program for UNIT CONVERSION<---|\n");
    conversion();
    return 0;
}
int conversion()
{
    int i, j, k, choice;
    float inp,result;
    char retry;
    do
    {

        printf("\nSelect the category from menu below for conversion :-\n");
        printf("1. Length \n2. Mass \n3. Temperature \n4. Time\n");
        scanf("%d", &choice);

        switch( choice )
        {
            case (1) :
                {
                printf("\nYou've chosen option number 1.");
                printf("\nSelect the category from below you want to convert to :-");
                printf("\n1. Kilometer \n2. Metre \n3. Miles\n");
                scanf("%d", &choice);

                switch( choice )
                {
                    case (1) :
                        {
                        printf("\nEnter the value to be converted -> ");
                        scanf("%f", &inp);

                        printf("\nNow select the unit in which you want the answer from menu below :-");
                        printf("\n1. Metre \n2. Miles\n");
                        scanf("%d", &choice);

                        switch ( choice )
                        {
                            case (1) :
                                {
                                result = inp * 1000.0;
                                printf("\nConverted value is \'%.1f\'.",result);

                                printf("\nWanna try another conversion? (Y/N) -> ");
                                fflush(stdin);
                                scanf("%c", &retry);
                                
                                break;
                                }

                            case (2) :
                                {
                                result = inp * 0.62;
                                printf("\nConverted value is \'%.1f\'.",result);

                                printf("\nWanna try another conversion? (Y/N) -> ");
                                fflush(stdin);
                                scanf("%c", &retry);
                                break;
                                }
                         }
                         break;
                         }

                    case (2) :
                        {
                        printf("\nEnter the value to be converted -> ");
                        scanf("%f", &inp);

                        printf("\nNow select the unit in which you want the answer from menu below :-");
                        printf("\n1. Kilometer \n2. Miles\n");
                        scanf("%d", &choice);

                        switch ( choice )
                        {
                            case (1) :
                                {
                                result = inp * 0.001;
                                printf("\nConverted value is \'%.1f\'.",result);

                                printf("\nWanna try another conversion? (Y/N) -> ");
                                fflush(stdin);
                                scanf("%c", &retry);
                                break;
                                }

                            case (2) :
                                {
                                result = inp * 0.0006;
                                printf("\nConverted value is \'%.1f\'.",result);

                                printf("\nWanna try another conversion? (Y/N) -> ");
                                fflush(stdin);
                                scanf("%c", &retry);
                                break;
                                }
                         }
                         break;
                         }

                    case (3) :
                        {
                        printf("\nEnter the value to be converted -> ");
                        scanf("%f", &inp);

                        printf("\nNow select the unit in which you want the answer from menu below :-");
                        printf("\n1. Kilometer \n2. Meter\n");
                        scanf("%d", &choice);

                        switch ( choice )
                        {
                            case (1) :
                                {
                                result = inp * 1.6;
                                printf("\nConverted value is \'%.1f\'.",result);

                                printf("\nWanna try another conversion? (Y/N) -> ");
                                fflush(stdin);
                                scanf("%c", &retry);
                                break;
                                }

                            case (2) :
                                {
                                result = inp * 1609.3;
                                printf("\nConverted value is \'%.1f\'.",result);

                                printf("\nWanna try another conversion? (Y/N) -> ");
                                fflush(stdin);
                                scanf("%c", &retry);
                                break;
                                }
                         }
                         break;
                         }
               }
               break;
               }

               case (2) :
                {
                printf("\nYou've chosen option number 2.");
                printf("\nSelect the category from below you want to convert to :-");
                printf("\n1. Kilogram \n2. Gram \n3. Pounds\n");
                scanf("%d", &choice);

                switch( choice )
                {
                    case (1) :
                        {
                        printf("\nEnter the value to be converted -> ");
                        scanf("%f", &inp);

                        printf("\nNow select the unit in which you want the answer from menu below :-");
                        printf("\n1. Gram \n2. Pounds\n");
                        scanf("%d", &choice);

                        switch ( choice )
                        {
                            case (1) :
                                {
                                result = inp * 1000.0;
                                printf("\nConverted value is \'%.1f\'.",result);

                                printf("\nWanna try another conversion? (Y/N) -> ");
                                fflush(stdin);
                                scanf("%c", &retry);
                                break;
                                }

                            case (2) :
                                {
                                result = inp * 2.2;
                                printf("\nConverted value is \'%.1f\'.",result);

                                printf("\nWanna try another conversion? (Y/N) -> ");
                                fflush(stdin);
                                scanf("%c", &retry);
                                break;
                                }
                         }
                         break;
                         }

                    case (2) :
                        {
                        printf("\nEnter the value to be converted -> ");
                        scanf("%f", &inp);

                        printf("\nNow select the unit in which you want the answer from menu below :-");
                        printf("\n1. Kilogram \n2. Pounds \n");
                        scanf("%d", &choice);

                        switch ( choice )
                        {
                            case (1) :
                                {
                                result = inp * 0.001;
                                printf("\nConverted value is \'%.1f\'.",result);

                                printf("\nWanna try another conversion? (Y/N) -> ");
                                fflush(stdin);
                                scanf("%c", &retry);
                                break;
                                }

                            case (2) :
                                {
                                result = inp * 0.0022;
                                printf("\nConverted value is \'%.1f\'.",result);

                                printf("\nWanna try another conversion? (Y/N) -> ");
                                fflush(stdin);
                                scanf("%c", &retry);
                                break;
                                }
                         }
                         break;
                         }

                    case (3) :
                        {
                        printf("\nEnter the value to be converted -> ");
                        scanf("%f", &inp);

                        printf("\nNow select the unit in which you want the answer from menu below :-");
                        printf("\n1. Kilogram \n2. Gram\n");
                        scanf("%d", &choice);

                        switch ( choice )
                        {
                            case (1) :
                                {
                                result = inp * 0.45;
                                printf("\nConverted value is \'%.1f\'.",result);

                                printf("\nWanna try another conversion? (Y/N) -> ");
                                fflush(stdin);
                                scanf("%c", &retry);
                                break;
                                }

                            case (2) :
                                {
                                result = inp * 453.5;
                                printf("\nConverted value is \'%.1f\'.",result);

                                printf("\nWanna try another conversion? (Y/N) -> ");
                                fflush(stdin);
                                scanf("%c", &retry);
                                break;
                                }
                         }
                         break;
                         }
               }
               break;
               }
           case (3) :
                {
                printf("\nYou've chosen option number 3.");
                printf("\nSelect the category from below you want to convert to :-");
                printf("\n1. Farenheit \n2. Celsius \n3. Kelvin\n");
                scanf("%d", &choice);

                switch( choice )
                {
                    case (1) :
                        {
                        printf("\nEnter the value to be converted -> ");
                        scanf("%f", &inp);

                        printf("\nNow select the unit in which you want the answer from menu below :-");
                        printf("\n1. Celsius \n2. Kelvin\n");
                        scanf("%d", &choice);

                        switch ( choice )
                        {
                            case (1) :
                                {
                                result = ( ( inp - 32 ) * 5 ) / 9;
                                printf("\nConverted value is \'%.1f\'.",result);

                                printf("\nWanna try another conversion? (Y/N) -> ");
                                fflush(stdin);
                                scanf("%c", &retry);
                                break;
                                }

                            case (2) :
                                {
                                result =( ( inp - 32 ) * 5/9 ) + 273.5;
                                printf("\nConverted value is \'%.1f\'.",result);

                                printf("\nWanna try another conversion? (Y/N) -> ");
                                fflush(stdin);
                                scanf("%c", &retry);
                                break;
                                }
                         }
                         break;
                         }

                    case (2) :
                        {
                        printf("\nEnter the value to be converted -> ");
                        scanf("%f", &inp);

                        printf("\nNow select the unit in which you want the answer from menu below :-");
                        printf("\n1. Fahrenheit \n2. Kelvin \n");
                        scanf("%d", &choice);

                        switch ( choice )
                        {
                            case (1) :
                                {
                                result = ( inp * 1.8 ) + 32;
                                printf("\nConverted value is \'%.1f\'.",result);

                                printf("\nWanna try another conversion? (Y/N) -> ");
                                fflush(stdin);
                                scanf("%c", &retry);
                                break;
                                }

                            case (2) :
                                {
                                result = inp + 273.15;
                                printf("\nConverted value is \'%.1f\'.",result);

                                printf("\nWanna try another conversion? (Y/N) -> ");
                                fflush(stdin);
                                scanf("%c", &retry);
                                break;
                                }
                         }
                         break;
                         }

                    case (3) :
                        {
                        printf("\nEnter the value to be converted -> ");
                        scanf("%f", &inp);

                        printf("\nNow select the unit in which you want the answer from menu below :-");
                        printf("\n1. Fahreneit \n2. Celsius\n");
                        scanf("%d", &choice);

                        switch ( choice )
                        {
                            case (1) :
                                {
                                result = ( ( inp - 273.15 ) * 1.8 ) + 32;
                                printf("\nConverted value is \'%.1f\'.",result);

                                printf("\nWanna try another conversion? (Y/N) -> ");
                                fflush(stdin);
                                scanf("%c", &retry);
                                break;
                                }

                            case (2) :
                                {
                                result = inp - 273.15;
                                printf("\nConverted value is \'%.1f\'.",result);

                                printf("\nWanna try another conversion? (Y/N) -> ");
                                fflush(stdin);
                                scanf("%c", &retry);
                                break;
                                }
                         }
                         break;
                         }
               }
               break;
               }

            case (4) :
                {
                printf("\nYou've chosen option number 3.");
                printf("\nSelect the category from below you want to convert to :-");
                printf("\n1. Hours \n2. Minutes \n3. Seconds\n");
                scanf("%d", &choice);

                switch( choice )
                {
                    case (1) :
                        {
                        printf("\nEnter the value to be converted -> ");
                        scanf("%f", &inp);

                        printf("\nNow select the unit in which you want the answer from menu below :-");
                        printf("\n1. Minutes \n2. Seconds\n");
                        scanf("%d", &choice);

                        switch ( choice )
                        {
                            case (1) :
                                {
                                result = inp *60.0;
                                printf("\nConverted value is \'%.1f\'.",result);

                                printf("\nWanna try another conversion? (Y/N) -> ");
                                fflush(stdin);
                                scanf("%c", &retry);
                                break;
                                }

                            case (2) :
                                {
                                result = inp * 3600.0;
                                printf("\nConverted value is \'%.1f\'.",result);

                                printf("\nWanna try another conversion? (Y/N) -> ");
                                fflush(stdin);
                                scanf("%c", &retry);
                                break;
                                }
                         }
                         break;
                         }

                    case (2) :
                        {
                        printf("\nEnter the value to be converted -> ");
                        scanf("%f", &inp);

                        printf("\nNow select the unit in which you want the answer from menu below :-");
                        printf("\n1. Hours\n2. Seconds\n");
                        scanf("%d", &choice);

                        switch ( choice )
                        {
                            case (1) :
                                {
                                result = inp * 0.0167;
                                printf("\nConverted value is \'%.1f\'.",result);

                                printf("\nWanna try another conversion? (Y/N) -> ");
                                fflush(stdin);
                                scanf("%c", &retry);
                                break;
                                }

                            case (2) :
                                {
                                result = inp * 60.0;
                                printf("\nConverted value is \'%.1f\'.",result);

                                printf("\nWanna try another conversion? (Y/N) -> ");
                                fflush(stdin);
                                scanf("%c", &retry);
                                break;
                                }
                         }
                         break;
                         }

                    case (3) :
                        {
                        printf("\nEnter the value to be converted -> ");
                        scanf("%f", &inp);

                        printf("\nNow select the unit in which you want the answer from menu below :-");
                        printf("\n1. Hours \n2. Minutes\n");
                        scanf("%d", &choice);

                        switch ( choice )
                        {
                            case (1) :
                                {
                                result = inp * 0.0003;
                                printf("\nConverted value is \'%.1f\'.",result);

                                printf("\nWanna try another conversion? (Y/N) -> ");
                                fflush(stdin);
                                scanf("%c", &retry);
                                break;
                                }

                            case (2) :
                                {
                                result = inp * 0.0167;
                                printf("\nConverted value is \'%.1f\'.",result);

                                printf("\nWanna try another conversion? (Y/N) -> ");
                                fflush(stdin);
                                scanf("%c", &retry);
                                break;
                                }
                         }
                         break;
                         }
               }
               break;
               }
        }
    } while( retry == 'y' || retry == 'Y' );

    printf("\nThe Program Has Ended.\n");
}
