@echo Compile programm...
@echo off
g++ -g .\PriorityStack.cpp -g .\main.cpp -o .\main.exe
if %errorlevel% == 0 (@echo Run application... && @echo off && .\main.exe)