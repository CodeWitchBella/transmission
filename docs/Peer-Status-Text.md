The cryptic 'peer status' is shown in transmission-remote's `--peers` argument and in the Peers tab of the GTK+ Client's Details dialog. It's explained in a tooltip if you have GTK+ 2.12 or higher, and here if you don't:

<table>
<tr><td><tt>O</tt></td><td>Optimistic unchoke</td></tr>
<tr><td><tt>D</tt></td><td>Downloading from this peer</td></tr>
<tr><td><tt>d</tt></td><td>We would download from this peer if they'd let us</td></tr>
<tr><td><tt>U</tt></td><td>Uploading to peer</td></tr>
<tr><td><tt>u</tt></td><td>We would upload to this peer if they'd ask</td></tr>
<tr><td><tt>K</tt></td><td>Peer has unchoked us, but we're not interested</td></tr>
<tr><td><tt>?</tt></td><td>We unchoked this peer, but they're not interested</td></tr>
<tr><td><tt>E</tt></td><td>Encrypted Connection</td></tr>
<tr><td><tt>H</tt></td><td>Peer was discovered through Distributed Hash Table (DHT)</td></tr>
<tr><td><tt>X</tt></td><td>Peer was discovered through Peer Exchange (PEX)</td></tr>
<tr><td><tt>I</tt></td><td>Peer is an incoming connection</td></tr>
<tr><td><tt>T</tt></td><td>Peer is connected via uTP</td></tr>
</table>
