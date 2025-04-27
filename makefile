# Compiler and tools
FLEX = flex
BISON = bison
CC = gcc

# Files
LEX_FILE = lex.l
YACC_FILE = yacc.y
TARGET = myplotter
INPUT = input.wiz
OUTPUT = out.py

# Build steps
all: $(TARGET)

$(TARGET): lex.yy.c y.tab.c
	$(CC) -o $(TARGET) lex.yy.c yacc.tab.c -lfl

y.tab.c y.tab.h: $(YACC_FILE)
	$(BISON) -d $(YACC_FILE)

lex.yy.c: $(LEX_FILE)
	$(FLEX) $(LEX_FILE)

compile: $(TARGET)
	./$(TARGET) < $(INPUT) > $(OUTPUT)
	@echo "Generated Python code saved to $(OUTPUT)"

clean:
	rm -f lex.yy.c y.tab.c y.tab.h $(TARGET) $(OUTPUT)
	rm -f bar.png line.png scatter.png

show: clean compile
	python3 PDFtoCSV.py
	python3 out.py

