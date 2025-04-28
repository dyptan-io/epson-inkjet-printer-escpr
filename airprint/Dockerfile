ARG UBUNTU_VERSION=latest

FROM ubuntu:$UBUNTU_VERSION AS base

ENV DEBIAN_FRONTEND noninteractive
RUN apt-get update && apt-get -y upgrade
ARG UBUNTU_VERSION
RUN apt-get -y install \
      cups-daemon \
      cups-client \
      cups-pdf \
      printer-driver-gutenprint \
      avahi-daemon \
      libnss-mdns \
# for mkpasswd
      whois \
      curl \
      inotify-tools \
      $(if [ "noble" = "$UBUNTU_VERSION" -o "latest" = "$UBUNTU_VERSION" ]; then \
      echo "libpng16-16t64"; else echo "libpng16-16"; fi) \
      libcups2 \
      libcupsimage2 \
    && apt-get autoremove -y \
    && apt-get clean -y \
    && rm -rf /var/lib/apt/lists/* \
    && rm -rf /tmp/* \
    && rm -rf /var/tmp/*

COPY /deb /usr/deb/
RUN dpkg -i /usr/deb/epson-inkjet-printer-escpr_1.8.6_arm64.deb

ENV TZ="GMT" \
    CUPS_ADMIN_USER="admin" \
    CUPS_ADMIN_PASSWORD="admin" \
    CUPS_WEBINTERFACE="yes" \
    CUPS_SHARE_PRINTERS="yes" \
    CUPS_REMOTE_ADMIN="yes" \
    CUPS_ENV_DEBUG="no" \
    # defaults to $(hostname -i)
    CUPS_IP="" \
    CUPS_ACCESS_LOGLEVEL="config" \
    # example: lpadmin -p Epson-RX520 -D 'my RX520' -m 'gutenprint.5.3://escp2-rx620/expert' -v smb://user:pass@host/Epson-RX520"
    CUPS_LPADMIN_PRINTER1=""

COPY cups.sh /root/
RUN chmod +x /root/cups.sh
ENTRYPOINT ["/root/cups.sh"]