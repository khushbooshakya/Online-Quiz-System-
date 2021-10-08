#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<windows.h>

using namespace std;

struct student{

	char nam[20],rollno[20];

	int marks,random;

};

student st;

void mth(){

	int i=0,arr[6];

	st.marks=0;

	char choice;

	while(i<5){

	back:	

	st.random=rand()%6;

	for(int j=0;j<=6;j++){

		if(st.random==arr[j]){

			goto back;

		}

	}

	arr[i]=st.random;

	switch(st.random)

    {

     case 0:
	cout<<i+1<<") What is the average of first 150 natural numbers?"<<endl;

	cout<<"A. 70"<<endl;

	cout<<"B. 70.5"<<endl;

	cout<<"C. 75"<<endl;

	cout<<"D. 75.5"<<endl;

	choice=getch();

	if(choice=='D'||choice=='d'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is d"<<endl<<endl;

	}

	break;

	case 1:

	cout<<i+1<<")0.003 × 0.02 = ?"<<endl;

	cout<<"a)  0.06"<<endl;

	cout<<"b)  0.006"<<endl;

	cout<<"c)  0.0006"<<endl;

	cout<<"d)  0.00006"<<endl;

	choice=getch();

	if(choice=='d'||choice=='D'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is d"<<endl<<endl;

	}

	break;

	case 2:

	cout<<i+1<<") What is the rate of discount if a car which price was $4,000 was sold for $3,200 ?"<<endl;

	cout<<"a) 14% "<<endl;

	cout<<"b) 16% "<<endl;

	cout<<"c) 18% "<<endl;

	cout<<"d) 20% "<<endl;

	choice=getch();

	if(choice=='d'||choice=='D'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is d"<<endl<<endl;

	}

	break;

	case 3:

	cout<<i+1<<") What is the value of x in the equation 3x – 15 – 6 = 0 ?"<<endl;

	cout<<"a) 7 "<<endl;

	cout<<"b) 8 "<<endl;

	cout<<"c) 9 "<<endl;

	cout<<"d) -9 "<<endl;

	choice=getch();

	if(choice=='A'||choice=='a'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is a"<<endl<<endl;

	}

	break;

	case 4:

	cout<<i+1<<")  |–4| + |4| – 4 + 4 = ?"<<endl;

	cout<<"a) 0"<<endl;

	cout<<"b) 2"<<endl;

	cout<<"c) 4"<<endl;

	cout<<"d) 8"<<endl;

	choice=getch();

	if(choice=='D'||choice=='d'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is d"<<endl<<endl;

	}

	break;

	case 5:

	cout<<i+1<<") What is the rate of discount if a car which price was $4,000 was sold for $3,200 ?"<<endl;

	cout<<"a) 14%"<<endl;

	cout<<"b) 16%"<<endl;

	cout<<"c) 18%"<<endl;

	cout<<"d) 20%"<<endl;

	choice=getch();

	if(choice=='d'||choice=='D'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is d"<<endl<<endl;

	}

	break;

    
    	case 6:

	cout<<i+1<<")The average of first 50 natural numbers is …………. ."<<endl;

	cout<<"a) 25.30"<<endl;

	cout<<"b) 25.5"<<endl;

	cout<<"c) 25.00"<<endl;

	cout<<"d) 12.25"<<endl;

	choice=getch();

	if(choice=='b'||choice=='B'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is b"<<endl<<endl;

	}

	break;

    }

    i++;
    

}

	

}

