#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include <windows.h>
#include <conio.h>

void turkce(int i,int boyut,int rev_num){
int mod;
i=boyut-1;
while(i>=0)
{

mod=rev_num%10;
rev_num=rev_num/10;

if(i==2)
{
    switch(mod)
{

case 1: printf(" Yuz");          //Yuzler basamagi
break;

case 2: printf(" ikiyuz");
break;

case 3: printf(" ucyuz");
break;

case 4: printf(" dortyuz");
break;

case 5: printf(" besyuz");
break;

case 6: printf(" altiyuz");
break;

case 7: printf(" Yediyuz");
break;

case 8: printf(" Sekizyuz");
break;

case 9: printf(" Dokuzyuz");
break;

case 0: printf(" ");
break;
}
}


if(i==1)
{
    switch(mod)
{

case 1: printf(" on");       //onlar basamagi
break;

case 2: printf(" yirmi");
break;

case 3: printf(" otuz");
break;

case 4: printf(" kirk");
break;

case 5: printf(" elli");
break;

case 6: printf(" altmis");
break;

case 7: printf(" yetmis");
break;

case 8: printf(" seksen");
break;

case 9: printf(" doksan");
break;

case 0: printf(" ");
break;
}
}

if(i==0)
{
    switch(mod)
{

case 1: printf(" bir");             //birler basamagi
break;

case 2: printf(" iki");
break;

case 3: printf(" uc");
break;

case 4: printf(" dort");
break;

case 5: printf(" bes");
break;

case 6: printf(" alti");
break;

case 7: printf(" yedi");
break;

case 8: printf(" sekiz");
break;

case 9: printf(" dokuz");
break;

case 0: printf(" ");
break;
}
}



if(i==3)
{
    switch(mod)
{

case 1: printf(" bin");       //binler basamagi
break;

case 2: printf(" ikibin");
break;

case 3: printf(" ucbin");
break;

case 4: printf(" dortbin");
break;

case 5: printf(" besbin");
break;

case 6: printf(" altibin");
break;

case 7: printf(" yedibin");
break;

case 8: printf(" sekizbin");
break;

case 9: printf(" dokuzbin");
break;

case 0: printf(" ");
break;
}
}
i--;

}
}

int size(int rev_num)
{
int boyut=0;    
int temp=rev_num;
while(temp>0)
{
    temp/=10;       //Finds the size of the given integer
    boyut++;
}
return boyut;
}

int reverse(int sayi,int rev_num)
{
  rev_num=0;  
while(sayi != 0)
{
rev_num = rev_num * 10 + (sayi % 10);  //reverses the number as an integer  
sayi = sayi / 10;
}
return rev_num;
}

int calculator(int sayi) {
    int temp;
    int count;
    char symbol;
    printf("#################################################\n");
    printf("Note: You can do a maximum of 10 Operations\n");
    printf("#################################################\n");

    for (count = 0; count < 10; count++) {
        
        printf("\nYapabileceginiz islemler(*,/,+,-,=)");
        printf("\nSayiniz-->%d",sayi);
        printf("\nSymbol: ");
        scanf(" %c", &symbol);
        
        if (symbol == '=')
        {
         break; 
        }
        printf("\nNumber %d = ", count + 1);
        scanf("%d", &temp);

        if (symbol == '+') {
            sayi = sayi + temp;
        } else if (symbol == '-') {
            sayi = sayi - temp;
        } else if (symbol == '*') {
            sayi = sayi * temp;
        } else if (symbol == '/') {
            if (temp != 0) {
                sayi = sayi / temp;
            } else {
                printf("Error: Division by zero\n");
                break;
            }
        } else {
            printf("Invalid operation: %c\n", symbol);
            break;
        }
    }

    return sayi;
}

void instructions(int sayi)
{
    printf("\n\n");
    printf("\n####################################");
    printf("\n KULLANIM:");
    printf("\n Oturumu Sonlandirmak icin -->B");
    printf("\n Turkce yazdirmak icin --> T");
    printf("\n Hesap Makinesi icin --> H");
    printf("\n Sayiyi Ters cevirmek icin --> F");
    printf("\n X-O oyunu icin -->O");
    printf("\n########################################################################");
    printf("\n 10 Saniye icinde herhangi bir islem yapmazsaniz uygulama kapanir!!");
    printf("\n########################################################################");
    printf("\n         Sayiniz-->%d",sayi);
    printf("\n");
}

void printChart(char chart[3][3]){
    printf("\n   ___COLEMN___");
    printf("\n    1    2    3");
    printf("\n |1  %c | %c | %c", chart[0][0], chart[0][1], chart[0][2]);
    printf("\nR|  ---|---|---");
    printf("\nO|2  %c | %c | %c", chart[1][0], chart[1][1], chart[1][2]);
    printf("\nW|  ---|---|---");
    printf("\n |3  %c | %c | %c\n\n", chart[2][0], chart[2][1], chart[2][2]);
    // ⤵ →
}

