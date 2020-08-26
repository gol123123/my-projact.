#include <iostream>
#include <cmath>
using namespace std;
//////////////////////////////////////////////////////
class Figur
{
protected:
	struct Poingt
	{
		int x,y;
	};
	float *storona;
	Poingt *point;
	int n;
public:
	Figur()
	{
	}
	Figur(int n) 
	{
		this->n = n;
	    int x,y;
		point = new Poingt[n];
		storona = new float[n];
		cout << "введите координаты точек"<< endl;
		for (int i = 0; i < n; i++)
		{
			cout << "введите координаты точки "<< i+1 << endl;
			cin >> x >> y;
			point[i].x = x;
	    	point[i].y = y;
		}
	}
	void Linia(int n)
	{
		int x_proeczia,y_proeczia;
		for ( int i = 0; i < n; i++)
		if (i != n-1)
		{
	    	x_proeczia = point[i].x - point[i+1].x;
    		y_proeczia = point[i].y - point[i+1].y;	
    		storona[i] = sqrt(x_proeczia*x_proeczia + y_proeczia*y_proeczia);
    		cout << storona[i] << endl;
		}
		else
		{
			x_proeczia = point[0].x - point[n-1].x;
		    y_proeczia = point[0].y - point[n-1].y;
		    storona[n-1] = sqrt(x_proeczia*x_proeczia + y_proeczia*y_proeczia);
		    cout << storona[n-1] << endl;
		}	
	}
	virtual void plotschad()
	{
		cout << "тут должо прощадь выводить, но мне лень" << endl;
	}
		virtual void Perimetr()
	{
		cout << "тут должо периметр выводить, но мне лень" << endl;
	}
	~Figur()
	{
		delete[] storona;
		delete[] point;
	}
};
//////////////////////////////////////////////////
class Treog : public Figur
{
	private:
		float S;
		
	public:
		Treog() :Figur() 
		{ 
		S = 0; 
		} 
		void plotschad()
		{
			float p = (storona[0] + storona[1] + storona[2]) / 2;
            S = sqrt(p * (p - storona[0]) * (p - storona[1]) * (p - storona[2]));
            cout << S << endl;
		}
		void Perimetr()
		{
			float perimetr = storona[0] + storona[1] + storona[2];
			cout << perimetr << endl;
		}			
};

class Chetir_ugolnik : public Figur
{
	private:
		float *storona_chetir_ugolnik;
		float perimetr;
		float S;	
	public:
		Chetir_ugolnik() :Figur() 
		{ 
		    perimetr = 0;
		    storona_chetir_ugolnik = new float[n];
		    for (int i = 0; i < n; i++)
		{
			storona_chetir_ugolnik[i] = storona[i];
		}
		
		}
		void plotschad1()
		{
			
			float p1 = (storona_chetir_ugolnik[0] + storona_chetir_ugolnik[1] + storona_chetir_ugolnik[2]) / 2;
			float p2 = (storona_chetir_ugolnik[2] + storona_chetir_ugolnik[3] + storona_chetir_ugolnik[0]) / 2;
            float S1 = sqrt(p1 * (p1 - storona_chetir_ugolnik[0]) * (p1 - storona_chetir_ugolnik[1]) * (p1 - storona_chetir_ugolnik[2]));
            float S2 = sqrt(p2 * (p2 - storona_chetir_ugolnik[0]) * (p2 - storona_chetir_ugolnik[1]) * (p2 - storona_chetir_ugolnik[2]));
            S = S1 + S2;
		}
		void plotschad()
		{
			cout << S << endl;
		}
		void Perimetr1()
		{
			perimetr = storona_chetir_ugolnik[0] + storona_chetir_ugolnik[1] + storona_chetir_ugolnik[2] + storona_chetir_ugolnik[3];
			
		}	
		void Perimetr()
		{
			cout << perimetr << endl;
		}		
};

int main()
{
	setlocale(LC_ALL, "rus");
    int poingt;
	cout << "введите количество точек"<< endl;
	cin >> poingt;
	Figur Poing(poingt);
	Treog treug;
	Chetir_ugolnik chetir_ugolnik;
	Poing.Linia(poingt);
	//Figur *Poing1 = &chetir_ugolnik;
	Poing.plotschad();
	//Poing1->plotschad();
	//Poing1->Perimetr();
}


