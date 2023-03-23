#include <vector>
using namespace std;

class Node
{
private:
    int color = 0;
    Node* p = nullptr;
    vector<Node*> neighbours;
public:
    Node(const int& _color, Node*& _p);
    ~Node();

    void addNeighbour(Node* n) {
        neighbours.push_back(n);
    }

};

Node::Node(const int& _color, Node*& _p)
{
    p = _p;
    color = _color;
}

Node::~Node()
{
}