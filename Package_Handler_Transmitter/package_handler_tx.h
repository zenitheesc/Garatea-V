#include <stdlib.h>
#include <stdio.h>
#include <inttypes.h>

#define pkg_size_bytes 15

typedef struct package{
	uint32_t bmp;
	uint8_t tk1;
	uint32_t gps[3];
	uint8_t tk2;
	uint32_t pkg_no;
	uint8_t tk3;
}package;

/*
Author: Tiago Bachiega de Almeida
Function: converts a package struct to a byte array
Parameters: a package struct
Output: pointer to a byte array
*/
uint8_t* struct_to_byte(package pkg);

/*
Author: Tiago Bachiega de Almeida
Function: sets the bpm value of the package
Parameters: a pointer to a package struct and the bmp value
Output: nothing
*/
void set_bmp(package* pkg, uint32_t bmp);

/*
Author: Tiago Bachiega de Almeida
Function: sets the gps value of the package
Parameters: a pointer to a package struct and the gps array 
Output: nothing
*/
void set_gps(package* pkg, uint32_t gps[]);

/*
Author: Tiago Bachiega de Almeida
Function: sets the package number value of the package
Parameters: a pointer to a package struct and the number value
Output: nothing
*/
void set_pkg_no(package* pkg, uint32_t no);

/*
Author: Tiago Bachiega de Almeida
Function: gets the bpm value of the package
Parameters: a package struct
Output:the bmp value
*/
uint32_t get_bmp(package pkg);

/*
Author: Tiago Bachiega de Almeida
Function: gets the pointer to the gps values of the package
Parameters: a package struct
Output:the pointer to the gps value values
*/
uint32_t* get_gps(package pkg);

/*
Author: Tiago Bachiega de Almeida
Function: gets the package number value of the package
Parameters: a package struct
Output:the package number
*/
uint32_t get_pkg_np(package pkg);
