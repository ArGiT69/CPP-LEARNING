// this is a file where I practice the codes so it can vary according to time or 
// it simply means that it is a digital rough book for me
#include<iostream>
//in this program I can search up for an element for it's index value
int searchArray(std::string array[], int size, std::string element);
int main(){
    std::string names[] = {"Arjit","Chamlagain", "Parisha", "Basnet"};
    int size = sizeof(names)/sizeof(names[0]);
    int index;
    std::string myName;

    std::cout << "Enter your name" << '\n';
    std::getline(std::cin, myName);


   index =  searchArray(names, size, myName);
 if(index != -1){
    std::cout << myName << " is at index " << index;
}
else{
     std::cout << myName << " is not an index"; 

 }

    return 0;
}
int searchArray(std::string array[], int size, std::string element){
 for(int i = 0; i < size; i++){
 if( array[i] == element){
 return i;
 }}
    return -1;
}