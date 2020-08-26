#include <iostream>
#include <string>
 
class Date {
private:
    int day;
    int month;
    int year;
	
public:  
    Date(int day_1, int month_1, int year_1)
	{
		day = day_1;
		month = month_1;
		year = year_1;
    }
    void Datauskovia()
    {
    	if ( month>=1 && month <=12)
    	{
    		if(month == 2)
    		{
    			if (day>=1 && day <=29 )
    			{
    				std::cout << "дата введена правильно" << std::endl;
				}
				else
				{
					std::cout << "дата введена не правильно" << std::endl;	
				}
			}
			    else if(month == 1||month == 3||month == 4||month == 6||month == 8||month == 10||month == 12)
    		{
    			if (day>=1 && day <=31 )
    			{
    				std::cout << "дата введена правильно" << std::endl;
				}
				else
				{
					std::cout << "дата введена не правильно" << std::endl;	
				}
			}
			    else if (day>=1 && day <=31)
			    {
			       	if (day>=1 && day <=31 )
    			    {
    		    		std::cout << "дата введена правильно" << std::endl;
		         	}
				    else
			    	{
			    		std::cout << "дата введена не правильно" << std::endl;	
			    	}	
			   	}
			else
				{
					std::cout << "дата введена не правильно" << std::endl;	
				}	
		}
		
	}
 
    void print() 
	{
		if (month == 12 || month == 1 || month == 2)
		{
		std::cout << day << '/'
                  << month << '/'
                  << year << '-'
                  << "зимн€€ дата" << std::endl;	
		}
		
		else if (month == 3|| month == 4 || month == 5)
		{
		std::cout << day << '/'
                  << month << '/'
                  << year << '-'
                  << "весенн€€ дата" << std::endl;	
		}
		else if (month == 6 || month == 7 || month == 8)
		{
		std::cout << day << '/'
                  << month << '/'
                  << year << '-'
                  << "летн€€ дата" << std::endl;	
		}
		else if (month == 9 || month == 10 || month == 11)
		{
		std::cout << day << '/'
                  << month << '/'
                  << year << '-'
                  << "осенн€€ дата" << std::endl;	
		}
        
    }
};
 
int main() 
{
	setlocale(LC_ALL, "rus");
	int k,l,m;
   	std::cout << "введите день, мес€ц, год отдельными числами" << std::endl;
   	std::cin >> k >> l >> m;
    Date d1(k, l, m);
    d1.Datauskovia();
    d1.print();
    return 0;
}
