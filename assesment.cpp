#include <iostream>
using namespace std;
class project
{
public:
    void Fibonacci_Series()
    {
    int n1=0,n2=1,n3,i,number;
       cout<<"Enter the number of elements: ";
       cin>>number;
       cout<<n1<<" "<<n2<<" "; //printing 0 and 1
       for(i=2;i<number;++i) //loop starts from 2 because 0 and 1 are already printed
      {
        n3=n1+n2;
     cout<<n3<<" ";
        n1=n2;
        n2=n3;
      }
   return 0;
    }
    void prime_number()
    {
        int n, i, m=0, flag=0;
  cout << "Enter the Number to check Prime: ";
  cin >> n;
  m=n/2;
  for(i = 2; i <= m; i++)
  {
      if(n % i == 0)
      {
          cout<<"Number is not Prime."<<endl;
          flag=1;
          break;
      }
  }
  if (flag==0)
      cout << "Number is Prime."<<endl;
  return 0;
    }
	
    }
    void Palindrome()
    {
         int n,r,sum=0,temp;
  cout<<"Enter the Number=";
  cin>>n;
 temp=n;
 while(n>0)
{
 r=n%10;
 sum=(sum*10)+r;
 n=n/10;
}
if(temp==sum)
cout<<"Number is Palindrome.";
else
cout<<"Number is not Palindrome.";
  return 0;
    }
    void factorial()
    {
   int i,fact=1,number;
  cout<<"Enter any Number: ";
 cin>>number;
  for(i=1;i<=number;i++){
      fact=fact*i;
  }
  cout<<"Factorial of " <<number<<" is: "<<fact<<endl;
  return 0;
    }
    void Armstrong_Number()
    {
    int n,r,sum=0,temp;
    cout<<"Enter the Number=  ";
    cin>>n;
       temp=n;
    while(n>0)
   {
    r=n%10;
    sum=sum+(r*r*r);
    n=n/10;
    }
    if(temp==sum)
    cout<<"Armstrong Number."<<endl;
else
    cout<<"Not Armstrong Number."<<endl;
    return 0;
}
void sum_of_digits()
{
int n,sum=0,m;
cout<<"Enter a number: ";
cin>>n;
while(n>0)
{
m=n%10;
sum=sum+m;
n=n/10;
}
cout<<"Sum is= "<<sum<<endl;
return 0;
}
void Reversed_Number()
{
int n, reverse=0, rem;
cout<<"Enter a number: ";
cin>>n;
  while(n!=0)
  {
     rem=n%10;
     reverse=reverse*10+rem;
     n/=10;
  }
 cout<<"Reversed Number: "<<reverse<<endl;
return 0;
}
void swapp_numbers()
{
int a=5, b=10;
cout<<"Before swap a= "<<a<<" b= "<<b<<endl;
a=a*b; //a=50 (5*10)
b=a/b; //b=5 (50/10)
a=a/b; //a=10 (50/5)
cout<<"After swap a= "<<a<<" b= "<<b<<endl;
return 0;
}
void matrix_multiplication()
 {
int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;
cout<<"enter the number of row=";
cin>>r;
cout<<"enter the number of column=";
cin>>c;
cout<<"enter the first matrix element=\n";
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cin>>a[i][j];
}
}
cout<<"enter the second matrix element=\n";
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cin>>b[i][j];
}
}
cout<<"multiply of the matrix=\n";
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
mul[i][j]=0;
for(k=0;k<c;k++)
{
mul[i][j]+=a[i][k]*b[k][j];
}
}
}
//for printing result
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cout<<mul[i][j]<<" ";
}
cout<<"\n";
}
return 0;
}
void convert_numtochar()
{
    long int n,sum=0,r;
cout<<"Enter the Number= ";
cin>>n;
while(n>0)
{
r=n%10;
sum=sum*10+r;
n=n/10;
}
n=sum;
while(n>0)
{
r=n%10;
switch(r)
{
case 1:
cout<<"one ";
break;
case 2:
cout<<"two ";
break;
case 3:
cout<<"three ";
break;
case 4:
cout<<"four ";
break;
case 5:
cout<<"five ";
break;
case 6:
cout<<"six ";
break;
case 7:
cout<<"seven ";
break;
case 8:
cout<<"eight ";
break;
case 9:
cout<<"nine ";
break;
case 0:
cout<<"zero ";
break;
default:
cout<<"tttt ";
break;
}
n=n/10;
}
}
void alphabet_triangle()
    {
 char ch='A';
    int i, j, k, m;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
            cout<<" ";
        for(k=1;k<=i;k++)
            cout<<ch++;
            ch--;
        for(m=1;m<i;m++)
            cout<<--ch;
        cout<<"\n";
        ch='A';
    }
