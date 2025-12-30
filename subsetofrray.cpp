#include <iostream>
#include <vector>
using namespace std;

void findSubsets(int index, int currentSum, int target,
                 vector<int>& arr, vector<int>& subset) {

    if (currentSum == target) {
        cout << "[ ";
        for (int x : subset)
            cout << x << " ";
        cout << "]" << endl;
        return;
    }

    
    if (index == arr.size() || currentSum > target)
        return;

  
    subset.push_back(arr[index]);
    findSubsets(index + 1, currentSum + arr[index], target, arr, subset);

    subset.pop_back();
    findSubsets(index + 1, currentSum, target, arr, subset);
}

int main() {
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter target sum: ";
    cin >> target;

    vector<int> subset;

    cout << "Subsets with sum " << target << ":\n";
    findSubsets(0, 0, target, arr, subset);

    return 0;
}
