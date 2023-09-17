#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::IO {
class Stream;
}
namespace System::IO {
struct SeekOrigin;
}
namespace Org::BouncyCastle::Apache::Bzip2 {
class CRC;
}
// Forward declare root types
namespace Org::BouncyCastle::Apache::Bzip2 {
class CBZip2InputStream;
}
// Type: Org.BouncyCastle.Apache.Bzip2::CBZip2InputStream
namespace Org::BouncyCastle::Apache::Bzip2 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1877))
// CS Name: Org.BouncyCastle.Apache.Bzip2.CBZip2InputStream
class CORDL_TYPE CBZip2InputStream : public ::System::IO::Stream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x100};

virtual ~CBZip2InputStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "CBZip2InputStream", modifiers: " const&", def_value: None }]
constexpr CBZip2InputStream(CBZip2InputStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CBZip2InputStream", modifiers: "&&", def_value: None }]
constexpr CBZip2InputStream(CBZip2InputStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CBZip2InputStream(void* ptr) noexcept : ::System::IO::Stream(ptr) {
}


  constexpr CBZip2InputStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CBZip2InputStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CBZip2InputStream& operator=(CBZip2InputStream&& o) noexcept = default;
  constexpr CBZip2InputStream& operator=(CBZip2InputStream const& o) noexcept = default;
                


// Fields

/// @brief Field START_BLOCK_STATE offset 0
static constexpr int32_t  START_BLOCK_STATE{1};

/// @brief Field RAND_PART_A_STATE offset 0
static constexpr int32_t  RAND_PART_A_STATE{2};

/// @brief Field RAND_PART_B_STATE offset 0
static constexpr int32_t  RAND_PART_B_STATE{3};

/// @brief Field RAND_PART_C_STATE offset 0
static constexpr int32_t  RAND_PART_C_STATE{4};

/// @brief Field NO_RAND_PART_A_STATE offset 0
static constexpr int32_t  NO_RAND_PART_A_STATE{5};

/// @brief Field NO_RAND_PART_B_STATE offset 0
static constexpr int32_t  NO_RAND_PART_B_STATE{6};

/// @brief Field NO_RAND_PART_C_STATE offset 0
static constexpr int32_t  NO_RAND_PART_C_STATE{7};

 int32_t __declspec(property(get=__get_last, put=__set_last))  last;

constexpr void __set_last(int32_t value) ;

constexpr int32_t __get_last() const;

 int32_t __declspec(property(get=__get_origPtr, put=__set_origPtr))  origPtr;

constexpr void __set_origPtr(int32_t value) ;

constexpr int32_t __get_origPtr() const;

 int32_t __declspec(property(get=__get_blockSize100k, put=__set_blockSize100k))  blockSize100k;

constexpr void __set_blockSize100k(int32_t value) ;

constexpr int32_t __get_blockSize100k() const;

 bool __declspec(property(get=__get_blockRandomised, put=__set_blockRandomised))  blockRandomised;

constexpr void __set_blockRandomised(bool value) ;

constexpr bool __get_blockRandomised() const;

 int32_t __declspec(property(get=__get_bsBuff, put=__set_bsBuff))  bsBuff;

constexpr void __set_bsBuff(int32_t value) ;

constexpr int32_t __get_bsBuff() const;

 int32_t __declspec(property(get=__get_bsLive, put=__set_bsLive))  bsLive;

constexpr void __set_bsLive(int32_t value) ;

constexpr int32_t __get_bsLive() const;

 ::Org::BouncyCastle::Apache::Bzip2::CRC __declspec(property(get=__get_mCrc, put=__set_mCrc))  mCrc;

constexpr void __set_mCrc(::Org::BouncyCastle::Apache::Bzip2::CRC value) ;

constexpr ::Org::BouncyCastle::Apache::Bzip2::CRC __get_mCrc() const;

 ::ArrayW<bool> __declspec(property(get=__get_inUse, put=__set_inUse))  inUse;

constexpr void __set_inUse(::ArrayW<bool> value) ;

constexpr ::ArrayW<bool> __get_inUse() const;

 int32_t __declspec(property(get=__get_nInUse, put=__set_nInUse))  nInUse;

constexpr void __set_nInUse(int32_t value) ;

constexpr int32_t __get_nInUse() const;

 ::ArrayW<char16_t> __declspec(property(get=__get_seqToUnseq, put=__set_seqToUnseq))  seqToUnseq;

constexpr void __set_seqToUnseq(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get_seqToUnseq() const;

 ::ArrayW<char16_t> __declspec(property(get=__get_unseqToSeq, put=__set_unseqToSeq))  unseqToSeq;

constexpr void __set_unseqToSeq(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get_unseqToSeq() const;

 ::ArrayW<char16_t> __declspec(property(get=__get_selector, put=__set_selector))  selector;

constexpr void __set_selector(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get_selector() const;

 ::ArrayW<char16_t> __declspec(property(get=__get_selectorMtf, put=__set_selectorMtf))  selectorMtf;

constexpr void __set_selectorMtf(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get_selectorMtf() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_tt, put=__set_tt))  tt;

constexpr void __set_tt(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_tt() const;

 ::ArrayW<char16_t> __declspec(property(get=__get_ll8, put=__set_ll8))  ll8;

constexpr void __set_ll8(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get_ll8() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_unzftab, put=__set_unzftab))  unzftab;

constexpr void __set_unzftab(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_unzftab() const;

 ::ArrayW<::ArrayW<int32_t>> __declspec(property(get=__get_limit, put=__set_limit))  limit;

constexpr void __set_limit(::ArrayW<::ArrayW<int32_t>> value) ;

constexpr ::ArrayW<::ArrayW<int32_t>> __get_limit() const;

 ::ArrayW<::ArrayW<int32_t>> __declspec(property(get=__get_basev, put=__set_basev))  basev;

constexpr void __set_basev(::ArrayW<::ArrayW<int32_t>> value) ;

constexpr ::ArrayW<::ArrayW<int32_t>> __get_basev() const;

 ::ArrayW<::ArrayW<int32_t>> __declspec(property(get=__get_perm, put=__set_perm))  perm;

constexpr void __set_perm(::ArrayW<::ArrayW<int32_t>> value) ;

constexpr ::ArrayW<::ArrayW<int32_t>> __get_perm() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_minLens, put=__set_minLens))  minLens;

constexpr void __set_minLens(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_minLens() const;

 ::System::IO::Stream __declspec(property(get=__get_bsStream, put=__set_bsStream))  bsStream;

constexpr void __set_bsStream(::System::IO::Stream value) ;

constexpr ::System::IO::Stream __get_bsStream() const;

 bool __declspec(property(get=__get_streamEnd, put=__set_streamEnd))  streamEnd;

constexpr void __set_streamEnd(bool value) ;

constexpr bool __get_streamEnd() const;

 int32_t __declspec(property(get=__get_currentChar, put=__set_currentChar))  currentChar;

constexpr void __set_currentChar(int32_t value) ;

constexpr int32_t __get_currentChar() const;

 int32_t __declspec(property(get=__get_currentState, put=__set_currentState))  currentState;

constexpr void __set_currentState(int32_t value) ;

constexpr int32_t __get_currentState() const;

 int32_t __declspec(property(get=__get_storedBlockCRC, put=__set_storedBlockCRC))  storedBlockCRC;

constexpr void __set_storedBlockCRC(int32_t value) ;

constexpr int32_t __get_storedBlockCRC() const;

 int32_t __declspec(property(get=__get_storedCombinedCRC, put=__set_storedCombinedCRC))  storedCombinedCRC;

constexpr void __set_storedCombinedCRC(int32_t value) ;

constexpr int32_t __get_storedCombinedCRC() const;

 int32_t __declspec(property(get=__get_computedBlockCRC, put=__set_computedBlockCRC))  computedBlockCRC;

constexpr void __set_computedBlockCRC(int32_t value) ;

constexpr int32_t __get_computedBlockCRC() const;

 int32_t __declspec(property(get=__get_computedCombinedCRC, put=__set_computedCombinedCRC))  computedCombinedCRC;

constexpr void __set_computedCombinedCRC(int32_t value) ;

constexpr int32_t __get_computedCombinedCRC() const;

 int32_t __declspec(property(get=__get_i2, put=__set_i2))  i2;

constexpr void __set_i2(int32_t value) ;

constexpr int32_t __get_i2() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 int32_t __declspec(property(get=__get_chPrev, put=__set_chPrev))  chPrev;

constexpr void __set_chPrev(int32_t value) ;

constexpr int32_t __get_chPrev() const;

 int32_t __declspec(property(get=__get_ch2, put=__set_ch2))  ch2;

constexpr void __set_ch2(int32_t value) ;

constexpr int32_t __get_ch2() const;

 int32_t __declspec(property(get=__get_i, put=__set_i))  i;

constexpr void __set_i(int32_t value) ;

constexpr int32_t __get_i() const;

 int32_t __declspec(property(get=__get_tPos, put=__set_tPos))  tPos;

constexpr void __set_tPos(int32_t value) ;

constexpr int32_t __get_tPos() const;

 int32_t __declspec(property(get=__get_rNToGo, put=__set_rNToGo))  rNToGo;

constexpr void __set_rNToGo(int32_t value) ;

constexpr int32_t __get_rNToGo() const;

 int32_t __declspec(property(get=__get_rTPos, put=__set_rTPos))  rTPos;

constexpr void __set_rTPos(int32_t value) ;

constexpr int32_t __get_rTPos() const;

 int32_t __declspec(property(get=__get_j2, put=__set_j2))  j2;

constexpr void __set_j2(int32_t value) ;

constexpr int32_t __get_j2() const;

 char16_t __declspec(property(get=__get_z, put=__set_z))  z;

constexpr void __set_z(char16_t value) ;

constexpr char16_t __get_z() const;


// Properties

 bool __declspec(property(get=get_CanRead))  CanRead;

 bool __declspec(property(get=get_CanSeek))  CanSeek;

 bool __declspec(property(get=get_CanWrite))  CanWrite;

 int64_t __declspec(property(get=get_Length))  Length;

 int64_t __declspec(property(get=get_Position, put=set_Position))  Position;


// Methods

/// @brief Method Cadvise addr 0x10fd500 size 0x4 virtual false final false
static void Cadvise() ;

/// @brief Method CompressedStreamEOF addr 0x10fd504 size 0x4 virtual false final false
static void CompressedStreamEOF() ;

/// @brief Method MakeMaps addr 0x10fd508 size 0x8c virtual false final false
 void MakeMaps() ;

// Ctor Parameters [CppParam { name: "zStream", ty: "::System::IO::Stream", modifiers: "", def_value: None }]
explicit CBZip2InputStream(::System::IO::Stream zStream) ;

/// @brief Method .ctor addr 0x10fd594 size 0x1bc virtual false final false
 void _ctor(::System::IO::Stream zStream) ;

/// @brief Method InitIntArray addr 0x10fd770 size 0xec virtual false final false
static ::ArrayW<::ArrayW<int32_t>> InitIntArray(int32_t n1, int32_t n2) ;

/// @brief Method InitCharArray addr 0x10fdc90 size 0xec virtual false final false
static ::ArrayW<::ArrayW<char16_t>> InitCharArray(int32_t n1, int32_t n2) ;

/// @brief Method ReadByte addr 0x10fdd7c size 0x64 virtual true final false
 int32_t ReadByte() ;

/// @brief Method Initialize addr 0x10fd868 size 0xec virtual false final false
 void Initialize() ;

/// @brief Method InitBlock addr 0x10fd954 size 0x170 virtual false final false
 void InitBlock() ;

/// @brief Method EndBlock addr 0x10fec80 size 0x2c virtual false final false
 void EndBlock() ;

/// @brief Method Complete addr 0x10fe220 size 0x28 virtual false final false
 void Complete() ;

/// @brief Method BlockOverrun addr 0x10fecbc size 0x4 virtual false final false
static void BlockOverrun() ;

/// @brief Method BadBlockHeader addr 0x10fe248 size 0x4 virtual false final false
static void BadBlockHeader() ;

/// @brief Method CrcError addr 0x10fecb8 size 0x4 virtual false final false
static void CrcError() ;

/// @brief Method BsFinishedWithStream addr 0x10fe0b8 size 0xdc virtual false final false
 void BsFinishedWithStream() ;

/// @brief Method BsSetStream addr 0x10fd85c size 0xc virtual false final false
 void BsSetStream(::System::IO::Stream f) ;

/// @brief Method BsR addr 0x10fe250 size 0x108 virtual false final false
 int32_t BsR(int32_t n) ;

/// @brief Method BsGetUChar addr 0x10fe0a4 size 0x14 virtual false final false
 char16_t BsGetUChar() ;

/// @brief Method BsGetint addr 0x10fecc0 size 0x54 virtual false final false
 int32_t BsGetint() ;

/// @brief Method BsGetIntVS addr 0x10fed14 size 0x4 virtual false final false
 int32_t BsGetIntVS(int32_t numBits) ;

/// @brief Method BsGetInt32 addr 0x10fe24c size 0x4 virtual false final false
 int32_t BsGetInt32() ;

/// @brief Method HbCreateDecodeTables addr 0x10fed18 size 0x20c virtual false final false
 void HbCreateDecodeTables(::ArrayW<int32_t> limit, ::ArrayW<int32_t> basev, ::ArrayW<int32_t> perm, ::ArrayW<char16_t> length, int32_t minLen, int32_t maxLen, int32_t alphaSize) ;

/// @brief Method RecvDecodingTables addr 0x10fef24 size 0x4e0 virtual false final false
 void RecvDecodingTables() ;

/// @brief Method GetAndMoveToFrontDecode addr 0x10fe358 size 0x91c virtual false final false
 void GetAndMoveToFrontDecode() ;

/// @brief Method SetupBlock addr 0x10fdac4 size 0x1cc virtual false final false
 void SetupBlock() ;

/// @brief Method SetupRandPartA addr 0x10ff404 size 0x14c virtual false final false
 void SetupRandPartA() ;

/// @brief Method SetupNoRandPartA addr 0x10ff550 size 0xa8 virtual false final false
 void SetupNoRandPartA() ;

/// @brief Method SetupRandPartB addr 0x10fdde0 size 0x154 virtual false final false
 void SetupRandPartB() ;

/// @brief Method SetupRandPartC addr 0x10fdf34 size 0x64 virtual false final false
 void SetupRandPartC() ;

/// @brief Method SetupNoRandPartB addr 0x10fdf98 size 0xa8 virtual false final false
 void SetupNoRandPartB() ;

/// @brief Method SetupNoRandPartC addr 0x10fe040 size 0x64 virtual false final false
 void SetupNoRandPartC() ;

/// @brief Method SetDecompressStructureSizes addr 0x10fe194 size 0x8c virtual false final false
 void SetDecompressStructureSizes(int32_t newSize100k) ;

/// @brief Method Flush addr 0x10ff69c size 0x4 virtual true final false
 void Flush() ;

/// @brief Method Read addr 0x10ff6a0 size 0xa4 virtual true final false
 int32_t Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method Seek addr 0x10ff744 size 0x8 virtual true final false
 int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin) ;

/// @brief Method SetLength addr 0x10ff74c size 0x4 virtual true final false
 void SetLength(int64_t value) ;

/// @brief Method Write addr 0x10ff750 size 0x4 virtual true final false
 void Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method get_CanRead addr 0x10ff754 size 0x8 virtual true final false
 bool get_CanRead() ;

/// @brief Method get_CanSeek addr 0x10ff75c size 0x8 virtual true final false
 bool get_CanSeek() ;

/// @brief Method get_CanWrite addr 0x10ff764 size 0x8 virtual true final false
 bool get_CanWrite() ;

/// @brief Method get_Length addr 0x10ff76c size 0x8 virtual true final false
 int64_t get_Length() ;

/// @brief Method get_Position addr 0x10ff774 size 0x8 virtual true final false
 int64_t get_Position() ;

/// @brief Method set_Position addr 0x10ff77c size 0x4 virtual true final false
 void set_Position(int64_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Apache::Bzip2
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream, "Org.BouncyCastle.Apache.Bzip2", "CBZip2InputStream");