return 0;
}
void number_triangle()
{
int i,j,k,l,n;
cout<<"Enter the Range=";
cin>>n;
for(i=1;i<=n;i++)
{
for(j=1;j<=n-i;j++)
{
cout<<" ";
}
for(k=1;k<=i;k++)
{
cout<<k;
}
for(l=i-1;l>=1;l--)
{
cout<<l;
}
cout<<"\n";
}
return 0;
}
void fibonacci triangle()
{
  int a=0,b=1,i,c,n,j;
    cout<<"Enter the limit: ";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        a=0;
        b=1;
        cout<<b<<"\t";
        for(j=1; j<i; j++)
        {
            c=a+b;
          cout<<c<<"\t";
            a=b;
            b=c;
        }
        cout<<"\n";
    }
return 0;
}
void calculator()
{
    char op;
    float num1, num2;

    cout << "Enter operator either + or - or * or /: ";
    cin >> op;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    switch(op)
    {
        case '+':
            cout << num1+num2;
            break;

        case '-':
            cout << num1-num2;
            break;

        case '*':
            cout << num1*num2;
            break;

        case '/':
            cout << num1/num2;
            break;

        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! operator is not correct";
            break;
    }

    return 0;
}
void check_evenorodd()
{
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    if ( n % 2 == 0)
        cout << n << " is even.";
    else
        cout << n << " is odd.";

    return 0;
}
void find_quotientandremainder()
{    
    int divisor, dividend, quotient, remainder;

    cout << "Enter dividend: ";
    cin >> dividend;

    cout << "Enter divisor: ";
    cin >> divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = " << remainder;

    return 0;
}
void check_vowelorconsonent()
{
    char c;
    int isLowercaseVowel, isUppercaseVowel;

    cout << "Enter an alphabet: ";
    cin >> c;

    // evaluates to 1 (true) if c is a lowercase vowel
    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // evaluates to 1 (true) if c is an uppercase vowel
    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // evaluates to 1 (true) if either isLowercaseVowel or isUppercaseVowel is true
    if (isLowercaseVowel || isUppercaseVowel)
        cout << c << " is a vowel.";
    else
        cout << c << " is a consonant.";

    return 0;
}
void leap_year()
{
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                cout << year << " is a leap year.";
            else
                cout << year << " is not a leap year.";
        }
        else
            cout << year << " is a leap year.";
    }
    else
        cout << year << " is not a leap year.";

    return 0;
}
void sumof_naturalnum()
    {
    int n, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    cout << "Sum = " << sum;
    return 0;
}
void multiplication_table()
{
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= 10; ++i) {
        cout << n << " * " << i << " = " << n * i << endl;
    }

    return 0;
}
void Lcm()
{
    int n1;
	int n2;
	int max;

    cout << "Enter two numbers: ";
    cin >> n1;
	cin>>n2;

    // maximum value between n1 and n2 is stored in max
    max = (n1 > n2) ? n1 : n2;

    do
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
            cout << "LCM = " << max;
            break;
        }
        else
            ++max;
    } while (true);

    return 0;
}
void hcf()
{
    int n1, n2;

    cout << "Enter two numbers: ";
    cin >> n1;
	cin>>n2;

    while(n1 != n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }

    cout << "HCF = " << n1;
    return 0;
}
void reverse_anumber()
{
    int n, reversedNumber = 0, remainder;

    cout << "Enter an integer: ";
    cin >> n;

    while(n != 0)
    {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }

    cout << "Reversed Number = " << reversedNumber;

    return 0;
}
  void powerofnum()
  {
    int exponent;
    float base, result = 1;

    cout << "Enter base and exponent respectively:  ";
    cin >> base >> exponent;

    cout << base << "^" << exponent << " = ";

    while (exponent != 0) {
        result *= base;
        --exponent;
    }

    cout << result;

    return 0;
}
void ASCIIvalue()
{
 char c;
 cout << "Enter a character: ";
 cin >> c;
 cout << "ASCII Value of " << c << " is " << int(c);
 return 0;
}
void product()
{
    double firstNumber, secondNumber, productOfTwoNumbers;
    cout << "Enter two numbers: ";

    // Stores two floating point numbers in variable firstNumber and secondNumber respectively
    cin >> firstNumber >> secondNumber;

    // Performs multiplication and stores the result in variable productOfTwoNumbers
    productOfTwoNumbers = firstNumber * secondNumber;

    cout << "Product = " << productOfTwoNumbers;

    return 0;
}
void pyramid_usingstar()
{
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = rows; i >= 1; --i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
void largest_element()
{
    int i, n;
    float arr[100];

    cout << "Enter total number of elements(1 to 100): ";
    cin >> n;
    cout << endl;

    // Store number entered by the user
    for(i = 0; i < n; ++i)
    {
       cout << "Enter Number " << i + 1 << " : ";
       cin >> arr[i];
    }

    // Loop to store largest number to arr[0]
    for(i = 1;i < n; ++i)
    {
       // Change < to > if you want to find the smallest element
       if(arr[0] < arr[i])
           arr[0] = arr[i];
    }
    cout << "Largest element = " << arr[0];

    return 0;
}
void transposeofmatrix()
{
    int a[10][10], trans[10][10], r, c, i, j;

    cout << "Enter rows and columns of matrix: ";
    cin >> r >> c;

    // Storing element of matrix entered by user in array a[][].
    cout << endl << "Enter elements of matrix: " << endl;
    for(i = 0; i < r; ++i)
    for(j = 0; j < c; ++j)
    {
        cout << "Enter elements a" << i + 1 << j + 1 << ": ";
        cin >> a[i][j];
    }

    // Displaying the matrix a[][]
    cout << endl << "Entered Matrix: " << endl;
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << " " << a[i][j];
            if(j == c - 1)
                cout << endl << endl;
        }

    // Finding transpose of matrix a[][] and storing it in array trans[][].
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            trans[j][i]=a[i][j];
        }

    // Displaying the transpose,i.e, Displaying array trans[][].
    cout << endl << "Transpose of Matrix: " << endl;
    for(i = 0; i < c; ++i)
        for(j = 0; j < r; ++j)
        {
            cout << " " << trans[i][j];
            if(j == r - 1)
                cout << endl << endl;
        }

    return 0;
