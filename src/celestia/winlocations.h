// winlocations.h
// 
// Copyright (C) 2002, Chris Laurel <claurel@shatters.net>
//
// Miscellaneous utilities for Locations UI implementation.
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.

#ifndef _WINLOCATIONS_H_
#define _WINLOCATIONS_H_


#include <windows.h>
#include <commctrl.h>
#include "favorites.h"
#include "celestiacore.h"
#include "odmenu.h"

void BuildFavoritesMenu(HMENU, CelestiaCore*, HINSTANCE, ODMenu*);
HTREEITEM PopulateLocationFolders(HWND, CelestiaCore*, HINSTANCE);
HTREEITEM PopulateLocationsTree(HWND, CelestiaCore*, HINSTANCE);
void AddNewLocationFolderInTree(HWND, char*);
void SyncTreeFoldersWithFavoriteFolders(HWND, CelestiaCore*);
void InsertLocationInFavorites(HWND, char*, CelestiaCore*);
void DeleteLocationFromFavorites(HWND, CelestiaCore*);
void RenameLocationInFavorites(HWND, char*, CelestiaCore*);
void MoveLocationInFavorites(HWND, CelestiaCore*);
bool isOrganizeLocationsDragDropActive();
void OrganizeLocationsOnBeginDrag(HWND, LPNMTREEVIEW);
void OrganizeLocationsOnMouseMove(HWND, LONG, LONG);
void OrganizeLocationsOnLButtonUp(HWND);
void DragDropAutoScroll(HWND);
//HTREEITEM GetTreeViewItemHandle(HWND, char*, HTREEITEM);

#endif