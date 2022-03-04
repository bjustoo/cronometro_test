#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h> // funçao sleep


//Cronometro feito em while e ifs


int main(void) {
	
  system("color 4");
  setlocale(LC_ALL,"Portuguese");
  
  int seg=0;
  int min=0;
  int hr=0;
  
  int i=0;
  
  while(i<10){
  	
  	printf("\n\n\t\t______________");
  	printf("\n\n\t\t  CRONÔMETRO");
  	printf("\n\n\t\t  %dh:%dm:%ds ", hr, min, seg);
  	printf("\n\t\t______________");
  	Sleep(1000);
  	system("cls");
  	seg++;
  	
  	if(seg==60){
  		seg=0;
  		min++;
	}
	if(min==60){
		min=0;
		hr++;
    }
    if(hr==24){
    	hr=0;
	}
	  
  }
  
 system("pause");
  return 0;
}
