CREATE DATABASE assessment;

USE assessment;

CREATE TABLE Nobel_win(
   YEAR int not null,
   SUBJECT text not null,
   WINNER varchar(20) not null,
   COUNTRY text not null,
   CATEGORY text not null);
   
ALTER TABLE Nobel_win
MODIFY WINNER VARCHAR(30);
  
INSERT INTO Nobel_win(YEAR,SUBJECT,WINNER,COUNTRY,CATEGORY) VALUES
(1970,"Physics","Hannes Alfven","Sweden","Scientist"),
(1970,"Physics","Louis Neel","France","Scientist"),
(1970,"Chemistry","Luis Federico Leloir","France","Scientist"),
(1970,"Physiology","Ulf Von Euler","Sweden","Scientist"),
(1970,"Physiology","Bernard Katz","Germany","Scientist"),
(1970,"Literature","Aleksandr Solzhenitsyn","Russia","Linguist"),
(1970,"Economics","Paul Samuelson","USA","Economist"),
(1970,"Physiology","Julius Axelrod","USA","Scientist"),
(1971,"Physics","Dennis Gabor","Hungary","Scientist"),
(1971,"Chemistry","Gerhard Herzberg","Germany","Scientist"),
(1971,"Peace","Willy Brandt","Germany","Chancellor"),
(1971,"Literature","Pablo Neruda","Chile","Linguist"),
(1971,"Economics","Simon Kuznets","Russia","Economist"),
(1978,"Peace","Anwar al-Sadat","Egypt","President"),
(1978,"Peace","Menachem Begin","Israel","Prime Minister"),
(1987,"Chemistry","Donald J. Cram","USA","Scientist"),
(1987,"Chemistry","Jean-Marie Lehn","France","Scientist"),
(1987,"Physiology","Susumu Tonegawa","Japan","Scientist"),
(1994,"Economics","Reinhard Selten","Germany","Economist"),
(1994,"Peace","Yitzhak Rabin","Israel","Prime Minister"),
(1987,"Physics","Johannes Georg Bednorz","Germany","Scientist"),
(1987,"Literature","Joseph Brodsky","Russia","Linguist"),
(1987,"Economics","Robert Solow","USA","Economist"),
(1994,"Literature","Kenzaburo Oe","Japan","Linguist");

SELECT * FROM Nobel_win;

-- Write sql query to find the nobel prize winners of the year 1970. Return year,subject
-- and winner

SELECT YEAR,SUBJECT,WINNER 
FROM Nobel_win 
WHERE YEAR = 1970;

-- Write sql query to find the nobel prize winners in chemistry between the years 1965
-- and 1975. Begin and end values are includedReturn year, subject, winner and
-- country

SELECT YEAR,SUBJECT,WINNER,COUNTRY 
FROM Nobel_win
WHERE SUBJECT = 'Chemistry'
AND
YEAR BETWEEN 1965 AND 1975;

-- Write sql query to retrieve the details of the winners whose first name matches with
-- the string ‘Louis’. Return year,subject,winner,country

SELECT YEAR,SUBJECT,WINNER,COUNTRY 
FROM Nobel_win 
WHERE WINNER LIKE "Louis%";

-- Write sql query to find Nobel prize winners for the subject that does not begin with
-- the letter ‘P’. Order the result by year, descending and winner in ascending

SELECT YEAR,SUBJECT,WINNER
FROM Nobel_win
WHERE SUBJECT NOT LIKE "P%"	
ORDER BY YEAR DESC, WINNER ASC;

-- Write sql query to find the details of 1970 Nobel prize winners. Order the result by
-- subject, ascending except for ‘Chemistry’ and ‘Economics’ which will come at the
-- end of the result set. Return year, subject, winner , country and category.

SELECT YEAR, SUBJECT, WINNER, COUNTRY, CATEGORY
FROM Nobel_win
WHERE YEAR = 1970  
ORDER BY 
  CASE 
    WHEN SUBJECT = 'Chemistry' THEN 1
    WHEN SUBJECT = 'Economics' THEN 2
    ELSE 0
  END,
  SUBJECT ASC;