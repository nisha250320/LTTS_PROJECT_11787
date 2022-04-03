
#include "conversion.h"
/**
 * @brief This is a function which converts binary value to decimal.
 * 
 * @param ch 
 * @param num1 
 * @return int 
 */
int numsys(int ch,int num1)
{
	if(ch==1)
	{
		int binary_val=0, decimal_val = 0, base = 1, rem=0;
		while (num1 > 0)
		{
			rem=num1%10;
			decimal_val = decimal_val + rem * base;
			num1 = num1 / 10 ;
			base = base * 2;
		}
		printf("The decimal equivalent of a %d binary number = %d \n\n",binary_val,decimal_val);
		return decimal_val;
	}
}
