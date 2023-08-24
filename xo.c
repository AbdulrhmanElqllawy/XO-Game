#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>

#define O 0
#define X 1
#define NO 250
#define TIE 1250

void swap(char *x, char *y)
{
    char t = *x;
    *x = *y;
    *y = t;
}
char *reverse(char *buffer, int i, int j)
{
    while (i < j)
    {
        swap(&buffer[i++], &buffer[j--]);
    }

    return buffer;
}
char *itoa(int value, char *buffer, int base)
{
    // invalid input
    if (base < 2 || base > 32)
    {
        return buffer;
    }

    // consider the absolute value of the number
    int n = abs(value);

    int i = 0;
    while (n)
    {
        int r = n % base;

        if (r >= 10)
        {
            buffer[i++] = 65 + (r - 10);
        }
        else
        {
            buffer[i++] = 48 + r;
        }

        n = n / base;
    }

    // if the number is 0
    if (i == 0)
    {
        buffer[i++] = '0';
    }

    // If the base is 10 and the value is negative, the resulting string
    // is preceded with a minus sign (-)
    // With any other base, value is always considered unsigned
    if (value < 0 && base == 10)
    {
        buffer[i++] = '-';
    }

    buffer[i] = '\0'; // null terminate string

    // reverse the string and return it
    return reverse(buffer, 0, i - 1);
}


int check(int _1, int _2, int _3, int _4, int _5, int _6, int _7, int _8, int _9){
    
    if((_1 == X || _1 == O) && (_2 == X || _2 == O) && (_3 == X || _3 == O) && (_4 == X || _4 == O) && (_5 == X || _5 == O) && (_6 == X || _6 == O) && (_7 == X || _7 == O) && (_8 == X || _8 == O) && (_9 == X || _9 == O)){
        return TIE;
    }

    if(_1 == _2 && _2 == _3)
    {
        return _1;
    }
    else if(_4 == _5 && _5 == _6)
    {
        return _4;
    }
    else if(_7 == _8 && _8 == _9)
    {
        return _7;
    }
    else if(_1 == _4 && _4 == _7)
    {
        return _1;
    }
    else if(_2 == _5 && _5 == _8)
    {
        return _2;
    }
    else if(_3 == _6 && _6 == _9)
    {
        return _3;
    }
    else if(_1 == _5 && _5 == _9)
    {
        return _1;
    }
    else if(_3 == _5 && _5 == _7)
    {
        return _4;
    }else{
        return NO;
    }
}

int map(int _1, int _2, int _3, int _4, int _5, int _6, int _7, int _8, int _9){

    char All[200] = "\n\n ";
    
    if( _1 != 10){
        if( _1 == X){
            strcat(All,"X | ");
        }else{
            strcat(All,"O | ");
        }
    }else{
        strcat(All,"1 | ");
    }
    if( _2 != 20){
        if( _2 == X){
            strcat(All,"X | ");
        }else{
            strcat(All,"O | ");
        }
    }else{
        strcat(All,"2 | ");
    }
    if( _3 != 30){
        if( _3 == X){
            strcat(All,"X \n");
        }else{
            strcat(All,"O \n");
        }
    }else{
        strcat(All,"3 \n");
    }





    strcat(All,"-----------\n");






    if( _4 != 40){
        if( _4 == X){
            strcat(All," X | ");
        }else{
            strcat(All," O | ");
        }
    }else{
        strcat(All," 4 | ");
    }
    if( _5 != 50){
        if( _5 == X){
            strcat(All,"X | ");
        }else{
            strcat(All,"O | ");
        }
    }else{
        strcat(All,"5 | ");
    }
    if( _6 != 60){
        if( _6 == X){
            strcat(All,"X \n");
        }else{
            strcat(All,"O \n");
        }
    }else{
        strcat(All,"6 \n");
    }






    strcat(All,"-----------\n");




        
        
    if( _7 != 70){
        if( _7 == X){
            strcat(All," X | ");
        }else{
            strcat(All," O | ");
        }
    }else{
        strcat(All," 7 | ");
    }
    if( _8 != 80){
        if( _8 == X){
            strcat(All,"X | ");
        }else{
            strcat(All,"O | ");
        }
    }else{
        strcat(All,"8 | ");
    }
    if( _9 != 90){
        if( _9 == X){
            strcat(All,"X \n");
        }else{
            strcat(All,"O \n");
        }
    }else{
        strcat(All,"9 \n");
    }



    printf("%s",All);

    return 0;
}

