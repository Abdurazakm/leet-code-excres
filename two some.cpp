#include<iostream>
using namespace std;
int main(){
    int num_data, i,j,num_find,k=0,found[20];
    cout<<"how data so you want: ";
    cin>>num_data;
    int list[num_data];
    for ( i = 0; i < num_data; i++)
    {
        cout<<"enter the data "<<i+1<<" -> ";
        cin>>list[i];
    }
    cout<<"write the two sum number do want to find ";
    cin>>num_find;
    for ( i = 0; i < num_data; i++)
    {
        for ( j = i + 1; j < num_data; j++)
        {
            int sum = list[i] + list[j];
            if (sum == num_find)
            {
                found[k + 1] = list[i];
                found[k + 2] = list[j];
                cout<<"The sum of two number is "<<found[k + 1] <<" and "<< found[k + 2]<<endl;
                k++;
            }
            
        }
        
    }

    
    
    
    return 0;

}