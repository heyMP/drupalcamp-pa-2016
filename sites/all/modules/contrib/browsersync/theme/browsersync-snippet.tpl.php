<?php
/**
 * @file
 * Customize BrowserSync snippet.
 *
 * Available variables:
 * - $new_template: Whether the new snippet template should be used or not.
 * - $socket_address: The host or IP address the BrowserSync socket is running
 *   on.
 * - $socket_port: The port the BrowserSync socket is running on.
 * - $client_port: The port the BrowserSync client is running on.
 * - $client_path: The path where the BrowserSync JavaScript is served from.
 * - $version: The version of BrowserSync used.
 */
?>
<?php if ($new_template): ?>
  <script type='text/javascript' id="__bs_script__">//<![CDATA[
    document.write("<script async src='//<?php print $socket_address; ?>:<?php print $socket_port; ?><?php print $client_path; ?>/browser-sync-client<?php print $version; ?>.js'><\/script>"<?php if ($socket_address == 'HOST'): ?>.replace(/HOST/g, location.hostname)<?php endif; ?><?php if ($socket_port == 'PORT'): ?>.replace(/PORT/g, location.port)<?php endif; ?>);
  //]]></script>
<?php else: ?>
  <script src='//<?php print $socket_address; ?>:<?php print $socket_port; ?>/socket.io/socket.io.js'></script>
  <script>var ___socket___ = io.connect('http://<?php print $socket_address; ?>:<?php print $socket_port; ?>');</script>
  <script src='//<?php print $socket_address; ?>:<?php print $client_port; ?>/client/browser-sync-client<?php print $version; ?>.js'></script>
<?php endif; ?>
