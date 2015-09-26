// JEU 20150926
// Improved by Jason @ 20150926

#include<stdio.h>
#include<stdlib.h>

int main(){
	int i         = 0;
	int year      = 0;
	int error     = 0;
	char IDstudent[11] = "";
	char major[21][5] =
{"","AE","FIN","CST","ENVS","STAT","ACCT","GIR","IJ","CTV","SWSA","TESL","CCM","FST","PRA","MHR","APSY","ATS","FM","CELL","MKT"};// Thanks to Hurin  :>
    char yearchar[2];
    int yearNUM;
    char majorchar[2];
    int majorNUM;
		
	do{
		printf("Please input your student ID in UIC:");
		scanf("%10s", IDstudent);
		// Get know of student ID ...
        yearchar[0] = IDstudent[0]; yearchar[1] = IDstudent[1]; //assign the array element by element.
		yearNUM = atoi(yearchar);// Thanks to Hurin again ;P
	
        majorchar[0] = IDstudent[5]; majorchar[1] = IDstudent[6];//assign the array element by element.
		majorNUM = atoi(majorchar);// And again QAQ
		// Get know the major...

		if (yearNUM > 16 || yearNUM < 5 || majorNUM == 0 || majorNUM > 21 ){

			printf("It seems not a right student ID in UIC.\n");
			error = 1;
		}
	}while (error == 1) ;
	// Check student ID... 
	
	year = yearNUM + 2003;
	// Calculate year ...
	
	printf("Your major is ");
	for (i = 0; i < 5; i++) {
		printf("%c", major[majorNUM][i]);

	}
	// Print the major...
	printf(".\nYou will graduate in %d.\n",year);
	return 0;	
}