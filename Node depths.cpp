using namespace std;

class BinaryTree {
 public:
  int value;
  BinaryTree* left;
  BinaryTree* right;

  BinaryTree(int value) {
    this->value = value;
    left = nullptr;
    right = nullptr;
  }
};

int nodeDepths(BinaryTree* root, int depth =0) {
if(root == nullptr )
  return 0;
  else return depth + nodeDepths(root->left , depth + 1) + nodeDepths(root->right , depth + 1);
  return -1;
}
