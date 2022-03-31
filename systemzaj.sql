-- phpMyAdmin SQL Dump
-- version 5.1.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Czas generowania: 31 Mar 2022, 16:47
-- Wersja serwera: 8.0.28
-- Wersja PHP: 7.4.27

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Baza danych: `systemzaj`
--

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `grupyzaj`
--

CREATE TABLE `grupyzaj` (
  `id_grupy` int NOT NULL,
  `nazwa_grupy` int NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `studenci`
--

CREATE TABLE `studenci` (
  `id_studenta` int NOT NULL,
  `imie` varchar(40) NOT NULL,
  `nazwisko` varchar(40) NOT NULL,
  `E-mail` varchar(40) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

--
-- Indeksy dla zrzutów tabel
--

--
-- Indeksy dla tabeli `grupyzaj`
--
ALTER TABLE `grupyzaj`
  ADD PRIMARY KEY (`id_grupy`);

--
-- Indeksy dla tabeli `studenci`
--
ALTER TABLE `studenci`
  ADD PRIMARY KEY (`id_studenta`);

--
-- AUTO_INCREMENT dla zrzuconych tabel
--

--
-- AUTO_INCREMENT dla tabeli `grupyzaj`
--
ALTER TABLE `grupyzaj`
  MODIFY `id_grupy` int NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT dla tabeli `studenci`
--
ALTER TABLE `studenci`
  MODIFY `id_studenta` int NOT NULL AUTO_INCREMENT;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
