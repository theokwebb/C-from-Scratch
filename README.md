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

There may be some instances where you need to review or deepen your understanding of certain topics. Here are a few areas I struggled with and needed additional information to fully understand:

#### Pointers
- [Pointers and Memory](http://cslibrary.stanford.edu/102/PointersAndMemory.pdf)
- [A Tutorial on Pointers and Arrays in C by Ted Jensen](https://github.com/jflaherty/ptrtut13/tree/master/md)

#### Input Sanitization
- [A beginners' guide away from scanf()](https://www.sekrit.de/webdocs/c/beginners-guide-away-from-scanf.html)

#### Data Structures
- [Linked Lists](http://cslibrary.stanford.edu/105/LinkedListProblems.pdf)

#### Code Examples and Explanations
Here are some code snippets and explanations I’ve written for some intermediate C concepts that might be useful to you:
- [Pass by Value and Pass by Reference]( https://github.com/theokwebb/C-from-Scratch/tree/main/Pointers/PassByValue-Ref)
- [Pointers to Pointers and How Data is Stored]( https://github.com/theokwebb/C-from-Scratch/tree/main/Pointers/Pointers-to-Pointers)
- [Function Pointers]( https://github.com/theokwebb/C-from-Scratch/tree/main/Pointers/FunctionPointers)

#### Other Comprehensive Guides
- [CS107 Computer Organization and Systems](https://stanford.edu/~cgregg/cgi-bin/107-reader/)

CS107 reader includes a primer on C along with lots of other useful information related to the language and computer science.

- [C Programming by Steve Summit](https://www.eskimo.com/~scs/cclass/cclass.html)

I stumbled upon this gem shortly after I first made this post in May, 2024 and use it often to revisit various C concepts. Steve's explanations are incredibly well-written, and the course exercises are very helpful to drive home the fundamentals. There’s also a load of quality information related to computer science on the site.

- [C Programming A Modern Approach - Second Edition by K. N King](https://archive.org/details/c-programming-a-modern-approach-2nd-ed-c-89-c-99-king-by)

If you encounter a concept that's not covered in the other resources, such as unions or enumerations, this book is an excellent reference.

### Individual Project
By this point, you should be prepared to start your own project. Personally, I found it hard to choose one, as I was constantly searching for the perfect 'beginner-friendly' project which aligned with my interests. However, I realised that this approach isn’t beneficial at all. A calculator, hash table, or tic-tac-toe project will just bore you. Pursue a project that genuinely interests you, regardless of its difficulty. You will likely face some setbacks, but the valuable lessons you learn through these experiences are what truly matter.

If you’re interested in malware development, head over to [Vx Underground](https://vx-underground.org/) and read some of their [white papers](https://github.com/vxunderground/VXUG-Papers) and malware [source code](https://github.com/vxunderground/MalwareSourceCode). 

I decided to develop a kernel driver and a rootkit. If you intend to delve deeper into x86-64 OS Internals, I would highly recommend this route as Windows kernel development and x86-64 OS Internals are closely interconnected. However, you will first need to learn x86-64 Assembly.

# x86-64 Assembly

### [Architecture 1001: x86-64 Assembly](https://p.ost2.fyi/courses/course-v1:OpenSecurityTraining2+Arch1001_x86-64_Asm+2021_v1/about)

Arch1001 is absolutely incredible and includes tons of practical labs that help cement concepts. You will not be bored with Xeno.

In Arch1001, there are some optional refreshers for fundamental topics like bits, logic, C data types, and two's complement. However, I found that I needed more detailed information. Chapter 2 of [Computer Systems: A Programmer's Perspective](https://www.pearson.com/en-us/subject-catalog/p/computer-systems-a-programmers-perspective/P200000003479/9780138105396) and the [CS107 Computer Organization and Systems](https://stanford.edu/~cgregg/cgi-bin/107-reader/) proved to be the most helpful. If money is an issue, just use the CS107 reader as it is free.

I have posted a number of writeups to Arch1001 on my [GitHub](https://github.com/theokwebb/my-writeups) which you may find helpful.

If you enjoyed the binary bomb lab in Arch1001, check out [Crackmes.One](https://crackmes.one/).

# x86-64 OS Internals

If you're new to Operating Systems Internals, start with [Putting the "You" in CPU.](https://cpu.land/) It provides a nice overview of the topic before getting into the more in-depth resources below.

### [Architecture 2001: x86-64 OS Internals](https://p.ost2.fyi/courses/course-v1:OpenSecurityTraining2+Arch2001_x86-64_OS_Internals+2021_v1/about)

Arch2001 is OS-agnostic, but there are some excellent OS-related resources that complement it, so I recommend to pick a path that you think will be most relevant to you and read the related Windows or Linux material below.

### Windows:

For those interested in Windows, read at least the first four chapters of [Windows Kernel Programming, Second Edition](https://leanpub.com/windowskernelprogrammingsecondedition) before starting Arch2001. This will lay a solid foundation for the course. If you prefer video instruction, there’s the paid [Windows Kernel Programming 1](https://training.trainsec.net/windows-kernel-programming-1) course. I also recommend to read Chapter 1 of [Windows Internals, Part 1](https://www.microsoftpressstore.com/store/windows-internals-part-1-system-architecture-processes-9780735684188) and use the other chapters as a reference if you encounter any difficulties. 

### Linux:

For Linux, start with Chapter 1 of [Computer Systems: A Programmer's Perspective](https://www.pearson.com/en-us/subject-catalog/p/computer-systems-a-programmers-perspective/P200000003479/9780138105396) (CS:APP). Then, if you’re ever stuck on a topic in Arch2001, refer to the chapter on that topic in CS:APP. For me, Chapter 9 was key to properly understanding virtual memory.

If you’re not very comfortable with the Linux command line, visit [pwn.college](https://pwn.college/linux-luminarium/).

**Note**: No matter which path you take, CS:APP is an incredibly helpful resource.

I have published a blog post on [Interrupt Handling and Stack Switching in x86-64 Architecture](https://theokwebb.github.io/posts/interrupt-handling-and-stack-switching/), inspired by some difficulties I faced in a lab from Arch2001.

#

I will continue to update this list as I encounter more helpful resources.
