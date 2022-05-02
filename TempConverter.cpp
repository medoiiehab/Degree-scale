#include <iostream>
#include <string>
using namespace std;
//made by mohammed ehab 
/*my github : https://github.com/ME2Ehab */

int main() {
    //global declrations (variables)
    float fahrenheit, kelvin , celsius;
    string converter;
    string convertTo;
    //input to the degree scales and the start of the conversion algorithm 
    cout << "enter what is the type of degree scale you want to convert from? " ;
    cin >> converter;
    cout << endl << "and to what degree?! ";
    cin >> convertTo;
    //the convertion algorithm.
//---------------
    if (converter == "fahrenheit" || converter == "F" || converter == "f" || converter == "Fahrenheit"){
     cout << "so you chose fahrenheit, Alright!" << endl << endl;
//enter the convertion degree
     cout << "enter the Fahrenheit degree: ";
     cin >> fahrenheit;
//scale down algorithm
      if (convertTo == "kelvin" || convertTo == "Kelvin" || convertTo == "k" || convertTo == "K"){
       
      celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
      kelvin = celsius + 273.15;
     //result
      cout << endl << endl <<"---------------------------result------------------------------- " << endl << endl;
     cout << "the degree in kelvin is :  " << kelvin << endl;
      }
      //second condition
      else if (convertTo == "celsius" || convertTo == "Celsius" || convertTo == "c" || convertTo == "C"){
    
      celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
      //result
     cout << endl << endl <<"---------------------------result------------------------------- " << endl << endl;
     cout << "the degree in celsius is :  " << celsius << endl;
      }
//if none worked
      else { cout << "what did you write? , that's not a degree scale at ALL!";}
    }

//--------------------------------------------------2nd

    else if ( converter == "kelvin" || converter == "Kelvin" || converter == "k" || converter == "K"){
        cout << "Kelvin, a scientific mind I see" << endl << endl;
        //enter the convertion degree
     cout << "enter the kelvin degree: ";
     cin >> kelvin;
        //scale down algorithm
     if (convertTo == "fahrenheit" || convertTo == "F" || convertTo == "f" || convertTo == "Fahrenheit"){
      fahrenheit = 9/ 5 * (kelvin - 273.15) + 32;
      //result
      cout << endl << endl <<"---------------------------result------------------------------- " << endl << endl;
     cout << "the degree in fahrenheit is :  " << fahrenheit << endl;
     }
     //second one
     else if (convertTo == "celsius" || convertTo == "Celsius" || convertTo == "c" || convertTo == "C" ){
      celsius = kelvin - 273.15;
      //result
      cout << endl << endl <<"---------------------------result------------------------------- " << endl << endl;
     cout << "the degree in celsius is :  " << celsius << endl;
     }
     //if none worked at all
     else { cout << "what did you write?, that's not a degree scale at ALL!";}
    }

//------------------------------------------------3rd
    else if (converter == "celsius" || converter == "Celsius" || converter == "c" || converter == "C"){
        cout << "celsius, like the rest of the world. good!" << endl << endl;
        //enter the convertion degree
     cout << "enter the celsius degree: ";
     cin >> celsius;
//scale down algorithm
     if (convertTo == "fahrenheit" || convertTo == "F" || convertTo == "f" || convertTo == "Fahrenheit"){
      fahrenheit = (celsius * 9/5) + 32;
      //result
      cout << endl << endl <<"---------------------------result------------------------------- " << endl << endl;
     cout << "the degree in fahrenheit is :  " << fahrenheit << endl;
     }
     //second one 
     else if (convertTo == "kelvin" || convertTo == "Kelvin" || convertTo == "k" || convertTo == "K" ){
     kelvin = celsius + 273.15;
     //result
     cout << endl << endl <<"---------------------------result------------------------------- " << endl << endl;
     cout << "the degree in kelvin is :  " << kelvin << endl;
     }
     //if none worked
     else { cout << "what did you write?, that's not a degree scale at ALL!";}
    }
//case failure
    else { cout <<"--------------output----------------"<< endl << endl<<"what is that I don't get it? is it a joke?!" << endl;
    //getting an answer
    string ans;
     cout << "so you wanna make a new temp scale?! (y/n)\n";
      cin >> ans;
      //yes case
    if (ans == "yes" || ans == "yup" || ans == "y" || ans == "Y" || ans == "Yup" || ans == "Yes" || ans == "YES" || ans == "YUP"){
        cout << endl << "not to be that person, but in you F-ing dreams mate.";
    }
    //no case
    else if (ans == "no" || ans == "nope" || ans == "n" || ans == "N" || ans == "Nope" || ans == "NOPE" || ans == "NO" || ans == "No"){
     cout << endl <<  "good, now get real and restart this program to get a real scale, OR GET OUT!"; }
    else {cout << endl << "oh, Super funny, now go f_ yourself away from here, please!";}

    }


}
//the end