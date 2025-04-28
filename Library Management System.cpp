#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

class Book {
public:
    int registration;
    string title;
    string author;
    bool status; // 1: Available, 0: Borrowed

    Book(int reg, string t, string a, bool s) {
        registration = reg;
        title = t;
        author = a;
        status = s;
    }
};

class Library {
private:
    vector<Book> books;

public:
    Library() {
        // Initialize inventory directly in the code
        books.push_back(Book(1, "The Great Gatsby", "F. Scott Fitzgerald", true));
        books.push_back(Book(2, "1984", "George Orwell", true));
        books.push_back(Book(3, "To Kill a Mockingbird", "Harper Lee", true));
        books.push_back(Book(4, "Moby-Dick", "Herman Melville", true));
        books.push_back(Book(5, "Pride and Prejudice", "Jane Austen", true));
        books.push_back(Book(6, "The Catcher in the Rye", "J.D. Salinger", true));
        books.push_back(Book(7, "The Hobbit", "J.R.R. Tolkien", true));
        books.push_back(Book(8, "War and Peace", "Leo Tolstoy", true));
        books.push_back(Book(9, "Crime and Punishment", "Fyodor Dostoevsky", true));
        books.push_back(Book(10, "Brave New World", "Aldous Huxley", true));
        books.push_back(Book(11, "The Picture of Dorian Gray", "Oscar Wilde", true));
        books.push_back(Book(12, "Fahrenheit 451", "Ray Bradbury", true));
        books.push_back(Book(13, "The Odyssey", "Homer", true));
        books.push_back(Book(14, "Les Misérables", "Victor Hugo", true));
        books.push_back(Book(15, "The Brothers Karamazov", "Fyodor Dostoevsky", true));
        books.push_back(Book(16, "Catch-22", "Joseph Heller", true));
        books.push_back(Book(17, "The Stranger", "Albert Camus", true));
        books.push_back(Book(18, "Frankenstein", "Mary Shelley", true));
        books.push_back(Book(19, "Dracula", "Bram Stoker", true));
        books.push_back(Book(20, "The Divine Comedy", "Dante Alighieri", true));
        books.push_back(Book(21, "Heart of Darkness", "Joseph Conrad", true));
        books.push_back(Book(22, "Wuthering Heights", "Emily Brontë", true));
        books.push_back(Book(23, "Anna Karenina", "Leo Tolstoy", true));
        books.push_back(Book(24, "The Grapes of Wrath", "John Steinbeck", true));
        books.push_back(Book(25, "The Scarlet Letter", "Nathaniel Hawthorne", true));
        books.push_back(Book(26, "The Sun Also Rises", "Ernest Hemingway", true));
        books.push_back(Book(27, "Ulysses", "James Joyce", true));
        books.push_back(Book(28, "The Road", "Cormac McCarthy", true));
        books.push_back(Book(29, "The Trial", "Franz Kafka", true));
        books.push_back(Book(30, "The Call of the Wild", "Jack London", true));
        books.push_back(Book(31, "The Jungle", "Upton Sinclair", true));
        books.push_back(Book(32, "A Tale of Two Cities", "Charles Dickens", true));
        books.push_back(Book(33, "The Shining", "Stephen King", true));
        books.push_back(Book(34, "The Lord of the Rings: The Fellowship of the Ring", "J.R.R. Tolkien", true));
        books.push_back(Book(35, "The Lord of the Rings: The Two Towers", "J.R.R. Tolkien", true));
        books.push_back(Book(36, "The Lord of the Rings: The Return of the King", "J.R.R. Tolkien", true));
        books.push_back(Book(37, "The Wind in the Willows", "Kenneth Grahame", true));
        books.push_back(Book(38, "The Old Man and the Sea", "Ernest Hemingway", true));
        books.push_back(Book(39, "Gone with the Wind", "Margaret Mitchell", true));
        books.push_back(Book(40, "The Secret Garden", "Frances Hodgson Burnett", true));
        books.push_back(Book(41, "The Call of Cthulhu", "H.P. Lovecraft", true));
        books.push_back(Book(42, "The Outsiders", "S.E. Hinton", true));
        books.push_back(Book(43, "A Clockwork Orange", "Anthony Burgess", true));
        books.push_back(Book(44, "Slaughterhouse-Five", "Kurt Vonnegut", true));
        books.push_back(Book(45, "The Hitchhiker's Guide to the Galaxy", "Douglas Adams", true));
        books.push_back(Book(46, "The Adventures of Sherlock Holmes", "Arthur Conan Doyle", true));
        books.push_back(Book(47, "The Hound of the Baskervilles", "Arthur Conan Doyle", true));
        books.push_back(Book(48, "A Study in Scarlet", "Arthur Conan Doyle", true));
        books.push_back(Book(49, "The Sign of the Four", "Arthur Conan Doyle", true));
        books.push_back(Book(50, "The Valley of Fear", "Arthur Conan Doyle", true));
        books.push_back(Book(51, "The Return of Sherlock Holmes", "Arthur Conan Doyle", true));
        books.push_back(Book(52, "The Case-Book of Sherlock Holmes", "Arthur Conan Doyle", true));
        books.push_back(Book(53, "The Final Problem", "Arthur Conan Doyle", true));
        books.push_back(Book(54, "The Lost World", "Arthur Conan Doyle", true));
        books.push_back(Book(55, "Harry Potter and the Sorcerer's Stone", "J.K. Rowling", true));
        books.push_back(Book(56, "Harry Potter and the Chamber of Secrets", "J.K. Rowling", true));
        books.push_back(Book(57, "Harry Potter and the Prisoner of Azkaban", "J.K. Rowling", true));
        books.push_back(Book(58, "Harry Potter and the Goblet of Fire", "J.K. Rowling", true));
        books.push_back(Book(59, "Harry Potter and the Order of the Phoenix", "J.K. Rowling", true));
        books.push_back(Book(60, "Harry Potter and the Half-Blood Prince", "J.K. Rowling", true));
        books.push_back(Book(61, "Harry Potter and the Deathly Hallows", "J.K. Rowling", true));
        books.push_back(Book(62, "Fantastic Beasts and Where to Find Them", "J.K. Rowling", true));
        books.push_back(Book(63, "Quidditch Through the Ages", "J.K. Rowling", true));
        books.push_back(Book(64, "The Tales of Beedle the Bard", "J.K. Rowling", true));
        books.push_back(Book(65, "The Cuckoo's Calling", "Robert Galbraith", true));
        books.push_back(Book(66, "The Silkworm", "Robert Galbraith", true));
        books.push_back(Book(67, "Career of Evil", "Robert Galbraith", true));
        books.push_back(Book(68, "Lethal White", "Robert Galbraith", true));
        books.push_back(Book(69, "Troubled Blood", "Robert Galbraith", true));
        books.push_back(Book(70, "The Name of the Wind", "Patrick Rothfuss", true));
        books.push_back(Book(71, "The Wise Man's Fear", "Patrick Rothfuss", true));
        books.push_back(Book(72, "The Slow Regard of Silent Things", "Patrick Rothfuss", true));
        books.push_back(Book(73, "The Night Circus", "Erin Morgenstern", true));
        books.push_back(Book(74, "The Shadow of the Wind", "Carlos Ruiz Zafón", true));
        books.push_back(Book(75, "The Book Thief", "Markus Zusak", true));
        books.push_back(Book(76, "The Kite Runner", "Khaled Hosseini", true));
        books.push_back(Book(77, "A Thousand Splendid Suns", "Khaled Hosseini", true));
        books.push_back(Book(78, "The Alchemist", "Paulo Coelho", true));
        books.push_back(Book(79, "The Girl on the Train", "Paula Hawkins", true));
        books.push_back(Book(80, "The Goldfinch", "Donna Tartt", true));
        books.push_back(Book(81, "Life of Pi", "Yann Martel", true));
        books.push_back(Book(82, "The Help", "Kathryn Stockett", true));
        books.push_back(Book(83, "The Nightingale", "Kristin Hannah", true));
        books.push_back(Book(84, "Little Women", "Louisa May Alcott", true));
        books.push_back(Book(85, "The Color Purple", "Alice Walker", true));
        books.push_back(Book(86, "The Great Alone", "Kristin Hannah", true));
        books.push_back(Book(87, "The Immortalists", "Chloe Benjamin", true));
        books.push_back(Book(88, "Big Little Lies", "Liane Moriarty", true));
        books.push_back(Book(89, "The Secret History", "Donna Tartt", true));
        books.push_back(Book(90, "Rebecca", "Daphne du Maurier", true));
        books.push_back(Book(91, "Wicked", "Gregory Maguire", true));
        books.push_back(Book(92, "The Outsiders", "S.E. Hinton", true));
        books.push_back(Book(93, "The Handmaid's Tale", "Margaret Atwood", true));
        books.push_back(Book(94, "The Princess Bride", "William Goldman", true));
        books.push_back(Book(95, "The Maze Runner", "James Dashner", true));
        books.push_back(Book(96, "The Hunger Games", "Suzanne Collins", true));
        books.push_back(Book(97, "Divergent", "Veronica Roth", true));
        books.push_back(Book(98, "Ready Player One", "Ernest Cline", true));
        books.push_back(Book(99, "The 5th Wave", "Rick Yancey", true));
        books.push_back(Book(100, "The Fault in Our Stars", "John Green", true));

    }

