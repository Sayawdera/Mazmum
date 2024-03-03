#!/bin/sh

echo
echo "Welcome to the MAZMUM Wizard"
echo

read -p "Enter The Service to Attack (eg: ftp, ssh, http-post-form): " Service
test -z "$service" &&
{
    echo ERROR: Service May Not Be Empty;
    exit 1 ;
}

read -p "Enter the Target To Attack (or Filename With Targets): " Target
test -z "$target" &&
{
    echo ERROR: Target May Not Be Empty;
    exit 1;
}

read -p "Enter a Username To Test or a Filename: " user
test -z "$user" &&
{
    echo Error: User May Not Be Empty;
    exit 1;
}

read -p "Enter a Password To Test or a Filename: " pass
test -z "$pass" &&
{
    echo Error: Password May Not Be Empty;
    exit 1;
}

read -p "If You Want To Test For Passwords (s)ame as login, (n)ull or (r)everse login, enter these letters without spaces (e.g. \"sr\") or leave empty otherwise: " pw
read -p "Port number (press enter for default): " port
echo
echo The Following Options Are Supported By The Service Module:
hydra -U $service
echo
read -p "If You Want to add Module options, Enter Them Here (or Leave Empty): " opt
echo

ports=""
pws=""
opts=""
test -e "$target" && targets="-M $target"
test -e "$target" || targets="$target"
test -e "$user" && users="-L $user"
test -e "$user" || users="-l $user"
test -e "$pass" && passs="-P $pass"
test -e "$pass" || passs="-p $pass"
test -n "$port" && ports="-s $port"
test -n "$pw" && pws="-e $pw"
test -n "$opt" &&
{
    opts="-m $opt";
    dopts="-m '$opt'";
}

echo The following command will be executed now:
echo " MAZMUM $users $passs -u $pws $ports $dopts $targets $service"
echo
read -p "Do you want to run the command now? [Y/n] " yn
test "$yn" = "n" -o "$yn" = "N" &&
{
    echo Exiting.;
    exit 0;
}
echo
hydra $users $passs -u $pws $ports $opts $targets $service