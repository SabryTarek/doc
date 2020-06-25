# #!/usr/bin/env bash

# echo "Upgrading the system..."
# apt-get update
# apt-get upgrade -y

# echo "Installing apache webserver..."
# apt-get install -y python-software-properties unzip curl apache2 vim git

# echo "ServerName localhost" | tee -a /etc/apache2/apache2.conf

# echo "Installing Mysql..."
# echo mysql-server mysql-server/root_password password root | sudo debconf-set-selections
# echo mysql-server mysql-server/root_password_again password root | sudo debconf-set-selections
# apt-get install -y mysql-server

# echo "Installing php..."
# apt-get install -y php5 php5-json php5-mysql php5-mcrypt php5-curl php5-gd php5-xdebug php5-intl php5-readline

# echo "Configuring xdebug..."
# cat << EOF | sudo tee -a /etc/php5/mods-available/xdebug.ini
# xdebug.scream=1
# xdebug.cli_color=1
# xdebug.show_local_vars=1
# EOF

# echo "Enabling PHP error reporting..."
# sed -i "s/error_reporting = .*/error_reporting = E_ALL/" /etc/php5/apache2/php.ini
# sed -i "s/display_errors = .*/display_errors = On/" /etc/php5/apache2/php.ini
# sed -i "s/disable_functions = .*/disable_functions = /" /etc/php5/cli/php.ini

# echo "Enabling mod_rewrite..."
# a2enmod rewrite
# sed -i "/<Directory \/var\/www\/>/,/<\/Directory>/ s/AllowOverride None/AllowOverride All/" /etc/apache2/apache2.conf
# service apache2 restart

# echo "Installing Composer..."
# curl -sS https://getcomposer.org/installer | php
# mv composer.phar /usr/local/bin/composer

# echo "Restarting Apache..."
# service apache2 restart

# if ! [ -L /var/www ]; then

#     # download wordpress and extract it to the webroot
#     echo "Downloading Wordpress..."
#     curl -s -o /var/www/html/wordpress.zip https://wordpress.org/latest.zip

#     echo "Extracting wordpress archive..."
#     unzip /var/www/html/wordpress.zip -d /var/www/html
#     mv /var/www/html/wordpress/* /var/www/html/
#     rm -rf /var/www/html/wordpress
#     rm /var/www/html/wordpress.zip
#     rm /var/www/html/index.html

#     echo "Changing files permissions..."
#     chown -R www-data:www-data /var/www/html

#     # link the wordpress theme folder with the synced vagrant folder
#     echo "Linking wordpress theme folder with the synced vagrant folder..."
#     ln -fs -T /vagrant/src /var/www/html/wp-content/themes/wp-theme

#     # create the mysql database
#     echo "creating Mysql database..."
#     mysql -u root -proot -e "create database wordpress; GRANT ALL PRIVILEGES ON wordpress.* TO wordpress@localhost IDENTIFIED BY 'wordpress'"

#     # create and configure the wp-config file
#     echo "configuring wordpress..."
#     mv /var/www/html/wp-config-sample.php /var/www/html/wp-config.php
#     sed -i "s/WP_DEBUG', false/WP_DEBUG', true/" /var/www/html/wp-config.php
#     sed -i "s/DB_NAME', 'database_name_here'/DB_NAME', 'wordpress'/" /var/www/html/wp-config.php
#     sed -i "s/DB_USER', 'username_here'/DB_USER', 'wordpress'/" /var/www/html/wp-config.php
#     sed -i "s/DB_PASSWORD', 'password_here'/DB_PASSWORD', 'wordpress'/" /var/www/html/wp-config.php

#     echo "Restarting Apache..."
#     service apache2 restart
#     echo "All Done!"

# fi

read -p "what's your name ? " name; echo "my name is `name`"