    void addBook() {
        int reg;
        string title, author;
        cout << "Enter Registration Number: ";
        cin >> reg;
        cin.ignore();
        cout << "Enter Book Title: ";
        getline(cin, title);
        cout << "Enter Book Author: ";
        getline(cin, author);

        books.push_back(Book(reg, title, author, true));
        cout << "Book added successfully!\n";
    }

    void deleteBook() {
        int reg;
        cout << "Enter Registration Number of the book to delete: ";
        cin >> reg;
        for (auto it = books.begin(); it != books.end(); ++it) {
            if (it->registration == reg) {
                books.erase(it);
                cout << "Book deleted successfully!\n";
                return;
            }
        }
        cout << "Book not found!\n";
    }

    void borrowBook() {
        int reg;
        cout << "Enter Registration Number of the book to borrow: ";
        cin >> reg;
        for (auto& book : books) {
            if (book.registration == reg) {
                if (book.status) {
                    book.status = false;
                    cout << "Book borrowed successfully!\n";
                }
                else {
                    cout << "Book is already borrowed!\n";
                }
                return;
            }
        }
        cout << "Book not found!\n";
    }

    void returnBook() {
        int reg;
        cout << "Enter Registration Number of the book to return: ";
        cin >> reg;
        for (auto& book : books) {
            if (book.registration == reg) {
                if (!book.status) {
                    book.status = true;
                    cout << "Book returned successfully!\n";
                }
                else {
                    cout << "Book was not borrowed!\n";
                }
                return;
            }
        }
        cout << "Book not found!\n";
    }

