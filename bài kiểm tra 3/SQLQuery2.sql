create database SellPoint
go
use SellPoint 
go
--Bang Categories
create table Categories(
CateID char(6) primary key,
CateName nvarchar(100) not null,
Description nvarchar(200)
)
go
insert into Categories(CateID,CateName,Description)values('ABC','RAM','RAM is the main memory of the computer and control systems')
insert into Categories(CateID,CateName,Description)values('DEF','CPU','performs computer program instructions by performing arithmetic operations')
insert into Categories(CateID,CateName,Description)values('GHI','HDD','equipment used to store data on the surface of circular plates')
go
select * from Categories
go
drop table Categories
go
--BANG Parts
create table Parts
(
PartID int identity primary key,
PartName nvarchar(100) not null,
CateID char(6) ,
Description nvarchar(100),
Price money not null default'0',
Quantity int default'0',
Warranty int default'1',
Photo nvarchar(200) default'photo/nophoto.png',
constraint huhu foreign key (CateID) references Categories(CateID)
)
go
insert into Parts(PartName,CateID,Description,Price,Quantity,Warranty,Photo)Values
('ChipSPD,Clock,Memory Bank','ABC','SPD means Serial Presence Detection,SDRAM operation is synchronized with the signal clock',$500,3,12,'Ram.png')
insert into Parts(PartName,CateID,Description,Price,Quantity,Warranty,Photo)Values
('Logic ALU,','DEF','Perform arithmetic and logic calculations,stores parameters for the ALU to calculate and store ',$600,1,24,'Cpu.png')
insert into Parts(PartName,CateID,Description,Price,Quantity,Warranty,Photo)Values
('Magnetic disk,Printed Circuit Board','GHI','The magnetic disk is an important place in the hard drive ',$50,2,6,'Hdd.png')
go
select * from Parts
go
drop table Parts
go
--4. List all parts in the store with price > 100$.
select * from Parts
where Price >$100
go
--5List all parts of the category ‘CPU’.
SELECT c.CateName,p.PartName
FROM Categories c
JOIN Parts p ON p.CateID=c.CateID
WHERE c.CateName='CPU'
GO
--6Create a view v_Parts contains the following information (PartID, PartName, CateName,Price, Quantity) from table Parts and Categories.
CREATE VIEW V_Parts AS
SELECT P.PartID, P.PartName, C.CateName, P.Price, P.Quantity
FROM Parts P
JOIN Categories C ON C.CateID=P.CateID
GO
select * from V_Parts
go
--7. Create a view v_TopParts about 5 parts with the most expensive price.
