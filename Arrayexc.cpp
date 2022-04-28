#include <iostream>
#include <stdlib.h>

class Array{
    public:
    Array(int size);
    void fill_array(int num_values);
    void show_array(int num_values);
    class range {};
    private:
    int *buffer;
    int size;

};
Array::Array(int size)
{
    buffer=new int[size];
    Array::size= size;
}
void Array::fill_array(int num_values)
{
    if(num_values>size)
        throw range();
    for(int i=0;i<num_values;i++)
        buffer[i]=i;
}
void Array::show_array(int num_values)
{
    if(num_values>size)
        throw range();
    for(int i=0;i<num_values;i++)
        std::cout<<buffer[i]<<std::endl;
}
void main(int)
{
    Array vector(200);
    try{
        vector.fill_array(10);
    }
    catch (Array::range){
        std::cerr<<"Invalid array index in fill_array"<<std::endl;
        exit(1);
    }
    try{
        vector.show_array(500);
    }
    catch (Array::range){
        std::cerr<<"Invalid array index in show_array"<<std::endl;
        exit(1);
    }
}
