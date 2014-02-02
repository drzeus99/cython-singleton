#distutils: language = c++
#distutils: sources = singleton.cpp


cdef extern from "singleton.h":
	cdef cppclass singleton:
		void test()

cdef extern from "singleton.h" namespace "singleton":
	singleton* getobject()

cdef class Singleton:
	cdef singleton *thisptr
	def __cinit__(self):
		self.thisptr=getobject()
	def __dealloc__(self):
		del self.thisptr
	def test(self):
		self.thisptr.test()

class pysingleton:		
	__instance=None
	def __init__(self):
		if pysingleton.__instance is None:
			pysingleton.__instance=Singleton()
		else:
			print "already initialized"
	def __getattr__(self,attr):
		return getattr(self.__instance,attr)

