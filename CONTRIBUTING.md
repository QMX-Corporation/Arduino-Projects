# Contributing to Arduino-Projects

First off, thank you for taking the time to contribute! 🎉 
This project follows an open, community-driven governance model, and we are excited to see what you build.

Please take a moment to review this document to make the contribution process smooth and effective for everyone.

---

## Code of Conduct & Standards
* **Coding Style:** All C/C++ and Arduino (`.ino`) code must adhere to the formatting rules defined in our `.clang-format` and `.editorconfig` files.
* **Language:** All source code, commit messages, comments, and documentation must be written in **English**.
* **License:** By contributing, you agree that your contributions will be licensed under the [MIT License](LICENSE).

---

## How to Contribute a Project

1. **Check the Rules:** Review the requirements in `Rank/CONCURSE.txt` to ensure your contribution qualifies.
2. **Fork the Repository:** Click the "Fork" button in the top right corner of the GitHub page.
3. **Clone Your Fork:** Clone your repository locally (or directly via Termux/Git on your mobile device):
```bash
git clone [https://github.com/YOUR-USERNAME/Arduino-Projects.git](https://github.com/YOUR-USERNAME/Arduino-Projects.git)
cd Arduino-Projects
``` 
4. Create a Branch: Create a descriptive branch for your feature or project:
```bash
git checkout -b feature/my-awesome-arduino-project
```
5. Add Your Project:
* Place your code inside a dedicated folder for your project.
* Include a clear Docs.md inside your project folder explaining what it does, hardware connections, and how to run it.
6. Commit Your Changes: Write clear, concise commit messages:
```bash
git add .
git commit -m "feat: add my new arduino sensor project"
```
7. Push to GitHub:
```bash 
git origin push feature/my-awesome-arduino-project
```
8. Open a Pull Request:
Go to the original repository and open a Pull Request using our your_project.md template.

---

## Reporting Bugs or Requesting Features
If you find a bug or have an idea for a new feature, please open an Issue using our predefined templates (bug_report.md or feature_request.md).

Thank you for helping build a powerful and collaborative Arduino community!