void length_of_string()
{
    string str = "C++ Programming";

    // you can also use str.length()
    cout << "String Length = " << str.size();

    return 0;
}
void concatenate_stringobjects()

{
    string s1, s2, result;

    cout << "Enter string s1: ";
    getline (cin, s1);

    cout << "Enter string s2: ";
    getline (cin, s2);

    result = s1 + s2;

    cout << "Resultant String = "<< result;

    return 0;
}
void structure()
struct student
{
    char name[50];
    int roll;
    float marks;
} s[10];

int main()
{
    cout << "Enter information of students: " << endl;

    // storing information
    for(int i = 0; i < 10; ++i)
    {
        s[i].roll = i+1;
        cout << "For roll number" << s[i].roll << "," << endl;

        cout << "Enter name: ";
        cin >> s[i].name;

        cout << "Enter marks: ";
        cin >> s[i].marks;

        cout << endl;
    }

    cout << "Displaying Information: " << endl;

    // Displaying information
    for(int i = 0; i < 10; ++i)
    {
        cout << "\nRoll number: " << i+1 << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Marks: " << s[i].marks << endl;
    }

    return 0;
}
void time_diffrence()
struct TIME
{
  int seconds;
  int minutes;
  int hours;
};

void computeTimeDifference(struct TIME, struct TIME, struct TIME *);

