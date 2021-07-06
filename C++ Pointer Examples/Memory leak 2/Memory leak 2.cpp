using namespace std;
void oil_leak() {
	//allocate 8 bytes from heap
	double* pointer = new double[1000];
}
int main() {
	for (int j = 0; j < 150000; j++) {
		oil_leak();
	}
}
