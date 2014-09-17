#!/usr/bin/env ruby
# -*- coding: utf-8 -*-

## sort.rb
## Genere des suites de nombres a trier et les trie
## Changer la quantite de nombre aleatoire et le max de ces nombres (en bas du fichier)



# Initialisation tableau de nombres aléatoires compris entre 1 et 'max_number' d'une quantité de 'qty_number'

def init_array(qty_number, max_number)
  arr = []
  i = 0
  while i < qty_number
    tmp_nb = rand(max_number)
    while tmp_nb == 0
      tmp_nb = rand(max_number)
    end
    arr << tmp_nb
    i += 1
  end
  return arr
end


# Fonction affichage (affiche comme un puts d'un tableau)

def disp_array(arr, qty_number)
  i = 0
  puts "Liste des nombres :"
  print '['
  while i < qty_number
    print arr[i]
    if i + 1 < qty_number
      print ", "
    end
    i += 1
  end
  print "]\n"
end


# Fonction de tri à bulles (lente avec bcp de nombres mais fonctionnel)

def sort_array(arr, qty_number)
  yes = 0
  while yes == 0
    i = 0
    yes = 1
    while i < qty_number
      if (arr[i + 1] != nil) && (arr[i] > arr[i + 1]) 
        yes = 0
        tmp_nb = arr[i]
        arr[i] = arr[i + 1]
        arr[i + 1] = tmp_nb
      end
      i += 1
    end
  end
end



#quantité de nombres désirés pour les nombres aléatoires(à modifier, seulement nombre positif superieur a 1)

qty_nb = 20000


#Valeur Maximal pour les nombres aléatoires

max_nb = 100000


# MAIN

array = init_array(qty_nb, max_nb)
disp_array(array, qty_nb)
print "Tri en cours"
sleep(2)
sort_array(array, qty_nb)
disp_array(array, qty_nb)
sleep(1)
print "Tri Terminé\n Verdification avec le vrai tri :\n"
array.sort
disp_array(array, qty_nb)
