/*
 * @Author: Victor-kawai 1900017878@pku.edu.cn
 * @Date: 2025-04-22 16:53:36
 * @LastEditors: Victor-kawai 1900017878@pku.edu.cn
 * @LastEditTime: 2025-04-22 17:05:28
 * @FilePath: \C++workspace\oj-moshou\main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void init_data(unordered_map<string, int> &HPs) {
    return;
}
void running(unordered_map<string, int> &HPs) {
    return;
}
void info_print(unordered_map<string, int> &HPs) {
    return;
}

int main()
{
    int case_num;
    vector<string> order = {"dragon", "ninja", "iceman", "lion", "wolf"};
    unordered_map<string, int> HPs = {
        {"base", 0},
        {"dragon", 0},
        {"ninja", 0},
        {"iceman", 0},
        {"lion", 0},
        {"wolf", 0}
    };
    cin >> case_num;
    for(int i = 0; i < case_num; i++)
    {
        cin >> HPs["base"] >> HPs["dragon"] >> HPs["ninja"] >> HPs["iceman"] >> HPs["lion"] >> HPs["wolf"];
        init_data(HPs);
        cout << HPs["base"] << HPs["dragon"] << HPs["ninja"] << HPs["iceman"] << HPs["lion"] << HPs["wolf"] << endl;
    }   
    system("pause");
    return 0;
}