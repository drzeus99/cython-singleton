//
//  singleton.cpp
//  
//
//  Created by Zachary Kraus on 2/1/14.
//
//

#include "singleton.h"
#include <iostream>

using namespace std;
singleton::singleton(){
	cout<<"Instantiating the singleton"<<endl;
}

singleton::~singleton(){
	cout<<"Deleting the singleton"<<endl;
	cout<<"Resetting the object to a null pointer"<<endl;
	object=NULL;
	cout<<"the object is "<<object<<endl;
}

singleton* singleton::getobject(){
	if (object==NULL) {
		cout<<"getting object"<<endl;
		object = new singleton;
	}
	cout<<"returning the object"<<endl;
	return object;
}

void singleton::test(){
	cout<<"This works yee haw"<<endl;
}

singleton* singleton::object=NULL;

/*int main()
{*/
 	//for testing if the singleton kept the same pointer value
	/*singleton*  narf=singleton::getobject();
	cout<<"the resturned object is "<<narf<<endl;
	singleton* ploo=singleton::getobject();
	cout<<"the returned object is "<<ploo<<endl;*/
 
 //for testing if the delete operation works correctly
//additionally will test if you can reassign a singleton object again
/* singleton* woosh=singleton::getobject();
	delete woosh;
	singleton * yarm=singleton::getobject();
	return 0;
}*/