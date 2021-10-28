#include <iostream>

using namespace std;


// Task1
class Figure
{
protected:
    virtual void area() = 0;    
};

class Parallelogram : protected Figure
{
protected:
    int m_side;   
    int m_height; 
public:
    Parallelogram(int side, int height) : m_side(side), m_height(height) {}
    void area() override
    {
        cout << m_side * m_height << endl;
    }
 
};

class Circle : protected Figure
{
protected:
    int m_radius;   
    float P;   
public:
    Circle(int radius, float p) : m_radius(radius), P(p = 3.14f) {} 
    void area() override
    {
        cout << 3.14 * (m_radius * m_radius) << endl; 
    }
};

class Rectangle : protected Parallelogram 
{
public:
    Rectangle(int m_side, int m_height) : Parallelogram(m_side, m_height) {}
    void area() override
    {
        cout << m_side * m_height << endl;
    }
  
};

class Square : protected Parallelogram 
{
public:
    Square(int m_side, int m_height) : Parallelogram(m_side, m_height) {}
    void area() override
    {
        cout << m_side * m_height << endl;
    }
};

class Rhombus : protected Parallelogram 
{
public:
    Rhombus(int m_side, int m_height) : Parallelogram(m_side, m_height) {}
    void area() override
    {
        cout << m_side * m_height << endl;
    }
};



//Task2

class Car {
protected:
    string m_company;
    string m_model;
public:
    Car() {};
    Car(string company, string model) : m_company(company), m_model(model)
    {
        cout  << "company: " << m_company <<endl<< "model:  " << m_model << endl;
    }
    virtual ~Car() {}
};

class PassengerCar : virtual public Car {

public: 
    PassengerCar() {};
    PassengerCar(string m_company, string m_model) : Car(m_company, m_model)
    {
        cout << "company: " << m_company << endl << "model:  " << m_model << endl;
    }
    ~PassengerCar() {}
};

class Bus : virtual public Car {
public:
    Bus() {};
    Bus(string m_company, string m_model) : Car(m_company, m_model)
    {
        cout << "company: " << m_company << endl << "model:  " << m_model << endl;
    }
    ~Bus() {}
};

class Minivan : public PassengerCar, public Bus {
public:
    Minivan(string m_company, string m_model) : Car(m_company, m_model)
    {
        cout << "company: " << m_company << endl << "model:  " << m_model << endl;
    }

    ~Minivan() {}

};

//Task4
enum Suits
{
    Diamonds,
    Hearts,
    Clubs,
    Spades
};

enum Values
{
    Two,
    Three,
    Four,
    Five,
    Six,
    Seven,
    Eight,
    Nine,
    Ten,
    Jack,
    Queen,
    King,
    Ace 
};

class Card {
private:
    Suits suit;
    Values value;
    bool ShirtUp;
public:
    void Flip()
    {
        ShirtUp = !ShirtUp;
    }

    Values GetValue()
    {
        if (Ace == 1)
        {
            return value;
        }
    }
};



int main()
{
  //Task1
    Parallelogram paralel(6, 4);
    paralel.area();
   


   
    Circle circle(7, 3.14f);
    circle.area();



    Rectangle rect(2, 4);
    rect.area();



   
    Square square(4, 4);
    square.area();



    Rhombus romb(5, 2);
    romb.area();

    cout << "" << endl;


    //Task2

    Car* car = new Car("Nissan", "GT-R");
 

    PassengerCar* passangercar = new PassengerCar("Audi", "A6");
    

    Bus* bus = new Bus("Mercedes-Benz", "Sprinter");
   

    Minivan* minivan = new Minivan("Chevrolet", "Lumina");
     
    delete minivan;
    delete passangercar;
    delete bus;
    delete car;

    //Task4
}


