#include <s3c2440.h>

/*
#define STOP BIT_ONE    0x
#defnie STOP_BIT_TWO 	0x
#define SCK_NONE 		0x
#define SCK_ODD_PARITY  0x
#define SKC_EVEN_PARITY 0x
*/

/*
//������
typedef enum
{
	rate4800 = 4800,
	rate9600 = 9600,
	rate115200 = 115200
}BITRATE;

 //��żУ��
typedef enum
{
	sck_none = 0,
	sck_odd_num = 1,
	sck_even_num = 2		
}SCK;

//ֹͣλ
typedef enum
{
	stop_bit_one = 1,
	stop_bit_two = 2	
}STOP_BIT;
*/
/*
typedef struct COM_CFG
{
	int channle;
	int bitrate;
	int sck;
	int stop_bit;
};
*/

int com_init();
unsigned char com_read();
void com_write(unsigned char data);
unsigned char read_char();
void write_char(unsigned char data);
