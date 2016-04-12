INTRODUCTION
============

BrowserSync helps you integrate the BrowserSync Node.js module
(http://browsersync.io/) with your Drupal site by including the JavaScript
snippet at the bottom of the page just before the </body> tag.

Here is an example of the JavaScript snippet required by BrowserSync:

<script type='text/javascript' id="__bs_script__">//<![CDATA[
  document.write("<script async src='//HOST:3000/browser-sync/browser-sync-client.1.6.5.js'></script>".replace(/HOST/g, location.hostname).replace(/PORT/g, location.port));
]]></script>

Please note that this module DOES NOT run BrowserSync for you. You will still
need to run it from the command line.

CONFIGURATION
============

To configure this module you are required to add some configuration variables
to your settings.php file:

// Version of BrowserSync used (eg. 1.6.5). Optional as of BrowserSync 1.0.0.
$conf['browsersync_version'] = '1.6.5';

// Whether the snippet needs be added to non-admin pages.
$conf['browsersync_enabled_for_nonadmin'] = TRUE;

// Whether the snippet needs be added to admin pages.
$conf['browsersync_enabled_for_admin'] = FALSE;

// You might need to tweak this to make sure the snippet is the very last thing
// inside the <body> tag.
$conf['browsersync_snippet_weight'] = 100;

// Host or IP address the BrowserSync socket is running on. Optional as of
// BrowserSync 1.0.0.
$conf['browsersync_socket_address'] = '127.0.0.1';

// Port the BrowserSync socket is running on.
$conf['browsersync_socket_port'] = '3001';

// Port the BrowserSync client is running on. Optional as of BrowserSync 1.0.0.
$conf['browsersync_client_port'] = '3002';

// Path the BrowserSync JavaScript is served from.
$conf['browsersync_client_path'] = '/browser-sync';


INSTALLATION
============

 1. Configure the module as per described in the configuration section.
 2. Install the module.
 3. Run BrowserSync from the command line
 4. Happy styling!


DEPENDENCIES
============

This module does not depend on any other module.


MAINTAINERS
===========

 *  jorgegc <http://drupal.org/user/834154>
