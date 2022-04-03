
#include "conversion.h"
/**
 * @brief 
 * 
 * @param ch 
 * @param num 
 * @return float 
 */
float length(int ch,float num)
{
    float f=0;
	float Feet=0;
	if(ch>2 || ch<1)
	{
		return 0;
	}
	/**
	 * @brief if choice is equal to 1 then length in feet will converted to inches by multiplying given value by 12
	 * 
	 */
	if(ch==1)
	{
        f = num*12;
        printf("length in inches : %f inches\n\n",f);
		return f;
	}
	/**
	 * @brief else if choice is equal to 1 then length in inches will converted to feet by dividing given value by 12
	 * 
	 * @return else 
	 */
	else if(ch==2)
	{
        Feet = num / 12;
        printf("length in feet : %f feet\n\n",Feet);
		return Feet;
	}
	/**
	 * @brief else it will ask to enter a valid choice.
	 * 
	 */
	else
	{
        printf("Enter a valid unit choice number\n");
		return 0;
	}
}
