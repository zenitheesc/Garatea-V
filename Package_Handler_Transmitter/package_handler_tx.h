#include <stdlib.h>
#include <stdio.h>

#define pkg_size_bytes 15

typedef char byte;
typedef int int32;
typedef float float32;

typedef struct package{
	float32 bmp;
	char tk1;
	float32 gps[3];
	char tk2;
	int32 pkg_no;
	char tk3;
}package;

/*
Author: Tiago Bachiega de Almeida
Function: converts a package struct to a byte array
Parameters: a package struct
Output: pointer to a byte array
*/
byte* struct_to_byte(package pkg);

/*
Author: Tiago Bachiega de Almeida
Function: sets the bpm value of the package
Parameters: a pointer to a package struct and the bmp value
Output: nothing
*/
void set_bmp(package* pkg, float32 bmp);

/*
Author: Tiago Bachiega de Almeida
Function: sets the gps value of the package
Parameters: a pointer to a package struct and the gps array 
Output: nothing
*/
void set_gps(package* pkg, float32 gps[]);

/*
Author: Tiago Bachiega de Almeida
Function: sets the package number value of the package
Parameters: a pointer to a package struct and the number value
Output: nothing
*/
void set_pkg_no(package* pkg, int32 no);

/*
Author: Tiago Bachiega de Almeida
Function: gets the bpm value of the package
Parameters: a package struct
Output:the bmp value
*/
float32 get_bmp(package pkg);

/*
Author: Tiago Bachiega de Almeida
Function: gets the pointer to the gps values of the package
Parameters: a package struct
Output:the pointer to the gps value values
*/
float32* get_gps(package pkg);

/*
Author: Tiago Bachiega de Almeida
Function: gets the package number value of the package
Parameters: a package struct
Output:the package number
*/
int32 get_pkg_np(package pkg);
