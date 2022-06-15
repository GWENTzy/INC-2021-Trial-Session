# The INC 2021 Trial Session Contest - Problem Repository

## Repository Structure

Each problem (from A to D) has their own folder. The folder name is the `slug` of the problem, which is the codename we used when we internally prepare the problems. The following table describes the slug for each problem :

| Problem Code | Problem Slug   | Problem Title              |
| ------------ | -------------- | -------------------------- |
| A            | letter          | Frequent Letter                |
| B            | trees        | Visible Trees               |
| C            | cubes         | Sum of Three Cubes         |
| D            | shortsighted      | Shortsighted             |

In the problem folder, there should be exactly the following file/folder :

- `description.pdf`. The problem statement distributed to the contestants during the contest.
- `data/`. A folder consisting of all testcases. The sample inputs given in the problem statement will be in the form of `sample/<slug>_sample_<testcase number>.in/ans`, while the hidden testcases will be in the form of `secret/<slug>_1_<testcase number>.in/ans`.
- `solution.cpp`. The official solution used to generate the outputs of the testcases
- `scorer.cpp`. A validator used to validate contestants' output. The code accepts three arguments.
  - The first parameter will be used as the filename of the input file
  - The second parameter will be used as the filename of the judge's output file
  - The third parameter will be used as the filename of the contestant's output file
  - This code will print `WA` to stdout if the contestant's output is intended to be judged `WRONG ANSWER`, while it will print `AC` to stdout if the contestants's output is intended to be judged `CORRECT`.
- `verifier.py`. A verifier used to validate the input of the testcases. The code will crash if the input violates the problem constraint, while it will exit gracefully and will not output anything if the input satisfies the problem constraint.

## Time Limitations

The following table describes the time limit for each problem.

| Problem Code | Problem Slug   | Time Limit |
| ------------ | -------------- | ---------- |
| A            | letter          | 1 sec      |
| B            | trees        | 1 sec      |
| C            | cubes         | 1 sec      |
| D            | shortsighted      | 1 sec      |

## Solutions

Note that while there is only one official published solution, we have a lot of other solutions prepared for our internal testing. These other solutions include, but not limited to :

- Solutions in several other languages
- Solutions that is intended to be incorrect (e.g. WA, TLE, etc.)
- Other correct solutions (especially on problems with more than one correct outputs for each input)

The soft copy of the problem statement provided in this repository is the one distributed after the fix was made.

## Licensed
Licensed under [MIT](https://github.com/GWENTzy/INC-2021-Trial-Session/blob/main/LICENSE)
