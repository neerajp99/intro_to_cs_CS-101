int i,j,k;
colours = ["red", "green", "blue", "yellow"]
sizes = ["tiny", "small", "large", "huge"]
things = ["car", "train", "box", "hat"]

for(i=0;i<coloursLength;++i)
{
        for(j=0;j<sizesLength;++j)
        {
            print(colours[i],sizes[j])
        }
}

}
// VM479:5 red tiny
// VM479:5 red small
// VM479:5 red large
// VM479:5 red huge
// VM479:5 green tiny
// VM479:5 green small
// VM479:5 green large
// VM479:5 green huge
// VM479:5 blue tiny
// VM479:5 blue small
// VM479:5 blue large
// VM479:5 blue huge
// VM479:5 yellow tiny
// VM479:5 yellow small
// VM479:5 yellow large
// VM479:5 yellow huge

for(i=0;i<sizesLength;++i)
{
        for(j=0;j<thingsLength;++j)
        {
            print(sizes[i],things[j])
        }
}


// VM506:5 tiny car
// VM506:5 tiny train
// VM506:5 tiny box
// VM506:5 tiny hat
// VM506:5 small car
// VM506:5 small train
// VM506:5 small box
// VM506:5 small hat
// VM506:5 large car
// VM506:5 large train
// VM506:5 large box
// VM506:5 large hat
// VM506:5 huge car
// VM506:5 huge train
// VM506:5 huge box
// VM506:5 huge hat


for(i=0;i<thingsLength;++i)
{
        for(j=0;j<coloursLength;++j)
        {
            for(k=0;k<sizesLength;++k)
            {
            print(sizes[i],things[j],colours[k])
            }
        }
}

// VM586:7 tiny car red
// VM586:7 tiny car green
// VM586:7 tiny car blue
// VM586:7 tiny car yellow
// VM586:7 tiny train red
// VM586:7 tiny train green
// VM586:7 tiny train blue
// VM586:7 tiny train yellow
// VM586:7 tiny box red
// VM586:7 tiny box green
// VM586:7 tiny box blue
// VM586:7 tiny box yellow
// VM586:7 tiny hat red
// VM586:7 tiny hat green
// VM586:7 tiny hat blue
// VM586:7 tiny hat yellow
// VM586:7 small car red
// VM586:7 small car green
// VM586:7 small car blue
// VM586:7 small car yellow
// VM586:7 small train red
// VM586:7 small train green
// VM586:7 small train blue
// VM586:7 small train yellow
// VM586:7 small box red
// VM586:7 small box green
// VM586:7 small box blue
// VM586:7 small box yellow
// VM586:7 small hat red
// VM586:7 small hat green
// VM586:7 small hat blue
// VM586:7 small hat yellow
// VM586:7 large car red
// VM586:7 large car green
// VM586:7 large car blue
// VM586:7 large car yellow
// VM586:7 large train red
// VM586:7 large train green
// VM586:7 large train blue
// VM586:7 large train yellow
// VM586:7 large box red
// VM586:7 large box green
// VM586:7 large box blue
// VM586:7 large box yellow
// VM586:7 large hat red
// VM586:7 large hat green
// VM586:7 large hat blue
// VM586:7 large hat yellow
// VM586:7 huge car red
// VM586:7 huge car green
// VM586:7 huge car blue
// VM586:7 huge car yellow
// VM586:7 huge train red
// VM586:7 huge train green
// VM586:7 huge train blue
// VM586:7 huge train yellow
// VM586:7 huge box red
// VM586:7 huge box green
// VM586:7 huge box blue
// VM586:7 huge box yellow
// VM586:7 huge hat red
// VM586:7 huge hat green
// VM586:7 huge hat blue
// VM586:7 huge hat yellow





// If we swap the for loops, the result will still be the same.
