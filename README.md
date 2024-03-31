# SA:MP 0.3.7 R5

> Aviso: Aconselho usar Auto-Inject pois a verificação do Modo Debug acontece desde do DllMain do propio SA:MP.

---

# 
![a](https://github.com/tisiohw/samp-bypass-debug/blob/main/code_ida.png)

- Documentação das Funções
  - `dword_1026DFE8` -> Valor a ser Burlado, Meio que é a variavel que indica se você está no Debug Mode ou Não.
  - `sub_10069770`   -> Pelo oque eu vi, ele define qual função tal comando pre definido irá executar, Por Ex: o "/quit" vai executar a função: sub_100689E0
  - `unk_100E6300`   -> Por mais que seja um valor desconhecido, creio que seja o "/v" pois usa a mesma função do "/vehicle".

- Documentação do Funcionamento das Funções
  - `/vsel` -> Pelo oque eu vi, Meio que funciona como um Ghost Hack pois quando você entra no carro aparentemente você só volta ser sicronizado com o servidor apos sair do veiculo, assim resultando em um possivel chamado de Teleport pelo AntiCheat.
  - `/set_weather` // `/player_skin` -> Funcionando Perfeitamente
  - `/set_time` -> Na maioria dos Servidores a sicronização com o tempo do servidor e o seu meio que entra em conflito

# Comandos que poderão ser usados:
- /vsel
- /vehicle
- /player_skin
- /set_weather
- /set_time
