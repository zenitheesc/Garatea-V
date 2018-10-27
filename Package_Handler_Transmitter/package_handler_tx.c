#include "package_handler_tx.h"

byte* struct_to_byte(package pkg){
	
	//casts a pointer to byte from pkg address
	byte *ptrByte  = (byte *) &pkg;
	
	return ptrByte;
	
}

void set_bmp(package* pkg, float32 bmp){

	pkg->bmp = bmp;
	
	return;
}

void set_gps(package* pkg, float32 gps[3]){

	pkg->gps[0] = gps[0];
	pkg->gps[1] = gps[1];
	pkg->gps[2] = gps[2];
	
	return;
}

void set_pkg_no(package* pkg, int32 no){

	pkg->pkg_no = no;
	
	return;
}

float32 get_bmp(package pkg){
	
	return pkg.bmp;
}

float32* get_gps(package pkg){
	
	return pkg.gps;
}

int32 get_pkg_no(package pkg){
	
	return pkg.pkg_no;
}

int main(){
	
	package pkg;
	pkg.bmp = 7.8;
	pkg.gps[0] = 1.2;
	pkg.gps[1] = 3.3;
	pkg.gps[2] = 5.1;
	pkg.pkg_no = 0;
	pkg.tk1 = ';';
	pkg.tk2 = ';';
	pkg.tk3 = ';';
	
	byte *data = struct_to_byte(pkg);
	
	printf("%c\n", data[4]);
	
	return 0;
}
