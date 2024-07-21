#include<iostream>
#include<vector>
void insertion_sort(std::vector<int> &a){
	for (int i = 1; i < a.size(); i++) {
		int j = i;
		while (j>0 && a[j] < a[j - 1]) {
			std::swap(a[j], a[j - 1]);
			j--;

		}

}

}
void selection_sort(std::vector<int>&a){
	for (int i = 0; i < a.size()-1; i++) {
		int min = i;
		for (int j = i+1; j < a.size(); j++) {
			if (a[min] > a[j])min = j;
		}
		std::swap(a[i], a[min]);
	}

}
void bubble_sort(std::vector<int>&a){
	for (int i = 0; i < a.size(); i++) {
		for (int j = 0; j < a.size()-1; j++) {
			
			if (a[j] > a[j+1])std::swap(a[j], a[j+1]);

		}

	 }

}
int main() {
	std::vector<int> a = { 1,4,2,6,5,7,3,5,2,7,5,3,2,1,4,6,8,9,6,5,33,3,22,1,3 };
	/*selection_sort(a);*/
	/*bubble_sort(a);*/
	insertion_sort(a);
	for (auto x : a) {
		std::cout << x << " ";
	}
}