// ShapesGood.h
// Author: Jack Wotherspoon
// Created: November 27th, 2018

#include <string>

using namespace std; 
//Shape class which will be parent to all shapes
class Shape {
public:
	Shape();
	Shape( const int, const int, const string);
	virtual ~Shape();
	virtual void draw() const = 0;
	int getLength() const;
	int getWidth() const;
	string getBorderColour() const;

private:
	int length, width;
	string borderColour;

};
// Fillable class which will be parent to all filled shapes
class Fillable{
public:
	Fillable(const string);
	virtual ~Fillable();
	void fill() const;
	string getFillColour() const;

private:
	string fillColour;

};
//Labeled class which will be parent to all shapes with text 
class Labeled {
public:
	Labeled();
	Labeled(const string);
	virtual ~Labeled();
	void fillText() const;
	string getText() const;

private:
	string text;
};
//Square class which is child of shape
class Square : public Shape {
public:
	Square(const int, const int,const string);
	virtual ~Square();
	virtual void draw() const;
};
//FilledSquare class which is child of both square and fillable
class FilledSquare : public Square, public Fillable {
public: 
	FilledSquare(const int, const int, const string,const string);
	virtual ~FilledSquare();
	virtual void draw() const;	
};
//FilledTextSquare which is child of both FilledSquare and labeled
class FilledTextSquare : public FilledSquare, public Labeled {
public: 
	FilledTextSquare(const int, const int,const string, const string, const string);
	virtual ~FilledTextSquare();
	virtual void draw() const;
};
//Circle class which is child of shape
class Circle : public Shape {
public:
	Circle(const int,const int,const string);
	virtual ~Circle();
	virtual void draw() const;
};
//FilledCircle Class which is child of both circle and fillable
class FilledCircle : public Circle, public Fillable {
public: 
	FilledCircle(const int,const int, const string,const string);
	virtual ~FilledCircle();
	virtual void draw() const;
};
//Arc class which is child of shape
class Arc : public Shape {
public: 
	Arc(const int,const int, const string);
	virtual ~Arc();
	virtual void draw() const;
};