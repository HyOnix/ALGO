#ifndef obj_h
#define obj_h
#define t_tab 10

void FillTab(int tab[t_tab][t_tab],int inc);


/**
 * \fn void putInt( int input )
 * \brief  permet d'afficher un entier à l'écran grâce à la fonction putchar
 *
 * \param[in] input: entier à afficher
 * \return riensss
 */
void putInt( int input );

/**
 * \fn void putInt( int input )
 * \brief  permet d'afficher un entier à l'écran grâce à la fonction putchar
 *
 * \param[in] input: entier à afficher
 * \return rien
 */
void foo( int input);

/**
 * \fn char void putIntTab( int tab[20][20])
 * \brief  permet d'afficher un tableau 2D de nombres entier
 *
 * \param[in] tab: tableau à afficher
 * \return rien
 */
void putIntTab( int tab[10][10]);

/**
 * \fn double getDouble( void )
 * \brief  permet de saisir un nombre de type double
 *
 * \param[in] void
 * \return un double

   double getDouble( void );
 */
void menu(char menu_option);

#endif
