static int fib(int i)
{
	if (i == 1) {
		return 1;
	}
	else if (i == 0) {
		return 0;
	}
	return fib(i - 1) + fib(i - 2);
}

int fib2(int i)
{
	return fib(i);
}