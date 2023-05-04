#ifndef MAIN_H
#define MAIN_H

#define BYTE_LENGHT 8

int _putchar(char c);
unsigned int binStrToUnit(const char *a);
void binary_print(unsigned long int w);
int acq_bit(unsigned long int w, unsigned int index);
int alloc_bit(unsigned long int *w, unsigned int index);
int clear_bit(unsigned long int *w, unsigned int index);
unsigned int flip_bits(unsigned long int w, unsigned long int n);
int get_end(void);

#endif
