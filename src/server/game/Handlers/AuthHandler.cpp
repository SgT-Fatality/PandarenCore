/*
 * Copyright (C) 2008-2012 TrinityCore <http://www.trinitycore.org/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "Opcodes.h"
#include "WorldSession.h"
#include "WorldPacket.h"

void WorldSession::SendAuthResponse(uint8 code, bool queued, uint32 queuePos)
{
	// Should be done at server's start
	QueryResult classResult = WorldDatabase.Query("SELECT class, expansion FROM aa_classes");
	QueryResult raceResult = WorldDatabase.Query("SELECT race, expansion FROM aa_races");

    WorldPacket packet(SMSG_AUTH_RESPONSE);

    // BitPack
    packet.WriteBit(1); // HasAccountData
	packet.WriteBit(0); // Unknown, 5.0.4
    packet.WriteBits(classResult->GetRowCount(), 25); // Activation count for races
	packet.WriteBits(0, 22); // Activate character template windows/button
    packet.WriteBits(raceResult->GetRowCount(), 25); // Activation count for classes
    packet.WriteBit(0); // IsInQueue

	packet.FlushBits();

	packet << uint8(0);                          // 0 - normal, 1 - TBC, 2 - WOTLK, 3 - CATA, 4 - MoP; must be set in database manually for each account
    packet << uint8(Expansion());

	do
	{
		Field* fields = classResult->Fetch();
		packet << uint8(fields[0].GetUInt8());
		packet << uint8(fields[1].GetUInt8());
	}
	while(classResult->NextRow());

	packet << uint32(0);
	packet << uint32(0);                                   // BillingTimeRemaining
	packet << uint32(0);                                   // BillingTimeRested

	do
	{
		Field* fields = raceResult->Fetch();
		packet << uint8(fields[0].GetUInt8());
		packet << uint8(fields[1].GetUInt8());
	}
	while(raceResult->NextRow());


	packet << uint8(Expansion());                          // Unknown, these two show the same
    packet << uint8(code);                                  // Unknown - 4.3.2

    SendPacket(&packet);
}

void WorldSession::SendClientCacheVersion(uint32 version)
{
    WorldPacket data(SMSG_CLIENTCACHE_VERSION, 4);
    data << uint32(version);
    SendPacket(&data);
}
