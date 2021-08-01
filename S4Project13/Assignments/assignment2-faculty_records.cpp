//Assignment 2

//Write a menu-driven program that reads details of a faculty from a file.
//Provide options to add a new record, delete a record, update an existing record and display all or particular record.
//Hint: use size of objects (Ref. L34, page/slide 4).


#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Faculty
{
	int id;
	string name;
	string designation;
	string courses;
	int phone;

public:
	Faculty(int i=0, string n="####", string d="####", string c="####", int p=00000)
	{
		id = i;
		name = n;
		designation = d;
		courses = c;
		phone = p;
	}

	int getId() 							// accessor function to return id
    {
        return id;
    }

    void getFacultyData()					//function to get faculty details
    {

    	cout<<"\n -- Enter details -- \n";
        cout<<" ID               : ";
        cin>>id;
        cout<<" Name             : ";
        fflush(stdin);
		getline(cin, name);
		cout<<" Designation      : ";
        fflush(stdin);
		getline(cin, designation);
		cout<<" Courses Taught   : ";
        fflush(stdin);
		getline(cin, courses);
		cout<<" Phone Number     : ";
        cin>>phone;
    }

    void putFacultyData()					//function to display faculty details
    {
    	cout<<"\n\n ------ Faculty details ------ ";
        cout<<"\n ID                : "<<id;
        cout<<"\n Name              : "<<name;
        cout<<"\n Designation       : "<<designation;
        cout<<"\n Courses Taught    : "<<courses;
        cout<<"\n Phone Number      : "<<phone;
    }

    void updateFaculty()					//function to update faculty details
    {
    	string nm, ds, cr;
    	int ph;

    	putFacultyData();

    	cout<<"\n ------ Enter NEW details ------ \n";
        cout<<" Name (Press '.' to retain old one)           : ";
        fflush(stdin);
		getline(cin, nm);
		cout<<" Designation (Press '.' to retain old one)    : ";
        fflush(stdin);
		getline(cin, ds);
		cout<<" Courses Taught (Press '.' to retain old one) : ";
        fflush(stdin);
		getline(cin, cr);
		cout<<" Phone Number (Press '0' to retain old one)   : ";
        cin>>ph;

        if(nm != ".")
        	name = nm;
        if(ds != ".")
        	designation = ds;
        if(cr != ".")
        	courses = cr;
        if(ph!=0)
        	phone = ph;

    }


};

int addNewRecord(Faculty F)						//function to add new record to the file
{
	ofstream fout;
	fout.open("facultydata.txt", ios::app);		//opening file for output

    if (!fout)
    {
        cout<<"\n Error in opening file! ";
        return 0;
    }
    else
    {
        fout.write((char*)&F, sizeof(F));		//writing object to file
        fout.close();							//closing file
        return 1;			
    }
    return 0;
}


void displayRecord(int id)
{
	Faculty F;
	int found = 0;
	ifstream fin;					
	fin.open("facultydata.txt", ios::in);		//opening file for input


	if (!fin)
    {
        cout<<"\n Error in opening file! ";
    }

	while (!fin.eof())							//loop till end of file
	{
		fin.read((char*)&F, sizeof(F));
		if (F.getId() == id)					//if id match is found
		{
			cout<<"\n\n RECORD Found!!";
			found = 1;
			F.putFacultyData();					//displaying faculty details
			break;
		}
	}
	if (found == 0)
		cout<<"\n Record having ID = "<<id<<" is not found!!";

    fin.close(); 								// Closing file

}

void displayAllRecords()
{
	Faculty F;
	ifstream fin;
	fin.open("facultydata.txt", ios::in);		//opening file for input

	if (!fin)
    {
        cout<<"\n Error in opening file! ";
    }

	while (!fin.eof())
	{
		fin.read((char*)&F, sizeof(F));
		F.putFacultyData();
	}

    fin.close(); 								// Closing file.

}


void updateRecord(int id)
{
	Faculty F;
	int found=0, pos;
	fstream fob;
	fob.open("facultydata.txt", ios::in | ios::out);	//opening file for reading and writing


	if (!fob)
    {
        cout<<"\n Error in opening file! ";
    }

	while (!fob.eof())
	{
		pos = fob.tellg();							//pos stores the current position of the get pointer
		fob.read((char*)&F, sizeof(F));
		if (F.getId() == id)
		{
			cout<<"\n\n RECORD Found!!";
			F.updateFaculty();						//calling to update details
			fob.seekg(pos);							//places the put pointer at pos
			fob.write((char*)&F, sizeof(F));		//writing object to file
			cout<<"\n Record Updated Successfully!!";
			//fob.seekp(pos);
			found = 1;
			break;
		}
	}
	if (found == 0)
		cout<<"\n Record having ID = "<<id<<" is not found!!";

    fob.close();	 								// Closing file.
}

