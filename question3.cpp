#include <iostream>
#include <string>
using namespace std;


int count=0;
void For_Swaping(char &a,char &b)
{
    char temp;
    temp=a;
    a=b;
    b=temp;
}

void Str_Finder(string inp, int len)
{
    string temp;
    
    for(int i=0;i<len;i++)
    {
        temp = inp.substr(i,2);

        if(temp=="01")
        {
            count+=1;
        }
    }
}



int main()
{
    string str;
    int total_count = 0;
    
    cout<<"Enter String: ";
    cin>>str;
    
    int len = str.length();
    
    Str_Finder(str,len);  
    
    total_count += count; 
    
    count=0;

    for(int i=0;i<len-2;i++)
    {
        for(int j=i+2;j<len;j+=2)
        {
            string temp = str;
            For_Swaping(temp[i],temp[j]);
            
            if(temp!=str)
            {
                Str_Finder(temp,len);
                cout<<temp<<" "; 

                total_count += count;
                count = 0;
            }
        }
    }

    cout<<endl<<"01 occur in string -> " << total_count << " times" << endl;
    return 0;
}
