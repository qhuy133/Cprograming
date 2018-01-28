#include <stdio.h>
#include<math.h>
int delta (int a, int b, int c);
  int delta (int a, int b, int c)
  {
    int d;
    d = b * b - 4 * a * c;
    return d;
  }
int main ()
{
  int a, b, c, d;
  float x1, x2;
  printf ("Nhap a,b,c");
  scanf ("%d %d %d", &a, &b, &c);
  d = delta (a, b, c);
  if (d > 0)
    {
      x1 = (-b + sqrt (d)) / 2 * a;
      x2 = (-b - sqrt (d)) / 2 * a;
      printf ("Phuong trinh co 2 nghiem x1 x2: %.2f, %.1f", x1, x2);
    }
    if (d == 0)
	{
	  x1 = -b / 2 * a;
	  printf ("Phuong trinh co nghiem kep la: %5.2f", x1);
	}
      else
	printf ("Phuong trinh vo nghiem");


return 0;
    }