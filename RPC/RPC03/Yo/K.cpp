#include <bits/stdc++.h>
#include <typeinfo>
using namespace std;

int main()
{

    int i, nKeyWord, mText; cin >> nKeyWord >> mText;

    char keyWord[nKeyWord], text[mText], fullText[mText+nKeyWord],result[mText];

    string alpha = "abcdefghijklmnopqrstuvwxyz";

    for(i = 0;i < nKeyWord;i++ ){
        cin >> keyWord[i];
    }
    for(i=0; i < mText;i++){
        cin >> text[i];
        fullText[i]=text[i];
    }
    for(i=mText;i < mText+nKeyWord;i++){
        fullText[i]=keyWord[i];
    }

    // for (int i = 0; i < mText+nKeyWord; i++)
    // {
    //     cout<<fullText[i];
    // }

    for (int i = 0; i < mText; i++)
    {
        char m = (text[i]+fullText[nKeyWord+i])%26;
        result[i]= alpha[m];
        cout<<result[i];
    }
    
    

    return 0;
}