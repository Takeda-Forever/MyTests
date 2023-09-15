#include "lib.h"
#include "data.h"


//Clear String from litter

//int main()
//{
//    
//    SystemColor(def);
//    
//    cout << "OS INFO\n" << "\tName:" << os.get_name() << "\n\tID:" << os.get_id() << "\n\n";
//
//    string input = "Hello, \\/ ()World!";
//    string exceptions = ",!_-=/*\\'\";:][()";
//
//    string goutput{};
//    string boutput{};
//    for (char c : input) 
//    {
//        if (exceptions.find(c) != std::string::npos)
//            boutput += c;
//        else
//            goutput += c;
//    }
//
//    cout << "Good Word's :" << goutput << endl;
//    cout << "Bad Word's  :" << boutput << endl;
//}

//Search Numbers from String

//int main()
//{
//	string MyString{"My name is 9, and me 69  y.o :)"};
//	vector<int> nums, pos;
//	int startPos{};
//	size_t foundPos;
//	while(MyString.find_first_of("0123456789", startPos) != string::npos)
//	{
//		foundPos = MyString.find_first_of("0123456789", startPos);
//		pos.push_back(foundPos);
//		nums.push_back(MyString.at(foundPos) - '0');
//		startPos = foundPos + 1;
//	}
//
//
//	cout << "Full Text: " << MyString << endl;
//	for(int i = 0; i < nums.size(); i++)
//	{
//		cout << "Pos: " << pos.at(i) << " Num: " << nums.at(i) << endl;
//	}
//}

//Tryed Connect MySql

//int main(void) {
//    try {
//        SqlServerStart();
//    }
//    catch (sql::SQLException& e) {
//        cout << "SQL Exception: " << e.what() << std::endl;
//    }
//
//    return 0;
//}


//int main() {
//    sqlite3* db;
//    int result = sqlite3_open("UserBase.db", &db);
//
//    if (result != SQLITE_OK) {
//        std::cerr << "Cannot open database: " << sqlite3_errmsg(db) << std::endl;
//        return 1;
//    }
//
//    // “еперь вы можете использовать db дл€ выполнени€ SQL-запросов и работы с базой данных
//
//    sqlite3_close(db);
//    return 0;
//}


//Pressed key

//int main() {a
//    while (true) {
//        for (int i = 0; i < 256; ++i) {
//            // Check if the key with the current code is pressed
//            if (GetAsyncKeyState(i) & 0x8000) {
//                // Print the pressed key to the console
//                std::cout << "Pressed: " << static_cast<char>(i) << std::endl;
//            }
//        }
//        // Small delay to avoid excessive output
//        Sleep(100);
//    }
//    return 0;
//}





//int main() {
//    int bitPosition = 3; // ѕозици€ бита дл€ создани€ маски
//    int mask = 0x01 << bitPosition; // —оздание маски путем сдвига бита на нужную позицию
//    cout << "Mask: " << hex << mask << endl; // ¬ывод маски в шестнадцатеричной форм
//    return 0;
//}



//int main()
//{
//    SystemColor(color::red);
//    // TCP, UDP or connected UDP ?
//    //char protocol;
//    //std::cout << "Do you want to use TCP (t) or UDP (u)? ";
//    //std::cin >> protocol;
//while(1){
//    system("cls");
//    // Client or server ?
//    char who;
//    cout << "Do you want to be a server (s) or a client (c)? :";
//    cin >> who;
//    cout << endl;
//     //if (protocol == 't')
//     //{
//     // Test the TCP protocol
//    if (who == 's')
//        runTcpServer(Port);
//    else
//        runTcpClient(Port);
//    //}
//    //else
//    //{
//    //    // Test the unconnected UDP protocol
//    //    if (who == 's')
//    //        runUdpServer(Port);
//    //    else
//    //        runUdpClient(Port);
//    //}
//}
//    // Wait until the user presses 'enter' key
//
//    return EXIT_SUCCESS;
//}



 
namespace Test
{
    vector<int> sorter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums;
    }
    bool containsDuplicate(vector<int>& nums)
    {
        nums = sorter(nums);
        bool result = (unique(nums.begin(), nums.end()) != nums.end());
        return result;
    }
    void Start()
    {

        vector<vector<int>> nums{
            {1, 2, 3, 1},
            {1, 2, 3, 4 },
            {1, 1, 1, 3, 3, 4, 3, 2, 4, 2},
            {2, 5, 3, 6, -1, 5}
        };
        for (vector<int> a : nums)
            cout << boolalpha << containsDuplicate(a) << endl;
    }
}

int main() 
{
    Test::Start();
}