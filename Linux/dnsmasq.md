dnsmasq
==========


dnsmasq
dnscrypt-proxy





The default value for the cache size is 150 and if you set it to 0, you can disable caching. A large cache size might impact performance because dnsmasq keeps all caching in memory.
# Set the cachesize here.
#cache-size=150



If you lookup a domain that is invalid (e.g. askdjhfakshdflasjkdflasj.com), by default dnsmasq caches this information and returns “no such domain” from its cache every time you lookup the same invalid domain. If you want to disable this functionality, you can comment in the option ‘no-negcache’


Keep in mind that each time you change an option, you have to restart dnsmasq with ‘systemctl restart dnsmasq’ to reload the new option. As mentioned above, restarting it clears the cache as well.