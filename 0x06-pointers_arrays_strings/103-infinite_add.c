char *infinite_add(char *n1, char *n2, char *arr, int size_r)
{
	int sz1 = 0, sz2 = 0, i = 0, carry_over = 0;

	/* move pointer to end of strings */
	while (n1[sz1])
        ++sz1;		
	while (n2[sz2])
        ++sz2;

	/* reverse iterate back over them and add to buffer */
	for (i = 0, --sz1, --sz2; (sz1 >= 0 || sz2 >= 0) ; ++i, --sz1, --sz2)
	{
		/* if both n1 and n2 are still strings */
		printf("%d, %d\n", sz1, sz2);
		if (sz1 >= 0 && sz2 >= 0)
		{
			arr[i] = (((n1[sz1] - '0') + (n2[sz2] - '0') + carry_over) % 10) + '0';
			carry_over = ((n1[sz1] - '0') + (n2[sz2] - '0') + carry_over) / 10;
		}
		/* if n1 is still a string but n2 is not */
		else if (sz1 >= 0)
		{
			arr[i] = (((n1[sz1] - '0') + carry_over) % 10) + '0';
			carry_over = ((n1[sz1] - '0') + carry_over) / 10;
		}
		/* if n2 is still a string but n1 is not */
		else if (sz2 >= 0)
		{
			arr[i] = (((n2[sz2] - '0') + carry_over) % 10) + '0';
			carry_over = ((n2[sz2] - '0') + carry_over) / 10;
		}
		/* check for carry_ovr, probably unecessary with the current for loop */
		else if (carry_over == 1)
		{
			arr[i] = carry_over + '0';
			carry_over = 0;
		}
		else
			arr[i] = '\0';
	}
	/* check for carry over */
	if (carry_over == 1)
		arr[i++] = carry_over + '0';

	/* check if value is > size_r, still needs null term char */
	if (i > size_r - 1)
		return (0);

	/* end buffer with null char */
	for (; i <= size_r; i++)
	{	
		arr[i] = '\0';
	}

	return (arr);
}