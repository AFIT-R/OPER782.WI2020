OPER 782 Analytic Deployment Review
================
12 February 2020

<!-- badges: start -->

[![Travis build
status](https://travis-ci.org/clawilso15/OPER782.WI2020.svg?branch=master)](https://travis-ci.org/clawilso15/OPER782.WI2020)
<!-- badges: end -->

Part of the analytic development process is ensuring that the algorithms
you develop will be reproducible and portable for an end-user. Often an
end-user’s machine is not configured in the same way as the developer’s
– leading to unexpected side effects or errors. To ensure that your
methods are reproducible & portable, your analytic data products will be
reviewed on multiple ‘new’ machines representing those used by potential
end-users. In lieu of a final exam, each student will be tasked to
review two analytic projects developed by students in the course. Using
the information presented in the GitHub repository README file and any
documentation files provided with the analytic, the reviewer will review
the analytic in these areas:

  - Accuracy
    
      - Are the results accurate?
      - Is it clear how the results were computed?

  - Compilation
    
      - Did the analytic work? (i.e. install correctly, startup
        correctly)
      - Were errors encountered when executing code according to the
        documentation?

  - Ease of use
    
      - Is it clear how to use the analytic? (i.e. is the documentation
        clear)
      - Are the visualizations/plots interpretable?

Reviewers will capture their findings by (1) generating an issue on the
analytic project’s Github page for each finding and (2) present all
findings in a final report (.Rmd file – html\_document). Both the report
and the Github issues should include a brief discussion of the problem
with one or more reproducible examples.

After reviewing the analytic, the reviewer will then assign it one of
the following grades. **Note: I will perform a second review on all
projects to ensure that grades are assigned fairly. If my final grade
differs greatly from the grade provided by the reviewer – it will be an
indication of poor engagement by the reviewer.**

  - Outstanding – ready to publish/deploy (50 pts)
    
      - All proposal tasks completed
      - Documentation is thorough and clear
      - No errors or warnings during build/use

  - Excellent – very little rework required (45 pts)
    
      - Few proposal tasks incomplete
      - Documentation is clear and mostly complete
      - Minor errors or warnings during build/use

  - Satisfactory – extensive rework required (40 pts)
    
      - Several proposal tasks incomplete
      - Documentation is limited and/or poorly written
      - Severe errors during build or in use

  - Unsatisfactory – complete restart required (35 pts)
    
      - Little progress made on proposal tasks
      - Little to no documentation
      - Cannot be compiled, unusable

The table below lists each developer, the URL of their respective
project, and the assigned reviewers.

| Developer          | Git\_URL                                 | Reviewer1          | Reviewer2          |
| :----------------- | :--------------------------------------- | :----------------- | :----------------- |
| Marc Chale         | <https://github.com/chale/reponame>      | Brandon Hufstetler | Ryan Walton        |
| Mark Ciaravino     | <https://github.com/ciaravina/reponame>  | Benjamin Leiby     | Clarence Williams  |
| Brandon Hufstetler | <https://github.com/hufstetler/reponame> | Marc Chale         | Benjamin Leiby     |
| Benjamin Leiby     | <https://github.com/leiby/reponame>      | Tyler Spangler     | Brandon Hufstetler |
| Benjamin Mayo      | <https://github.com/mayo/reponame>       | Clarence Williams  | Mark Ciaravino     |
| Tyler Spangler     | <https://github.com/spangler/reponame>   | Benjamin Mayo      | Marc Chale         |
| Ryan Walton        | <https://github.com/walton/reponame>     | Mark Ciaravino     | Tyler Spangler     |
| Clarence Williams  | <https://github.com/williams/reponame>   | Ryan Walton        | Benjamin Mayo      |

List of developers, projects, and assigned reviewers for OPER782 (Winter
2020)

The assigned reviewers are to:

1.  Download the project using
    `devtools::install_github('devname/projectname')`

2.  Review the documentation provided

3.  Test out the project in accordance with the documentation

4.  Write a one-page review of the project using the rubric provided
    above.

5.  Fork the project repository

6.  Add your review to the inst/ directory of the project

7.  Submit a pull request to the project developer to have them include
    the review as part of their project.
