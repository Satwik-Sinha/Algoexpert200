using namespace std;

bool isValidSubsequence(vector<int> array, vector<int> sequence) {

  int i=0, j=0;
  while(i<array.size() && j<sequence.size()){
  if(array[i]==sequence[j]){
    j++;
  }i++;
}
// if(j==sequence.size()?true:false)
  return j==sequence.size();
}
