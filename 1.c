#include <LPC214x.h>
void delay(unsigned int count);
int main()
{
	
    IODIR0|=(0x01<<1);// set direction as output
	  IODIR0|=(0x01<<2);
    IODIR0|=(0x01<<3); 
    IODIR0|=(0x01<<4);   
    IODIR0|=(0x01<<5);
	  IODIR0|=(0x01<<6);
	  IODIR0|=(0x01<<7);
	while(1){
		
   
		IOSET0|=(1<<2);
		IOSET0|=(1<<3);
		delay(200000);
		IOCLR0|=(1<<2);
		IOCLR0|=(1<<3);
	  IOSET0|=(1<<1)| (1<<2)|(1<<4)|(1<<5)|(1<<7);
		IOCLR0|=(1<<1)| (1<<2)|(1<<4)|(1<<5)|(1<<7);
		delay(200000);
		IOSET0|=(1<<1)| (1<<2)|(1<<3)|(1<<4)|(1<<7);
		IOCLR0|=(1<<1)| (1<<2)|(1<<3)|(1<<4)|(1<<7);
		delay(200000);
		IOSET0|=1<<6)| (1<<7)|(1<<3);
		IOCLR0|=1<<6)| (1<<7)|(1<<3);
		delay(200000);
		IOSET0|=(1<<1)| (1<<4)|(1<<3)|(1<<6)|(1<<7);
		IOCLR0|=(1<<1)| (1<<4)|(1<<3)|(1<<6)|(1<<7);
   	delay(200000);
		IOSET0|=(1<<1)|(1<<6)|(1<<5)|(1<<4)|(1<<3)|(1<<7);
		IOCLR0|=(1<<1)|(1<<6)|(1<<5)|(1<<4)|(1<<3)|(1<<7);
		delay(200000);
		IOSET0|=(1<<1)| (1<<2)|(1<<3);
		IOCLR0|=(1<<1)| (1<<2)|(1<<3);
		delay(200000);
	}
}
void delay(unsigned int count)
{
	unsigned int 1;
	for(i=0;i<count;i++);
}
	
		
		
		