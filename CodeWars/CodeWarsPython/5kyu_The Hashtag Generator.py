def generate_hashtag(s):
    return "#" + s.title().replace(" ","").strip() if s != "" and len(s) < 140 else False