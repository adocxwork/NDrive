use learn;
-- create table user
create table users (
	user_id int primary key,
    name varchar(200),
    per_hour_salary int default 0,
    working_hour int default 0,
    total_salary int default 0
);

insert into users (user_id, name, per_hour_salary, working_hour)
values
(1005, 'Aditya Gupta', 15, 10);
select * from users;

update users
set working_hour = 11, per_hour_salary = 500 where user_id = 1001;

alter table users add column acc_count int default 0;

-- create table account
create table accounts(
	account_no int primary key,
    user_id int,
    balance int default 0
);
insert into accounts values(2003, 1002, 150000);
select * from accounts;
delete from accounts where account_no = 2003;