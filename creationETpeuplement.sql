CREATE TABLE Article(
   id_article INT IDENTITY(1,1),
   designation VARCHAR(50) NOT NULL,
   prixHT DECIMAL(7,2) NOT NULL,
   TVA DECIMAL(5,2) NOT NULL,
   quantite_stock INT,
   seuil_reaprovisionnement INT,
   prix_achat DECIMAL(7,2),
   supprime BIT NOT NULL,
   PRIMARY KEY(id_article)
);

insert into Article (designation, prixHT, TVA, quantite_stock, seuil_reaprovisionnement, prix_achat, supprime) values ('mirror', 64.17, 63.32, 351, 14, 53.98, 0);
insert into Article (designation, prixHT, TVA, quantite_stock, seuil_reaprovisionnement, prix_achat, supprime) values ('couch', 6.6, 37.15, 257, 75, 26.89, 0);
insert into Article (designation, prixHT, TVA, quantite_stock, seuil_reaprovisionnement, prix_achat, supprime) values ('bookshelf', 55.16, 4.05, 382, 17, 77.27, 0);
insert into Article (designation, prixHT, TVA, quantite_stock, seuil_reaprovisionnement, prix_achat, supprime) values ('bookshelf', 67.35, 74.4, 298, 62, 47.93, 0);
insert into Article (designation, prixHT, TVA, quantite_stock, seuil_reaprovisionnement, prix_achat, supprime) values ('mirror x10', 29.26, 46.11, 382, 51, 64.7, 0);
insert into Article (designation, prixHT, TVA, quantite_stock, seuil_reaprovisionnement, prix_achat, supprime) values ('computer', 65.12, 20.14, 382, 51, 64.7, 1);

CREATE TABLE Client(
   numero_client INT IDENTITY(1,1),
   nom VARCHAR(50),
   prenom VARCHAR(50),
   date_naissance DATE,
   supprime BIT NOT NULL,
   PRIMARY KEY(numero_client)
);
insert into Client (nom, prenom, date_naissance,supprime) values ('Aleevy', 'Garreth', '2003-06-11', 0);
insert into Client (nom, prenom, date_naissance,supprime) values ('Kinver', 'Pammy', '2001-06-27', 0);
insert into Client (nom, prenom, date_naissance,supprime) values ('Mulhall', 'Erasmus', '2001-01-11', 0);
insert into Client (nom, prenom, date_naissance,supprime) values ('Roberto', 'Carmon', '2002-11-01', 0);
insert into Client (nom, prenom, date_naissance,supprime) values ('Dwane', 'Fabian', '2004-05-16', 0);
insert into Client (nom, prenom, date_naissance,supprime) values ('Butts', 'Garwin', '2003-03-19', 0);
insert into Client (nom, prenom, date_naissance,supprime) values ('Dovington', 'Caresa', '2004-05-02', 0);
insert into Client (nom, prenom, date_naissance,supprime) values ('Pitkin', 'Marian', '2004-07-31', 0);
insert into Client (nom, prenom, date_naissance,supprime) values ('Goggey', 'Clarinda', '2003-05-29', 0);
insert into Client (nom, prenom, date_naissance,supprime) values ('Stirrip', 'Dunn', '2002-01-08', 0);

