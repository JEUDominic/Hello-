// JEU 20150924
// JEU 20150925

#include<stdio.h>
#include<string.h>

int main(){
	int year      = 0;
	int error     = 0;
	int programme = 0;
	int number    = 0;
	
	//char year[5]      = "";
	char IDstudent[11] = "";
	char major[5] = "";
	const char *AE = "AE";
	const char *FIN = "FIN";
	const char *CST = "CST";
	const char *ENVS = "ENVS";
	const char *STAT = "STAT";
	const char *ACCT = "ACCT";
	const char *GIR = "GIR";
	const char *IJ ="IJ";
	const char *CTV = "CTV";
	const char *SWSA = "SWSA";
	const char *TESL = "TESL";
	const char *CCM = "CCM";
	const char *FST = "FST";
	const char *PRA = "PRA";
	const char *MHR = "MHR";
	const char *APSY = "APSY";
	const char *ATS = "ATS";
	const char *FM = "FM";
	const char *CELL = "CELL";
	const char *MKT = "MKT";
	
	
	//char major[5] = {'C','S','T'};
	//printf("Major is %s.\n", major);
	
	//scanf("%10s", IDstudent);
	//printf("StudentID is %10s.\n", IDstudent);

	//char *Major = "CST";
	//strcpy(major, Major);	
	do{
		printf("Please input your student ID in UIC:");
		scanf("%10s", IDstudent);
		// Get know of student ID ...
		if (IDstudent[0] != 49  && IDstudent [0] != 48){
			printf("It seems not a right student ID in UIC.\n");
			error = 1;

		}
		else if (IDstudent[5] == 48 && IDstudent[6] == 48 ){
			printf("It seems not a right student ID in UIC.\n");
			error = 1;
		}	
		else if (IDstudent[5] == 50 && IDstudent [6] != 48){
			printf("It seems not a right student ID in UIC.\n");
			error = 1;
		}
		// Maybe it is a wrong loop...Big brother helps me!
			
		
	}
		// Check student ID...
	while (error == 1) ;
	
	//strcpy(major, AE);
	if ( IDstudent[0] == '1' ){
		year = 2010 + IDstudent[1] - 45 ;
	}
	else {
		year = 2000 + IDstudent[1] - 45 ;
	}
	// wrong loop again ...
	//printf("You will graduate in %d.\n", year );
	//Check year ...
	
	programme = IDstudent[6] - 48;
	//printf("The programme is %d.\n",programme);
	if (IDstudent[5] == 48){
		switch (programme) {
			case 1:
				strcpy(major,AE); // It does't work but I don't know why.
				break;
				
		
			case 2:
				strcpy(major,FIN);
				break;
			case 3:
				strcpy(major,CST);
				break;
			case 4:
				strcpy(major,ENVS);
				break;
			case 5:
				strcpy(major,STAT);
				break;
			case 6:
				strcpy(major,ACCT);
				break;
			case 7:
				strcpy(major,GIR);
				break;
			case 8:
				strcpy(major,IJ);
				break;
			case 9:
				strcpy(major,CTV);
				break;
				
		}
	}
	else if (IDstudent[5] == 49){
		switch (programme) {
			case 0:
				strcpy(major,SWSA);
				break;
			case 1:
				strcpy(major,TESL);
				break;
			case 2:
				strcpy(major,CCM);
				break;
			case 3:
				strcpy(major,FST);
				break;
			case 4:
				strcpy(major,PRA);
				break;
			case 5:
				strcpy(major,MHR);
				break;
			case 6:
				strcpy(major,APSY);
				break;
			case 7:
				strcpy(major,ATS);
				break;
			case 8:
				strcpy(major,FM);
				break;
			case 9:
				strcpy(major,CELL);
				break;
		}
	}
	else{
			strcpy(major,MKT);
		
	}

	
	printf("You are in %s major, you will graduate in %d.\n",major,year);
	return 0;
	
}