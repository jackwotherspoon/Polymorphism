// ShapesGood.cpp 
// Author: Jack Wotherspoon
// Created: November 27th, 2018 

#include "ShapesGood.h"
#include <iostream>
#include <string>

using namespace std; 

Shape::Shape() : length(0), width(0){} //blank constructor, default
Shape::Shape( const int length, const int width,const string borderColour) : length(length), width(width), borderColour(borderColour){} //constructor
Shape::~Shape() {} //destructor fo shape
//accessors
int Shape::getLength() const {
	return length;
}
int Shape::getWidth() const {
	return width;
}
string Shape::getBorderColour() const { 
	return borderColour; 
}

Fillable::Fillable(const string fill) : fillColour(fill){} //constructor
Fillable::~Fillable(){} //destructor for fillable
string Fillable::getFillColour() const { //accessor for fillcolour
	return fillColour;
}
void Fillable::fill() const { //fill function
	cout << "With " + fillColour + " fill.";
}

Labeled::Labeled( const string text) : text(text){} //labeled constructor
Labeled::~Labeled(){} //destructor
void Labeled::fillText() const { //filltext function
	cout << " Containing the text: \"" << text << "\".";
}
string Labeled::getText() const { //text accessor
	return text;
}

Square::Square(const int length, const int width,const string borderColour) : Shape(length, width, borderColour){} //square constructor
Square::~Square(){}
void Square::draw() const { //draw function for square
	cout << "\nDrawing a " + getBorderColour() + " square.";
}

FilledSquare::FilledSquare(const int length,const int width, const string borderColour, const string fillColour) : Square(length, width, borderColour),Fillable(fillColour){} //filledsquare constructor
FilledSquare::~FilledSquare(){} //destructor 

void FilledSquare::draw() const{ //draw function for filledsquare
	cout << "\nDrawing a " + getBorderColour() + " square. ";
	fill();
}

FilledTextSquare::FilledTextSquare(const int length, const int width, const string borderColour, const string fillColour, const string text) : FilledSquare(length, width, borderColour, fillColour), Labeled(text){} //filledTextSquare constructor
FilledTextSquare::~FilledTextSquare(){} //destructor

void FilledTextSquare::draw() const { //draw function for filledtextsquare
	cout << "\nDrawing a " + getBorderColour() + " square. ";
	fill();
	fillText();
}

Circle::Circle(const int length,const int width, const string borderColour) : Shape(length,width, borderColour){} //constructor for circle
Circle::~Circle(){} //destructor
void Circle::draw() const { //draw function for circle
	cout << "\nDrawing a " + getBorderColour() + " circle. ";
}

FilledCircle::FilledCircle(int length, int width, const string borderColour, const string fillColour) : Circle(length, width, borderColour), Fillable(fillColour){} //filledCircle constructor
FilledCircle::~FilledCircle(){} //destructor
void FilledCircle::draw() const { //draw function for FilledCircle
	cout << "\nDrawing a " + getBorderColour() + " circle. ";
	fill();
}

Arc::Arc(const int length, const int width, const string borderColour) : Shape(length, width, borderColour){} //Arc constructor
Arc::~Arc(){} //destructor
void Arc::draw() const { //draw function for Arc
	cout << "\nDrawing a " + getBorderColour() + " arc. ";
}