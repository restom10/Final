RestomJose_final_15.png: RestomJoseFinal.cpp RestomJoseFinal.py datos.txt
	python RestomJoseFinal.py
    
RestomJoseFinal.py: datos.txt a.out
	./a.out

a.out: RestomJoseFinal.cpp
	g++ RestomJoseFinal.cpp
    

   