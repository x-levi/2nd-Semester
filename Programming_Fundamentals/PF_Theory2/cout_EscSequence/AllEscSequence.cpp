#include <iostream>
using namespace std;

main()
{
	cout << "Single C++ Program use all Scape Sequence \n\n";

	// 1. \n - Newline
	cout << "Hello\nWorld" << endl;

	// 2. \t - Horizontal tab
	cout << "Tab:\tThis is after a tab" << endl;

	// 3. \v - Vertical tab (may behave differently depending on console)
	cout << "Hello\vWorld" << endl;

	// 4. \b - Backspace (deletes previous character visually)
	cout << "ABC\bD" << endl; // Output looks like "ABD"

	// 5. \r - Carriage return
	cout << "12345\rHELLO" << endl; // Overwrites "12345" with "HELLO"

	// 6. \f - Form feed (rare, effect depends on console/printer)
	cout << "Line1\fLine2" << endl;

	// 7. \a - Alert / Bell (beep sound, only works if system supports it)
	cout << "Beep\a" << endl;

	// 8. \\ - Backslash
	cout << "Backslash: \\" << endl;

	// 9. \' - Single quote
	cout << "Single quote: \'" << endl;

	// 10. \" - Double quote
	cout << "Double quote: \"" << endl;

	// 11. \? - Question mark
	cout << "Question mark: \?" << endl;

	// 12. \ooo - Octal number (e.g. \101 is 'A')
	cout << "Octal \\101: \101" << endl;

	// 13. \xhh - Hexadecimal number (e.g. \x41 is 'A')
	cout << "Hex \\x41: \x41" << endl;

	// 14. \uhhhh - Unicode character (16-bit)
	cout << "Unicode \\u03A9: \u03A9" << endl; // Ω

	// 15. \Uhhhhhhhh - Unicode character (32-bit)
	cout << "Unicode \\U0001F600: \U0001F600" << endl;
}