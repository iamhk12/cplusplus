// QUESTION Queue resersal
// Approach 1 (stack)
/*
queue<int> rev(queue<int> q)
{
    stack<int> s;
    while (!q.empty())
    {
        s.push(q.front());
        q.pop();
    }

    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }

    return q;
}

//First negative integer in every window of size k

/*
vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {

        deque <long long int> dq;

        vector <long long> ans;

        for(int i=0;i<K;i++){
            if(A[i]<0){
                dq.push_back(i);
            }
        }

        if(dq.size()>0){
            ans.push_back(A[dq.front()]);
        }
        else
        ans.push_back(0);

        // process for remaining windows
        for(int i=K;i<N;i++){
            if(i-dq.front() >= K && !dq.empty())
            dq.pop_front();

        //addition
        if(A[i]<0)
        dq.push_back(i);

        if(dq.size()>0){
            ans.push_back(A[dq.front()]);
        }
        else
        ans.push_back(0);



        }
        return ans;

 }



*/

// Reverse First K elements of Queue

/*

queue<int> modifyQueue(queue<int> q, int k) {

    stack<int> s;

    for(int i=0;i<k;i++)
    {
        s.push(q.front());
        q.pop();
    }

    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }

    int x = q.size()-k;
    while(x--){
        int val = q.front();
        q.pop();
        q.push(val);
    }

    return q;
}

*/

// First non-repeating character in a stream
/*
string FirstNonRepeating(string A)
{

    unordered_map<char, int> count;
    queue<int> q;

    string ans = "";

    for (int i = 0; i < A.length(); i++)
    {
        char ch = A[i];

        // increase count
        count[ch]++;

        q.push(ch);

        while (!q.empty())
        {
            if (count[q.front()] > 1)
                q.pop();
            else
            {
                ans.push_back(q.front());
                break;
            }
        }

        if (q.empty())
            ans.push_back('#');
    }
    return ans;
}
*/

// K Queues in an array

/*

#include <iostream>
using namespace std;

class kQueue
{

public:
    int n;
    int k;
    int *front;
    int *rear;
    int *arr;
    int freespot;
    int *next;

    kQueue(int n, int k)
    {
        //INITIALIZATION
        this->n = n;
        this->k = k;
        front = new int[k];
        rear = new int[k];
        next = new int[n];
        arr = new int[n];
        freespot = 0;

        for (int i = 0; i < k; i++)
        {
            front[i] = -1;
            rear[i] = -1;
        }

        for (int i = 0; i < n; i++)
        {
            next[i] = i + 1;
        }
        next[n - 1] = -1;
    }

    void enqueue(int data, int qn)
    {
        // overflow
        if (freespot == -1)
        {
            cout << "No empty space is present" << endl;
            return;
        }

        // find first free index
        int index = freespot;

        // update freespot
        freespot = next[index];

        // check whether first element
        if (front[qn - 1] == -1)
            front[qn - 1] = index;
        else
        {
            // link new element ot previous
            next[rear[qn - 1]] = index;
        }

        // update next
        next[index] = -1;

        // update rear
        rear[qn - 1] = index;

        // push element
        arr[index] = data;
    }

    int dequeue(int qn)
    {
        // underflow
        if (front[qn - 1] == -1)
        {
            cout << "Queue underflow" << endl;
            return -1;
        }

        // find index to pop
        int index = front[qn - 1];

        // front increment
        front[qn - 1] = next[index];

        // freeslot management
        next[index] = freespot;
        freespot = index;
        return arr[index];
    }
};

int main()
{

    kQueue q(10, 3);
    q.enqueue(10, 1);
    q.enqueue(15, 1);
    q.enqueue(20, 2);
    q.enqueue(25, 1);

    cout << q.dequeue(1) << endl;
    cout << q.dequeue(2) << endl;
    cout << q.dequeue(1) << endl;
    cout << q.dequeue(1) << endl;
    cout << q.dequeue(2) << endl;

    return 0;
}
*/

// Sum of min & max elements of all subarray of size K

#include <iostream>
#include <deque>
using namespace std;

int solve(int *arr, int n, int k)
{
    deque<int> maxi(k);
    deque<int> mini(k);

    // Addition of first k sized window
    for (int i = 0; i < k; i++)
    {
        while (arr[maxi.back()] <= arr[i] && !maxi.empty())
            maxi.pop_back();

        while (arr[mini.back()] >= arr[i] && !mini.empty())
            mini.pop_back();

        maxi.push_back(i);
        mini.push_back(i);
    }

    int ans = 0;
    for (int i = k; i < n; i++)
    {
        ans += arr[maxi.front() + arr[mini.front()]];

        // next window

        while (i - maxi.front() >= k && !maxi.empty())
            maxi.pop_front();

        while (i - mini.front() >= k && !mini.empty())
            mini.pop_front();

        while (arr[maxi.back()] <= arr[i] && !maxi.empty())
            maxi.pop_back();

        while (arr[mini.back()] >= arr[i] && !mini.empty())
            mini.pop_back();

        maxi.push_back(i);
        mini.push_back(i);
    }

    // make sure to consider last window
    ans += arr[maxi.front() + arr[mini.front()]];

    return ans;
}

int main()
{

    int arr[7] = {2 - 5, -1, 7, -3, -1, -2};
    int k = 4;
    cout << solve(arr, 7, k) << endl;

    return 0;
}