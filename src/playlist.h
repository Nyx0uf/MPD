/* the Music Player Daemon (MPD)
 * (c)2003-2004 by Warren Dukes (shank@mercury.chem.pitt.edu)
 * This project's homepage is: http://www.musicpd.org
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef PLAYLIST_H
#define PLAYLIST_H

#include "song.h"

#include <stdio.h>
#include <sys/param.h>
#include <time.h>

#define PLAYLIST_FILE_SUFFIX 	"m3u"

void initPlaylist();

void finishPlaylist();

void initPlaylist();

void readPlaylistState();

void savePlaylistState();

int clearPlaylist(FILE * fp);

int addToPlaylist(FILE * fp, char * file);

int addSongToPlaylist(FILE * fp, Song * song);

int showPlaylist(FILE * fp);

int deleteFromPlaylist(FILE * fp, int song);

int playlistInfo(FILE * fp, int song);

int stopPlaylist(FILE * fp);

int playPlaylist(FILE * fp, int song, int stopOnError);

int nextSongInPlaylist(FILE * fp);

void syncPlayerAndPlaylist();

int previousSongInPlaylist(FILE * fp);

int shufflePlaylist(FILE * fp);

int savePlaylist(FILE * fp, char * utf8file);

int deletePlaylist(FILE * fp, char * utf8file);

void deleteASongFromPlaylist(Song * song);

int moveSongInPlaylist(FILE * fp, int from, int to);

int swapSongsInPlaylist(FILE * fp, int song1, int song2);

int loadPlaylist(FILE * fp, char * utf8file);

int getPlaylistRepeatStatus();

int setPlaylistRepeatStatus(FILE * fp, int status);

int getPlaylistRandomStatus();

int setPlaylistRandomStatus(FILE * fp, int status);

int getPlaylistCurrentSong();

int getPlaylistLength();

unsigned long getPlaylistVersion();

void playPlaylistIfPlayerStopped();

int seekSongInPlaylist(FILE * fp, int song, float time);

void incrPlaylistVersion();

#endif
