@echo off
echo Compiling...
g++ base.h -o base.o
g++ 6502.h -o 6502.o
g++ 6502Test.cpp -o 6502Test.o
echo Done!
pause
