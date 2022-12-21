#ifndef FORMA_HPP
#define FORMA_HPP

class Forma{
    public:
        Forma();

        virtual ~Forma();

        virtual double getArea() const = 0; 


};

#endif