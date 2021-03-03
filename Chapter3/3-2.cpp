#include<string>
#include<iostream>
#include<cctype>// not necessary
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	// string s1("value");
	// int n;
	// std::cin >> n;
	// string s2(n, 'v');
	// std::cout << s2 << std::endl;

	// string s;
 //    cin >> s;
 //    cout << s << endl;

	// string s1, s2;
	// cin >> s1 >> s2;
	// cout << s1 << s2 << endl;

	// string word;
	// while(cin >> word)
	// 	cout << word << endl;

	// string line;
	// while(getline(cin, line))
	// 	cout << line << endl;

	// string st("The expense of spirit\n");
	// cout << "The size of " << st << "is " << st.size()
	//      << " characters, including the newline." << endl;
	// if(st.empty())
	// 	cout << "empty" << endl;
	// else
	// 	cout << "not empty" << endl;

    // string s1("hello");
    // string s2("world");
    // string s3 = s1 + s2;
    // string s4 = s1 + s2;
    // cout << s3 << s4 << endl;
    // string s5 = s1 + ", " + s2 + "\n";
    // cout << s5 << endl;

    // string str("some string");
    // for(string::size_type ix = 0; ix != str.size(); ++ix)
    // 	cout << str[ix] << endl;
    // for(string::size_type ix = 0; ix != str.size(); ++ix)
    // 	str[ix] = '*';
    // cout << str << endl;

    string s("Hello World! You are beautiful.");
    string::size_type punct_cnt = 0;
    for(string::size_type index = 0; index != s.size(); ++index)
    	if(ispunct(s[index]))
    		++punct_cnt;
    cout << punct_cnt << " punctuation characters in " << s << endl;
    for(string::size_type index = 0; index != s.size(); ++index)
    	s[index] = tolower(s[index]);
    cout << s << endl;

    return 0;
}









