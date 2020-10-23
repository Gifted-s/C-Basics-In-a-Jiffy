#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Animal{
  public :
      void getFamily(){cout<< "we are all animals"<<endl;}
      virtual void getClass(){cout<< "I am an Animal"<<endl;}
};

class Dog: public Animal{
 public:
     void getClass();

};
class GermanShepard: public Dog{
 public:
    void getClass(){cout<< "I am a dog and an animal";}
};

void Dog::getClass(){
cout<< "I am a Dog "<<endl;
}









class Animal {
private:
    int height;
    int width;
    string name;
    static int numberOfAnimals;

public:
  string  getName(){return name;}
  int getHeight(){return height;}
  int getWidth(){return width;}
  void setName(string animal_name){ name = animal_name;}
  void setHeight(int cm){height=cm;}
  void setWidth(int cm){width=cm;}
  ~Animal();
  Animal(int height, int width, string name);
  Animal();
  void toString();

  static int getNumberOfAnimals(){return numberOfAnimals;}
};

int Animal::numberOfAnimals = 0;
Animal::Animal(int height, int width, string name){
this -> name= name;
this -> height= height;
this -> width= width;
Animal::numberOfAnimals++;
}

Animal::~Animal(){
cout << this -> name << " is destroyed"<<endl;
}

Animal::Animal(){
 Animal::numberOfAnimals++;
 }

 void Animal::toString(){
 cout << this -> name<< " is "<< this -> width << " cm in width" << " and " << this -> height<< " cm in height"<<endl;

 }



 class Dog: public Animal{
  private:
      string sound= "Woof";
  public:
    void getSound(){cout<< sound<<endl;}
    Dog(int, int, string, string);
    Dog(): Animal(){};
    void toString();
 };

 Dog::Dog(int height, int width, string name, string sound):Animal(height, width,name){
  this -> sound = sound;
 }
 void Dog::toString(){
  cout << this -> getName()<< " is "<< this -> getWidth() << " cm in width" << " and " << this -> getHeight()<< " cm in height"<< " and it produces the sound "<< this -> sound<<endl;
 }

void whatClassAreYou(Animal* animal){
animal->getClass();
}
int main()
{
   Animal *animal = new Animal;
   Dog *lucky= new Dog;
   animal->getClass();
   lucky->getClass();
   whatClassAreYou(animal);
   whatClassAreYou(lucky);
   Dog dog;
   GermanShepard shepard;
   Animal* ptrDog = &dog;
   Animal* ptrShepard = &shepard;
   ptrDog->getClass();
   ptrShepard->getClass();




Animal fred(20, 34, "Fred");
fred.toString();
Animal tom(34, 54, "Fred");
tom.toString();
Dog jaguar(30, 12, "Jaguar", "Gbo, Gbo");
cout << "No of animals "<< Animal::getNumberOfAnimals()<< endl;
jaguar.toString();
jaguar.Animal::toString();





























     int age = 39;
     int* agePtr = &age;
     cout << "Address of on RAM "<< agePtr<<endl;;
     cout<< "Get the data at the memory address "<< *agePtr<<endl;

     int testValuesArr[5] = {1,4,6,1,5};
     int* testValuesArrPtr = testValuesArr;
     cout << "Address "<< testValuesArrPtr << " " << *testValuesArrPtr<<endl;
     testValuesArrPtr++;
     cout << "Address "<< testValuesArrPtr << " " << *testValuesArrPtr<<endl;




















    error handling
    const int number = 2;

    try{
      if(number !=0){
        cout<< 6/number<<endl;
      }
      else{
        throw (number);
      }

    }

    catch(int number){
    cout <<number<< " is invalid"<<endl;
    }















  // file system
   ofstream letterTo("milli.txt");
   if(! letterTo){
    cout<<"Error opening file";
    return -1;
  }
   else{
     letterTo << "LETTER TO MILLI"<<endl;
     letterTo.close();
   }
  string letterToMilli = "Honestly i love C++ but i need an aspect to apply it which is for creating database management system";
  ofstream writer("milli.txt", ios::app);
  if(! writer){
    cout<<"Error opening file";
    return -1;
  }
  else{

    writer << letterToMilli << endl;
    writer.close();
  }

  ofstream writer2("milli.txt", ios::app);
   if(! writer2){
    cout<<"Error opening file";
    return -1;
  }
   else{
     writer2 << "To  milli";
     writer2.close();
   }
    char letter;
   ifstream reader("milli.txt");

  if(! reader){
    cout<<"Error opening file";
    return -1;
  }
  for(int i=0; ! reader.eof(); i++){
     reader.get(letter);
     cout<< letter;
  }
  cout<<endl;
  reader.close();
















   vector <int> lotteryNumberVect(10);
   int loteryNumberArray[5] = {43,76,12,65,34};
   lotteryNumberVect.insert(lotteryNumberVect.begin(), loteryNumberArray, loteryNumberArray+3);

   lotteryNumberVect.insert(lotteryNumberVect.begin() +4, 44);

   lotteryNumberVect.pop_back();

   cout<< lotteryNumberVect.back()<<endl;
   lotteryNumberVect.push_back(120);
   cout<< lotteryNumberVect.back()<<endl;
   cout<< lotteryNumberVect.size()<<endl;




    string yourName;
    cout<<"Enter your name"<<endl;
    getline(cin, yourName);
    cout<<"your name is " << yourName<<endl;
    string wholeName  = yourName.assign(yourName);
    cout<<wholeName<<endl;
    // wholeName = wholeName.assign(wholeName, 5, wholeName.size());
    cout<<wholeName.find("J", 0)<<endl;
    wholeName.insert(5, " Bro you are wrong");
    cout<<wholeName<<endl;
    wholeName.replace(5,wholeName.size(), " I just replaced this");
    cout<<wholeName<<endl;
    double eulersConstant = .557;
    string yourGuess;
    cout <<"what is eulers consant"<<endl;
    cin>> yourGuess;
    if( stod(yourGuess) ==  eulersConstant){
        cout<<"You are a genius"<<endl;

    }
    else{
        cout<< "You are wrong "<<endl;
    }
    cout<<yourGuess.size()<<endl;
    cout<< yourGuess.empty()<<endl;
    cout<<yourGuess.append(" Was your guess")<<endl;

   return 0;
}
