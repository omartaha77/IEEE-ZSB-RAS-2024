
#ifndef DIO_H_
#define DIO_H_

void DIO_setPINDir(unsigned char portname,unsigned char pinnumber,unsigned char direction);

void DIO_write(unsigned char portname,unsigned char pinnumber,unsigned char outputvalue);

unsigned char DIO_u8read(unsigned char portname,unsigned char pinnumber);

void DIO_toggle(unsigned char portname,unsigned char pinnumber);

void DIO_set_port_direction(unsigned char portname,unsigned char direction);

void DIO_write_port(unsigned char portname,unsigned char portvalue);

unsigned char DIO_read_port(unsigned char portname);

void DIO_toggle_port(unsigned char portname);

#endif /* DIO_H_ */