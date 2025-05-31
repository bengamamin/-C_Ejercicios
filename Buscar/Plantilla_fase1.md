📘 Bitácora – Fase 1: Reconocimiento Ofensivo

---

## 🔍 Subfase 1.1 – Exploración Pasiva

| Prueba        | Resultado | ¿Responde? | Latencia/Saltos | Deducción |
|---------------|-----------|------------|------------------|-----------|
| ping          |           |            |                  |           |
| traceroute    |           |            |                  |           |
| whois         |           |            |                  |           |
| nslookup      |           |            |                  |           |
| dig           |           |            |                  |           |

---

## 📡 Subfase 1.2 – Reconocimiento Activo Controlado

| Herramienta | IP Objetivo | Resultado | Puertos Abiertos / Tráfico | Deducción |
|-------------|-------------|-----------|------------------------------|-----------|
| nmap -sn    |             |           |                              |           |
| nc -zv      |             |           |                              |           |
| tcpdump     |             |           |                              |           |

---

## 🧾 Subfase 1.3 – Identificación de Servicios

| Puerto | Herramienta | Respuesta Recibida | Servicio Detectado | Versión | Deducción |
|--------|-------------|---------------------|---------------------|---------|-----------|
| 21     | nc          |                     |                     |         |           |
| 21     | telnet      |                     |                     |         |           |
| 80     | curl        |                     |                     |         |           |
| -      | nmap -sV    |                     |                     |         |           |

---

## 🧠 Conclusión de Fase 1

- IPs activas detectadas:
- Servicios visibles:
- Subdominios:
- Tecnologías utilizadas:
- Siguiente paso lógico:

---

