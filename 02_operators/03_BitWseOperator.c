/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 
 * Brief: 
 * Author: Rahul kumar
 * Title: Project engineer
 * Last Modified Date: 21 march 2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
    int a=50;
    int b=5;
    int result=0;
    result= a|b;
    printf("Binary or operator of a and b is %d\n",result);
    result=a&b;
    printf("Binary and operator of a and b is %d\n",result);
    result=a^b;
    printf("Binary xor operator of a and b is %d\n",result);
    result=~a;
    printf("Binary once compliment of a %d\n",result);
    result=a<<2;
    printf("Binary left shift operator of a %d\n",result);
    result=a>>2;
    printf("Binary right shift operator of a %d\n",result); 
     return 0;
}

// Program End
