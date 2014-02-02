from distutils.core import setup, Extension
from Cython.Build import cythonize

setup(name="lmpsdata",
			ext_modules= cythonize('lmpsdata.pyx'),
			)