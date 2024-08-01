#include <stdio.h>
/**
 * myStartupFun - The function that apply the constructor
 * attribute to myStartupFun() so that it is executed before main().
 *
 */
void myStartupFun(void)
__attribute__((constructor));
/**
 * myStartupFun - The function that implement myStartupFun
 */
void myStartupFun(void)
{
printf("You're best! andd yet, you must allow, \n");
printf("I bore my house upon my back! \n");
}