int wmap(int _1, int _2, int _3, int _4, int _5, int _6, int _7, int _8, int _9){

    char All[200] = "\n\n ";
    
    if( _1 != 10){
        if( _1 == X){
            strcat(All,"X | ");
        }else{
            strcat(All,"O | ");
        }
    }else{
        strcat(All,"  | ");
    }
    if( _2 != 20){
        if( _2 == X){
            strcat(All,"X | ");
        }else{
            strcat(All,"O | ");
        }
    }else{
        strcat(All,"  | ");
    }
    if( _3 != 30){
        if( _3 == X){
            strcat(All,"X \n");
        }else{
            strcat(All,"O \n");
        }
    }else{
        strcat(All,"  \n");
    }





    strcat(All,"-----------\n");






    if( _4 != 40){
        if( _4 == X){
            strcat(All," X | ");
        }else{
            strcat(All," O | ");
        }
    }else{
        strcat(All,"   | ");
    }
    if( _5 != 50){
        if( _5 == X){
            strcat(All,"X | ");
        }else{
            strcat(All,"O | ");
        }
    }else{
        strcat(All,"  | ");
    }
    if( _6 != 60){
        if( _6 == X){
            strcat(All,"X \n");
        }else{
            strcat(All,"O \n");
        }
    }else{
        strcat(All,"  \n");
    }






    strcat(All,"-----------\n");




        
        
    if( _7 != 70){
        if( _7 == X){
            strcat(All," X | ");
        }else{
            strcat(All," O | ");
        }
    }else{
        strcat(All,"   | ");
    }
    if( _8 != 80){
        if( _8 == X){
            strcat(All,"X | ");
        }else{
            strcat(All,"O | ");
        }
    }else{
        strcat(All,"  | ");
    }
    if( _9 != 90){
        if( _9 == X){
            strcat(All,"X \n");
        }else{
            strcat(All,"O \n");
        }
    }else{
        strcat(All,"  \n");
    }



    printf("%s",All);

    return 0;
}

// check(_1,_2,_3,_4,_5,_6,_7,_8,_9);
int main(){
    int blocks[9];
    blocks[0] = 10 ,blocks[1] = 20,blocks[2] = 30,blocks[3] = 40,blocks[4] = 50,blocks[5] = 60,blocks[6] = 70,blocks[7] = 80,blocks[8] = 90;
    int winner = 250,P,intr = X;
    char r[2] = "X\0",Ask[100] = "it is ",Pstr[5];
    system("clear");
    // printf("\n\n%d\n\n",isdigit('A'));

    while(winner == NO){
        map(blocks[0],blocks[1],blocks[2],blocks[3],blocks[4],blocks[5],blocks[6],blocks[7],blocks[8]);
        char Ask[100] = "it is ";
        strcat(Ask,r);
        strcat(Ask," round :\n");
        printf("\n\n%s",Ask);
        scanf("%s",&Pstr);
        if(isdigit(Pstr[0]) == 0){
            printf("\nError: Invalid place.\n\n");
            return 3;
        }else{
            P = atoi(Pstr);
        }
        // P = 3;
        if(blocks[P-1] == X || blocks[P-1] == O || P > 9 || P < 1){
            printf("\nError: Invalid place.\n\n");
            return 3;
        }
        blocks[(P-1)] = intr;
        winner = check(blocks[0],blocks[1],blocks[2],blocks[3],blocks[4],blocks[5],blocks[6],blocks[7],blocks[8]);

        system("clear");
        if(winner == X ){
            wmap(blocks[0],blocks[1],blocks[2],blocks[3],blocks[4],blocks[5],blocks[6],blocks[7],blocks[8]);
            printf("\n\nWinner is X\n\n");
            return 1;
        }else if(winner == O){
            wmap(blocks[0],blocks[1],blocks[2],blocks[3],blocks[4],blocks[5],blocks[6],blocks[7],blocks[8]);
            printf("\n\nWinner is O\n\n");
            return 2;
        }
        if((int)r[0] == 88){
            r[0] = 'O';
            intr = O;
        }else if((int)r[0] == 79){
            r[0] = 'X';
            intr = X;
        }
        if(winner == 1250){
            system("clear");
            wmap(blocks[0],blocks[1],blocks[2],blocks[3],blocks[4],blocks[5],blocks[6],blocks[7],blocks[8]);
            printf("\n\nTIE!!\n\n");
            return 1;
        }
        
    }
    

    // printf("\n\n   |   |   \n-----------\n   |   |   \n-----------\n   |   |   \n\n\n");
    
    

    return 0;
}