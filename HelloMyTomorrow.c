//
//
// Created by JEU. 20151118
//
//
#include <stdio.h>

typedef struct{
	int year;
	int month;
	int day;
}date;

date tomorrowDate(date todayDate);


int main(int argc, char *argv[]) {
	
	date today;
	date tomorrow;
	
	today.year = 2012;
	today.month = 2;
	today.day = 28;
	
	tomorrow = tomorrowDate(today);
	
	printf("Tomorrow is %d.%d.%d \n",tomorrow.year,tomorrow.month,tomorrow.day);
	
}


date tomorrowDate(date todayDate){
	
	date tomorrowDate = todayDate;
	int caseNumber;
	
	if (tomorrowDate.month == 1 ||tomorrowDate.month == 3 ||tomorrowDate.month == 5 ||tomorrowDate.month == 7 ||tomorrowDate.month == 8 ||tomorrowDate.month == 10)
		caseNumber = 1;
	else if(tomorrowDate.month == 2)
		caseNumber = 2;
	else if(tomorrowDate.month == 4 || tomorrowDate.month == 6 || tomorrowDate.month == 9 || tomorrowDate.month == 11)
		caseNumber = 3;
	else 
		caseNumber = 4;
	switch (caseNumber) {
		case 1 : if (tomorrowDate.day == 31){
					tomorrowDate.month++;
					tomorrowDate.day = 1;
				}else{
					tomorrowDate.day++;
				}
				break;
		case 2 : if (tomorrowDate.year%4 == 0){
					if(tomorrowDate.day == 29){
						tomorrowDate.month++;
						tomorrowDate.day = 1;
					}else {
						tomorrowDate.day++;
					}
				}else{
					if(tomorrowDate.day == 28){
						tomorrowDate.month++;
						tomorrowDate.day = 1;
					 }else {
						tomorrowDate.day++;
					 }
				}
				break;
		case 3: if(tomorrowDate.day == 30){
					tomorrowDate.month++;
					tomorrowDate.day = 1;
					}else {
					tomorrowDate.day++;
					}
					break;
		case 4: if(tomorrowDate.day == 30){
					tomorrowDate.year++;
					tomorrowDate.month = 1;
					tomorrowDate.day = 1;
					}else {
					tomorrowDate.day++;
					}
					break;
		default: break;
	}
	
	return tomorrowDate;
}
