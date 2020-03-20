#include<iostream> 
using namespace std; 
  
void compareOperation(string s1, string s2) 
{ 
    // returns a value < 0 (s1 is smaller then s2) 
    if((s1.compare(s2)) < 0) 
        cout << s1 << " is smaller than " << s2 << endl; 
  
    // returns 0(s1, is being comapared to itself) 
    if((s1.compare(s1)) == 0) 
        cout << s1 << " is equal to " << s1 << endl; 
    else
        cout << "Strings didn't match "; 
      
} 
  
// Driver Code 
int main() 
{ 
    string s1("Geeks"); 
    string s2("forGeeks"); 
    compareOperation(s1, s2); 
      
    return 0;  
} 

//#include<iostream> 
//using namespace std; 
//  
//void compareOperation(string s1, string s2) 
//{ 
//    // Compares 5 characters from index number 3 of s2 with s1 
//    if((s2.compare(3, 5, s1)) == 0) 
//        cout << "Here, "<< s1 << " are " << s2; 
//  
//    else
//        cout << "Strings didn't match "; 
//} 
//// Driver Code 
//int main() 
//{ 
//    string s1("Geeks"); 
//    string s2("forGeeks"); 
//    compareOperation(s1, s2); 
//       
//  return 0;  
//} 

//#include<iostream> 
//using namespace std; 
//  
//void compareOperation(string s1, string s2) 
//{ 
//    // Compares 5 characters from index number 0 of s1 with 
//    // 5 characters from index 3 of s2 
//    if((s1.compare(0, 5, s2, 3, 5)) == 0) 
//        cout << "Welcome to " << s1 << s2 << " World"; 
//  
//    else
//        cout << "Strings didn't match "; 
//} 
//// Driver Code 
//int main() 
//{ 
//    string s1("Geeks"); 
//    string s2("forGeeks"); 
//    compareOperation(s1, s2); 
//       
//  return 0;  
//} 


// CPP code to demonstrate 
// int string::compare (const char* cstr) const 
  
//#include<iostream> 
//using namespace std; 
//  
//void compareOperation(string s1, string s2) 
//{ 
//    // returns < 0 (s1 < "GeeksforGeeks") 
//    if((s1.compare("GeeksforGeeks")) < 0) 
//        cout << s1 << " is smaller than string " << "GeeksforGeeks";  
//  
//    //returns 0 (s2 is "forgeeks") 
//    if((s2.compare("forGeeks")) == 0) 
//        cout << endl << s2 << " is equal to string " << s2;  
//  
//    else
//        cout << "Strings didn't match "; 
//      
//} 
//// Driver Code 
//int main() 
//{ 
//    string s1("Geeks"); 
//    string s2("forGeeks"); 
//    compareOperation(s1, s2); 
//       
//  return 0;  
//} 
// CPP code to demonstrate  
// int string::compare (size_type idx, size_type len,  
// const char* chars, size_type chars_len)const 
  
//#include<iostream> 
//using namespace std; 
//  
//void compareOperation(string s1, string s2) 
//{ 
//    // Compares 5 characters from 0 index of s1 with  
//    // 5 characters of string "Geeks" 
//    if((s1.compare(0, 5, "Geeks", 5)) == 0) 
//        cout << "This is " << s1 <<  s2 ;  
//   
//    else
//        cout << "Strings didn't match "; 
//} 
//  
//// Driver Code 
//int main() 
//{ 
//    string s1("Geeks"); 
//    string s2("forGeeks"); 
//    compareOperation(s1, s2); 
//       
//  return 0;  
//} 
