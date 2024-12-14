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

// int main()
// {
// 	string MyString{"My name is 9, i've 69  y.o :)"};
// 	vector<int> founded_numbers, position_of_sentence;
// 	int startPos{0};
// 	int foundPos;
// 	while(MyString.find_first_of("0123456789", startPos) != string::npos)
// 	{
// 		foundPos = MyString.find_first_of("0123456789", startPos);
// 		position_of_sentence.push_back(foundPos);
// 		founded_numbers.push_back(MyString.at(foundPos) - '0');
// 		startPos = foundPos + 1;
// 	}


// 	cout << "Full Text: " << MyString << endl;
// 	for(int i = 0; i < founded_numbers.size(); i++)
// 	{
// 		cout << "Pos: " << position_of_sentence.at(i) << "\nNum: " << founded_numbers.at(i) << endl;
// 	}
// }

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
//    // Òåïåðü âû ìîæåòå èñïîëüçîâàòü db äëÿ âûïîëíåíèÿ SQL-çàïðîñîâ è ðàáîòû ñ áàçîé äàííûõ
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
//    int bitPosition = 3; // Ïîçèöèÿ áèòà äëÿ ñîçäàíèÿ ìàñêè
//    int mask = 0x01 << bitPosition; // Ñîçäàíèå ìàñêè ïóòåì ñäâèãà áèòà íà íóæíóþ ïîçèöèþ
//    cout << "Mask: " << hex << mask << endl; // Âûâîä ìàñêè â øåñòíàäöàòåðè÷íîé ôîðì
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

//int main() 
//{
//    Derived obj;
//    obj.interface();
//}

int main() {
    using ValueType = TypeCondition<ROLE, int, bool>;

    static_assert(std::is_same<ValueType, int>::value || std::is_same<ValueType, bool>::value,
        "ValueType must be either int or bool");

    if constexpr (std::is_same<ValueType, int>::value) {
        std::cout << "ValueType is int\n";
    }
    else {
        std::cout << "ValueType is bool\n";
    }

    return 0;
}
