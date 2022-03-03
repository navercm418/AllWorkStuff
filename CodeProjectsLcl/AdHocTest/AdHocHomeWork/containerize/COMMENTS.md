# Containerize

## Containerize a Python application

### Comments

> Greetings<br>
> I wanted to begin my comments by thanking you for this challenge.  I am familiar with some of the technology used but do not use them on a daily basis.  This assignment was a very practical challenge that could be applied in a real life business solution.  I have learned many new skills from completing this assignment and am grateful for the opportunity.  Unfortunately i was not able to get this to work successfully.  The http part works but not https.  I apologise for taking so long, and I wanted to submit what i had.  As a consolation I also completed the "proto" homework assignment, as it was more suited to my skills.

### Config

> NGINX config
>> I focused on using simple methods to accomplish the task while applying best practices and security.
>
>> Any 'http' request to the server would be forwarded to 'https://127.0.0.1:443'.  This would ensure proper ssl tls connections on all requests.
>
>> Based on research, I used 'TLSv1.2 & TLSv1.3' for ssl protocols (https://www.calcomsoftware.com/leaving-tls1-2-using-tls1-3/#:~:text=The%20most%20widely%20used%20versions,is%20thus%20recommended%20for%20use)
>
>> Also based on research, i used these recommended ssl ciphers: 'ECDHE-RSA-AES256-GCM-SHA512:DHE-RSA-AES256-GCM-SHA512:ECDHE-RSA-AES256-GCM-SHA384:DHE-RSA-AES256-GCM-SHA384:ECDHE-RSA-AES256-SHA384' (https://raymii.org/s/tutorials/Strong_SSL_Security_On_nginx.html)
>
>> It is advisable to assign the max-age directive’s value to be greater than 10368000 seconds (120 days).  Therefore I used the option 'Strict-Transport-Security "max-age=31536000" always'.
>
>> I set 'ssl_verify_depth' as '1' because there is only one cert and the path to it is absolute.

### Containers

> App
>> I created a simple Dockerfile for the app
>
>> The application files will transfer and set the flask variable

> Nginx
>> I created a simple Dockerfile for the nginx server
>
>> The config files will transfer to the appropriate locations

> Docker Compose
>> The docker-compose.yml has the instruction to combine the two containers and run the programs
>
>> I tried to keep containers up to date and light

### Instructions
- Run the following command:
```
./validate.sh
```
#### Conclusion
I thank you once again for this wonderful opportunity.  Please give my regards and commendation to the ones who thoroughly chose and engineered these assignments, also to the ones involved in processing and checking them.  I consider myself privileged and very grateful to be considered for this position and appreciate your time and consideration very much.
<br>
