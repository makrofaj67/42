#include <stdio.h>
#include <unistd.h>

void	*ft_print_memory(void *addr, unsigned int size)
{
	void	**addr2;

	addr2 = &addr;
	printf("%p", addr2);
	return (addr + size);
}

int	main(void)

{
	char *example;
	void *example0;

	example = "The content in hexadecimal with a space each 2 casdf";
	example0 = (void *)example;
	ft_print_memory(example0, 53);
}
