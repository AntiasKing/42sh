/*
** my_str_isalpha.c for my_str_isalpha in /home/arbona/CPool/CPool_Day06
**
** Made by Thomas Arbona
** Login   <arbona@epitech.net>
**
** Started on  Mon Oct 10 18:54:42 2016 Thomas Arbona
** Last update Sun May 21 18:30:34 2017 Arthur Chaloin
*/

int	my_str_isalpha(char *str)
{
  int	iterator;

  iterator = 0;
  while (str[iterator] != '\0')
    {
      if (!(('A' <= str[iterator] && str[iterator] <= 'Z') ||
	    ('a' <= str[iterator] && str[iterator] <= 'z')))
	return (0);
      iterator += 1;
    }
  return (1);
}
