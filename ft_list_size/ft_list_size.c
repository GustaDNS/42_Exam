typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int	ft_list_size(t_list *being_list)
{
	int i = 0;
	while(being_list)
	{
		being_list = being_list->next;
		i++;
	}
	return (i);
}