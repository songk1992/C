<?php
  $host     = "localhost:3306";
  $username = "root";
  $password = "1234";
  $database = "mysql";

  $connect = mysql_connect( $host, $username, $password );
  mysql_select_db($database);
  mysql_query("SET NAMES UTF8");

  $sql = "SELECT * FROM raspberrypi";
  $result = mysql_query($sql);
  $rowcnt = mysql_num_rows($result);

  while( $row = mysql_fetch_array($result, MYSQL_BOTH) ) {
    echo $row['memo'];
  }
?>
