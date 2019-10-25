#include <iostream>
#include <string>

using namespace std;

int main()
{
    string alf = "abcdefghijklmnnopqrstuvwxyz";
    string x = "todoslosdiassaleelsol";
    string k = "solocreoenmimismo";
    string c = "";
    
    for(int i=0, j=0,g=0; i < x.size(); i++,j++){
        if(j >= k.size()){
            c+= alf[(alf.find(x[i]) + alf.find(c[g])) % 27];
            cout<<i<<":: "<< x[i] << " + " << c[g] << " = " << c[i] << endl;
            g++;
           // i--;
           // j=-1;
        }
        else{
            c+= alf[(alf.find(x[i]) + alf.find(k[j])) % 27];
            cout<<i<<": "<< x[i] << " + " << k[j] << " = " << c[i] << endl;
        }
        
    }
    cout<<":"<<c<<endl;
    return 0;
}
