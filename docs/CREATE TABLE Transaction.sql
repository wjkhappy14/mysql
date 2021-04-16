CREATE TABLE `TransactionItem` (
  `Id` char(100) CHARACTER SET utf8mb4  NOT NULL,
  `UserId` char(20) CHARACTER SET utf8mb4  NOT NULL,
  `AccountNo` char(20) CHARACTER SET utf8mb4  NOT NULL,
  `BankNo` char(20) CHARACTER SET utf8mb4  NOT NULL,
  `Amount` decimal(10,0) NOT NULL,
  `Status` tinyint NOT NULL,
  `LastUpdateTime` bigint NOT NULL,
  `Comment` tinytext NOT NULL,
  PRIMARY KEY (`Id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

create table UserAccount
(
 UserId int  auto_increment  NOT NULL primary key,
 Balance  decimal(10,2) NOT NULL,
 LastUpdateTime datetime NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
