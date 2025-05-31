# 🧠 FASE 1 – RECONOCIMIENTO

## 🎯 Objetivo
Descubrir la superficie de ataque de una máquina sin generar ruido.

---

## 🔹 Subfase 1.1 – Exploración Pasiva

| Herramienta | Comando | ¿Qué mide? | ¿Qué debo observar? | ¿Qué deduzco? |
|------------|---------|-------------|----------------------|----------------|
| ping | ping -c 4 IP | Latencia y si responde ICMP | ¿Contesta? ¿Pierde paquetes? ¿Es lenta? | Red directa o ICMP bloqueado |
| traceroute | traceroute IP | Ruta que toma el tráfico | ¿Pasa por muchos saltos? ¿Dónde se frena? | Puede haber firewall o DMZ |
| whois | whois dominio.com | Dueño y registrar | ¿Es corporativo? ¿Privado? | Ingeniería social o mapping de infraestructura |
| nslookup | nslookup dominio.com | Resolver DNS | ¿IP resuelta? ¿Varios registros? | Subredes internas, posibles servicios |
| dig | dig dominio.com | DNS detallado | ¿Tiene MX, TXT, SPF? | Infraestructura visible, emails, rangos IP |

---

## 🔹 Subfase 1.2 – Reconocimiento Activo Controlado

| Herramienta | Comando | ¿Qué mide? | ¿Qué debo observar? | ¿Qué deduzco? |
|------------|---------|-------------|----------------------|----------------|
| nmap | nmap -sn IP | Descubre hosts activos | ¿Responde ping o ARP? | Host activo sin ruido |
| nc | nc -zv IP 21-25 | Conexión a puertos | ¿Qué puertos abiertos? | Superficie expuesta |
| tcpdump | tcpdump -i eth0 host IP | Captura tráfico | ¿Quién habla con quién y cómo? | Mapear protocolos y flujo |

---

## 🔹 Subfase 1.3 – Identificación de Servicios

| Herramienta | Comando | ¿Qué mide? | ¿Qué debo observar? | ¿Qué deduzco? |
|------------|---------|-------------|----------------------|----------------|
| nmap | nmap -sV IP | Versiones de servicios | ¿Software viejo? | Exploits posibles |
| nc | nc IP 21 | Banner del servicio | ¿Devuelve banner? | Identidad del servicio |
| telnet | telnet IP 21 | Interacción directa | ¿Login? ¿Respuestas? | Puntos de entrada |
| curl | curl -v IP:PORT | Detalles HTTP | ¿Cabeceras, cookies? | Backend y tecnologías |

---

## 📊 ¿Qué hacer con lo encontrado?

| Ejemplo | ¿Qué indica? | ¿Qué hacer? |
|--------|---------------|-------------|
| ping responde con 10ms | Host activo | Marcar objetivo |
| traceroute se frena | Firewall o DMZ | Escaneo del borde |
| whois muestra empresa | Infraestructura real | Ingeniería social futura |
| dig revela mail.admin | Servicios internos | Escanear subdominios |
| nmap revela FTP vsFTPd 2.3.4 | Servicio vulnerable | Verificar versión y CVE |
| nc devuelve banner | Servicio real activo | Testear manualmente |
| telnet responde 220 | FTP corriendo | Intentar login o manipular |
| curl muestra Apache 2.4.29 | Backend Apache | Buscar exploits compatibles |

---

## ✅ Cierre de Fase 1
✔️ Anotar:
- IP activa
- Servicios visibles
- Subdominios posibles
- Tecnologías usadas

✔️ Evaluar:
- ¿Vale la pena avanzar?
- ¿Puedo deducir algo sin tocar más?

---

