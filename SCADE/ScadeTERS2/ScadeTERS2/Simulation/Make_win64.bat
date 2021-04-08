@SET PATH=D:/Programs Installed/ANSYS Inc/v211/SCADE Student/SCADE/../contrib/Msys64/mingw64/bin;%PATH%
@SET INCLUDE=D:/Programs Installed/ANSYS Inc/v211/SCADE Student/SCADE/../contrib/Msys64/mingw64/include
@SET LIB=D:/Programs Installed/ANSYS Inc/v211/SCADE Student/SCADE/../contrib/Msys64/mingw64/lib
@IF "-B"=="%1" SET ARG=%1
gcc -print-search-dirs
@"D:/Programs Installed/ANSYS Inc/v211/SCADE Student/SCADE/../contrib/Msys64/mingw64/bin/mingw32-make.exe" -j 4 -f Makefile_win64 %ARG%