    void searchBook() {
        int choice;
        cout << "Search by:\n1. Registration Number\n2. Title\n3. Author\n4. Availability\nEnter choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            int reg;
            cout << "Enter Registration Number: ";
            cin >> reg;
            for (const auto& book : books) {
                if (book.registration == reg) {
                    displayBook(book);
                    return;
                }
            }
            cout << "Book not found!\n";
        }
        else if (choice == 2) {
            string title;
            cout << "Enter Title: ";
            getline(cin, title);
            for (const auto& book : books) {
                if (book.title == title) {
                    displayBook(book);
                    return;
                }
            }
            cout << "Book not found!\n";
        }
        else if (choice == 3) {
            string author;
            cout << "Enter Author: ";
            getline(cin, author);
            for (const auto& book : books) {
                if (book.author == author) {
                    displayBook(book);
                }
            }
        }
        else if (choice == 4) {
            bool available;
            cout << "Enter 1 for Available, 0 for Borrowed: ";
            cin >> available;
            for (const auto& book : books) {
                if (book.status == available) {
                    displayBook(book);
                }
            }
        }
        else {
            cout << "Invalid choice!\n";
        }
    }

    void viewAllBooks() {
        cout << left << setw(15) << "Registration"
            << setw(30) << "Title"
            << setw(30) << "Author"
            << "Status" << endl;
        cout << string(80, '-') << endl;
        for (const auto& book : books) {
            cout << left << setw(15) << book.registration
                << setw(30) << book.title
                << setw(30) << book.author
                << (book.status ? "Available" : "Borrowed") << endl;
        }
    }

private:
    void displayBook(const Book& book) {
        cout << "Registration: " << book.registration << endl;
        cout << "Title: " << book.title << endl;
        cout << "Author: " << book.author << endl;
        cout << "Status: " << (book.status ? "Available" : "Borrowed") << endl;
    }
};

bool login() {
    string username, password;
    cout << "Enter Username: ";
    cin >> username;
    cout << "Enter Password: ";
    cin >> password;
    return username == "admin" && password == "fast123";
}

int main() {
    if (!login()) {
        cout << "Invalid credentials! Exiting...\n";
        return 0;
    }

    Library library;
    int choice;

    do {
        cout << "\nLibrary Management System\n";
        cout << "1. Add Book\n";
        cout << "2. Delete Book\n";
        cout << "3. Borrow Book\n";
        cout << "4. Return Book\n";
        cout << "5. Search Book\n";
        cout << "6. View All Books\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            library.addBook();
            break;
        case 2:
            library.deleteBook();
            break;
        case 3:
            library.borrowBook();
            break;
        case 4:
            library.returnBook();
            break;
        case 5:
            library.searchBook();
            break;
        case 6:
            library.viewAllBooks();
            break;
        case 7:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 7);

    return 0;
}
