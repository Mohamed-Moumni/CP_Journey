class MinStack {
    list<int> elem;
    list<int> get_min;
    int count;
public:
    MinStack() {
        count = 0;
    }
    
    void push(int val) {
        elem.push_front(val);
        if (count == 0)
            get_min.push_front(val);
        else
        {
            if (val <= get_min.front())
                get_min.push_front(val);
            else
                get_min.push_back(val);
        }
        count++;
    }

    void pop() {
        if (elem.front() == get_min.front())
            get_min.pop_front();
        elem.pop_front();
        count--;
    }
    
    int top() {
        return (elem.front());
    }
    
    int getMin() {
        return (get_min.front());
    }
};