int main()
{
    struct TIME t1, t2, difference;

    cout << "Enter start time." << endl;
    cout << "Enter hours, minutes and seconds respectively: ";
    cin >> t1.hours >> t1.minutes >> t1.seconds;

    cout << "Enter stop time." << endl;
    cout << "Enter hours, minutes and seconds respectively: ";
    cin >> t2.hours >> t2.minutes >> t2.seconds;

    computeTimeDifference(t1, t2, &difference);

    cout << endl << "TIME DIFFERENCE: " << t1.hours <<onds;
    cout << " - " << t2.hours << ":" << t2.minutes << ":" << t2.seconds;
    cout << " = " << difference.hours << ":" << difference.minutes << ":" << difference.seconds;
    return 0;
}
void computeTimeDifference(struct TIME t1, struct TIME t2, struct TIME *difference){

    if(t2.seconds > t1.seconds)
    {
        --t1.minutes;
        t1.seconds += 60;
    }

    difference->seconds = t1.seconds - t2.seconds;
    if(t2.minutes > t1.minutes)
    {
        --t1.hours;
        t1.minutes += 60;
    }
    difference->minutes = t1.minutes-t2.minutes;
    difference->hours = t1.hours-t2.hours;
}
void dictionary_order()
{
    string str[10], temp;

    cout << "Enter 10 words: " << endl;
    for(int i = 0; i < 10; ++i)
    {
      getline(cin, str[i]);
    }

    for(int i = 0; i < 9; ++i)
       for( int j = i+1; j < 10; ++j)
       {
          if(str[i] > str[j])
          {
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
          }
    }

    cout << "In lexicographical order: " << endl;

    for(int i = 0; i < 10; ++i)
    {
       cout << str[i] << endl;
    }
    return 0;
}
void remove_char()
 {
    string line;
    cout << "Enter a string: ";
    getline(cin, line);

    for(int i = 0; i < line.size(); ++i)
    {
        if (!((line[i] >= 'a' && line[i]<='z') || (line[i] >= 'A' && line[i]<='Z')))
        {
            line[i] = '\0';
        }
    }
    cout << "Output String: " << line;
    return 0;
}
void add_matrix()
{
    int r, c, a[100][100], b[100][100], sum[100][100], i, j;

    cout << "Enter number of rows (between 1 and 100): ";
    cin >> r;

    cout << "Enter number of columns (between 1 and 100): ";
    cin >> c;

    cout << endl << "Enter elements of 1st matrix: " << endl;

    // Storing elements of first matrix entered by user.
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "Enter element a" << i + 1 << j + 1 << " : ";
           cin >> a[i][j];
       }
	void diffrence()
	{ 
    int val1, val2; 
  
    /// finding absolute value using 
    /// abs() function. 
    val1 = abs(22); 
    val2 = abs(-43); 
  
    cout << "abs(22) = " << val1 << "\n"; 
    cout << "abs(-43) = " << val2 << "\n"; 
    return 0; 
} 

    // Storing elements of second matrix entered by user.
    cout << endl << "Enter elements of 2nd matrix: " << endl;
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "Enter element b" << i + 1 << j + 1 << " : ";
           cin >> b[i][j];
       }

    // Adding Two matrices
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
            sum[i][j] = a[i][j] + b[i][j];

    // Displaying the resultant sum matrix.
    cout << endl << "Sum of two matrix is: " << endl;
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << sum[i][j] << "  ";
            if(j == c - 1)
                cout << endl;
        }

    return 0;
}
void access_array_elements()
{
   int data[5];
   cout << "Enter elements: ";

   for(int i = 0; i < 5; ++i)
      cin >> data[i];

   cout << "You entered: ";
   for(int i = 0; i < 5; ++i)
      cout << endl << *(data + i);

   return 0;
}
void rvereseArray(int arr[], int start, int end) 
{ 
    while (start < end) 
    { 
        int temp = arr[start];  
        arr[start] = arr[end]; 
        arr[end] = temp; 
        start++; 
        end--; 
    }  
}      
  
