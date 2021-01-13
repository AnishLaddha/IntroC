#include <iostream>

using namespace std;

void  duplicate (int *in_arr, int *size); 
bool  search( int * arr_search, int size, int item); 

int main() {

	int arr[] = {1, 4, 9, 16, 9, 7, 4, 9, 11};
	int size = sizeof(arr)/sizeof(arr[0]);
    cout << "size of array is : " << size << endl; 

	for (int x=0; x<size;x++) {
		cout << arr[x] << " ";
	}
    cout << endl;
	duplicate (arr, &size);
        cout << "size of array is : " << size << endl; 
	for (int x=0; x<size;x++) {
		cout << arr[x] << " ";
	}
    cout << endl;
	
}

void  duplicate (int *in_arr, int *size) {

	int *aarr = new int[*size];
        int ret_counter = 0;

	for (int x=0; x<*size;x++) {

		bool found = search( aarr, ret_counter, in_arr[x]);
                if (found == false) {
			aarr[ret_counter++] = in_arr[x];
		}
	}

	*size = ret_counter;
	for(int x=0; x<ret_counter; x++) {
		in_arr[x] = aarr[x];
	}

}

bool search( int * arr_search, int size, int item) {
	for(int counter = 0; counter < size; counter++ ) 
		if(arr_search[counter] == item)
			return true;{
	}
	return false;
}