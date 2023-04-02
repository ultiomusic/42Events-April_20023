import requests

pokemon_name = input("Enter the name of a Pokemon: ")
response = requests.get("https://pokeapi.co/api/v2/pokemon/" + pokemon_name.lower())
if response.status_code == 200:
	print("Name: " + pokemon_name.capitalize())
	print("Abilities: ")
	for ability in response.json()["abilities"]:
		print("-", ability["ability"]["name"].capitalize())
