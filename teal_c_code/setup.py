# Whitney Smith
# Last modified: 4/18/18

from distutils.core import setup, Extension, DEBUG

sfc_module = Extension('teal_c_code', sources = ['module.c'])

setup(name = 'teal_c_code', version = '0.1',
    description = 'The C code for the teal code test',
    ext_modules = [sfc_module]
    )