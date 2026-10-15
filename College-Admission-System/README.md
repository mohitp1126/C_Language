## College Admission System in C

### About the Project
The **College Admission System** is a beginner-friendly C programming project that simulates a student's academic journey through four years of college. It checks registration, examination form submission, and exam results for each year.

### Features
- Enter the student's name.
- Complete registration for each academic year.
- Submit the examination form.
- Enter and validate internal exam marks out of 20.
- Enter and validate external exam marks out of 80.
- Enter and validate main exam marks out of 100.
- Check passing marks for each examination.
- Stop the academic process if any requirement is not fulfilled.
- Display a graduation message after successful completion of all four years.

### Passing Criteria

| Examination | Total Marks | Passing Marks |
|---|---:|---:|
| Internal Exam | 20 | 10 |
| External Exam | 80 | 35 |
| Main Exam | 100 | 40 |

*Note: These marks are sample criteria used in this project. Actual passing rules may vary by college or university.*

### Concepts Used
- Variables and data types
- `printf()` and `scanf()`
- `if-else` statements
- `for` loop
- `break` statement
- Input validation
- Basic decision-making logic

### How It Works
The program starts by asking for the student's name. For each of the four academic years, the student must complete registration, submit the examination form, and qualify in the internal, external, and main exams.

If a requirement is not fulfilled, the `break` statement stops the loop and the academic process ends. If all four years are completed successfully, the program displays a graduation message.

### Future Improvements
- Add student registration numbers.
- Store student records using file handling.
- Add multiple student support.
- Improve input validation.
- Add semester-wise results and back lock concept.



