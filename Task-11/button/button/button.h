/*
 * button.h
 *
 * Created: 7/4/2024 4:51:48 AM
 *  Author: omar7
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_

void button_init(char port,char pin);

char button_read(char port,char pin);



#endif /* BUTTON_H_ */