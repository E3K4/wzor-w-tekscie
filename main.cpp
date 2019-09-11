#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
//////////////////////////////////////////////////////////////
class Wyszukiwarka
{
    /*****************************************************/
private:
    int8_t licznik =0;
    string s1,s2;

    void renderingstring();
    void renderingstring(string *s, int i)
    {
        char w;
        for (int k{}; k<i; k++)
        {
            w=rand()%26+65;
            // cout<<w<<endl;
            *s+=w;
        }
    }

    void szukaj()
    {
        bool  przerwa=0;
        for(int i=0; i<s1.size()-s2.size(); i++)
        {  przerwa=0;
            for (int j =0; j<s2.size(); j++){
                if(s1[i+j]!=s2[j])
                {
                    przerwa=1;
                    break;
                }
            }
            if(!przerwa && licznik==0)
            {
                cout<<"wystapił na pozycji:"<<i<<endl;
                licznik++             ;
            }
            else if(!przerwa)
            {
                cout<<"                    "<<i<<endl;
                licznik++;
            }

        }
    }
    /***************             MIDLE          ************/
public:

    Wyszukiwarka(int i1, int i2)
    {
        licznik=0;
        renderingstring(&s1,i1);
        cout<<"string do przeszukania: "<<s1<<endl;
        renderingstring(&s2,i2);
        cout<<"strnig szukany: "<<s2<<endl;
        szukaj();
    }

/*************************************************************/
};
//////////////////////////////////////////////////////////////
int main()
{

    srand( time( NULL ) );
    //dl1 stringu do przeszukania
    //dl2 stringu szukanego
    Wyszukiwarka k(90,1);
    return 0;
}
