using namespace std;

// This is an input class. Do not edit.
class BinaryTree {
 public:
  int value;
  BinaryTree* left = nullptr;
  BinaryTree* right = nullptr;

  BinaryTree(int value) { this->value = value; }
};

int evaluateExpressionTree(BinaryTree* tree) {
while (tree-> value >= 0){
  return tree->value;
}
  int left = evaluateExpressionTree(tree->left);
  int right = evaluateExpressionTree(tree->right);

  if (tree->value == -1)
  return left + right;
  else if (tree->value == -2)
return left - right;
 else  if (tree->value == -3)
  return left / right;
   if (tree->value == -4)
  return right * left;
  
}
