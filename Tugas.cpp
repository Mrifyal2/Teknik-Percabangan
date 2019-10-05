#include <iostream>
#include <string>

using namespace std;

int main() {
    string domisili, status;
    int beli, total;
    
    cout << "Input Total Belanja Anda : RP. ";
    cin >> beli;
    if (beli >= 1102019) {
        cout << "Selamat, Anda Berhak Mendapatkan Diskon" << endl;
        cout << "" << endl;
        cout << "Status Anda?" << endl;
        cout << "A. Menikah dan Punya Anak" << endl;
        cout << "B. Menikah dan Belum Punya Anak" << endl;
        cout << "C. Belum Menikah dan Memiliki Kartu Anggota" << endl;
        cout << "D. Menikah dan Tidak Memiliki Kartu Anggota" << endl;
        cout << "Pilihan Anda : ";
        cin >> status;
        cout << "" << endl;
        cout << "Alamat KTP : ";
        cin >> domisili;
        if (domisili == "makassar") {
            if (status == "a")
			{
				cout << "Diskon 75%" << endl;
                total = beli - (beli * 0.75);
            } else {
                if (status == "b") {
                	cout << "Diskon 50%" << endl;
                    total = beli - (beli * 0.5);
                } else {
                    if (status == "c") {
                    	cout << "Diskon 25%" << endl;
                        total = beli - (beli * 0.25);
                    } else {
                        if (status == "d") {
                        	cout << "Diskon 10%" << endl;
                            total = beli - (beli * 0.1);
                        } else {
                            cout << "Anda Tidak Memilih" << endl;
                        }
                    }
                }
            }
            cout << "" << endl;
            cout << "Yang Harus Anda Bayar : RP.";
            cout << total << endl;
            cout << "Terima Kasih Telah Berbelanja" << endl;
        } else
		 {
            if (status == "a") {
            	cout << "Diskon 85%" << endl;
                total = beli - (beli * 0.85);
            } else {
                if (status == "b") {
                	cout << "Diskon 60%" << endl;
                    total = beli - (beli * 0.6);
                } else {
                    if (status == "c") {
                    	cout << "Diskon 35%" << endl;
                        total = beli - (beli * 0.35);
                    } else {
                        if (status == "d") {
                        	cout << "Diskon 20%" << endl;
                            total = beli - (beli * 0.2);
                        } else {
                            cout << "Tidak Ada Dalam Pilihan" << endl;
                        }
                    }
                }
            }
            cout << "" << endl;
            cout << "Yang Harus Anda Bayar : RP. ";
            cout << total << endl;
            cout << "Terima Kasih Telah Berbelanja" << endl;
        }
    } else {
        cout << "Anda Tidak Mendapatkan Diskon" << endl;
    }
    return 0;
}

