SHOWS = [
    "avatar: the last airbender",
    "Ben 10 ",
    "Arthur",
    " SPongebob Squarepants",
    "phinears and ferb",
    "    kim possible",
    "jimmy neutron",
    "the proud family",
]

def main():
    cleaned_shows = []
    for show in SHOWS:
        cleaned_shows.append(show.strip().title())
    
    print(' '.join(cleaned_shows))
main()
# Strip() - removes the whitespace from the beginning and end of the string
# title() - makes the first letter of each word uppercase
# join() - joins the elements of an iterable to a string