Here's your next project — same Stage 1 concepts but with more moving parts:

---

**Student Grade Book**

Develop a program in C that manages marks for a class of **5 students**, each with **4 subjects**.

The program should:

- Use a **2D array** to store marks for all students
- Use a **loop** to prompt the user to enter marks for each student across all 4 subjects
- For each student, compute and display:
  - Their **total marks**
  - Their **average** to two decimal places
  - A **grade** based on their average:
    - 70 and above → `A`
    - 60–69 → `B`
    - 50–59 → `C`
    - 40–49 → `D`
    - Below 40 → `F`
- After all students, display:
  - The **class average** to two decimal places
  - The **highest scoring student** (by average)
  - The **lowest scoring student** (by average)

---

**What's new you'll learn here:**
- 2D arrays `marks[5][4]`
- Nested loops (one for students, one for subjects)
- `if/else if` chains for grade logic
- Tracking a min/max value across an array

---

Save it as:
```
c-programming-lab/
└── c-fundamentals/
    └── 02-grade-book/
        └── grade_book.c
```

Give it a go and paste your code here when done — I'll review it and give you feedback before you push to GitHub.