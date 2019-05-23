#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main()
{
    double deltaT=0.1;
    double m=7294.29;
    double q=2;
    
    int t=1;
    double x[101];
    double y[101];
    double Vx[101];
    double Vy[101];
    
    x[0]=1;
    y[0]=0;
    Vx[0]=0;
    Vy[0]=1;
    
    //Hasta 3 segundos
    
    ofstream outfile;
    outfile.open("datos.txt");
    while(t<=30)
    {
        
        x[t]=x[t-1];
        y[t]=y[t-1]+deltaT*Vy[t-1];
        Vx[t]=Vx[t];
        Vy[t]=Vy[t-1];
        outfile <<t<<";"<<x[t]<<";"<<y[t]<<"\n";
        t+=1;
    
    }
    
    // Hasta 7 segundos
    double acc=3*q/m;
    
    while(t<70)
    {
      
        x[t]=x[t-1];
        Vx[t]=Vx[t];
        
        y[t]=y[t-1]+deltaT*Vy[t-1];
        Vy[t]=Vy[t-1]+deltaT*acc;
        
        outfile <<t<<";"<<x[t]<<";"<<y[t]<<"\n";
        t+=1;
  
    }
    
    // Hasta 10 segundos
    
    while(t<=100)
    {
        
        x[t]=x[t-1];
        y[t]=y[t-1]+deltaT*Vy[t-1];
        Vx[t]=Vx[t];
        Vy[t]=Vy[t-1];
        outfile <<t<<";"<<x[t]<<";"<<y[t]<<"\n";
        t+=1;
    
    }
    
    outfile.close();

    return 0;
}