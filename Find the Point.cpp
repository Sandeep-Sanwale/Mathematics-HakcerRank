#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);


vector<int> findPoint(int px, int py, int qx, int qy) {
    /*
     * Write your code here.
     */
     vector<int>ans;
     int x=qx+(qx-px);
     int y=qy+(qy-py);
     ans.push_back(x);
     ans.push_back(y);
     
     return ans;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int n_itr = 0; n_itr < n; n_itr++) {
        string pxPyQxQy_temp;
        getline(cin, pxPyQxQy_temp);

        vector<string> pxPyQxQy = split_string(pxPyQxQy_temp);

        int px = stoi(pxPyQxQy[0]);

        int py = stoi(pxPyQxQy[1]);

        int qx = stoi(pxPyQxQy[2]);

        int qy = stoi(pxPyQxQy[3]);

        vector<int> result = findPoint(px, py, qx, qy);

        for (int result_itr = 0; result_itr < result.size(); result_itr++) {
            fout << result[result_itr];

            if (result_itr != result.size() - 1) {
                fout << " ";
            }
        }

        fout << "\n";
    }

    fout.close();

    return 0;
}
