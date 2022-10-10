@echo off
cls 
color a
tittle test

:m
cls
echo hello
set /p zero=

if %zero% == hello goto mm

:mm
cls
echo hi
set /p one=

if %one% == hi goto m
