#include <libft.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *d = (unsigned char *)dst;
	const unsigned char *s = (const unsigned char *)src;

	if (d > s)
		while (len--)
			d[len] = s[len];
	else
		while (len--)
			*d[len] = *s++;
	return (dst);
}

