#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    unsigned long bukit, lembah, current, before, gap=0;        
    bool naik;  
    scanf("%lu", &before);
    scanf("%lu", &current);
    naik = (before<current);
    bukit = max(before, current);
    lembah = min(before, current);  
    gap = max(gap, bukit-lembah);
    before = current;
    while(scanf("%ld", &current)!=EOF)
    {
        // if (current==before) continue;
 
        if (naik) //sedang naik
        {
            if (before>current) // turun
            {
                bukit = before;
                gap = max(gap, bukit-lembah);
                lembah = current;
                naik = false;
            } 
            else //  tetap naik
                bukit = current;            
        } 
        else //sedang turun
        { 
            if (before<current) // tiba tiba naik
            {
                lembah = before;
                gap = max(gap, bukit-lembah);
                bukit = current;
                naik = true;
            }
            else // tetap turun
                lembah = current;
        }
        before = current;
    }   
    // bukit = max(current, bukit);
    // lembah = min(current, lembah);
    gap = max(gap, bukit-lembah);   
    printf("%lu\n", gap);
}