# Proto

### Comments

> Greetings<br>
> I wanted to begin my comments by thanking you for this challenge.  I enjoyed doing this assignment, it was very enjoyable to research new aspects of data types and how to translate them.  This assignment was a very practical challenge that could be applied in a real life business solution.  On my current team, I had the task of decrypting transaction data before as well.  I have learned many new skills from completing this assignment and am grateful for the opportunity.

### Parse a custom protocol format

> Reading the Binary File
>> To initially read the header record, it took research (references mentioned below).  Also there was a lot of trial and error.
>
>> After the header record was read, more research and testing was needed.  I re-read the instructions several times and using the data from the header, the translation for the rest of the file was clear.
>
>> In the past I have programatically read and packed binary files, mostly base 64.  After completing this assignment I now have much greater knowledge about 'C' type binary structures.
>
> Displaying the results
>> Just as the instructions mentioned, the supplied program displays the data in the following format:
>>```
>>total credit amount=9366.019984181883
>>total debit amount=18203.69953340208
>>autopays started=10
>>autopays ended=8
>>balance for user 2456938384156277127=0.0
>>```
>
>> Additionally, I assumed the user would also want the results of the entire file.  So the "-export" option was also added.  This option must be run with root privileges.  It will write the unpacked data to a file "txnexp.psv".  The permissions of the file are then changed to "root:root -rw-rw----" for security reasons.
>
> Running the program
>> For the desired solution to the assignment run the following command:
>> ```
>> python3 main.py
>> ```
>> To also export the unpacked transaction log run the following:
>> ```
>> sudo python3 main.py -export
>> ```

<br>

#### Conclusion

I thank you once again for this wonderful opportunity.  Please give my regards and commendation to the ones who thoroughly chose and engineered these assignments, also to the ones involved in processing and checking them.  I consider myself privileged and very grateful to be considered for this position and appreciate your time and consideration very much.

<br>
<br>

#### References:
- https://docs.python.org/3/library/struct.html
- http://tuttlem.github.io/2016/04/06/packing-data-with-python.html
- https://www.devdungeon.com/content/working-binary-data-python
- https://stackoverflow.com/questions/38259484/parse-binary-format-with-python/38259666#38259666
