// Library Manangement System using Singly linkedlist.

#include <iostream> // Provides input and output functionality using streams.
#include <conio.h> // Includes inbuilt functions like getch() and clrscr().
using namespace std; // We can use names for objects and variables from the standard library.

// Node,s structure has been created.

struct node // Structures are used to create user-defined data types in C++ (Public => By default).
		{
			int id; // Var Declaration
			string name,author,publisher; // Var Declaration
			node *next;  // Singly linkedlist.
		};

// Class library has been created.

class library // Access specifier (Private => By default)
{
	public: // User defined Public (Global Scope)
	
			node *first; // Singly linkedlist node
			
			library() // Constructor
			{
				first = NULL; // Node is Null
			}

    // First Function.
    void menu()
    {
    	system("CLS"); //cls() function clears the screen before new output.
    	int choice; // Var declare   	
    	cout<<"\n\n\t\t\t===========================================";
    	cout<<"\n\n\t\t\t======== Library Management System ========";
    	cout<<"\n\n\t\t\t============= BS information Technology=============";
    	cout<<"\n\n\t\t\t====== MNS University of Agriculture ======";
    	cout<<"\n\n\t\t\t===========================================";
    	cout<<"\n\n 1. Insert New Record";
    	cout<<"\n\n 2. Search Record";
    	cout<<"\n\n 3. Update Record";
    	cout<<"\n\n 4. Delete Record";
    	cout<<"\n\n 5. Show All Record";
    	cout<<"\n\n 6. Exit";
    	cout<<"\n\n Enter Your Choice : ";
	    cin>>choice; // For taking input from the user.
	    switch(choice) // True case will be switched automatically.
	    {
	    case 1:
	        insert();
	       	break; // Break is used to stop after switching the case.
	       	
	    case 2:
	    	search();
	       	break;	 
			      
	    case 3:
	    	update();
	       	break;	  
			        	
	    case 4:
	    	del();
	       	break;	   
			       	
	    case 5:
	    	sort(); // bubble Sort
	    	show();
	       	break;
	       	
	    case 6:
	       	exit(0);
	       	cout<<"\n\n Invalid Choice..Please Try Again.......";
			cout<<"\n\n\t\t\t=======================================";	       	
		}
		getch(); // getch() method pauses the Output Console until a key is pressed.
		menu();
    };
    
    // Second Function.
    void insert()
    {
    	system("CLS");
    	cout<<"\n\n\t\t\t===========================================";
    	cout<<"\n\n\t\t\t======== Library Management System ========";
    	cout<<"\n\n\t\t\t============= BS information Technology =============";
    	cout<<"\n\n\t\t\t====== MNS University of Agriculture ======";
    	cout<<"\n\n\t\t\t===========================================";
    	node *new_node = new node; // Every new node's Data will be stored in *new_node.
    	cout<<"\n\n Book ID : ";
    	cin>>new_node -> id;
    	cout<<"\n\n Book Name : ";
    	cin>>new_node -> name;
    	cout<<"\n\n Author Name : ";
    	cin>>new_node -> author;
    	cout<<"\n\n Publisher Name : ";
    	cin>>new_node -> publisher;
    	new_node -> next = NULL;  // New node's pointer NULL.
    	if(first == NULL)
    	{
    		first = new_node;  // First Node.
		} 
		else
		{
			node *ptr = first;  // First's address stored in ptr.
			while(ptr -> next !=NULL)
			{
				ptr = ptr -> next; // First Node's address is stored in ptr(Visit each node one by one to find last node).
			}
			ptr -> next = new_node;			
		}   
		cout<<"\n\n\t\t\t New Book Inserted Successfully........ ";
		cout<<"\n\n\t\t\t======================================="; 	
	}
	
