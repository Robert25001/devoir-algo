Algorithme affiche la somme s=1+10+10^2+...+10^N
Variable i , n : entier ;
	 s : r茅el ;
Debut
	afficher("Entrez un nombre N: ") ;
	lire(n) ;
	s <- 0 ;
	Pour (i<-0 ; i<=n ; i<-i+1)
		s <- s+(10^i) ;
	FinPour
	afficher("La somme vaut ",s) ;
Fin
