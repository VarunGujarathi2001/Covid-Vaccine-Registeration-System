#include<stdio.h>
#include<conio.h>
void login()
{
    long  double a;
    int b,f;
    printf("\n                         -----LOGIN-----                         \n");
    printf("\n     ENTER YOUR AADHAR NUMBER : ");
    scanf("%Lf",&a);
    if(a>99999999999 && a<1000000000000)

        printf("\n   YOU HAVE RECIEVED AN OTP ON YOUR LINKED MOBILE NUMBER   \n");
        printf("\n  ENTER OTP : ");
        scanf("%d",&b);
        if(b>999 && b<10000)
        {
            system("cls");
            printf("  \n\n\n       WELCOME TO OUR SYSTEM !! YOUR LOGIN IS SUCCESSFUL");

            printf("\n FOR BOOKING THE APPLICATION PRESS 1 \n");
            scanf("%d",&f);
            if(f==1)
            {
                int q;
                int age,r,y,x;
                char p[20];
                printf("\n               PATIENT DETAILS               \n");
                printf("\n   ENTER PATIENT NAME :  ");
                scanf("%s",&p);
                printf("\n   ENTER MOBILE NUMBER(WHICH SHOULD BE LINKED TO AAROGYA SETU APP) :");
                scanf("%d",&q);
                printf ("\nENTER THE AGE OF THE PATIENT :  ");
                scanf ("%d", &age);
                if (age >= 40)
                {
                    printf("\n\t1.MALE\t\t\t\t2.FEMALE\t\n");
                    printf("\nENTER THE KEY FOR YOUR GENDER : ");
                    scanf("%d",&r);
                    switch (r)
                    {
                    case 1:
                        printf("\nGENDER :\tMALE",r);
                        printf("\nENTER YOUR BIRTH YEAR(IN FORMAT YYYY) : ");
                        scanf("%d",&y);
                        if(y>999 && y<10000)
                        {
                            system("cls");
                            printf("\n ------REGISTRATION IS SUCCESSFULLY DONE------  ");
                            printf("\n YOUR APPLICATION ID IS %d \n",&f);
                        }
                        else
                        {
                            printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL\n");
                            printf("\nENTER ANY KEY TO CONTINUE....");
                            getch();
                            login();}
                            break;
                    case 2:
                        printf("\nGENDER :\tFEMALE",r);
                        printf("\nENTER YOUR BIRTH YEAR(IN FORMAT YYYY) : ");
                        scanf("%d",&y);
                        if(y>999 && y<10000)
                        {
                            system("cls");
                            printf("\n ------REGISTRATION IS SUCCESSFULLY DONE------  ");
                            printf("\n YOUR APPLICATION ID IS %d \n",&f);
                        }
                        else
                        {
                            printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL\n");
                            printf("\nENTER ANY KEY TO CONTINUE....");
                            getch();
                            login();
                        }
                        break;

                    default:
                        printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL\n");
                        printf("\nENTER ANY KEY TO CONTINUE....");
                        getch();
                        login();

                    }
                    printf("\n AVAILABLE VACCINATION CENTRES ACCORDING TO YOU AS FOLLOWS \n");

                    printf("_____________________________________________________________");
                    printf("\nSR.NO.\t\tNAME OF THE HOSPITAL\t\t\tTIMINGS\n");
                    printf("_____________________________________________________________");
                    printf("\n1\t\t BJ Medical Collage\t\t\t11AM");
                    printf("\n2\t	 Sasson General Hospital\t\t11AM");
                    printf("\n3\t	 Naidu Hospital Covishield\t\t11AM");
                    printf("\n4\t	 RUBY HALL CLINIC, SASSON ROAD\t\t11AM");
                    printf("\n5\t	 SHASHWAT HOSPITAL, AUND\t\t11AM");
                    printf("\n6\t\t JAHANGIR HOSPITAL\t\t\t11AM");
                    printf("\n7\t\t K.E.M HOSPITAL\t\t\t\t11AM");
                    printf("\n8\t\t RUBY HALL CLINIC (WANOWARIE)\t\t11AM");
                    printf("\n9\t\t SANJEEVANI HOSPITAL\t\t\t11AM");
                    printf("\n10\t\t VIT Yugapurusha Chatrapati Hospital\t11AM");
                    printf("\n11\t\t Tharkude Hospital\t\t\t11AM");
                    printf("\n12\t\t Kondhwa Savitribai Phule Hospital\t11AM");
                    printf("\n13\t\t Railway Hospital Pune Station\t\t11AM");
                    printf("\n14\t\t Shivajinagar Police Hospital\t\t11AM");
                    printf("\n15\t\t Sukhsagar Nagar Vasant More Hospital\t11AM");


                    printf("\nENTER SR.NO. OF HOSPITAL,WHERE YOU ARE COMFORTABLE TO TAKE VACCINE : ");
                    scanf("%d",&x);
                    switch (x)
                    {
                    case 1:
                        printf("\nYOU ARE REQUESTED TO COME AT 11 AM SHARP IN THE MORNING AT BJ Medical Collage\n",x);
                        printf("YOUR RESERVED REGISTRATION ID IS %d\n",&f);
                        break;
                    case 2:
                        printf("\nYOU ARE REQUESTED TO COME AT 11 AM SHARP IN THE MORNING AT Sasson General Hospital\n",x);
                        printf("YOUR RESERVED REGISTRATION ID IS %d\n",&f);
                        break;
                    case 3:
                        printf("\nYOU ARE REQUESTED TO COME AT 11 AM SHARP IN THE MORNING AT Naidu Hospital Covishield\n",x);
                        printf("YOUR RESERVED REGISTRATION ID IS %d\n",&f);
                        break;
                    case 4:
                        printf("\nYOU ARE REQUESTED TO COME AT 11 AM SHARP IN THE MORNING AT J.J MULTISPECIALITY HOSPITAL\n",x);
                        printf("YOUR RESERVED REGISTRATION ID IS %d\n",&f);
                        break;
                    case 5:
                        printf("\nYOU ARE REQUESTED TO COME AT 11 AM SHARP IN THE MORNING AT KAMALA NEHRU HOSPITAL\n",x);
                        printf("YOUR RESERVED REGISTRATION ID IS %d\n",&f);
                        break;
                    case 6:
                        printf("\nYOU ARE REQUESTED TO COME AT 11 AM SHARP IN THE MORNING AT GANGA KARNE HOSPITAL\n");
                        printf("YOUR RESERVED REGISTRATION ID IS %d\n",&f);
                        break;
                    case 7:
                        printf("\nYOU ARE REQUESTED TO COME AT 11 AM SHARP IN THE MORNING AT CIVIL SUPERCARE HOSPITA\n");
                        printf("YOUR RESERVED REGISTRATION ID IS %d\n",&f);
                        break;
                    case 8:
                        printf("\nYOU ARE REQUESTED TO COME AT 11 AM SHARP IN THE MORNING AT CIVIL SUPERCARE HOSPITA\n");
                        printf("YOUR RESERVED REGISTRATION ID IS %d\n",&f);
                        break;
                    case 9:
                        printf("\nYOU ARE REQUESTED TO COME AT 11 AM SHARP IN THE MORNING AT CIVIL SUPERCARE HOSPITA\n");
                        printf("YOUR RESERVED REGISTRATION ID IS %d\n",&f);
                        break;
                    case 10:
                        printf("\nYOU ARE REQUESTED TO COME AT 11 AM SHARP IN THE MORNING AT CIVIL SUPERCARE HOSPITA\n");
                        printf("YOUR RESERVED REGISTRATION ID IS %d\n",&f);
                        break;
                    case 11:
                        printf("\nYOU ARE REQUESTED TO COME AT 11 AM SHARP IN THE MORNING AT CIVIL SUPERCARE HOSPITA\n");
                        printf("YOUR RESERVED REGISTRATION ID IS %d\n",&f);
                        break;
                    case 12:
                        printf("\nYOU ARE REQUESTED TO COME AT 11 AM SHARP IN THE MORNING AT CIVIL SUPERCARE HOSPITA\n");
                        printf("YOUR RESERVED REGISTRATION ID IS %d\n",&f);
                        break;
                    case 13:
                        printf("\nYOU ARE REQUESTED TO COME AT 11 AM SHARP IN THE MORNING AT CIVIL SUPERCARE HOSPITA\n");
                        printf("YOUR RESERVED REGISTRATION ID IS %d\n",&f);
                        break;
                    case 14:
                        printf("\nYOU ARE REQUESTED TO COME AT 11 AM SHARP IN THE MORNING AT CIVIL SUPERCARE HOSPITA\n");
                        printf("YOUR RESERVED REGISTRATION ID IS %d\n",&f);
                        break;
                    case 15:
                        printf("\nYOU ARE REQUESTED TO COME AT 11 AM SHARP IN THE MORNING AT CIVIL SUPERCARE HOSPITA\n");
                        printf("YOUR RESERVED REGISTRATION ID IS %d\n",&f);
                        break;


                    default:
                        printf("you will not able to get vaccine");
                        printf("\nENTER ANY KEY TO CONTINUE....");
                        getch();
                        login();

                    }
                    printf("\n IT IS COMPULSORY TO TAKE YOUR ID PROOF AS PER GOVERNMENT GUIDELINES \n");


                    printf("\t\t============================\n");
                    printf("\t\t   STAY HOME , STAY SAFE    \n");
                    printf("\t\t============================\n");

                }

            }

            else
            {
                printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL\n");
                printf("\nENTER ANY KEY TO CONTINUE....");
                getch();
                login();
            }
        }
        else
        {
            printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL\n");
            printf("\nENTER ANY KEY TO CONTINUE....");
            getch();
            login();

        }

}
int main()
{
		system("cls");



	printf("\t\t _______________________________________________ \n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                 WELCOME                       |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|     * * * * * * * * * * * * * * * * * * *     |\n");
	printf("\t\t|!!!!! COVID-19 VACCINE REGISTRATION SYSTEM !!!!|\n");
	printf("\t\t|     * * * * * * * * * * * * * * * * * * *     |\n");
	printf("\t\t|                  MADE BY                      |\n");
	printf("\t\t|             ~VARUN GUJARATHI~                 |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|_______________________________________________|\n\n\n");



	login();


return 0;
}
