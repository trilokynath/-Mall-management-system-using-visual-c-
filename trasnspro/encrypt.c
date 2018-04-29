
int encrypt(char str[10])
{
	int i=0;
	char pass[10]="India@123";
	while(pass[i]!='\0'&&str[i]!='\0')
	{
		if(pass[i]==str[i])
			i++;
	}
	if(i==9)
		return 1;
	else
		return 0;
}
