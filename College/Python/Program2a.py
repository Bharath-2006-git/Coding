import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns

data = np.random.randn(100)
df = pd.DataFrame(data, columns=['Values'])
print("Summary Statistics:")
print(df.describe())

plt.figure(figsize=(10,6), facecolor='pink')  
plt.plot(df['Values'], label='Random Values', color='purple')
plt.title('Line Plot of Random Values', fontsize=18, fontweight='bold')
plt.ylabel('Values', fontsize=18, fontweight='bold')
plt.xlabel('Index', fontsize=18, fontweight='bold')
plt.legend()
plt.grid(True, linestyle='--', linewidth=0.5)
plt.show()

# plt.figure(figsize=(10,6))
# sns.histplot(df['Values'], kde=False, color='pink', edgecolor='red')    
# plt.title('HISTOGRAM USING SEABORN', fontsize=18, fontweight='bold')
# plt.xlabel('Values', fontsize=12, fontweight='bold')
# plt.ylabel('Frequency', fontsize=12, fontweight='bold')

# plt.show()

