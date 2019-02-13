#include<stdio.h>
unsigned int littobig(unsigned int x);
int main()
{
int lit_endian=0xAABBCCDD;
printf("\n little endian= 0x%X\n",lit_endian);
printf("\n big endian =0x%X\n",littobig(lit_endian));
}
unsigned int littobig(unsigned int x)
{
    return(((x>>24)&0x000000ff)|((x>>8)& 0x0000ff00)|((x<<8)&0x00ff0000)|((x<<24)&0xff000000));

}
