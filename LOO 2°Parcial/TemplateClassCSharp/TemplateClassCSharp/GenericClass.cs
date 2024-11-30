using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace GenericClass
{
    class GenericClass<T>
    {
        private T value;
        public GenericClass(T value)
        {
            this.value = value;
        }
        public T Value
        {
            set { this.value = value; }
            get { return this.value; }
        }
        public void showType()
        {
            Console.WriteLine("Type:" + value.GetType().ToString());
            Console.WriteLine("Value: " + value);
        }
    }
}
