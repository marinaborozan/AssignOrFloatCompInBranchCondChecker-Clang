Assign Or Float Comparison In Branch Condition Checker

AssignOrFloatCompInBranchCondChecker is Clang Static Analyzer checker 
for assignment as a controlling statement in branch condition statement or floating type comparison in loop condition statement

Setup:

    Build LLVM 
    
    Copy AssignOrFloatCompInBranchCondChecker.cpp to the llvm-project/clang/lib/StaticAnalyzer/Checkers folder
    Extend llvm-project/clang/lib/StaticAnalyzer/Checkers/CMakeLists.txt with AssignOrFloatCompInBranchCondChecker.cpp
    Add following block of code into Checkers.td file contained in llvm-project/clang/include/clang/StaticAnalyzer/Checkers:

let ParentPackage = UnixAlpha in {
    ...
    def AssignOrFloatCompInBranchCondChecker : Checker<"AssignOrFloatCompInBranchCondChecker">,  
      HelpText<"Check for assignment or float type comparison in condition statement">,  
      Documentation<NotDocumented>;
    ...
} // end "alpha.unix" 

    Rebuild project

Usage:

For applications written in C, run:

clang --analyze -Xanalyzer -analyzer-checker=unix,alpha example.c

For applications written in C++, run:

clang++ --analyze -Xanalyzer -analyzer-checker=unix,alpha example.cpp

Both clang and clang++ can be found in llvm-project/build/bin.
