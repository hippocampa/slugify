# Slugify

Turn string to _slugs_ format.

> [!WARNING]
> Under development

## Background Stories

when i download an academic paper, some publisher save their file using a unique identifier/index such as `PB-Doc42012523.pdf`. that is acceptable since indexing is the key to make the file unique.

but it is a problem when you read many articles and you want to try to manage them well based on their title. so there is how `slugify` was born. it generates _slug_ format from a string.

i just need to type:

```bash
slugify Attention is All You Need
```

and it will print `attention-is-all-you-need`, and i can rename the file using that name.

simple problem, simple solution.
