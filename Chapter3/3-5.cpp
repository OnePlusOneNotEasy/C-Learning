#include<bitset>
#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::string;
using std::bitset;
using std::endl;

int main()
{
	bitset<32> bitvec;
	bitset<16> bitvec1(0xffff);
	bitset<32> bitvec2(0xffff);
	bitset<128> bitvec3(0xffff);

	// unsigned long ulong = bitvec3.to_ulong();
	// cout << "ulong = " << std::hex << ulong << endl;
	// bitvec3.flip();
    
 //    cout << bitvec3 << endl;
	// ulong = bitvec3.to_ulong();
	// cout << "ulong = " << ulong << endl;
	//11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000000000000

	// string strval("1100");
	// bitset<32> bitvec4(strval);
	// string str("1111111000000011001101");
	// bitset<32> bitvec5(str, 5, 4);
	// bitset<32> bitvec6(str, str.size() - 4);

	// bool is_set = bitvec.any();
	// bool is_not_set = bitvec.none();
	
	// size_t bits_set = bitvec.count();
	// size_t sz = bitvec.size();
    
 //    for(int index = 0; index != 32; index += 2)
 //    	bitvec[index] = 1;
    // for(int index = 0; index != 32; index += 2)
    // 	bitvec.set(index);
    
    // int i;
    // cout << bitvec << endl;
    // cin >> i;
    // if(bitvec.test(i))
    // 	cout << "test true" << endl;
    // if(bitvec.test(i))
    // 	cout << "[] true" << endl;

    cout << "bitvec2: " << bitvec2 << endl; // the only way to print binary integer to_ulong()
    



}