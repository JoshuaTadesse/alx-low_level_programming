#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int h_t = '0';

	for (h_t = '0'; h_t < '3'; h_t++)
	{
		int h_o = '0';

		if (h_t == '2')
		{
			h_m = '4';
		}
		for (h_o = '0'; h_o < h_m; h_o++)
		{
			int m_t = '0';

			for (m_t = '0'; m_t < '6'; m_t++)
			{
				int m_o = '0';

				for (m_o = '0'; m_o < 58; m_o++)
				{
					_putchar(h_t);
					_putchar(h_o);
					_putchar(':');
					_putchar(m_t);
					_putchar(m_o);
					_putchar('\n');
				}
				m_o = '0';
			}
			m_t = '0';
		}
		h_o = '0';
	}
}
