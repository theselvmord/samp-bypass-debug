# SA:MP 0.3.7 R5

> Aviso: Aconselho usar Auto-Inject pois a verificação do Modo Debug acontece desde do DllMain do propio SA:MP.

---

Obs: Quem faz merda é Você, E apenas estamos conseguindo acesso a uma função nativa do propio Mod, Não me responsabilizo por nada =P

# 
![a](https://github.com/tisiohw/samp-bypass-debug/blob/main/code_ida.png)

- Documentação
  - `dword_1026DFE8` -> Valor a ser Burlado, Meio que é a variavel que indica se você está no Debug Mode ou Não.
  - `sub_10069770`   -> Pelo oque eu vi, ele define qual função tal comando pre definido irá executar, Por Ex: o "/quit" vai executar a função: sub_100689E0
  - `unk_100E6300`   -> Por mais que seja um valor desconhecido, creio que seja o "/v" pois usa a mesma função do "/vehicle".

# Comandos que poderão ser usados:
- /vsel
- /vehicle
- /player_skin
- /set_weather
- /set_time
