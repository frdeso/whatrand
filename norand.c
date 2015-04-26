char *no_rand = "RAND";
int rand()
{
	return (int)*(int*) no_rand;
}
