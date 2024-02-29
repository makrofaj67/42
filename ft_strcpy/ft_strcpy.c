#include <unistd.h>

char	*ft_strcpy(char *s1, char *s2)

{
	char *sresult;

	sresult = s1;
	while (*s1)
		s1++;
	while (*s2)
		*s1++ = *s2++;
	*s1 = 0;
	return (sresult);
}
