// JEU 20150926

#include<stdio.h>
#include<stdlib.h>

int main(){
	int i         = 0;
	int year      = 0;
	int error     = 0;
	char IDstudent[11] = "";
	char major[21][10] =
{"","AE","FIN","CST","ENVS","STAT","ACCT","GIR","IJ","CTV","SWSA","TESL","CCM","FST","PRA","MHR","APSY","ATS","FM","CELL","MKT"};// Thanks to Hurin  :>
		
	do{
		printf("Please input your student ID in UIC:");
		scanf("%10s", IDstudent);
		// Get know of student ID ...
		char yearchar[2]={IDstudent[0],IDstudent[1]};
		int yearNUM = atoi(yearchar);// Thanks to Hurin again ;P
	
		char majorchar[2]={IDstudent[5],IDstudent[6]};
		int majorNUM = atoi(majorchar);// And again QAQ
		// Get know the major...

		if (yearNUM > 16 || yearNUM < 5 || majorNUM == 0 || majorNUM > 21 ){

			printf("It seems not a right student ID in UIC.\n");
			error = 1;
		}
	}while (error == 1) ;
	// Check student ID... 
	// ?? How to make sure the length of ID is 10?
	char yearchar[2]={IDstudent[0],IDstudent[1]};
	int yearNUM = atoi(yearchar);

	char majorchar[2]={IDstudent[5],IDstudent[6]};
	int majorNUM = atoi(majorchar);
	// ?? How to use the local variable effcient?
	
	year = yearNUM + 2003;
	// Calculate year ...
	
	printf("Your major is ");
	for (i = 0; i < 10; i++) {
		printf("%c", major[majorNUM][i]);

	}
	// Print the major...
	printf(".\nYou will graduate in %d.\n",year);
	return 0;	
}