void eng(){
	int i=0,arr[6];

	st.marks=0;

	char choice;

	while(i<5){

	back:	

	st.random=rand()%6;

	for(int j=0;j<=6;j++){

		if(st.random==arr[j]){

			goto back;

		}

	}

	arr[i]=st.random;

	switch(st.random)

    {

    case 0:
	cout<<i+1<<")  Her thinking leans ____ democracy."<<endl;

	cout<<"A. with"<<endl;

	cout<<"B. towards"<<endl;

	cout<<"C. for"<<endl;

	cout<<"D. None of these"<<endl;

	choice=getch();

	if(choice=='b'||choice=='B'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is b"<<endl<<endl;

	}

	break;

	case 1:

	cout<<i+1<<") He got too tired _____ over work."<<endl;

	cout<<"a) because of"<<endl;

	cout<<"b) because off"<<endl;

	cout<<"c) on"<<endl;

	cout<<"d) for"<<endl;

	choice=getch();

	if(choice=='a'||choice=='A'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is A"<<endl<<endl;

	}

	break;

	case 2:

	cout<<i+1<<") _____ his principles, he has to be very careful."<<endl;

	cout<<"a) with regard of"<<endl;

	cout<<"b) with regard on"<<endl;

	cout<<"c) with regard to"<<endl;

	cout<<"d) None of these"<<endl;

	choice=getch();

	if(choice=='c'||choice=='C'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is c"<<endl<<endl;

	}

	break;

	case 3:

	cout<<i+1<<") Building has been built _____ the new plan."<<endl;

	cout<<"a) accordance to"<<endl;

	cout<<"b) in accordance with"<<endl;

	cout<<"c) for"<<endl;

	cout<<"d) about"<<endl;

	choice=getch();

	if(choice=='b'||choice=='b'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is B"<<endl<<endl;

	}

	break;

	case 4:

	cout<<i+1<<") The train ____ as fast as the bus."<<endl;

	cout<<"a) went"<<endl;

	cout<<"b) running"<<endl;

	cout<<"c) moves"<<endl;

	cout<<"d) going"<<endl;

	choice=getch();

	if(choice=='C'||choice=='c'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is C"<<endl<<endl;

	}

	break;

	case 5:

	cout<<i+1<<") She ____ in the sun for 1 hour."<<endl;

	cout<<"a) sitting"<<endl;

	cout<<"b) has been sitting"<<endl;

	cout<<"c) has been sit"<<endl;

	cout<<"d) has sit"<<endl;

	choice=getch();

	if(choice=='b'||choice=='B'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl<<endl;

		cout<<"The corrent answer is B"<<endl;

	}
break;

	case 6:

	cout<<i+1<<") Words of same sound is ?"<<endl;

	cout<<"a) Soundnyms"<<endl;

	cout<<"b)  Antonyms"<<endl;

	cout<<"c) Homonyms"<<endl;

	cout<<"d) None of these"<<endl;

	choice=getch();

	if(choice=='c'||choice=='c'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is c"<<endl<<endl;

	}

	break;

    }

    i++;

    

}

}

