 

struct complex
{
  double x, y;
  complex(double a, double b): x(a), y(b)
  {
  }
  complex operator+(const complex &z)
  {
    return complex(x + z.x, y + z.y);
  }
  complex & operator=(const complex &z)
  {
    x = z.x;
    y = z.y;
    return *this;
  }
  /*complex operator&(const complex &z)
  {
    return x * z.x + y * z.y;
  }   */  
  double operator!(void) const
  {
    return sqrt(x * x + y * y);
  }        
  complex operator*(const complex &z)
  {
    return complex(x * z.x - y * z.y, x * z.y + z.x *y);
  }
  int Iter(void)
  {
    int n = 0;
    complex z(x, y);
    complex z0 = z;
    while(!z < 2 && n < 255)
    {
      z = z * z + z0;
      n++;
    }
    return n;
  }
  int Iter1(double SuncTime)
  {
    int n = 0;
    complex z(x, y);
    complex z0 = z;
    while(!z < 2 && n < 255)
    {
      z = z * z + complex(0.36 + sin(SuncTime) * 0.01, 0.35 + sin(SuncTime) * 0.02)/*complex(0.37, 0.34)*/;
      n++;
    }
    return n;
  }

};