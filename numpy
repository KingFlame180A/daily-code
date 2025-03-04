import numpy as np

#import pyplot from matplotlib to help us draw graphs and pictures
import matplotlib.pyplot as plt

#import fits from astropy.io to open and use special space pictures files called FITS
from astropy.io import fits

#import download_file from astropy.utils.data to grab data from the internet without leaving our code
from astropy.utils.data import download_file
image_file = download_file('https://chandra.harvard.edu/photo/2013/w49b/fits/w49b_0.5-8.0_flux.fits', cache=True)

from astropy.visualization import LogStretch, PowerStretch

from astropy.visualization.mpl_normalize import ImageNormalize

import pprint #"pretty print" module
header = fits.getdata(image_file)
print(header)

print('Min:', np.min(image_data))
print('Max:', np.max(image_data))
print('Mean:', np.mean(image_data))
print('Stdev:', np.std(image_data))

plt.figure(figsize=(10,10))
plt.imshow(image_data, cmap='color')
plt.colorbar()
plt.show()
