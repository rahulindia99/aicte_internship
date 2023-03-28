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
 * Last Modified Date: 24 march 2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
     int i=5,j=5,k=10;
     printf("i is equal to j and k is greater than j %d\n",(i==j)&&(k>j));
     printf("i is equal to j and k is smaller than j %d\n",(i==j)||(k<j));
     printf("i is not equal to j and k is smaller than j %d\n",(i!=j)||(k<j));     
     return 0;
}

// Program End
