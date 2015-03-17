PREDICATE(check_for_keypress, 1)
{
	TCOD_key_t key;
	TCODSystem::checkForEvent(TCOD_EVENT_KEY, &key, NULL);
	if(key.vk == TCODK_NONE)
		return FALSE;
	PlCompound comp = PlCompound("key", PlTermv((long)key.pressed, (long)key.vk, (long)key.c));
	return A1 = comp;
}

PREDICATE(wait_for_keypress, 1)
{
	TCOD_key_t key;
	TCODSystem::waitForEvent(TCOD_EVENT_KEY, &key, NULL, true);
	PlCompound comp = PlCompound("key", PlTermv((long)key.pressed, (long)key.vk, (long)key.c));
	return A1 = comp;
}

