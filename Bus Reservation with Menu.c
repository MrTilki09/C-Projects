#include <stdio.h>
#include <ctype.h>

void Printbus(char solCK[10],char solKK[10],char sagCK[10],char sagKK[10]){
    printf("\n  ______________________________");
    printf("\n |Driver |                     /");
    printf("\n |_______|             ________|");
    printf("\n | 1)%c | 2)%c |      4)|%c  3)|%c |",solCK[0],solKK[0],sagKK[0],sagCK[0]);
    printf("\n | 5)%c | 6)%c |      8)|%c  7)|%c |",solCK[1],solKK[1],sagKK[1],sagCK[1]);
    printf("\n | 9)%c |10)%c |     12)|%c 11)|%c |",solCK[2],solKK[2],sagKK[2],sagCK[2]);
    printf("\n |13)%c |14)%c |     16)|%c 15)|%c |",solCK[3],solKK[3],sagKK[3],sagCK[3]);
    printf("\n |17)%c |18)%c |     20)|%c 19)|%c |",solCK[4],solKK[4],sagKK[4],sagCK[4]);
    printf("\n |21)%c |22)%c |     24)|%c 23)|%c |",solCK[5],solKK[5],sagKK[5],sagCK[5]);
    printf("\n |25)%c |26)%c |     28)|%c 27)|%c |",solCK[6],solKK[6],sagKK[6],sagCK[6]);
    printf("\n |29)%c |30)%c |     32)|%c 31)|%c |",solCK[7],solKK[7],sagKK[7],sagCK[7]);
    printf("\n |33)%c |34)%c |     36)|%c 35)|%c |",solCK[8],solKK[8],sagKK[8],sagCK[8]);
    printf("\n |37)%c |38)%c |     40)|%c 39)|%c |",solCK[9],solKK[9],sagKK[9],sagCK[9]);
    printf("\n |_____________________________|");
}

void Reservation(char solCK[10],char solKK[10],char sagCK[10],char sagKK[10],int seat,char gender)
{
    


int temp = (seat - 1) / 4;

if(seat%4==1)
{
    // demek ki solCK'nda bu koltuk
    
    if(solCK[temp]==' ' && solKK[temp]==' ' || solKK[temp]==gender)
    {
        solCK[temp]=gender;
    }
    else{ 
        printf("\nKurallar Geregi o koltugu secemezsiniz.");
        printf("\nTekrar Bilgilerinizi Giriniz.");
        }
    
}
else if(seat%4==2)
{
    //solKK'nda

    if(solKK[temp]==' ' && solCK[temp]==' ' || solCK[temp]==gender)
        {
            solKK[temp]=gender;
        }
        else{ 
            printf("\nKurallar Geregi o koltugu secemezsiniz.");
            printf("\nTekrar Bilgilerinizi Giriniz.");
            }
}
else if(seat%4==3)
{
    //sagCK'nda
    if(sagCK[temp]==' ' && sagKK[temp]==' ' || sagKK[temp]==gender)
        {
            sagCK[temp]=gender;
        }
        else{ 
            printf("\nKurallar Geregi o koltugu secemezsiniz.");
            printf("\nTekrar Bilgilerinizi Giriniz.");
            }
}
else if(seat%4==0)
{
//sagKK'nda

    if(sagKK[temp]==' ' && sagCK[temp]==' ' || sagCK[temp]==gender)
        {
            sagKK[temp]=gender;
        }
        else{ 
            printf("\nKurallar Geregi o koltugu secemezsiniz.");
            printf("\nTekrar Bilgilerinizi Giriniz.");
            }
}
}

void menu()
{
    printf("\nSag cam kenari icin 1'e basiniz");
    printf("\nSag Koridor kenari icin 2'e basiniz");
    printf("\nSol cam kenari icin 3'e basiniz");
    printf("\nSol Koridor kenari icin 4'e basiniz");
    printf("\nCikis icin Bunlar disinda birsey giriniz");
    printf("\n-->");
}

int main(){
printf("\nWelcome to The Bus Reservation System!\n\n");
char gender,useless[10];
int seat,user=0,useless2;
char solCK[10]={'K',' ',' ',' ',' ',' ',' ',' ',' ',' '};
char solKK[10]={' ','K',' ','E','E',' ','K',' ',' ',' '};
char sagCK[10]={' ','K',' ',' ',' ',' ','E',' ',' ',' '};
char sagKK[10]={' ','K',' ',' ','E','E',' ',' ',' ',' '};




Printbus(solCK,solKK,sagCK,sagKK);
printf("\nWhat Gender is the Passenger?");
scanf(" %c",&gender);

while (1)
{


gender=toupper(gender);

while(gender!='E'&& gender!='K'){
printf("\nThat's Not a Gender!");
printf("\nWhat Gender is the Passenger?");
scanf(" %c",&gender);
gender=toupper(gender);

}


         printf("\nAd-Soyad-->");
         scanf(" %s",&useless);//useless
         printf("\nOgrenci No-->");
         scanf("%d",&useless2);
        menu();
        
        scanf(" %d",&user);

        Printbus(solCK,solKK,sagCK,sagKK);

        if(user==1)// sag cam kenari icin bu if
        {
            while(seat%4!=3)
            {
                seat=2;
                printf("\nKoltuk No Giriniz-->");
                scanf(" %d",&seat);
                if(seat%4!=3)
                {
                    printf("\nSectiginiz bolume gore bir koltuk secmelisiniz.");
                }
            }
            Reservation(solCK,solKK,sagCK,sagKK,seat,gender);
            Printbus(solCK,solKK,sagCK,sagKK);
              
            
                
            
        }
        else if(user==2)// sag koridor kenari icin bu if
        {
            seat=3;
            while(seat%4!=0)
            {
                printf("\nKoltuk No Giriniz-->");
                scanf(" %d",&seat);
                if(seat%4!=0)
                {
                    printf("\nSectiginiz bolume gore bir koltuk secmelisiniz.");
                }
            }
            Reservation(solCK,solKK,sagCK,sagKK,seat,gender);
            Printbus(solCK,solKK,sagCK,sagKK);
        }
        else if(user==3)
        {
            seat=3;
            while(seat%4!=2)
            {
                
                printf("\nKoltuk No Giriniz-->");
                scanf("%d",&seat);
                if(seat%4!=2)
                {
                    printf("\nSectiginiz bolume gore bir koltuk secmelisiniz.");
                }
            }
            Reservation(solCK,solKK,sagCK,sagKK,seat,gender);
            Printbus(solCK,solKK,sagCK,sagKK);
        }
        else if(user==4)
        {
            seat=3;
            while(seat%4!=1)
            {
                printf("\nKoltuk No Giriniz-->");
                scanf(" %d",&seat);
                if(seat%4!=1)
                {
                    printf("\nSectiginiz bolume gore bir koltuk secmelisiniz.");
                }
            }
            Reservation(solCK,solKK,sagCK,sagKK,seat,gender);
            Printbus(solCK,solKK,sagCK,sagKK);
        }
        else
        {
            printf("\nGorusmek uzere dostum...");
            return 0;
        }
}
    return 0;
}
