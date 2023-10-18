
# Computer Science I 
## Lab 2.0 Worksheet

Name(s) and Login(s):



1. Dennis Ritchie, the creator of the C programming language,
was born on September 9th, 1941.  If he were still alive,
how old would he be today?  Find out by running the `birthday`
program on the appropriate inputs and enter your solution here.

Today is 2023/10/18
Your birthday was 2003/03/04a.  
Hello, dennis.  You are 20 years, 32 weeks, and 4 days old today



2. Bjarne Stroustrup, the creator of the C++ programming
language, the object-oriented extension of C, was born on
December 30th, 1950.  How old is he today?

Today is 2023/10/18
Your birthday was 2000/12/30
Hello, bjarne.  You are 22 years, 41 weeks, and 5 days old today


3. Software testing often involves testing code with known
"bad" input in an attempt to break it (sometimes this is
referred to as *fuzzing*).  Try breaking the `birthday_cli`
program by giving it "bad" input and observe the consequences.
Give at least two examples of potentially bad input and the
results you observe.

Today is 2023/10/18
Your birthday was
Hello, abc.  You are 0 years, 0 weeks, and 0 days old today




4. Complete all the size and range entries below.

* `char`
  size: 1 byte
  range: -128 to 127
* `short int`
  size: 2 bytes
  range: -32768 to -32768
* `int`
  size: 4 bytes
  range:  -2147483648 to 2147483647
* `long int`
  size: 4 bytes
  range: -2147483648 to 2147483647
* `float`
  size: 4 bytes
  range: 7 digits of accuracy
* `double`
  size: 8 bytes
  range: 15 digits of accuracy


5. Use your working currency conversion to determine
the exchange amounts for the following inputs:

  a) $250.25

Enter Amount In USD : 250.25


Fee Detucted is : 25.025 $

After Converting You get :

88.964 GPB

14374.986 JPY


  b) $1,000.52

Enter Amount In USD : 1000.52


Fee Detucted is : 100.052 $

After Converting You get :

355.685 GPB

57472.371 JPY


  c) $968,410.12


Enter Amount In USD : 968410.12


Fee Detucted is : 96841.016 $

After Converting You get :

344269.813 GPB

55627900.000 JPY




6. Suppose that you had used only `int` types
in your conversion program.  Would you be able
to use it to convert the US national debt
(which as of 2020 was \$26,009,754,625,487)?
Why or why not?

In conversion program it is most suitable to use float or double instead of int datatype
because dollars may be in decimal value (e.g $250.25 , $1000.52).
For the value like ($26,009,754,625,487) we used int but long long int or unsigned long long int 
to store large value (greator than 4 bytes).



7. Mixed types

a) Run the `area` program with 3 and 4 as inputs.  
What value do you get?  Is this result correct?

Please enter the base of a triangle: 3
Please enter the height of a triangle: 4
The area is 0.000000 square units.

no, this result is not correct beacuse of logical error in datatypes or formula


b) Execute the program again with inputs 3 and 5.
Does the program give correct results?  Why not?

Please enter the base of a triangle: 3
Please enter the height of a triangle: 5
The area is 0.000000 square units.

this result is not correct because of logical error in format specifier or formula of area.

c) Fix the program by editing the `area.c` source
code so that the program produces correct results.

There was error in format specifier and formula of area. I modify the area.c file and commit it on github you can check there.

THE OUTPUTS AFTER MODIFYING area.c are :

Please enter the base of a triangle: 3
Please enter the height of a triangle: 4
The area is 6.000000 square units.

Please enter the base of a triangle: 20
Please enter the height of a triangle: 30
The area is 300.000000 square units.


