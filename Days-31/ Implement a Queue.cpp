class Queue {
public:
    vector<int> v;
    int f;
    int r;
    Queue() {
        f = 0;
        r = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        return (v.size()==0);
    }

    void enqueue(int data) {
        v.push_back(data);
        r = v.size()-1;
    }

    int dequeue() {
        if(v.size()==0)
            return -1;
        else
        {
            int t = v[f];
            v.erase(v.begin()+0);
            return t;
        }
    }

    int front() {
        if(v.size()==0)
            return -1;
        return v[f];
    }
};