CREATE TABLE Adresse(
   id_adresse INT IDENTITY(1,1),
   numero_rue INT NOT NULL,
   rue VARCHAR(50) NOT NULL,
   code_postale VARCHAR(5) NOT NULL,
   ville VARCHAR(50) NOT NULL,
   supprime BIT NOT NULL,
   PRIMARY KEY(id_adresse)
);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (74, 'Kenwood', 76396, 'Czarna Dąbrówka', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (91, 'Lindbergh', 10463, 'Černovice', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (7, 'Dexter', 14606, 'Dauphin', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (84, 'Toban', 71258, 'Si Khoraphum', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (56, 'Union', 95846, 'Rzeczenica', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (64, 'Di Loreto', 50206, 'Talcahuano', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (62, 'Fallview', 99182, 'Grande Prairie', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (93, 'Hooker', 25067, 'Cincinnati', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (87, 'Prentice', 33101, 'Padilla', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (67, 'Almo', 42161, 'Caçapava', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (84, 'Dahle', 72321, 'Sarukhan', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (79, 'Hoard', 18775, 'Titiakar', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (39, 'Main', 51652, 'Rzhev', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (71, 'Ryan', 35277, 'Rizal', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (60, 'Boyd', 72749, 'Liverpool', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (61, 'Redwing', 48232, 'Sindangpanji', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (100, 'Calypso', 98164, 'Xikou', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (47, 'Holy Cross', 80931, 'Várzea Grande', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (90, 'Northwestern', 12082, 'Jietou', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (27, 'Heffernan', 83139, 'Jerusalem', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (59, 'Bowman', 34394, 'Shah Alam', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (30, 'Mendota', 41552, 'Daegu', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (79, 'Butternut', 33126, 'Wilczyce', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (5, 'Coolidge', 79632, 'Sélestat', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (73, 'Golden Leaf', 35845, 'Stockholm', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (91, 'Holmberg', 90607, 'Văn Điển', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (17, 'Dahle', 45325, 'Belsk Duży', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (13, 'Eagle Crest', 95860, 'San Bernardo', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (46, 'Moulton', 98461, 'Kakanj', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (58, 'Merry', 72233, 'Lampa', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (5, 'Lakeland', 17902, 'Guacarí', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (22, 'Dovetail', 95009, 'Kibingo', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (11, 'Thackeray', 95006, 'Torrevieja', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (58, 'Pepper Wood', 29033, 'Wulingyuan', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (15, 'Marquette', 42797, 'Shatian', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (86, 'Blaine', 71114, 'Ciudad Arce', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (26, 'Maple', 27535, 'Stockholm', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (95, 'Messerschmidt', 32225, 'La Coipa', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (75, 'Oriole', 59463, 'Taipingxi', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (2, 'Sullivan', 93625, 'Markog', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (10, 'Northland', 91675, 'San Jose del Monte', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (98, 'Ronald Regan', 70442, 'Gwio Kura', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (91, 'Glendale', 73498, 'White River', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (38, 'Express', 25419, 'Angers', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (3, 'Transport', 57834, 'Örebro', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (33, 'Montana', 70493, 'Mandangoa', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (51, 'Merry', 37609, 'Laiponda', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (16, 'Stang', 26336, 'Beringinjaya', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (28, 'Randy', 64368, 'Haibara', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (66, 'Norway Maple', 56928, 'Đắk Song', 0);
insert into Adresse (numero_rue, rue, code_postale, ville, supprime) values (41, 'Existe pas', 91390, 'Đng', 1);

CREATE TABLE Commande(
   reference_commande VARCHAR(14),
   date_livraison DATE,
   date_emission DATE,
   remise DECIMAL(5,2),
   total_commande DECIMAL(7,2),
   retrait VARCHAR(50),
   supprime BIT NOT NULL,
   id_adresse_livraison INT NOT NULL,
   numero_client INT NOT NULL,
   id_adresse_facturation INT NOT NULL,
   PRIMARY KEY(reference_commande),
   FOREIGN KEY(id_adresse_livraison) REFERENCES Adresse(id_adresse),
   FOREIGN KEY(numero_client) REFERENCES Client(numero_client),
   FOREIGN KEY(id_adresse_facturation) REFERENCES Adresse(id_adresse)
);

insert into Commande (reference_commande, date_livraison, date_emission, remise, total_commande, retrait, supprime, id_adresse_facturation, id_adresse_livraison, numero_client) values ('GaAl2023Man1', '2023-12-05', '2023-03-29', 8.7, 1684.54, 'domicile', 0, 46, 31, 1);
insert into Commande (reference_commande, date_livraison, date_emission, remise, total_commande, retrait, supprime, id_adresse_facturation, id_adresse_livraison, numero_client) values ('CaRo2023Lai1', '2023-12-06', '2023-03-16', 11.43, 172.17, 'magasin', 0, 47, 28, 4);
insert into Commande (reference_commande, date_livraison, date_emission, remise, total_commande, retrait, supprime, id_adresse_facturation, id_adresse_livraison, numero_client) values ('FaDw2023Tor1', '2023-12-09', '2023-10-21', 1.21, 2227.09, 'domicile', 1, 33, 20, 5);
insert into Commande (reference_commande, date_livraison, date_emission, remise, total_commande, retrait, supprime, id_adresse_facturation, id_adresse_livraison, numero_client) values ('FaDw2023Tor2', '2023-12-09', '2023-10-21', 1.21, 2227.09, 'domicile', 0, 33, 20, 5);

CREATE TABLE Reglement(
   id_reglement INT IDENTITY(1,1),
   moyen_paiement VARCHAR(50) NOT NULL,
   date_paiement DATE NOT NULL,
   solde_reglement DECIMAL(7,2) NOT NULL,
   reference_commande VARCHAR(14) NOT NULL,
   supprime BIT NOT NULL,
   PRIMARY KEY(id_reglement),
   FOREIGN KEY(reference_commande) REFERENCES Commande(reference_commande)
);

insert into Reglement (moyen_paiement, date_paiement, solde_reglement, reference_commande, supprime) values ('Apple Pay', '2023-12-02', 1000, 'GaAl2023Man1', 0);
insert into Reglement (moyen_paiement, date_paiement, solde_reglement, reference_commande, supprime) values ('credit card', '2023-12-02', 684.54, 'GaAl2023Man1', 0);
insert into Reglement (moyen_paiement, date_paiement, solde_reglement, reference_commande, supprime) values ('cash', '2023-12-02', 12.69, 'CaRo2023Lai1', 0);
insert into Reglement (moyen_paiement, date_paiement, solde_reglement, reference_commande, supprime) values ('debit card', '2023-12-02', 54.21, 'CaRo2023Lai1', 0);
insert into Reglement (moyen_paiement, date_paiement, solde_reglement, reference_commande, supprime) values ('Apple Pay', '2023-12-02', 2227.09, 'FaDw2023Tor1', 0);

CREATE TABLE Personnel(
   id_personnel INT IDENTITY(1,1),
   nom VARCHAR(50) NOT NULL,
   prenom VARCHAR(50) NOT NULL,
   date_embauche DATE,
   id_superieur INT,
   supprime BIT NOT NULL,
   id_adresse INT NOT NULL,
   PRIMARY KEY(id_personnel),
   UNIQUE(id_adresse),
   FOREIGN KEY(id_adresse) REFERENCES Adresse(id_adresse)
);
insert into Personnel (nom, prenom, date_embauche, id_superieur, supprime, id_adresse) values ('McPeake', 'Deny', '2023-01-13', 7, 0, 9);
insert into Personnel (nom, prenom, date_embauche, id_superieur, supprime, id_adresse) values ('Dobrovolny', 'Rustin', '2023-01-03', 4, 0, 20);
insert into Personnel (nom, prenom, date_embauche, id_superieur, supprime, id_adresse) values ('Urling', 'Vassili', '2023-11-29', 6, 0, 7);
insert into Personnel (nom, prenom, date_embauche, id_superieur, supprime, id_adresse) values ('Shackesby', 'Gasper', '2023-03-08', 4, 0, 4);
insert into Personnel (nom, prenom, date_embauche, id_superieur, supprime, id_adresse) values ('Calveley', 'Farrah', '2023-05-01', 1, 0, 10);
insert into Personnel (nom, prenom, date_embauche, id_superieur, supprime, id_adresse) values ('Fattore', 'Benedict', '2023-10-03', 1, 0, 5);
insert into Personnel (nom, prenom, date_embauche, id_superieur, supprime, id_adresse) values ('Sked', 'Pierce', '2023-10-13', null, 0, 12);
insert into Personnel (nom, prenom, date_embauche, id_superieur, supprime, id_adresse) values ('Nash', 'Theressa', '2023-01-25', 3, 0, 17);
insert into Personnel (nom, prenom, date_embauche, id_superieur, supprime, id_adresse) values ('Fumagallo', 'Leeanne', '2023-08-06', 7, 0, 14);
insert into Personnel (nom, prenom, date_embauche, id_superieur, supprime, id_adresse) values ('Leonie', 'Mathice', '2023-01-20', 3, 1, 1);


CREATE TABLE CONTENIR(
   id_article INT,
   reference_commande VARCHAR(14),
   quantite INT NOT NULL,
   PRIMARY KEY(id_article, reference_commande),
   FOREIGN KEY(id_article) REFERENCES Article(id_article),
   FOREIGN KEY(reference_commande) REFERENCES Commande(reference_commande)
);

insert into CONTENIR (id_article, reference_commande, quantite) values (4, 'FaDw2023Tor1', 10);
insert into CONTENIR (id_article, reference_commande, quantite) values (2, 'GaAl2023Man1', 7);
insert into CONTENIR (id_article, reference_commande, quantite) values (5, 'FaDw2023Tor1', 9);
insert into CONTENIR (id_article, reference_commande, quantite) values (1, 'GaAl2023Man1', 6);
insert into CONTENIR (id_article, reference_commande, quantite) values (5, 'GaAl2023Man1', 1);
insert into CONTENIR (id_article, reference_commande, quantite) values (1, 'FaDw2023Tor1', 3);
insert into CONTENIR (id_article, reference_commande, quantite) values (4, 'CaRo2023Lai1', 3);
insert into CONTENIR (id_article, reference_commande, quantite) values (3, 'FaDw2023Tor1', 6);
insert into CONTENIR (id_article, reference_commande, quantite) values (4, 'GaAl2023Man1', 5);
insert into CONTENIR (id_article, reference_commande, quantite) values (3, 'GaAl2023Man1', 6);

CREATE TABLE POSSEDER(
   numero_client INT,
   id_adresse INT,
   type_adresse BIT NOT NULL,
   PRIMARY KEY(numero_client, id_adresse),
   FOREIGN KEY(numero_client) REFERENCES Client(numero_client),
   FOREIGN KEY(id_adresse) REFERENCES Adresse(id_adresse)
);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (2, 29, 1);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (1, 46, 0);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (5, 20, 1);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (1, 43, 0);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (10, 30, 1);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (8, 44, 1);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (10, 42, 1);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (3, 22, 0);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (10, 41, 1);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (10, 25, 1);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (8, 35, 0);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (6, 37, 0);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (5, 33, 0);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (5, 43, 0);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (10, 27, 0);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (1, 28, 0);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (2, 21, 1);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (1, 21, 0);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (6, 46, 0);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (7, 50, 1);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (9, 34, 0);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (10, 44, 1);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (4, 28, 1);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (2, 38, 1);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (6, 45, 1);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (6, 23, 0);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (3, 35, 0);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (2, 22, 1);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (6, 28, 0);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (4, 49, 0);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (3, 34, 1);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (10, 36, 0);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (4, 47, 0);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (8, 42, 0);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (8, 20, 0);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (8, 48, 0);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (3, 21, 0);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (1, 45, 0);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (8, 37, 1);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (1, 31, 1);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (1, 32, 1);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (7, 39, 1);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (6, 36, 0);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (5, 36, 0);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (8, 38, 1);
insert into POSSEDER (numero_client, id_adresse, type_adresse) values (4, 23, 1);
