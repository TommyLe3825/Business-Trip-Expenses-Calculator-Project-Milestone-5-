#  Project Milestone 5 Objectives
1. Learn to use C++ functions, structs, and arrays
1. Compile, debug, and run the program

# Business Trip Expenses
This program asks the user to enter business trip expenses, and writes the trips to a file.

# Prerequesites
`main.cpp` from Project Milestone 4

## main.cpp
Update Project Milestone 4 in the following ways:
1. Store all business trips entered by the user into an array of business trip structs. *Note: the struct is already defined in types.hpp. You will need to define the array in the main() function.*
1. Remove writing of business trips to the console. Also remove where `main()` is writing business trips to the output file.
1. After the user enters all information for a business trip, display a message indicating that the trip has been added. *(See Sample Output)*
1. Create a function that writes all trips to the output file. Call this function from `main()` after the user selects to exit the program. *Note: the prototype for this function is already defined in types.hpp. You will need to add the function definition to main.cpp.*

## types.hpp
Modify the file `types.hpp` in the following ways:
1. Move all constants that you previously defined in `main.cpp` to the file `types.hpp` and include this file in the preprocessor directives in `main.cpp` *(i.e., #include files)*
1. Add a constant to represent the maximum number of business trips allowed in the list of trips (the array of BusinessTripInfo). This constant is an integer set to the value 20.
1. Note that a struct has been created for you that includes 4 members to hold the 4 data items that your program prompts the user to enter when inputting a new business trip (i.e., location, days, hotel and meal expenses).

# Hints
1. Follow coding standards, check code indentation and spacing around operators
1. Don't forget to add comments to explain what the code is doing
1. Choose variable names that explain the purpose of the variable

# Double Check
Please make sure your program still does all of the following from the previous project milestones:
1. Constants defined for the following: name of the output file, widths of the output fields
1. Loop to accept multiple business trips until the user enters either an 'x' or an 'X'
1. Allow locations containing multiple words (e.g., Los Angeles)
1. Peform range checking on the location to ensure that no more than the "max allowed" number of characters are output to the file
1. Accept both uppercase and lowercase input (i.e., user can enter either 'E' or 'e' to indicate "enter new trip")
1. Print exactly 2 digits past the decimal for monetary values

# Sample Output
*Note that the character that follows the text "Option:" is user input, and all information following the question marks are also user input.*
```
Welcome to the Business Trip Tracker!

What would you like to do?
E: enter a new expense
X: exit the program
Option: e

What is the business trip location? New York City
How many days will the trip take? 3
What is the total hotel expense? $649.2
What is the total meal expense? $220.8

Thank you. This trip has been added.

What would you like to do?
E: enter a new expense
X: exit the program
Option: J

Invalid option.

What would you like to do?
E: enter a new expense
X: exit the program
Option: E

What is the business trip location? Los Angeles, California
How many days will the trip take? 2
What is the total hotel expense? $441.11
What is the total meal expense? $51.59

Thank you. This trip has been added.

What would you like to do?
E: enter a new expense
X: exit the program
Option: x

Thank you for using Business Trip Tracker.
```

# View Output File
From the command prompt, type the following
```
cat business_trips.txt
```
Observe that the following is printed.
```
Location              Days       Hotel        Meal       Total
New York City            3     $649.20     $220.80     $870.00
Los Angeles, Califo      2     $441.11      $51.59     $492.70
```

# Completion checklist
1. Did you comment your code where appropriate?
1. Did you use variable names appropriate for the purpose/usage of the variable?
1. Does your program compile? (i.e. no errors when you run clang++)
1. Does your program produce the desired results? *Hint: try changing the input values from those in the "Sample Output" to something very simple (such as $3.10 hotel expense and $4.30 meal expense) and verify that your program produces the correct "Total"*
1. **After checking in your program into git using the command line, please refresh the GitHub Website and click on your file to make sure your latest updates exist in the file on GitHub.**

# Project exercise guide
Here's a link to the [Project exercise guide](https://drive.google.com/open?id=1BbuqywMqBWSAIQjEn1RaBhSDZAbSknUw) in case you need to review the lab exercise objectives, grading scheme, or evaluation process.

# Code evaluation
Open the terminal and navigate to the folder that contains this exercise. Assuming you have pulled the code inside of `/home/student/labex01-tuffy` and you are currently in `/home/student` you can issue the following commands

```
cd project01-tuffy
```

Use the `clang++` command to compile your code and the `./` command to run it. The sample code below shows how you would compile code saved in `main.cpp` into the executable file `main`. Make sure you use the correct filenames required in this problem.  Take note that if you make any changes to your code, you will need to compile it first before you see changes when running it.

```
clang++ -std=c++17 main.cpp -o main
./main
```

# Submission
1. To upload your code into the GitHub repository, the first step is to add your code to what is called the staging area using git's `add` command. The parameter after `add` is the name of the file you want to add. There are cases when you have multiple changed files, so you can just type . (period) to add all modified files.

    ```
    git add .
    ```

1. Once everything is in the staging area, we use the `commit` command to tell git that we have added everything we need into the staging area. This command can be issued with a message informing users of the changes made.

    ```
    git commit -m "short description of code changes being uploaded"
    ```

1. In case it asks you  to configure global variables for an email and name, just copy the commands it provides then replace the dummy text with your email and GitHub username.

    ```
    git config --global user.email "tuffy@csu.fullerton.edu"
    git config --global user.name "Tuffy Titan"
    ```

    When you're done, make sure you type the `git commit` command again.

1. And finally, you can upload all changes to the GitHub repository using git's `push` command. Provide your GitHub username and password when you are prompted for these.

    ```
    git push
    ```

1. When you finish the exercise, go back to Titanium and click on the `Add submission` button in the lab exercise page. Provide a short message *that includes your GitHub username* in the text area such as "user tuffy - finished lab exercise" and click on `Save changes`. Finally, click on `Submit assignment` to inform your instructor that you are done.
