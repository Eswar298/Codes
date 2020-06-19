String splitting and converting it to number:

vector<string> inputWords;
    string input,word;
    cin>>input;
    stringstream s(input);
‘,’  is the delimiter.
    while(getline(s,word,','))
    {
        inputWords.push_back(word);
    }
    for(int i=0;i<inputWords.size();i++)
    {
        cout<<inputWords[i]<<" ";
    }

#Method:2

 vector<string> inputWords;
  string s,word;
   getline(cin,s);
    string k="";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ' && k.length()>1)
        {
            inputWords.push_back(k);
            k="";
        }
        else
        {
            k+=s[i];
        }
    }
    if(k!="")
    {
        inputWords.push_back(k);
    }
    for(int i=0;i<inputWords.size();i++)
    {
        cout<<inputWords[i]<<" ";
    }

#To convert into  a number from starting the method is same
  for(int i=0;i<inputWords.size();i++)
    {
       //string to integer conversion stoi(string);
        int ele = stoi(inputWords[i]);
       cout<<ele<<"k is ";
    }

