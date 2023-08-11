#ifndef ELF_FUNCTIONS_H
#define ELF_FUNCTIONS_H

void verify_ELF(unsigned char *temp);
void display_ELF_Signature(unsigned char *temp);
void display_ELF_class(unsigned char *temp);
void display_information(unsigned char *temp);
void DispalyVersion(unsigned char *temp);
void display_OSABI(unsigned char *temp);
void  ABI_Version(unsigned char *tempt);
void Type(unsigned int data, unsigned char *temp);
void point_address(unsigned long int data, unsigned char *temp);
void turn_off(int temp);

#endif
