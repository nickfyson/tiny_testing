
git add .
git commit -m 'changes for an experiment'
git push origin `git rev-parse HEAD`:refs/heads/experiments/`echo $USER`/`date +"%Y%m%d%H%M%S"`
git reset HEAD~1