	// Third Function.
	void search()
	{
		system("CLS");
		int t_id, found=0; // found is used to check whether the dat has been founded or not.
    	cout<<"\n\n\t\t\t===========================================";
    	cout<<"\n\n\t\t\t======== Library Management System ========";
    	cout<<"\n\n\t\t\t============= BS information Technology =============";
    	cout<<"\n\n\t\t\t====== MNS University of Agriculture ======";
    	cout<<"\n\n\t\t\t===========================================";
    	if(first == NULL)  // To check if there is no node.
    	{
    		cout<<"\n\n Linkedlist is Empty...... ";
		}
		else
		{
			cout<<"\n\n Book ID : ";
			cin>>t_id;
			node *ptr = first; // Will match each id one by one.
			while(ptr != NULL)
			{
				if(t_id == ptr -> id)
				{
					system("CLS");
    	            cout<<"\n\n\t\t\t===========================================";
    				cout<<"\n\n\t\t\t======== Library Management System ========";
    				cout<<"\n\n\t\t\t============= BS information Technology=============";
    				cout<<"\n\n\t\t\t====== MNS University of Agriculture ======";
    				cout<<"\n\n\t\t\t===========================================";
					cout<< "\n\n Book ID : "<<ptr -> id;
					cout<< "\n\n Book Name : "<<ptr -> name;
					cout<< "\n\n Author Name : "<<ptr -> author;
					cout<< "\n\n Publisher Name : "<<ptr -> publisher;
					found++;
					cout<<"\n\n\t\t\t Book Has been founded........ ";
					cout<<"\n\n\t\t\t=======================================";
				}
				    ptr = ptr -> next; // Will move onto the next.
			}
			    if(found == 0)
			    {
			    	cout<<"\n\n Book Id is INVALID.......";
			    	cout<<"\n\n\t\t\t=======================================";
				}
		}
	}
	
	// Fourth Function.
	void update()
	{
		system("CLS");
		int t_id, found=0;
    	cout<<"\n\n\t\t\t===========================================";
    	cout<<"\n\n\t\t\t======== Library Management System ========";
    	cout<<"\n\n\t\t\t============= BS information Technology=============";
    	cout<<"\n\n\t\t\t====== MNS University of Agriculture ======";
    	cout<<"\n\n\t\t\t===========================================";
    	if(first == NULL)  // To check if there is no node.
    	{
    		cout<<"\n\n Linkedlist is Empty...... ";
		}
		else
		{
			cout<<"\n\n Book ID : ";
			cin>>t_id;
			node *ptr = first; // Will match each id one by one.
			while(ptr != NULL)
			{
				if(t_id == ptr -> id)
				{
					system("CLS");
    	            cout<<"\n\n\t\t\t===========================================";
    				cout<<"\n\n\t\t\t======== Library Management System ========";
    				cout<<"\n\n\t\t\t============= BS information Technology  =============";
    				cout<<"\n\n\t\t\t====== MNS University of Agriculture ======";
    				cout<<"\n\n\t\t\t===========================================";;
					cout<<"\n\n Book ID : ";
					cin>>ptr -> id;
					cout<<"\n\n Book Name : ";
					cin>>ptr -> name;
					cout<<"\n\n Author Name : ";
					cin>>ptr -> author;
					cout<<"\n\n Publisher Name : ";
					cin>>ptr -> publisher;
					found++;
					cout<<"\n\n\t\t\t Record Updated Succesfully ";
					cout<<"\n\n\t\t\t=======================================";
				}
				    ptr = ptr -> next; // Will move onto the next.
			}
			    if(found == 0)
			    {
			    	cout<<"\n\n Book Id is INVALID.......";
			    	cout<<"\n\n\t\t\t=======================================";
				}
		}
	}
	