void deleteRecord(int id)
{
	Faculty F;
	int found=0, pos;
	char confirm='N';
	ifstream fin;
	ofstream fout;
	fin.open("facultydata.txt", ios::in);
	fout.open("temp.txt", ios::out);

	if (!fin || !fout)
    {
        cout<<"\n Error in opening file! ";
    }

	while (!fin.eof())
	{
		fin.read((char*)&F, sizeof(F));
		if (F.getId() == id)					//if id match is found in file
		{
			cout<<"\n\n RECORD Found!!";
			found = 1;
			F.putFacultyData();					//displaying faculty details
			cout<<"\n Are you sure you want to delete the record? (Y/N) : ";
			cin>>confirm;

			if (confirm == 'N')
				fout.write((char*)&F, sizeof(F));		//writing object to file

			if (confirm == 'Y')
				cout<<"\n Record Deleted Successfully!!";
		}
		else
			fout.write((char*)&F, sizeof(F));			//writing object to file

	}
	if (found == 0)
		cout<<"\n Record having ID = "<<id<<" is not found!!";

    fin.close(); 								// Closing file.
    fout.close(); 								// Closing file.

    remove("facultydata.txt");					//removing old file
    rename("temp.txt", "facultydata.txt");		//renaming temp file as original file

}

void deleteAllRecords()
{
	char confirm;
	ofstream fout;
	cout<<"\n Are you sure you want to delete all the records? (Y/N) : ";
	cin>>confirm;

	if (confirm == 'Y')
	{
		fout.open("facultydata.txt", ios::out);
		fout.close();
		cout<<"\n All Records Deleted Successfully!!";
	}

}


int main()
{

    int choice, status=0, fid;
    int control=1;

    Faculty F1;

    cout<< "\n------------------------Welcome to Faculty Management Panel------------------------\n";
    cout<< "\n-----------------------------------------------------------------------------------\n";

    while(control)
    {

        cout<< "\n\n\n MENU: \n";
        cout<< " 1. Add new record \n";
        cout<< " 2. Update record \n";
        cout<< " 3. Display record \n";
        cout<< " 4. Display all records \n";
        cout<< " 5. Delete record \n";
        cout<< " 6. Delete all records \n";
        cout<< " 7. Exit \n";

        cout<< "\n Enter your choice:  ";

        cin>>choice;

        switch(choice)
        {

            case 1: cout<< "\n\n-------------------------ADD RECORD-------------------------\n";
					F1.getFacultyData();				//asking user to enter data
		            cout<<"\n------------------------------------------------";
		            status = addNewRecord(F1);			//calling function to add new record
		            if (status == 1)
		            	cout<<"\n Record Added Successfully!!";
		            else
		            	cout<<"\n Error! Unable to add record.";
		            break;


            case 2: cout<< "\n\n-------------------------UPDATE RECORD-------------------------\n";
                    cout<< "\n Enter ID to update details: ";
                    cin>>fid;

					updateRecord(fid);					//calling function to update record with id fid

		            cout<<"\n------------------------------------------------";

		            break;


            case 3: cout<< "\n\n-------------------------DISPLAY RECORD-------------------------\n";
					cout<< "\n Enter ID to display details: ";
                    cin>>fid;

					displayRecord(fid);					//calling function to display record with id fid

		            cout<<"\n------------------------------------------------";

		            break;

            case 4: cout<< "\n\n-------------------------DISPLAY ALL RECORDS-------------------------\n";

					displayAllRecords();				//calling function to display all records

		            cout<<"\n------------------------------------------------";

		            break;


            case 5: cout<< "\n\n-------------------------DELETE RECORD-------------------------\n";
					cout<< "\n Enter ID to delete: ";
                    cin>>fid;
					deleteRecord(fid);					//calling function to delete a record with id fid
		            cout<<"\n------------------------------------------------";
		            break;


            case 6: cout<< "\n\n-------------------------DELETE ALL RECORDS-------------------------\n";
					deleteAllRecords();					//calling function to delete all records
		            cout<<"\n------------------------------------------------";
		            break;

            case 7: control=0;
                    cout<<"\n\n------------------------------------------------------------";
                    cout<<"\n \t Thank you! You can now exit the portal. ";
                    cout<<"\n------------------------------------------------------------";

                    break;

            default: cout<<"\n Wrong Input!!";
        }
    }
}

