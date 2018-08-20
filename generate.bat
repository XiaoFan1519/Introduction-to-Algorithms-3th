@echo off

if exist build (
  goto A
)else (
  mkdir build
)
:A
cd build
cmake .. -G "Visual Studio 15 2017 Win64"