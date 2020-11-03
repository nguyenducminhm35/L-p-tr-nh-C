#include <stdio.h>
int ctr;   /* ctr is global */
  void blk1(void);
  void blk2(void);
  void main(void)
  {
  	ctr = 10;
  	blk1 ();
  	
  	
  }
  void blk1(void)
  {
  	int rtc;
  	if (ctr > 8)
  {
    rtc = rtc + 1;
    blk2();
  }
} 
  void blk2(void)
{
	int ctr;
	ctr = 0;
} 
