void __attribute__((constructor)) myStartupFun(void);

/**
 * myStartupFun - prints before main
 * 
 */
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n""I bore my house upon my back!\n");
}