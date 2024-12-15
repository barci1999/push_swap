#include"pushswap.h"
int main(int argc,char **argv)
{
	if(argc != 2) 
		return(1);
	t_list *stack_a = NULL;
	int i = 1;
	while (i < argc)
	{
		void *content = ft_atoi(argv[i]);
		push(&stack_a,(void *)content);
		i++;
	}
}