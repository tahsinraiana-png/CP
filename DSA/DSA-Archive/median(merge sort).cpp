#include <bits/stdc++.h>
using namespace std;

void mergeArrays(vector<int> &a, vector<int> &b, vector<int> &merged)
{
    int i = 0, j = 0;

    while (i < a.size() && j < b.size())
    {
        if (a[i] <= b[j])
            merged.push_back(a[i++]);
        else
            merged.push_back(b[j++]);
    }

    while (i < a.size())
        merged.push_back(a[i++]);

    while (j < b.size())
        merged.push_back(b[j++]);
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    vector<int> a(n1), b(n2), merged;

    for (int i = 0; i < n1; i++)
        cin >> a[i];

    for (int i = 0; i < n2; i++)
        cin >> b[i];

    mergeArrays(a, b, merged);

    cout << "Merged Array: ";
    for (int x : merged)
        cout << x << " ";
    cout << endl;

    int n = merged.size();

    if (n % 2 == 1)
    {
        cout << "Median = " << merged[n / 2];
    }
    else
    {
        double median = (merged[n / 2 - 1] + merged[n / 2]) / 2.0;
        cout << "Median = " << median;
    }

    return 0;
}
