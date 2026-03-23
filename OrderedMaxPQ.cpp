#include <iostream>
#include <vector>

using namespace std;

class OrderedMaxPQ
{
private:
    vector<int> data;

public:
    bool isEmpty()
    {
        return data.empty();
    }
    void insert(int value)
    {
        for (int i = 0; i < data.size(); i++)
        {
            if (data[i] > value)
            {
                data.insert(data.begin() + i, value);
                return;
            }
        }
        data.push_back(value);
    }

    int peekMax()
    {
        if (isEmpty())
            return -1;
        return data.back();
    }

    int removeMax()
    {
        if (isEmpty())
            return -1;
        int result = data.back();
        data.pop_back();
        return result;
    }
};
