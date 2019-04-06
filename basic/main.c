#include "doth.h"

# define IS_FOG			0b1
# define IS_GODLIKE_C	0b10
# define IS_ZERG		0b100
# define IS_TERRAN		0b1000
# define IS_TOOSSS		0b10000
# define IS_HTML		0b100000
# define IS_CANCERPHP(X)	(0b00000000 | X)


// int				zergling(const char settings)
// {
// 	if (IS_ZERG(settings))
// 		return 42;
// 	else
// 		return -42;
// }
//
// int				terran(const char settings)
// {
// 	if (IS_TRERRNA(settings))
// 		return 5;
// 	else
// 		return -42;
// }
//
// int				toosss(const char settings)
// {
// 	if (IS_TOOSSS(settings))
// 		return 10;
// 	else
// 		return -42;
// }
//
// int main()
// {
// 	// char test[] = {0b100000000};
// 	// write (1, &test, 1);
// 	unsigned char test = 0b11111111;
// 	if (test == 0b11111111)
// 	puts("lol");
// 	const int	(*func[3])(const char settings) = {zergling, terran, toosss};
// }

int main()
{
	printf("mon main\n");
	int x;

	ft_putstr("ca va :D?\n");
	x = sec();
	if (IS_CANCERPHP(x) == 1)
		puts("lol");
	printf("%d\n", IS_CANCERPHP(x));
}
/*
func[i](settings);




"qwer" == (char[5]{'q', 'w', 'e', 'r', '\0'});
char t = 0b0000000000111000111111011


t & 0b111110000
    0b000100001

if (t > 0b0000001111)
{
}


int				main()
{
	const int	tab[3] = (const int[3]){2, 3, 4};
	char		settings = 0b000000100;
	int			tutu;


	if (0)
		puts("NULL\n");

	if (IS_CANCERPHP(settings))
		puts("YEAH\n");
	setting ^= 0b0000001;

	setting = 0b0001;

	setting &= 0b1;

	setting = 0b0001;

	setting &= 0b100;

	setting &= 0b101;

	setting |= 0b

	0b0110
	0b0101
&	0b0100
|	0b0111
^	0b0011




	0b011000 >> 2
	0b000110


	0b00011000 << 2
	0b01100000









		|   ^   >>  <<



}

	*/
