-- create insert trigger
delimiter //
create trigger before_insert_user
before insert
on users for each row
begin
set NEW.total_salary = NEW.per_hour_salary * NEW.working_hour;
end; //
delimiter ;

-- create update trigger
DELIMITER //
CREATE TRIGGER before_update_user
BEFORE UPDATE
ON users FOR EACH ROW
BEGIN
    SET NEW.total_salary = NEW.per_hour_salary * NEW.working_hour;
END; //
DELIMITER ;

-- create trigger : to update account count of user
delimiter //
create trigger before_open_account
before insert
on accounts for each row
begin
update users set acc_count = acc_count + 1 where user_id = NEW.user_id; -- new wala accounts ka hai
end ;//
delimiter ;

-- create trigger : close account trigger
delimiter //
create trigger before_close_accounts
before delete
on accounts for each row
begin
update users set acc_count = acc_count - 1 where user_id = OLD.user_id;
end; //
delimiter ;