void printArray(int arr[], int size) 
{ 
   for (int i = 0; i < size; i++) 
   cout << arr[i] << " "; 
   cout << endl; 
}  
class Employee:public project
 {
   public:
       int id;//data member (also instance variable)    
       string name;//data member(also instance variable)
       float salary;
       Employee(int i, string n, float s)  
        {  
            id = i;  
            name = n;  
            salary = s;
        }  
       void display()  
        {  
            cout<<id<<"  "<<name<<"  "<<salary<<endl;  
        }  
};
class A:public project  
 {  
   public:  
        A()    
        {    
            cout<<"Constructor Invoked"<<endl;    
        }    
        ~A()    
        {    
            cout<<"Destructor Invoked"<<endl;    
        }  
};
class Animal:public project
 {  
   public:  
 void eat() {   
    cout<<"Eating..."<<endl;   
 }    
   };  
   class Dog: public Animal   
   {    
       public:  
     void bark(){  
    cout<<"Barking..."<<endl;   
     }    
   };   
   class BabyDog: public Dog   
   {    
       public:  
     void weep() {  
    cout<<"Weeping...";   
     }    
   };  
   class A :public project 
{  
    protected:  
     int a;  
    public:  
    void get_a(int n)  
    {  
        a = n;  
    }  
};  
  
class B  
{  
    protected:  
    int b;  
    public:  
    void get_b(int n)  
    {  
        b = n;  
    }  
};  
class C : public A,public B  
{  
   public:  
    void display()  
    {  
        std::cout << "The value of a is : " <<a<< std::endl;  
        std::cout << "The value of b is : " <<b<< std::endl;  
        cout<<"Addition of a and b is : "<<a+b;  
    }  
};     

    
//program for tree traversal

struct Node 
{ 
    int data; 
    struct Node* left, *right; 
    Node(int data) 
    { 
        this->data = data; 
        left = right = NULL; 
    } 
}; 
 
void printPostorder(struct Node* node) 
{ 
    if (node == NULL) 
        return; 
  
    printPostorder(node->left); 
  
    printPostorder(node->right); 
  
    cout << node->data << " "; 
} 
  
void printInorder(struct Node* node) 
{ 
    if (node == NULL) 
        return; 
      printInorder(node->left); 
    cout << node->data << " "; 
  
    printInorder(node->right); 
} 
  
void printPreorder(struct Node* node) 
{ 
    if (node == NULL) 
        return; 
  
    cout << node->data << " "; 
  
    printPreorder(node->left);  
  
    printPreorder(node->right); 
}

//inorder tree traversal


struct tNode {
    int data;
    struct tNode* left;
    struct tNode* right;
};

void MorrisTraversal(struct tNode* root)
{
    struct tNode *current, *pre;

    if (root == NULL)
        return;

    current = root;
    while (current != NULL) {

        if (current->left == NULL) {
            printf("%d ", current->data);
            current = current->right;
        }
        else {
		 pre = current->left;
            while (pre->right != NULL && pre->right != current)
                pre = pre->right;

	    if (pre->right == NULL) {
                pre->right = current;
                current = current->left;
            }else {
                pre->right = NULL;
                printf("%d ", current->data);
                current = current->right;
         } 
	} 
    }
}

struct tNode* newtNode(int data)
{
    struct tNode* node = new tNode;
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return (node);
}

};
int main()
{
	project obj;
	obj.Fibonacci_Series();
	obj.prime_number();
	obj.factorial();
	obj.sum_of_digits();
	obj.swapp_numbers();
	obj.matrix_multiplication();
	obj.calculator();
	obj.leap_year();
	obj.sumof_naturalnum();
	obj.multiplication_table();
	obj.Lcm();
	return 0;
}