	// Fifth Function.
	void del()
	{
		system("CLS");
		int t_id, found=0;
    	cout<<"\n\n\t\t\t===========================================";
    	cout<<"\n\n\t\t\t======== Library Management System ========";
    	cout<<"\n\n\t\t\t============= BS information Technology =============";
    	cout<<"\n\n\t\t\t====== MNS University of Agriculture ======";
    	cout<<"\n\n\t\t\t===========================================";
    	if(first == NULL)
    	{
    		cout<<"\n\n Linkedlist is Empty...... ";
		}
		else
		{
			cout<<"\n\n Book ID : ";
			cin>>t_id;
			if(t_id == first -> id)
			{
				node *ptr = first;
				first = first -> next;
				delete ptr;
				cout<<"\n\n Book is Deleted Succesfully";
				found++;
			}
			else
			{
				node *pre = first;
				node *ptr = first;
				while(ptr != NULL)
				{
					if (t_id == ptr -> id)
					{
						pre -> next = ptr -> next;
						delete ptr;
						cout<<"\n\n Book is Deleted Succesfully";
						found++;
						cout<<"\n\n\t\t\t=======================================";
						break; // When one node deletes don't move.
					}
					pre = ptr;
					ptr = ptr -> next;
				}
			}
			        if(found == 0)
			        {
			        	cout<<"\n\n Book ID is Invalid";
			        	cout<<"\n\n\t\t\t=======================================";
					}
		}
	}
	
	// Sixth Function.
	void sort()
	{		
		if(first == NULL)
		{
			system("CLS");
			cout<<"\n\n\t\t\t===========================================";
    	    cout<<"\n\n\t\t\t======== Library Management System ========";
    		cout<<"\n\n\t\t\t============= BS information Technology =============";
    		cout<<"\n\n\t\t\t====== MNS University of Agriculture ======";
    		cout<<"\n\n\t\t\t===========================================";
			cout<<"\n\n Linkedlist is EMPTY......";
			cout<<"\n\n\t\t\t=======================================";
		}
		int count = 0,t_id;  // Will Understand this from line 88 (Local Vars).
		string t_name,t_author,t_publisher; // For Temporary data (Local Vars).
		node *ptr = first;
		while(ptr != NULL)
		{
			count++;
			ptr = ptr -> next;
		}
		for (int i = 1;i<=count;i++)
		{
			node *ptr = first;
			for (int j = 1;j<count;j++)
			{
				if(ptr -> id > ptr-> next -> id) // If current value is greater than next.
				{
					// Save data in Temporary Node.
					t_id = ptr -> id;
					t_name = ptr -> name;
					t_author = ptr -> author;
					t_publisher = ptr -> publisher;
					
					// Save data in Current Node.
					ptr -> id = ptr -> next -> id;
					ptr -> name = ptr -> next -> name;
					ptr -> author = ptr -> next -> author;
					ptr -> publisher = ptr -> next -> publisher;
					
					// Save data in Next Node.
					ptr-> next -> id = t_id;
					ptr-> next -> name = t_name;
					ptr-> next -> author = t_author;
					ptr-> next -> publisher = t_publisher;
				}
				    ptr = ptr -> next;
			}
		}
	}
	
	// Seventh Function.
	void show()
	{
		system("CLS");
    	cout<<"\n\n\t\t\t===========================================";
    	cout<<"\n\n\t\t\t======== Library Management System ========";
    	cout<<"\n\n\t\t\t============= BS information Technology =============";
    	cout<<"\n\n\t\t\t====== MNS University of Agriculture ======";
    	cout<<"\n\n\t\t\t===========================================";
			node *ptr = first; // Will match each id one by one.
			while(ptr != NULL)
			{
					cout<< "\n\n Book ID : "<<ptr -> id;
					cout<< "\n\n Book Name : "<<ptr -> name;
					cout<< "\n\n Author Name : "<<ptr -> author;
					cout<< "\n\n Publisher Name : "<<ptr -> publisher;
					cout<<"\n\n\t\t\t All Your Record is here........";
					cout<<"\n\n\t\t\t=======================================";
				    ptr = ptr -> next; // Will move onto the next.
			}		
	}
};
	
	int main()
{
	library obj;
	obj.menu();
}
    
