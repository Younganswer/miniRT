#include "../incs/libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*us1;
	unsigned char	*us2;

	if (!s1 && !s2)
		return (0);
	if (!s1)
		return (0 - (int) *s2);
	if (!s2)
		return (*s1);
	us1 = (unsigned char *) s1;
	us2 = (unsigned char *) s2;
	while (*us1 == *us2)
	{
		us1++;
		us2++;
		if (*us1 == '\0' && *us2 == '\0')
			break ;
	}
	return (*us1 - *us2);
}
