# Setup Guide

## 1. Choose your environment

Use one of the following:

- A Linux computer
- Ubuntu through WSL on Windows
- A prepared college lab computer

The commands below assume a Linux environment.

## 2. Check installed tools

Run:

```bash
git --version
python3 --version
gcc --version
java -version
javac -version
nano --version
```

Tools used in this challenge:

| Tool | Purpose |
|------|---------|
| Git | Version control and GitHub submission |
| Python 3 | Running a local web server |
| GCC | Compiling the C program |
| JDK | Compiling and running the Java program |
| Nano | Editing text files in the terminal |

C and Java are bonus tasks. You can complete the main challenge without
GCC or a JDK.

### Installing tools on Ubuntu or Debian

On a personal computer, or with the lab administrator's permission:

```bash
sudo apt update
sudo apt install git python3 build-essential default-jdk nano
```

These installation commands are specific to Ubuntu/Debian-based systems.

## 3. Configure your Git identity

If Git is not already configured, run:

```bash
git config --global user.name "Your Name"
git config --global user.email "YOUR_GITHUB_EMAIL"
```

Replace the placeholders with your details.

You may use the GitHub-provided no-reply email from your GitHub email
settings for privacy.

On shared lab computers, ask the organizerbefore changing global settings. Alternatively, configure your identity
only for the cloned repository using the commands below without `--global`.

## 4. Fork and clone the repository

Choose one teammate to create the team's fork and submit the pull request.

1. Open the organizer's repository on GitHub.
2. Click **Fork** to create a copy in your GitHub account.
3. Copy your fork's HTTPS URL.
4. Open your terminal and run:

```bash
git clone https://github.com/YOUR_USERNAME/aws-linux-git-challenge.git
cd aws-linux-git-challenge
```

Replace the URL with your actual fork URL.

If using a shared computer, set your identity for this repository only:

```bash
git config user.name "Your Name"
git config user.email "YOUR_GITHUB_EMAIL"
```

## 5. Create your team's branch

For Team 01:

```bash
git switch -c team-01-solution
```

Then enter your team's folder:

```bash
cd team-01
pwd
ls
cat TASKS.md
```

Only edit files inside your assigned team folder.

## 6. Edit files in the terminal

For example:

```bash
nano web/index.html
```

In Nano:

- Save: Ctrl + O, then Enter
- Exit: Ctrl + X

## 7. Run the website

From inside `team-01/`, run:

```bash
python3 -m http.server 8000 --bind 127.0.0.1 --directory web
```

Open this address in a browser on the same computer:

http://localhost:8000

Keep the terminal running while testing. Use a second terminal for other
commands, or press Ctrl + C to stop the server.

Refresh the browser after saving your changes.

If using WSL, try the same localhost address in your Windows browser.
If using a remote environment, ask the organizer about port forwarding.

## 8. Compile and run C

From inside `team-01/`:

```bash
gcc -Wall -Wextra c/greeting.c -o c/greeting
```

After compilation succeeds:

```bash
./c/greeting
```

The starter program intentionally contains a syntax error.

## 9. Compile and run Java

From inside `team-01/`:

```bash
javac java/Welcome.java
java -cp java Welcome
```

The starter program runs, but its calculation is incorrect.

## 10. Save and submit your changes

Return to the repository root from `team-01/`:

```bash
cd ..
```

Review your work:

```bash
git status
git diff
```

Stage only your team's folder:

```bash
git add team-01/
git diff --cached
git commit -m "Complete Team 01 Linux and debugging tasks"
git push -u origin team-01-solution
```

Pushing requires GitHub authentication. Use the organizer's recommended
method, such as GitHub CLI or a credential manager.

Your normal GitHub account password is not accepted for Git HTTPS pushes.
Never place an access token in a file, command URL, or screenshot.

On GitHub:

1. Open your fork.
2. Select **Compare & pull request**.
3. Set the organizer's repository and default branch as the base.
4. Select your fork and `team-01-solution` as the compare branch.
5. Add a title and testing summary.
6. Create the pull request.

## Troubleshooting

### "Command not found"

The required tool may not be installed. Ask a mentor for help.

### "No such file or directory"

Check your current folder and file names:

```bash
pwd
ls
```

Linux file names are case-sensitive.

### Website changes are not visible

Save the file and refresh the browser. If needed, perform a hard refresh.

### Port 8000 is already in use

Choose another port:

```bash
python3 -m http.server 8001 --bind 127.0.0.1 --directory web
```

Then open http://localhost:8001.

### "Permission denied" while pushing

Check that `origin` points to your fork:

```bash
git remote -v
```

Also check that you are authenticated to the correct GitHub account.

### Working on a shared computer

After submission, sign out of GitHub and any authentication tools you used.
Do not leave saved credentials on the lab computer.

