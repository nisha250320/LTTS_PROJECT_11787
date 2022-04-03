
#include<stdio.h>
#include<stdlib.h>
#include "conversion.h"

int main(){
    /**
 * @brief declaration of all the variables required
 * 
 */
int choice=0,ch=0,num1=0;
float num=0;
while(1)
{
     /**
     * @brief if choice equal to 1 then temperature conversion will be performed.
     * else if choice equal to 2 then length conversion will be performed
     * else if choice equal to 3 then weight conversion will be performed
     * else if choice equal to 4 then binary value converted to decimal value
     * else if choice equal to 5 then percentage calculation will be performed
     * else if choice equal to 0 then program will exit.
     * else it will ask to enter valid choice.
     * 
     */
printf("Press 1 to convert temperature units(c,F,k).\n");
printf("Press 2 to convert length units(inches,feet).\n");
printf("Press 3 to convert weight units(kgms,pounds).\n");
printf("Press 4 for number system conversion(binary to decimal).\n");
printf("Press 5 to caluculate percentage.\n");
printf("Press 0 to exit.\n");
scanf("%d", &choice);
switch(choice){
        /**
     * @brief case 0 exits the program
     * 
     */
    case 0:
        exit(0);
        break;
         /**
     * @brief case 1 is for temperature conversion.In this temp function will be called for the conversion.
     * 
     */
    case 1:
        printf("Enter 1 if unit in degree celcius or 2 if unit in degree fahrenheit or 3 if unit in kelvin :\n");
        scanf("%d",&ch);
        printf("Enter temperature in degree celcius or degree fahrenheit or kelvin:\n");
        scanf("%f", &num);
        temp(ch,num);
        break;
        /**
     * @brief case 2 is for length conversion.In this length function will be called for the conversion.
     * 
     */
    case 2:
        printf("Enter 1 if unit in feet or 2 if unit in inches :\n");
        scanf("%d",&ch);
        printf("Enter length in feet or inches:\n");
        scanf("%f", &num);
        length(ch,num);
        break;
         /**
     * @brief case 3 is for weight conversion.In this weight function will be called for the conversion.
     * 
     */
    case 3:
        printf("Enter 1 if unit in pounds or if 2 unit in kgms :\n");
        scanf("%d",&ch);
        printf("Enter weight in pounds or kg:\n");
        scanf("%f",&num);
        weight(ch,num);
        break;
        /**
     * @brief case 4 is for binary to decimal conversion.In this numsys function will be called for the conversion.
     * 
     */
    case 4:
        printf("Enter 1 to enter binary number:\n");
        scanf("%d",&ch);
        scanf("%d",&num1);
        numsys(ch,num1);
        break;
        /**
     * @brief case 5 is for percentage calculation.In this percentage function will be called for the operation.
     * 
     */
    case 5:
        printf("Enter total value : \n");
        scanf("%d",&ch);
        printf("Enter obtained value : \n");
        scanf("%d",&num1);
        percentage(ch,num1);
        break;
        /**
     * @brief default case to enter a valid choice.
     * 
     */
    default:
        printf("Enter a valid choice\n");
        break;
}
}
return 0;
}
