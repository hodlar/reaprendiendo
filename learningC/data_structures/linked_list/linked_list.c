void list_add_value(Node **head, int value)
{
	Node **tmp, new_node;
	new_node = create_Node(value);
	tmp = head;
	while ( (*tmp) )
	{
		tmp = &((*tmp)->next);
	}
	*tmp = new_node;
	(*tmp)->next = 0;
}
