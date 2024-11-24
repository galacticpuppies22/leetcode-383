## How to use this repository as a base for the next leetcode problem repository

```bash
# Clone the existing repository
git clone https://github.com/<your-username>/leetcode-1672.git
cd leetcode-1672

# Remove the original remote
git remote remove origin

# Add the new remote repository
git remote add origin https://github.com/<your-username>/leetcode-1672-new.git

# Push to the new repository
git push -u origin main
```

## Rebasing the infrastructure and solution commits

```bash
git stash
git rebase -i <root_commit>
git checkout stash@{0} -- CMakeLists.txt
git checkout stash@{0} -- build-and-run.sh
git add CMakeLists.txt build-and-run.sh
git commit --amend
git rebase --continue
git stash apply #the rest of the changes in source
git add src/ incl/
git commit --amend
```