void xogame() {
    char chart[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    char player1[10];
    char player2[10];
    int row;
    int col;

    printf("\nWelcome...");
    printf("\nPlayer1 name:");
    scanf("%s", player1);

    printf("\nPlayer2 name:");
    scanf("%s", player2);
    printChart(chart);
    for (int i = 0; i < 9; i++) {
        
        if (i % 2 == 0){
            printf("\n%s's turn to play:\n", player1);
        } else {
            printf("\n%s's turn to play:\n", player2);
        }
     do{  
       do{
        printf("\nEnter a Row number: ");
        scanf("%d", &row);
       }while(row<=0 || row>3);
       
       do{
        printf("\nEnter a Column number: ");
        scanf("%d", &col);}
        while(col<=0 || col>3);
     }while(chart[row-1][col-1]!=' ');
    
    
    if (i % 2 == 0){
        chart[row-1][col-1]='X';    
        } else {
        chart[row-1][col-1]='O';    
        }
   
    printChart(chart);
    
    for(int a=0;a<=3;a++){
        int b=0;
    if((chart[a][b]=='X' && chart[a][b+1]=='X'&& chart[a][b+2]=='X')|| (chart[a][b]=='O' && chart[a][b+1]=='O'&& chart[a][b+2]=='O')|| (chart[b][a]=='X' && chart[b+1][a]=='X'&& chart[b+2][a]=='X')||(chart[b][a]=='O' && chart[b+1][a]=='O'&& chart[b+2][a]=='O'))
    {
        if (i % 2 == 0){   
             printf("\n###############################################");
             printf("\nAnd the winner is ---->%s",player1);
             printf("\n###############################################");
             i=9;}
        
        else if(i % 2 == 1){
           printf("\n###############################################");
           printf("\nAnd the winner is ---->%s",player2);
           printf("\n###############################################");
           i=9;}}}
     if((chart[0][0]=='X' && chart[1][1]=='X' && chart[2][2]=='X')||(chart[0][0]=='O' && chart[1][1]=='O' && chart[2][2]=='O')||(chart[0][2]=='X' && chart[1][1]=='X' && chart[2][0]=='X')||(chart[0][2]=='O' && chart[1][1]=='O' && chart[2][0]=='O'))
     {
     if (i % 2 == 0){   
             printf("\n###############################################");
             printf("\nAnd the winner is ---->%s",player1);
             printf("\n###############################################");
             i=9;}
        
        else if(i % 2 == 1){
           printf("\n###############################################");
           printf("\nAnd the winner is ---->%s",player2);
           printf("\n###############################################");
           i=9;}
     }
        
           
    }
    printf("\n\n\n");   
    printChart(chart);
    sleep(3);
}



int main()
{
int rev_num = 0;
int sayi,i,j,user=9,k;



printf("\nEn Fazla 4 Basamakli Olan Pozitif Bir Sayi Giriniz:");
scanf("%d",&sayi);

if(size(sayi)>4 || sayi<=0){
    
    printf("\n\nHata!!");
    goto end;
}

//Kullanici icin sonsuz donguye giris...
/*
if(user==4)
{
    printf("\e[1;1H\e[2J");
    printf("\e[1;1H\e[2J");
    xogame();
    printf("\e[1;1H\e[2J");
    printf("\e[1;1H\e[2J");
    instructions(sayi);

    printf("\nNe yapmak istiyorsunuz? ");  // ilk tanitim...
    scanf("%d",&user);
}
*/


// user>0 && 4>user
//printf("\nNe yapmak istiyorsunuz? ");  // ilk tanitim...
//scanf("%d",&user);

instructions(sayi);

start:


while(1) //program baslangici
{




//10 saniye icinde giris olmazsa uygulamayi kapatmak icin
for(k=0;k<10;k++){

/*
printf("\e[1;1H\e[2J");
printf("\e[1;1H\e[2J");
instructions(sayi);
printf("\n\n");
printf("\nNe yapmak istiyorsunuz? ");
scanf("%d",&user);
*/


if(GetAsyncKeyState(84))
{
    printf("\n####################################");
    printf("\nSonucunuz:");
    rev_num=reverse(sayi,rev_num);  // turkce yazdirma
    int boyut=size(rev_num);
    turkce(i,boyut,rev_num);
    printf("\n####################################\n\n");
    instructions(sayi);
    goto start;
}

else if(GetAsyncKeyState(72))
{
    
    printf("\n\n");
    sayi=calculator(sayi); // hesap makinesi
    printf("\n\n");
    instructions(sayi);
    goto start;

}
else if(GetAsyncKeyState(70))
{
    
    sayi=reverse(sayi,rev_num); // ters cavirme
    instructions(sayi);
    goto start;
    
}
else if(GetAsyncKeyState(79))
{
    xogame();     // x-o oyunu baslatma
    instructions(sayi);
    goto start;
}
else if (GetAsyncKeyState(66))
{
    goto end;   // Uygulama Bitirme
}
sleep(1);
}  // end of for loop

goto end;
}// end of while



end:
printf("\n####################################");
printf("\nTekrar Gorusmek Uzere Dostum....");
printf("\n####################################");
sleep(2);  // Sleep(anything in milliseconds)  sleep(anything in seconds)
    return 0;
}
