
#include <iostream>
using namespace std;
int main()
{
    int n,size;
    cin >> n;
    
    string text,texts,temp;
    
    for(int i=1; i<=n; i++)
    {
        cin >> text; 
        size = text.length();
        texts = text;
        if(size > 10)
        {
            
           cout << texts[0];
           cout<< size-2;
           cout << texts[size-1] << endl;
                
        }
        else
        {
            cout << text << endl;
        }
       
    }

    return 0;
}