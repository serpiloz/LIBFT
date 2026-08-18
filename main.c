#include "libft.h"

void	*f(void *content)
{
	char	*str;
	int		i;

	i = 0;
	str =ft_strdup((char *)content);
    if(!str)
    {
        return NULL;
    }
	while (str[i] != '\0')
	{
		str[i] = str[i] + 2;
		i++;
	}
    return(str);
}
void	del(void *list)
{
	free(list);
}
#include <stdio.h>

int	main(void)
{
	t_list *node1 = ft_lstnew(ft_strdup("vagon1"));
	t_list *node2 = ft_lstnew(ft_strdup("vagon2"));
	t_list *node3 = ft_lstnew(ft_strdup("vagon3"));
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
	printf("%s\n", (char *)node1->content);
	printf("%s\n", (char *)node1->next->content);
	printf("%s\n", (char *)node1->next->next->content);
	t_list *new_list = ft_lstmap(node1, f, del);
	// t_list *temp;
	// temp = new_list;
    while(new_list)
    {
        printf("yeni %s\n",(char *)new_list->content);
        new_list= new_list ->next;
    }
    printf("orjinal %s\n",(char *)node1->content);
    printf("%s\n", (char *)node1->next->content);
	printf("%s\n", (char *)node1->next->next->content);
}