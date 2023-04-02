/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frame.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beeligul <beeligul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 15:48:30 by beeligul          #+#    #+#             */
/*   Updated: 2023/04/02 15:48:31 by beeligul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_max_len(char	*str)
{
	int	i;
	int	max_len;
	int	temp_len;
	
	i = 0;
        max_len = 0;
        temp_len = 0;
        while (str[i])
        {
                temp_len = 0;
                while (str[i] != ' ' && str[i])
                {
                        temp_len++;
                        i++;
                }
                if (temp_len > max_len)
                        max_len = temp_len;
                if (str[i] == ' ' && str[i])
                        i++;
        }
	return (max_len);
}

int	main(int argc, char **argv)
{
	int 	i;
	int	max_len;
	int	temp_len;

	if (argc != 2)
		return (0);
	max_len = ft_max_len(argv[1]);
	i = 0;
	while (i < max_len + 4)
	{
		printf("*");
		i++;
	}
	printf("\n");
	i = 0;
	while (argv[1][i])
	{
		temp_len = 0;
		if (argv[1][i] == ' ')
			i++;
		if (argv[1][i] != ' ' && argv[1][i])
		{
			printf("* ");
			while (argv[1][i] != ' ' && argv[1][i])
			{
				printf("%c", argv[1][i]);
				i++;
				temp_len++;
			}
			while (temp_len < max_len - 1)
			{
				printf(" ");
				temp_len++;
			}
			printf(" *\n");
		}
	}
	i = 0;
	while (i < max_len + 4)
	{
		printf("*");
		i++;
	}
	printf("\n");
}
