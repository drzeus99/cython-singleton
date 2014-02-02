//
//  singleton.h
//  
//
//  Created by Zachary Kraus on 2/1/14.
//
//

#ifndef ____singleton__
#define ____singleton__

class singleton{
private:
	singleton();
	static singleton* object;
public:
	static singleton* getobject();
 ~singleton();
	void test();
};

#endif /* defined(____singleton__) */
