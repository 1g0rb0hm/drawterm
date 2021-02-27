<!-- Please be careful editing the below HTML, as GitHub is quite finicky with anything that looks like an HTML tag in GitHub Flavored Markdown. -->
<p align="center">
  <img src="GlendaLab.png" alt="Banner">
</p>
<p align="center">
  <b>Drawterm on macOS Lab</b>
</p>

# Drawterm Labs

My Drawterm Laboratory where I am doing stuff that might cause mockery and other insults.

## Description

This is a fork of [http://drawterm.9front.org/](http://drawterm.9front.org/) with a focus to improve support on macOS.

Notable modifications:
* **WTF**: Fix cursor memory corruption (see [hotfix/darwin-cursor-memory-corruption](https://github.com/1g0rb0hm/drawterm/tree/hotfix/darwin-cursor-memory-corruption))
* **OMG**: Simulated mouse buttons for Mac laptops (see [feature/macbook-simulated-buttons](https://github.com/1g0rb0hm/drawterm/tree/feature/macbook-simulated-buttons))
* **WDYMBT**: Support for audio on macOS (see [feature/macos-audio](https://github.com/1g0rb0hm/drawterm/tree/feature/macos-audio))

## Installation

Install dependencies to support audio:

```
$ brew install portaudio
```

Build:

```
$ CONF=osx-cocoa make -j4
$ cp drawterm gui-cocoa/drawterm.app/
```

## Help

No.

