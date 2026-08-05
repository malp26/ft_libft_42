#include <stdio.h>
#include <stddef.h>

size_t	ft_strlen(const char *str);

int	main(void)
{
	const char	*text;

	text = "Merhaba, dunya!";
	printf("Metnin uzunlugu: %zu\n", ft_strlen(text));
	return (0);
}
