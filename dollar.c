#include<stdio.h>
int main(){

/* Made By : Murtaza Tanveer 
   Reg no : SP23-BSE-096-2C  */
printf("\nMade by : MURTAZA TANVEER\nReg no : SP23-BSE0-96");
	
printf("\n\n___________________WELCOME TO CURRENCY CONVERSION PLATFOAM___________________\n\n\n");

float dollar;

printf("\nEnter Amount In USD : ");
scanf("%f",&dollar);

float fee;
fee =  ( ( 10*dollar) / ( 100 ) );

float remaining = dollar-fee;

float y = remaining/2;

float pound = (y*0.79);

float yen = (y*127.65);

printf("\n\nFee Detucted is : %.3f $\n\n",fee);

printf("After Converting You get : \n\n");

printf("%.3f GPB\n\n",pound);

printf("%.3f JPY\n\n",yen);

return 0;

}