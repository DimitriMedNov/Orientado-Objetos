using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace GenericClass
{
    class Program
    {
        static void Main(string[] args)
        {
            GenericClass<String> Str = new GenericClass<String>("Generics vs Templates");

            GenericClass<int> integer = new GenericClass<int>(9);

            GenericClass<float> objFloat = new GenericClass<float>(10.55f);

            Str.showType();
            integer.showType();
            objFloat.showType();
            Console.ReadLine();
        }

    }
}