today is day - 1 we are learning time complexity 

how fast a program runs??


todays goal is to understand 5 complexities 
O(1)
O(log n)
O(n)
O(n log n)
O(n²)

the big-o notation

   1.  O(1) NOTATION 
    THE INSTANT COMPLEXITY WHICH MEANS 
    IT DOESNT DEPENDS ON HOW LARGE THA INPUT DATA IS THE TIME TAKEN TO EXECUTE THE CODE IS ALWAYS THE SAME EVEN IF THE DATA CONTAINS 1 OR 1 MILLION IPUTS THE TIME TAKEN TO EXECUTE THE PROGRAM MUST BE SAME
   example-
    IF WE TAKE THHE REAL WORLD EXAMPLE FRONT PAGE OF NEWSPAPER 
    if the news paper has 10 or 15 pages finding the headline on the front page always takes us just one glance


   2. O(logn) NOTATION - logarithmic time 
   IT ALSO MEANS THE DIVIDE AND CONQUER COMPLEXITY AND THIS IS ALSO HIGHLY EFFICIENT 
   IN THIS EVERY TIME THE ALGORITHM TAKES A STEP IT CUSTS THE REAMINING AMOUNT OF WORK IN HALF. IT GROWS INCREDIBLY SLOW IF THE INPUT GETS LARGER 
   example -
   IF WE TAKE A REAL WORLD EXAMPLE " SEARCHING A WORD FROM DICTIONARY"
   we are searching a word flower in the physical dicctionary we cant start from the begining like staring from letter 'a' we can directly go to the letter 'f' 1st and then we can go for the 2nd letter in the word 'l' by skipping other letters in between in this way we can reduce our work . if the dictionary size gets increased the time taken to search for the word also gets increased.



   3. O(n) NOTATION 
   THIS IS ALSO KNOWN AS STRIGHT LINE COMLEXITY 
   HERE TIME TAKEN FOR EXECUTING THE CODE IS DIRECTLY PROPORTIONAL TO SIZE OF THE INPUT GIVEN TO THE CODE WHICH MEANS IF THE CODE HAS 3 INPUTS AND IT EXECUTES IN 2 MS AND IF WE INCREASE THE INPUTS TO 6 THEN TIME TAKEN TO EXECUTE THE CODE IS 4MS 
   example-
   IF WE TAKE A REAL WORLD EXAMPLE " READING THE BOOK OF 'N' PAGES"
   if the time taken to read the book from cover to cover which has 100 pages is 3 hours then time taken to complete the book of the double size must be twiceof its time then the total time is 6 hours 

   4. O(n \log n)— NOTATION 
   THIS IS ALSO KNOWN AS Linearithmic Time NOTATION AND SMART SORTING COMPLEXITY (
   THIS COMPLEXITY IS THE COMBINATION OF O(n) AND O(logn) THIS IS USED WHEN WE DIVIDE THE PROBLEM IN HLAF CONTINUOUSLY UNTIL WE GET A SOLUTION BUT AT THE EACH STEP WE HAVE TO LOOK THROUGH ALL THE ELEMENTS TO PUT THEM BACK TOGETHER 
   example-
   THE REAL WORLD EXAPMPLE FOR THIS IS "OUR PHONE CONTACT BOOK"
   suppose we have 300 cintacts in our mobile our mobile sorts them in the alphabetical order if we need the contat name 'ram' here starting with 'r' so it 1st sorts all the contacts whose 1st letter is 'r' and so on until it finds the contact 'ram'.



   5. O(n^2) — Quadratic Time
   THIS IS ALSO KNOWN AS EVERY WITH EVERYINE COMPLEXITY 
   IN THIS IF THS SIZE OF INPUT INCREASES THE TIME COMPLEXITY ALSO INCREASES LIKE If you have 10 items, it takes 100 steps. If you have 1,000 items, it takes 1,000,000 steps!
   example-
   THE REAL WORLD EXAPMPLE IS CLASSROOM WITH n STUDENTS 
   in classroom of n students the teacher wants to find out the whose birthday's are on same days s othe teacher starts with jan , feb .... up to dec here the number of comaprisons are too high so there is anopther way possible 
       by pointing one student birthday asking remaing students to whose birthda is on that day by doing this we can reduce the number of comparisions by half 