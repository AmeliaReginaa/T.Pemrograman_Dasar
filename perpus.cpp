
#include <iostream>
#include <vector>
#include <algorithm>

struct Book {
    std::string title;
    std::string author;
    int year;
    std::string isbn;
};

std::vector<Book> library;

void addBook() {
    Book newBook;
    std::cout << "Judul: ";
    std::cin.ignore();
    std::getline(std::cin, newBook.title);
    std::cout << "Pengarang: ";
    std::getline(std::cin, newBook.author);
    std::cout << "Tahun: ";
    std::cin >> newBook.year;
    std::cout << "ISBN: ";
    std::cin.ignore();
    std::getline(std::cin, newBook.isbn);
    
    library.push_back(newBook);
    std::cout << "Buku berhasil ditambahkan.\n";
}

void displayBooks() {
    if (library.empty()) {
        std::cout << "Perpustakaan kosong.\n";
        return;
    }
    
    std::cout << "Daftar Buku:\n";
    std::cout << "----------------------------------------------\n";
    std::cout << "No.  Judul\t\tPengarang\tTahun\tISBN\n";
    std::cout << "----------------------------------------------\n";
    
    int count = 1;
    for (const auto& book : library) {
        std::cout << count << ".\t";
        std::cout << book.title << "\t\t";
        std::cout << book.author << "\t";
        std::cout << book.year << "\t";
        std::cout << book.isbn << "\n";
        count++;
    }
}

void searchBook() {
    std::string keyword;
    std::cout << "Masukkan kata kunci: ";
    std::cin.ignore();
    std::getline(std::cin, keyword);
    
    std::vector<Book> searchResults;
    for (const auto& book : library) {
        if (book.title.find(keyword) != std::string::npos ||
            book.author.find(keyword) != std::string::npos ||
            book.isbn.find(keyword) != std::string::npos) {
            searchResults.push_back(book);
        }
    }
    
    if (searchResults.empty()) {
        std::cout << "Buku tidak ditemukan.\n";
        return;
    }
    
    std::cout << "Hasil Pencarian:\n";
    std::cout << "----------------------------------------------\n";
    std::cout << "No.  Judul\t\tPengarang\tTahun\tISBN\n";
    std::cout << "----------------------------------------------\n";
    
    int count = 1;
    for (const auto& book : searchResults) {
        std::cout << count << ".\t";
        std::cout << book.title << "\t\t";
        std::cout << book.author << "\t";
        std::cout << book.year << "\t";
        std::cout << book.isbn << "\n";
        count++;
    }
}

void removeBook() {
    if (library.empty()) {
        std::cout << "Perpustakaan kosong.\n";
        return;
    }
    
    int bookIndex;
    std::cout << "Masukkan nomor buku yang ingin dihapus: ";
    std::cin >> bookIndex;
    
    if (bookIndex < 1 || bookIndex > library.size()) {
        std::cout << "Nomor buku tidak valid.\n";
        return;
    }
    
    library.erase(library.begin() + bookIndex - 1);
    std::cout << "Buku berhasil dihapus.\n";
}

int main() {
    int choice;
    
    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Tambah Buku Baru\n";
        std::cout << "2. Tampilkan Daftar Buku\n";
        std::cout << "3. Cari Buku\n";
        std::cout << "4. Hapus Buku\n";
        std::cout << "5. Keluar\n";
        std::cout << "Pilihan Anda: ";
        std::cin >> choice;
        
        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                removeBook();
                break;
            case 5:
                std::cout << "Terima kasih telah menggunakan program ini.\n";
                break;
            default:
                std::cout << "Pilihan tidak valid.\n";
                break;
        }
    } while (choice != 5);
    
    return 0;
}
