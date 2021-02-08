### Technical Requirements
- Scilab 6.1.0
- Ubuntu 19.10

### Instructions to Compile, Build and Execute:-
Note : Thirdparty folder and other .sce files have been uploaded for convenience. So, feel free to skip steps 1,2 and 3.
1. Paste the files 'trans.c', 'trans.h' and 'run.sh' in the external library folder.
2. Run script with the command ```./run.sh```
3. Now, our thirdparty folder is ready. Paste this folder in our main directory. ( Scilab6-Test-Toolbox )
4. Open Scilab Console, change the working directory to our main directory.
5. Use the helper script ( which runs the commands for unloading and clearing previous toolbox's data ) with the command ```exec reload.sce```
6. If everything runs perfectly, we will get a file 'loader.sce'. Run this script with the command ```exec loader.sce```
7. Now when our toolbox is loaded, we can try our transpose function!
8. Syntax - output_variable = transpose(input_matrix)
9. The input matrix should be of form nxm (2D).
10. Check out my test code and sample output in the README.md file in the 'test' folder!

### Sample Output

<p align = "left">
  <img src = "https://user-images.githubusercontent.com/42714939/107257037-43b0d880-6a60-11eb-8015-be7e1f112e38.png">
</p>

This repository is a test toolbox for Scilab. It requires "thirdparty" directory which can be downloaded as "external-library.zip" file from the page: https://scilab.in/fossee-scilab-toolbox. The "thirdparty" directory contains compiled library for a simple "multiplication" function written in C. After copying the "thirdparty" directory to the toolbox directory, on the scilab console run "exec builder.sce" to build the toolbox and then run "exec loader.sce" to load the toolbox.  Type "help" in the scilab console and browse through the help content of "test_toolbox". The external-library.zip file also contains separate instructions to work with MinGW on Windows OS.

This toolbox overall demonstrates
1. How to add a function defined in C in scilab
2. How to add a function defined in Scilab in Scilab
3. How to write help for the added functions
4. How to create a toolbox out of the above functions.
