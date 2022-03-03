# Provision

## Provision Vagrant with Ansible

### Comments

> Greetings<br>
> I wanted to begin my comments by thanking you for this challenge.  I am familiar with some of the technology used but do not use them on a daily basis.  This assignment was a very practical challenge that could be applied in a real life business solution.  I have learned many new skills from completing this assignment and am grateful for the opportunity.

### Part one

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

### Part two

> Ansible playbook
>> I created and placed the nginx.conf in the following directories:
>> <br>/usr/local/nginx/conf
>> <br>/etc/nginx
>> <br>/usr/local/etc/nginx
>> <br>The reason was because, these are the standard locations for the nginx.conf file, so to ensure proper configuration I assumed the use of all three directories could be possible.  After which the permissions were changed to owned as root:root and 744.
>
>> Ther certificate was placed in '/etc/pki/tls/certs/' and the key was placed in '/etc/pki/tls/private/'.  According to a trusted source on stackoverflow.com "The directory permissions should be 700, the file permissions on all the files should be 600, and the directory and files should be owned by root."
>
>> In order to make the 'run' bash script into a system service i wrote a config 'service.txt' on the host server to be written to '/etc/systemd/system/application.service' on the vagrant server.  After which the permissions were changed to match the services in the same directory.  I also added the service to the startup procedures, assuming it would be used in the future.
>
>> After restarting nginx, I had the playbook print the status of both nginx and the application to ensure the user that both needed services were up and running.

### Instructions
- Run the following command:
```
./provision.sh
```
#### Conclusion
I thank you once again for this wonderful opportunity.  Please give my regards and commendation to the ones who thoroughly chose and engineered these assignments, also to the ones involved in processing and checking them.  I consider myself privileged and very grateful to be considered for this position and appreciate your time and consideration very much.
<br>
<div style="text-align: right"> Sincerely, </div>
<div style="text-align: right"> Andrew McCrevan </div>
