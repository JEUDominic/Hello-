int year     = 0
int error    = 0
int programe = 0
int number   = 0
char *major[5]  
char *IDstudent[10]


do
{
input student ID

if IDstudent[0]>1||IDstudent[5]>2
  
    output "It seems not a right student ID in UIC."
    error = 1
else if IDstudent[5] == 0 && IDstudent[6] == 0

    output "It seems not a right student ID in UIC."
    error = 1
else if IDstudent[5] == 2 && IDstudent [6] >0
    
    output "It seems not a right student ID in UIC."
    error = 1
} while(error);
// check input...

if IDstudent[0] == 1

    year = 2010 + IDstudent[1]
else if IDstudent[0] == 0
   
    year = 2000 + IDstudent[1]
// check year...

    
programe = IDstudent[6]
    
if IDstudent[5] == 0

    switch (programe){
    case 0:
    output "It seems not a right student ID in UIC."
    b;
    
    case 1:
    major = AE;
    b;
    case 2:
    major = FIN;
    b;
    case 3:
    major = CST;
    b;
    case 4:
    major = ENVS;
    b;
    case 5:
    major = STAT;
    b;
    case 6:
    major = ACCT;
    b;
    case 7:
    major = GIR;
    b;
    case 8:
    major = IJ;
    b;
    case 9:
    major = CTV;
    b;
    }
else if IDstudent[5] == 1
    
    switch (programe){
    case :
    major = SWSA;
    b;
    case 1:
    major = TESL;
    b;
    case 2:
    major = CCM;
    b;
    case 3:
    major = FST;
    b;
    case 4:
    major = PRA;
    b;
    case 5:
    major = MHR;
    b;
    case 6:
    major = APSY;
    b;
    case 7:
    major = ATS;
    b;
    case 8:
    major = FM;
    b;
    case 9:
    major = CELL;
    b;
    }
else if IDstudent[5] == 2 && IDstudent[6] ==0
    
    major = MKT;
    
number = 100IDstudent[7] + 10*IDstudent[8] +IDstudent[9]
  
  printf ("You are the in %s major, you will graduate in %d.\n",major,year+4);
    

    
 