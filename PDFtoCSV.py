
import tabula
import pandas as pd
df = tabula.read_pdf("input.pdf", pages = 1)[0] 
df.to_csv('output.csv')
file_path = 'output.csv'
df = pd.read_csv(file_path)
df = df.drop(df.columns[0], axis=1)
df.to_csv(file_path, index=False)

