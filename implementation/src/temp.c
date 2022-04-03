
#include "conversion.h"
/**
 * @brief This function is converts the temperature to degree Celcius/degree Fahrenheit/Kelvin 
 * 
 * @param ch 
 * @param num 
 * @return float 
 */
float temp(int ch,float num)
{
    float f1=0,f2=0;
    const float k=273.15;
	if(ch>3 || ch<1)
	{
		return 0;
	}
	/**
		 * @brief if choice equal to 1 then temperature in degree celcius to degree Fahrenheit and Kelvin by applying conversion factors.
		 * 
		 */
	if(ch==1)
	{
	  f1 = num* 9/5 + 32;
	  f2=num+k;
	  printf("Temperature in fahrenheit : %f degree fahrenheit\n", f1);
	  printf("Temperature in kelvin : %f kelvin\n\n", f2);
	  return f1;
	}
	/**
	 * @brief else if choice equal to 2 then temperature in degree Fahrenheit to degree Celcius and Kelvin by applying conversion factors
	 * 
	 * @return else 
	 */
	else if(ch==2)
	{
	 f1=5*(num-32)/9;
	 f2=f1+k;
	 printf("Temperature in celcius : %f degree celcius\n", f1);
	 printf("Temperature in kelvin : %f kelvin\n\n", f2);
	 return f1;
	}
	/**
	 * @brief else if choice equal to 3 then temperature in Kelvin to degree Fahrenheit and degree celcius by applying conversion factors
	 * 
	 * @return else 
	 */
	else if(ch==3)
    {
        f1=num-k;
        f2=f1*9/5+num;
        printf("Temperature in celcius : %f degree celcius\n", f1);
        printf("Temperature in fahrenheit : %f degree fahrenheit\n\n", f2);
		return f1;
    }
	/**
	 * @brief else it will ask for to enter valid input
	 * 
	 */
	else
	{
	 printf("Enter a valid unit choice number\n");
	 return 0;
	}
}