void sci(){
	int i=0,arr[6];

	st.marks=0;

	char choice;

	while(i<5){

	back:	

	st.random=rand()%6;

	for(int j=0;j<=6;j++){

		if(st.random==arr[j]){

			goto back;

		}

	}

	arr[i]=st.random;

	switch(st.random)

    {
  case 0:
	cout<<i+1<<") The image formed in a compound microscope is"<<endl;

	cout<<"A. erect"<<endl;

	cout<<"B. inverted"<<endl;

	cout<<"C. sometimes erect, sometimes"<<endl;

	cout<<"D. none"<<endl;

	choice=getch();

	if(choice=='B'||choice=='b'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is B"<<endl<<endl;

	}

	break;

	case 1:

	cout<<i+1<<") The lens used in a simple microscope is"<<endl;

	cout<<"a) Concave"<<endl;

	cout<<"b) Convex"<<endl;

	cout<<"c) Cylindrical"<<endl;

	cout<<"d) None"<<endl;

	choice=getch();

	if(choice=='B'||choice=='b'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is b"<<endl<<endl;

	}

	break;

	case 2:

	cout<<i+1<<") The S. I. unit of refractive index is"<<endl;

	cout<<"a) meter"<<endl;

	cout<<"b) cm"<<endl;

	cout<<"c) watt"<<endl;

	cout<<"d)  no unit"<<endl;

	choice=getch();

	if(choice=='d'||choice=='D'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is d"<<endl<<endl;

	}

	break;

	case 3:

	cout<<i+1<<") Which of the following is not a primary colour"<<endl;

	cout<<"a) Red"<<endl;

	cout<<"b) Blue"<<endl;

	cout<<"c) Green"<<endl;

	cout<<"d) Yellow"<<endl;

	choice=getch();

	if(choice=='d'||choice=='D'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is d"<<endl<<endl;

	}

	break;

	case 4:

	cout<<i+1<<")  Which blood cells are called 'Soldiers' of the body"<<endl;

	cout<<"a) WBC"<<endl;

	cout<<"b) Platelets"<<endl;

	cout<<"c) RBC"<<endl;

	cout<<"d) All of the above"<<endl;

	choice=getch();

	if(choice=='A'||choice=='a'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is a"<<endl<<endl;

	}

	break;

	case 5:

	cout<<i+1<<") Acid present in gastric juice is"<<endl;

	cout<<"a) Hydrochloric Acid"<<endl;

	cout<<"b) Citric Acid"<<endl;

	cout<<"c) Sulphuric Acid"<<endl;

	cout<<"d) Acetic Acid"<<endl;

	choice=getch();

	if(choice=='a'||choice=='A'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl<<endl;

		cout<<"The corrent answer is A"<<endl;

	}
	break;

	case 6:

	cout<<i+1<<") Endothermic reactions are those in which"<<endl;

	cout<<"a) Heat is evolved"<<endl;

	cout<<"b)  Heat is absorbed"<<endl;

	cout<<"c) Temperature increases"<<endl;

	cout<<"d) Light is produced"<<endl;

	choice=getch();

	if(choice=='b'||choice=='b'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is B"<<endl<<endl;

	}

	break;
}

    i++;
}

}

void result(){

	

	float percentage=0;

	cout<<"Student Name: "<<st.nam<<endl;

	cout<<"Roll no: "<<st.rollno<<endl;

	cout<<"Marks: "<<st.marks<<" out of 6"<<endl;

	percentage=100*st.marks/6;

	cout<<"Percentage: "<<percentage<<"%"<<endl;

	if(percentage>=50){

		cout<<"Status: Pass"<<endl;

	}

	else {

	cout<<"Status: Fail"<<endl;

    }

}



main(){

	char press,select;

	do

	{

	cout<<"\n\n\t\t****************"<<endl;

	cout<<"\t\t  QUIZ SYSTEM"<<endl;

	cout<<"\t\t****************"<<endl;

	cout<<"\t\tEnter name: ";

	gets(st.nam);

	cout<<"\t\tEnter rollno: ";

	gets(st.rollno);

	system("CLS");

	cout<<"\t\tMarks less than 50% will be fail"<<endl;

	cout<<"\n\nSelect option which subject's quiz you want to perform"<<endl;

	cout<<"1) Math"<<endl;

	cout<<"2) English"<<endl;

	cout<<"3) Science"<<endl;

	select=getch();

	system("CLS");

	switch(select){

		case '1':

			cout<<"\t\t Math Quiz"<<endl;

			mth();

			system("CLS");

			cout<<"\t\t Math Quiz Result"<<endl;

			result();

			break;

		case '2':

			cout<<"\t\tEnglish quiz"<<endl;

		    eng();

		    system("CLS");

		    cout<<"\t\tEnglish Quiz Result"<<endl;

		    result();

		    break;

		case '3':

			cout<<"\t\tScience Quiz"<<endl;

			sci();

			system("CLS");

			cout<<"\t\tScience Quiz Result"<<endl;

			result();

			break;

		default:

			cout<<"Invalid input"<<endl;

			break;

	}

	cout<<"Press y if you want to continue or any key to terminate"<<endl;

	press=getch();

	system("CLS");

   }while(press=='y'||press=='Y');

}
