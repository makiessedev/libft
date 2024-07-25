#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *new;

	new = (t_list *)malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

int	main(void)
{
	t_list *new = ft_lstnew("Makiesse");
	printf("%s", (char *)new->content);
	return (0);
}
