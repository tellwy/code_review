#include <queue>

template <typename T> class PriorityQueue {
  private:
    std::priority_queue<T> storage;
  public:
    PriorityQueue();
    ~PriorityQueue();
    bool empty() const;
    const T& top() const;
    int size();
    void push(const T&);
    void pop();	
};
