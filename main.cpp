/*Adriel A. Okolo
Homework 2 4/5/2021
c++ program that uses class to store books */



//Book.h

#include<iostream>
#include<string>
using namespace std;

class Book{
  int ID;
  string title;
  float price;
  string author;
  public:
  void setID(int id);
  void setTitle(string str);
  void setPrice(float p);
  void setAuthor(string str);
  int getID() const;
  string getTitle();
  float getPrice()const;
  string getAuthor();
  void displayBookInfo();
};

//Book.cpp
void Book::setID(int id){
ID=id;}

void Book::setTitle(string str){
title=str;}

void Book::setPrice(float p){
price=p;}

void Book::setAuthor(string str){
author=str;}

int Book::getID() const{
return ID;}

string Book::getTitle(){
return title;}

float Book::getPrice()const{
return price;}

string Book::getAuthor(){
return author;}

void Book::displayBookInfo(){
cout<<"ID: "<<ID<<endl;
cout<<"Title: "<<title<<endl;
cout<<"Price: "<<price<<endl;
cout<<"Author: "<<author<<endl;
}

int main()
{

//declare an array of books with size 10
Book arr[10];
int choice,id,count=0;
string title,author;
float price;
do{
cout<<"1. Purchase a new book: \n2. Display a purchased book by ID\n3. Display purchased books\n4.Exit\n";

cout<<"Enter your option: ";
cin>>choice;

switch(choice)

{
case 1:

cout<<"Entre ID of the book to be purchased: ";

cin>>id;

cout<<"Enter title of the book to be purchased: ";

cin.ignore();

getline(cin,title);

//cin.ignore();

cout<<"Enter price :" ;

cin>>price;

cin.ignore();

cout<<"Enter author name: ";

//cin.ignore();

getline(cin,author);

arr[count].setID(id);

arr[count].setTitle(title);

arr[count].setPrice(price);

arr[count].setAuthor(author);

++count;

break;

case 2:

cout<<"Enter id of the book: ";

cin>>id;

for(int i = 0; i < count;i++)

{

if(id == arr[i].getID())

{

arr[i].displayBookInfo();

}

}

break;

case 3:

for(int i = 0; i < count;i++)

{

arr[i].displayBookInfo();

}

break;

case 4:

cout<<"Exiting. Thanks, come again"<<endl;

break;

}

}while(choice!=4);

}