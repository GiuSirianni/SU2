 #pragma once
#include "SzlFileLoader.h"
#include "ZoneHeaderWriterAbstract.h"
namespace tecplot { namespace ___3933 { class ___1350; class ItemSetIterator; class SZLFEZoneHeaderWriter : public ZoneHeaderWriterAbstract { public: SZLFEZoneHeaderWriter( ItemSetIterator&    varIter, ___4636         zone, ___4636         ___341, ___37&         ___36, ___1350 const&   ___1349, bool                ___4499, ___1392 const& varFileLocs, ___1392 const& ___687, ___1392 const& ___2758, UInt16Array const&  ___2834, UInt16Array const&  numRefCellSubzones, UInt8Array const&   cszIncludesPartitionOffsetsBitArray, UInt8Array const&   nszIncludesPartitionOffsetsBitArray); virtual ~SZLFEZoneHeaderWriter(); virtual uint64_t sizeInFile(bool ___2002) const; virtual ___372 write(FileWriterInterface& fileWriter) const; private: ___1350 const& m_feZoneInfo; bool m_writeConnectivity; ___1392 const& ___2673; ___1392 const& m_cszConnectivityFileLocs; ___1392 const& m_nszConnectivityFileLocs; UInt16Array const& m_numRefNodeSubzones; UInt16Array const& m_numRefCellSubzones; UInt8Array const& m_cszIncludesPartitionOffsetsBitArray; UInt8Array const& m_nszIncludesPartitionOffsetsBitArray; }; }}