#include <iostream>
#include <string>

using namespace std;

class Array {
public:
	int arr_size = 10000;
	float* arr;

	Array() {
		srand(9999);

		this->arr = new float[10000];
		for (int i = 0; i < 10000; i++) {
			arr[i] = rand() % 30000;
		}
	}

	int At(int idx) {

		return arr[idx];

	}

	void Set(int idx, int value) {

		arr[idx] = value;

	}

	void Delete(int idx) {
		
		for (int i = idx; i < 10000; i++)
		{	
			if(i!=9999)
			this->arr[i] = this->arr[i + 1];
			else {
				this->arr[i] = 0;
			}
		}
		
	}

	void Find_Max() {
		int max = 0;
		int mxidx = 0;
		for (int i = 0; i < 10000 ; i++)
		{
			if (this->arr[i] > max) {
				max = this->arr[i];
				mxidx = i;
			}
		}
		cout << max << " " << mxidx << endl;
	}

	
};


int main() {
	Array a;
	int M;

	cin >> M;
	
	while (M--)
	{
		string com;
		
		cin >> com;

		if (com == "Find_Max")
		{
			a.Find_Max();
		}

		if (com == "Set")
		{
			int idx, val;

			cin >> idx >> val;

			a.Set(idx, val);
		}
		
		if (com == "At")
		{
			int idx;
			cin >> idx;
			cout<< a.At(idx)<<endl;

		}

		if (com == "Delete")
		{
			int idx;
			cin >> idx;
			a.Delete(idx);
		}
	}




}