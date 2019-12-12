# ACM Contest Scoring

**Problem**: [acm](https://open.kattis.com/problems/acm)

**Difficulty**: 1.5

## Solution

For this, since a solution only counts if it is ever successfully completed, one can keep a mapping of which questions have been solved, but to account for the penalties, annother mapping to keep track of the number of times a problem was unsuccessful. Then, when iterating through each submission, only do anything if the problem is *not* yet solved (though this may be a successful submission itself), to ignore submissions made after a successful submission. If the submission was unsuccessful, increment the number of errors for this question. If the submission was successful, mark that it was completed, and add the time given at this submission to a running total (+ 20 * each incorrect submission) somewhere and increment the number of uniquely-solved problems. After all this, output the number of solved problems and the time.
