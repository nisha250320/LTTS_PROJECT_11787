#include "conversion.h"
/**
 * @brief This function converts weight to Pounds/kgms
 * 
 * @param ch 
 * @param num 
 * @return float 
 */
float weight(int ch,float num)
{
	if(ch>2 || ch<1)
	{
		return 0;
	}
	/**
	 * @brief conversion factors for kgms and pounds are initialized.
	 * 
	 */
    const float KG = 0.453592;
    const float POUND = 2.20462;
		/**
	 * @brief if choice equal to 1 then weight in pounds convert to kgms.
	 * 
	 */
	if(ch==1)
	{
	    printf("Weight in kilograms is %f kgms\n\n", (num * KG));
		return num*KG;
	}
		/**
	 * @brief else if choice equal 2 the weight in kgms to pounds.
	 * 
	 * @return else 
	 */
	else if(ch==2)
	{
        printf("Weight in pounds is %f pounds\n\n", (num* POUND));
		return num*POUND;
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
