template <class T>
struct Ask
{
   T* array;
   int maxsize;
};


template <class T>
Ask<T> f(int size)
{
   Ask<T> a;
   a.maxsize = size;
   a.array = new T[size];
};


int main()
{
   int size = 50;
   f(size);
   return 1;
}
