# C from Scratch

In March 2023, I decided to learn C from scratch. Throughout this journey, I used a variety of resources—some were beneficial, while others not as much. I have compiled a list of the most helpful resources into a roadmap for anyone who wishes to do the same. It should save you some time sifting through mediocre materials.

Once I felt comfortable with C, I went lower—specifically, x86-64 Assembly and x86-64 OS Internals. I have included the resources I used for these topics as well.

Note, this is not a 'learn C in 10 hours' roadmap. A more realistic estimate would be to add a couple more zeros. 

# C
### [CS50 Introduction to Computer Science](https://cs50.harvard.edu/x/2023/)

If you have not had any formal education in computer science, I recommend to start with the 2023 version of CS50 (that's the one I completed, so I can only recommend that). Start at **week 0** and continue through to **week 6**. For each week, make sure to watch the lecture, section, shorts, and complete the problem sets.

### [h0mbre’s (project based) C course](https://github.com/h0mbre/Learning-C)

Next, move on to h0mbre’s project-based C course. After CS50, you should be able to breeze through this course relatively quickly. I recommend this because it is an excellent opportunity to practice and apply your skills without the support structures provided in CS50.

You can find my solutions to the assignments [here](https://github.com/theokwebb/Learning-C).

There may be some instances where you need to review or deepen your understanding of certain topics. Below are a few areas where I needed further clarification:

#### Pointers
- [Pointers and Memory](http://cslibrary.stanford.edu/102/PointersAndMemory.pdf)
- [A Tutorial on Pointers and Arrays in C by Ted Jensen](https://github.com/jflaherty/ptrtut13/tree/master/md)

#### Input Sanitization
- [A beginners' guide away from scanf()](https://www.sekrit.de/webdocs/c/beginners-guide-away-from-scanf.html)

If you know of any other helpful resources in this area, please drop me a message on [X](https://twitter.com/theokwebb).

#### Data Structures
- [Linked List Problems](http://cslibrary.stanford.edu/105/LinkedListProblems.pdf)

#### Comprehensive Guides
- [CS107 Computer Organization and Systems](https://stanford.edu/~cgregg/cgi-bin/107-reader/)

This includes a primer on C along with lots of other useful information related to the language and computer science.

- [C Programming A Modern Approach - Second Edition by K. N King](https://archive.org/details/c-programming-a-modern-approach-2nd-ed-c-89-c-99-king-by)

I don’t believe there is one particularly special textbook for learning C. However, I often found the explanations in this book to be very clear and helpful. If you encounter a concept not covered in the other resources, such as unions or enumerations, this book is an excellent reference.

### Individual Project
By this point, you should be prepared to start your own project. Personally, I found it hard to choose one, as I was constantly searching for the perfect 'beginner-friendly' project which aligned with my interests. However, I realised that this approach isn’t beneficial at all. A calculator, hash table, or tic-tac-toe project will just bore you. Pursue a project that genuinely interests you, regardless of its difficulty. You will likely face some setbacks, but the valuable lessons you learn through these experiences are what truly matter.

If you’re interested in malware development, head over to [Vx Underground](https://vx-underground.org/) and read some of their [white papers](https://github.com/vxunderground/VXUG-Papers) and malware [source code](https://github.com/vxunderground/MalwareSourceCode). 

I decided to develop a kernel driver and a rootkit. If you intend to delve deeper into x86-64 OS Internals, I would highly recommend this route as Windows kernel development and x86-64 OS Internals are closely interconnected. However, you should first learn x86-64 Assembly.

# x86-64 Assembly

### [Architecture 1001: x86-64 Assembly](https://p.ost2.fyi/courses/course-v1:OpenSecurityTraining2+Arch1001_x86-64_Asm+2021_v1/about)

OpenSecurityTraining2’s courses are absolutely incredible and include tons of practical labs that help cement concepts. You will not be bored with Xeno.

I found the first and second chapters of [Computer Systems: A Programmer's Perspective](https://www.pearson.com/en-us/subject-catalog/p/computer-systems-a-programmers-perspective/P200000003479/9780138105396) complements Arch1001 nicely. Chapter 1 provides a excellent overview of computer organisation, and Chapter 2 helps to thoroughly understand bits, logic, and C data types. However, if money is an issue, use CS107’s Computer Organization and Systems reader (mentioned earlier) as it covers similar topics and is free.

I have posted a number of writeups to Arch1001 on my [GitHub](https://github.com/theokwebb/my-writeups) which you may find helpful.

# x86-64 OS Internals

### [Architecture 2001: x86-64 OS Internals](https://p.ost2.fyi/courses/course-v1:OpenSecurityTraining2+Arch2001_x86-64_OS_Internals+2021_v1/about)

So, before starting Architecture 2001, I strongly recommend reading at least the first four chapters of [Windows Kernel Programming, Second Edition](https://leanpub.com/windowskernelprogrammingsecondedition). This will lay a solid foundation for the course. I also advise thoroughly reading Chapter 1 of [Windows Internals, Part 1](https://www.microsoftpressstore.com/store/windows-internals-part-1-system-architecture-processes-9780735684188). The other chapters should be used more as a reference if you find yourself stuck.

I have also published a blog post on [Interrupt Handling and Stack Switching in x86-64 Architecture](https://theokwebb.github.io/posts/interrupt-handling-and-stack-switching/), inspired by some difficulties I faced in a lab from Arch2001.

#

I will continue to update this list as I encounter more helpful resources.
