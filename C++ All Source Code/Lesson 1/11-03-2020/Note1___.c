=> Variable : Create One, Store only one value
// Ex1.
int a;
int b = 40;
float n1, n2;

=> Array(Group of variables in the same type): Create One, Store many values in the same type
// Ex2.
int numbers[5];// int a1, a2, a3, a4, a5;
int num[5] = {10, 45, 71, 90, 23};
float score[100];

=> Variable of Structure(Group of variables in the different type): Create One, Store many values in the different type
// Ex3.
struct Student A1;// id, name, from
struct Student A2 = { 7123, "Veha", "Kampot" };// .c, .cpp
struct Employee B1 = { 1001, "Nita", 250.00 };
Employee B2 = { 1002, "Tola", 550.00 };// .cpp


//////////////////////////////////////////////////////////////////////
3 Steps of Using Structure:
	-> Step 1: Create Structure, Create Struct, Create User-defined Datatype,  Create User-defined name,
	-> Step 2: Create Variable of Struct, Create variable of strcuture
	     //2.1
	         struct StructName Var_Struct;
	         // OR
	         StructName Var_Struct;
	         
	    // 2.2
	         struct StructName Var_Struct = { value_1, value_2,... };
			 
	-> Step 3: Set & Get Value, After Created Variable of Struct
	    // Set Value to Variable of Struct:
	    
		    Var_Struct.fieldName = value;
		    
		    cin>>Var_Struct.fieldName;
	    
	    // Set Value to Variable of Struct:
	    
	       Var_Struct.fieldName;
	       
	       cout << Var_Struct.fieldName ;
	   
	  






