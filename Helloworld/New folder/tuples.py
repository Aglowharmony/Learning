def main():
    coordinates =(42.376, -71.115)
    latitude, longitude = coordinates
    print(f"latitude: {latitude}")
    print(f"longitude: {longitude}")

    print(f"{sys.getsizeof(coordinates)} bytes")




main()
