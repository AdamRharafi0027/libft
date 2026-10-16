## ft_substr functio :
    #### explaination of
        `
        s_len = ft_strlen(s);
	    if (start >= s_len)
		    actual_len = 0;
	    else
		    actual_len = ft_min(len, s_len - start);
	    dest = malloc((actual_len)+1);
        `
*s_len = ft_strlen(s);* : this for calculating the lengths of the s
*if (start >= s_len) actual_len = 0;* : this for check if the start index is outside the     available characters
*actual_len = ft_min(len, s_len - start);* : we check that the smallest one
    **because** :
        *s_len (string length) - start* = the number of the available characters
        *len* : requested characters
        **if** the requested characters is less than available characters it means
                we can copy all the requested characters
        **else** the requested characters is more than the available that means
                    we will just allocate the available characters

why we use int in
`
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

`
instead of char 
