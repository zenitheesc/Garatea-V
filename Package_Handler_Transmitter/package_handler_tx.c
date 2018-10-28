#include "package_handler_tx.h"

uint8_t* struct_to_byte(package pkg){
	
	//casts a pointer to byte from pkg address
	uint8_t *ptrByte  = (uint8_t *) &pkg;
	
	return ptrByte;
	
}

void set_bmp(package* pkg, uint32_t bmp){

	pkg->bmp = bmp;
	
	return;
}

void set_gps(package* pkg, uint32_t gps[3]){

	pkg->gps[0] = gps[0];
	pkg->gps[1] = gps[1];
	pkg->gps[2] = gps[2];
	
	return;
}

void set_pkg_no(package* pkg, uint32_t no){

	pkg->pkg_no = no;
	
	return;
}

uint32_t get_bmp(package pkg){
	
	return pkg.bmp;
}

uint32_t* get_gps(package pkg){
	
	return pkg.gps;
}

uint32_t get_pkg_no(package pkg){
	
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
	
	uint8_t *data = struct_to_byte(pkg);
	
	printf("%c\n", data[4]);
	
	return 0;
}
