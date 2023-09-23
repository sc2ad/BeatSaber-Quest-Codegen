#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Apache::Bzip2 {
class CRC;
}
namespace System::IO {
class Stream;
}
namespace System::IO {
struct SeekOrigin;
}
// Forward declare root types
namespace Org::BouncyCastle::Apache::Bzip2 {
class CBZip2OutputStream;
}
namespace Org::BouncyCastle::Apache::Bzip2 {
class Org__BouncyCastle__Apache__Bzip2__CBZip2OutputStream__StackElem;
}
// Type: ::StackElem
namespace Org::BouncyCastle::Apache::Bzip2 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1633))
// CS Name: Org.BouncyCastle.Apache.Bzip2.CBZip2OutputStream::StackElem
class CORDL_TYPE Org__BouncyCastle__Apache__Bzip2__CBZip2OutputStream__StackElem : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Org__BouncyCastle__Apache__Bzip2__CBZip2OutputStream__StackElem() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Apache__Bzip2__CBZip2OutputStream__StackElem", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Apache__Bzip2__CBZip2OutputStream__StackElem(Org__BouncyCastle__Apache__Bzip2__CBZip2OutputStream__StackElem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Apache__Bzip2__CBZip2OutputStream__StackElem", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Apache__Bzip2__CBZip2OutputStream__StackElem(Org__BouncyCastle__Apache__Bzip2__CBZip2OutputStream__StackElem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Apache__Bzip2__CBZip2OutputStream__StackElem(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Org__BouncyCastle__Apache__Bzip2__CBZip2OutputStream__StackElem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Apache__Bzip2__CBZip2OutputStream__StackElem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Apache__Bzip2__CBZip2OutputStream__StackElem& operator=(Org__BouncyCastle__Apache__Bzip2__CBZip2OutputStream__StackElem&& o) noexcept = default;
  constexpr Org__BouncyCastle__Apache__Bzip2__CBZip2OutputStream__StackElem& operator=(Org__BouncyCastle__Apache__Bzip2__CBZip2OutputStream__StackElem const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_ll, put=__set_ll))  ll;

constexpr void __set_ll(int32_t value) ;

constexpr int32_t __get_ll() const;

 int32_t __declspec(property(get=__get_hh, put=__set_hh))  hh;

constexpr void __set_hh(int32_t value) ;

constexpr int32_t __get_hh() const;

 int32_t __declspec(property(get=__get_dd, put=__set_dd))  dd;

constexpr void __set_dd(int32_t value) ;

constexpr int32_t __get_dd() const;


// Methods

// Ctor Parameters []
explicit Org__BouncyCastle__Apache__Bzip2__CBZip2OutputStream__StackElem() ;

/// @brief Method .ctor addr 0x101c938 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Apache::Bzip2
// Type: Org.BouncyCastle.Apache.Bzip2::CBZip2OutputStream
namespace Org::BouncyCastle::Apache::Bzip2 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1634))
// CS Name: Org.BouncyCastle.Apache.Bzip2.CBZip2OutputStream
class CORDL_TYPE CBZip2OutputStream : public System::IO::Stream {
public:
// Declarations
using StackElem = Org::BouncyCastle::Apache::Bzip2::Org__BouncyCastle__Apache__Bzip2__CBZip2OutputStream__StackElem;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xf8};

virtual ~CBZip2OutputStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "CBZip2OutputStream", modifiers: " const&", def_value: None }]
constexpr CBZip2OutputStream(CBZip2OutputStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CBZip2OutputStream", modifiers: "&&", def_value: None }]
constexpr CBZip2OutputStream(CBZip2OutputStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CBZip2OutputStream(void* ptr) noexcept : System::IO::Stream(ptr) {
}


  constexpr CBZip2OutputStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CBZip2OutputStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CBZip2OutputStream& operator=(CBZip2OutputStream&& o) noexcept = default;
  constexpr CBZip2OutputStream& operator=(CBZip2OutputStream const& o) noexcept = default;
                


// Fields

/// @brief Field SETMASK offset 0
static constexpr int32_t  SETMASK{2097152};

/// @brief Field CLEARMASK offset 0
static constexpr int32_t  CLEARMASK{-2097153};

/// @brief Field GREATER_ICOST offset 0
static constexpr int32_t  GREATER_ICOST{15};

/// @brief Field LESSER_ICOST offset 0
static constexpr int32_t  LESSER_ICOST{0};

/// @brief Field SMALL_THRESH offset 0
static constexpr int32_t  SMALL_THRESH{20};

/// @brief Field DEPTH_THRESH offset 0
static constexpr int32_t  DEPTH_THRESH{10};

/// @brief Field QSORT_STACK_SIZE offset 0
static constexpr int32_t  QSORT_STACK_SIZE{1000};

 bool __declspec(property(get=__get_finished, put=__set_finished))  finished;

constexpr void __set_finished(bool value) ;

constexpr bool __get_finished() const;

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

 int32_t __declspec(property(get=__get_bytesOut, put=__set_bytesOut))  bytesOut;

constexpr void __set_bytesOut(int32_t value) ;

constexpr int32_t __get_bytesOut() const;

 int32_t __declspec(property(get=__get_bsBuff, put=__set_bsBuff))  bsBuff;

constexpr void __set_bsBuff(int32_t value) ;

constexpr int32_t __get_bsBuff() const;

 int32_t __declspec(property(get=__get_bsLive, put=__set_bsLive))  bsLive;

constexpr void __set_bsLive(int32_t value) ;

constexpr int32_t __get_bsLive() const;

 Org::BouncyCastle::Apache::Bzip2::CRC __declspec(property(get=__get_mCrc, put=__set_mCrc))  mCrc;

constexpr void __set_mCrc(Org::BouncyCastle::Apache::Bzip2::CRC value) ;

constexpr Org::BouncyCastle::Apache::Bzip2::CRC __get_mCrc() const;

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

 ::ArrayW<char16_t> __declspec(property(get=__get_block, put=__set_block))  block;

constexpr void __set_block(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get_block() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_quadrant, put=__set_quadrant))  quadrant;

constexpr void __set_quadrant(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_quadrant() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_zptr, put=__set_zptr))  zptr;

constexpr void __set_zptr(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_zptr() const;

 ::ArrayW<int16_t> __declspec(property(get=__get_szptr, put=__set_szptr))  szptr;

constexpr void __set_szptr(::ArrayW<int16_t> value) ;

constexpr ::ArrayW<int16_t> __get_szptr() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_ftab, put=__set_ftab))  ftab;

constexpr void __set_ftab(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_ftab() const;

 int32_t __declspec(property(get=__get_nMTF, put=__set_nMTF))  nMTF;

constexpr void __set_nMTF(int32_t value) ;

constexpr int32_t __get_nMTF() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_mtfFreq, put=__set_mtfFreq))  mtfFreq;

constexpr void __set_mtfFreq(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_mtfFreq() const;

 int32_t __declspec(property(get=__get_workFactor, put=__set_workFactor))  workFactor;

constexpr void __set_workFactor(int32_t value) ;

constexpr int32_t __get_workFactor() const;

 int32_t __declspec(property(get=__get_workDone, put=__set_workDone))  workDone;

constexpr void __set_workDone(int32_t value) ;

constexpr int32_t __get_workDone() const;

 int32_t __declspec(property(get=__get_workLimit, put=__set_workLimit))  workLimit;

constexpr void __set_workLimit(int32_t value) ;

constexpr int32_t __get_workLimit() const;

 bool __declspec(property(get=__get_firstAttempt, put=__set_firstAttempt))  firstAttempt;

constexpr void __set_firstAttempt(bool value) ;

constexpr bool __get_firstAttempt() const;

 int32_t __declspec(property(get=__get_nBlocksRandomised, put=__set_nBlocksRandomised))  nBlocksRandomised;

constexpr void __set_nBlocksRandomised(int32_t value) ;

constexpr int32_t __get_nBlocksRandomised() const;

 int32_t __declspec(property(get=__get_currentChar, put=__set_currentChar))  currentChar;

constexpr void __set_currentChar(int32_t value) ;

constexpr int32_t __get_currentChar() const;

 int32_t __declspec(property(get=__get_runLength, put=__set_runLength))  runLength;

constexpr void __set_runLength(int32_t value) ;

constexpr int32_t __get_runLength() const;

 bool __declspec(property(get=__get_closed, put=__set_closed))  closed;

constexpr void __set_closed(bool value) ;

constexpr bool __get_closed() const;

 int32_t __declspec(property(get=__get_blockCRC, put=__set_blockCRC))  blockCRC;

constexpr void __set_blockCRC(int32_t value) ;

constexpr int32_t __get_blockCRC() const;

 int32_t __declspec(property(get=__get_combinedCRC, put=__set_combinedCRC))  combinedCRC;

constexpr void __set_combinedCRC(int32_t value) ;

constexpr int32_t __get_combinedCRC() const;

 int32_t __declspec(property(get=__get_allowableBlockSize, put=__set_allowableBlockSize))  allowableBlockSize;

constexpr void __set_allowableBlockSize(int32_t value) ;

constexpr int32_t __get_allowableBlockSize() const;

 System::IO::Stream __declspec(property(get=__get_bsStream, put=__set_bsStream))  bsStream;

constexpr void __set_bsStream(System::IO::Stream value) ;

constexpr System::IO::Stream __get_bsStream() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_incs, put=__set_incs))  incs;

constexpr void __set_incs(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_incs() const;


// Properties

 bool __declspec(property(get=get_CanRead))  CanRead;

 bool __declspec(property(get=get_CanSeek))  CanSeek;

 bool __declspec(property(get=get_CanWrite))  CanWrite;

 int64_t __declspec(property(get=get_Length))  Length;

 int64_t __declspec(property(get=get_Position, put=set_Position))  Position;


// Methods

/// @brief Method Panic addr 0x1019ae8 size 0x4 virtual false final false
static void Panic() ;

/// @brief Method MakeMaps addr 0x1019aec size 0x8c virtual false final false
 void MakeMaps() ;

/// @brief Method HbMakeCodeLengths addr 0x1019b78 size 0x62c virtual false final false
static void HbMakeCodeLengths(::ArrayW<char16_t> len, ::ArrayW<int32_t> freq, int32_t alphaSize, int32_t maxLen) ;

// Ctor Parameters [CppParam { name: "inStream", ty: "System::IO::Stream", modifiers: "", def_value: None }]
explicit CBZip2OutputStream(System::IO::Stream inStream) ;

/// @brief Method .ctor addr 0x1019a48 size 0x8 virtual false final false
 void _ctor(System::IO::Stream inStream) ;

// Ctor Parameters [CppParam { name: "inStream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "inBlockSize", ty: "int32_t", modifiers: "", def_value: None }]
explicit CBZip2OutputStream(System::IO::Stream inStream, int32_t inBlockSize) ;

/// @brief Method .ctor addr 0x101a1a4 size 0x20c virtual false final false
 void _ctor(System::IO::Stream inStream, int32_t inBlockSize) ;

/// @brief Method WriteByte addr 0x101a550 size 0x7c virtual true final false
 void WriteByte(uint8_t bv) ;

/// @brief Method WriteRun addr 0x101a5cc size 0x23c virtual false final false
 void WriteRun() ;

/// @brief Method Close addr 0x101a8e8 size 0x8c virtual true final false
 void Close() ;

/// @brief Method Finish addr 0x1019a54 size 0x64 virtual false final false
 void Finish() ;

/// @brief Method Flush addr 0x101a9f0 size 0x24 virtual true final false
 void Flush() ;

/// @brief Method Initialize addr 0x101a4a0 size 0x3c virtual false final false
 void Initialize() ;

/// @brief Method InitBlock addr 0x101a4dc size 0x74 virtual false final false
 void InitBlock() ;

/// @brief Method EndBlock addr 0x101a808 size 0xe0 virtual false final false
 void EndBlock() ;

/// @brief Method EndCompression addr 0x101a974 size 0x7c virtual false final false
 void EndCompression() ;

/// @brief Method HbAssignCodes addr 0x101ad4c size 0x88 virtual false final false
 void HbAssignCodes(::ArrayW<int32_t> code, ::ArrayW<char16_t> length, int32_t minLen, int32_t maxLen, int32_t alphaSize) ;

/// @brief Method BsSetStream addr 0x101a3b0 size 0x10 virtual false final false
 void BsSetStream(System::IO::Stream f) ;

/// @brief Method BsFinishedWithStream addr 0x101ac60 size 0xec virtual false final false
 void BsFinishedWithStream() ;

/// @brief Method BsW addr 0x101ab28 size 0x110 virtual false final false
 void BsW(int32_t n, int32_t v) ;

/// @brief Method BsPutUChar addr 0x101aa14 size 0xc virtual false final false
 void BsPutUChar(int32_t c) ;

/// @brief Method BsPutint addr 0x101aad4 size 0x54 virtual false final false
 void BsPutint(int32_t u) ;

/// @brief Method BsPutIntVS addr 0x101add4 size 0x4 virtual false final false
 void BsPutIntVS(int32_t numBits, int32_t c) ;

/// @brief Method SendMTFValues addr 0x101add8 size 0xcb8 virtual false final false
 void SendMTFValues() ;

/// @brief Method MoveToFrontCodeAndSend addr 0x101ac38 size 0x28 virtual false final false
 void MoveToFrontCodeAndSend() ;

/// @brief Method SimpleSort addr 0x101be34 size 0x314 virtual false final false
 void SimpleSort(int32_t lo, int32_t hi, int32_t d) ;

/// @brief Method Vswap addr 0x101c45c size 0x68 virtual false final false
 void Vswap(int32_t p1, int32_t p2, int32_t n) ;

/// @brief Method Med3 addr 0x101c4c4 size 0x2c virtual false final false
 char16_t Med3(char16_t a, char16_t b, char16_t c) ;

/// @brief Method QSort3 addr 0x101c4f0 size 0x448 virtual false final false
 void QSort3(int32_t loSt, int32_t hiSt, int32_t dSt) ;

/// @brief Method MainSort addr 0x101c940 size 0x7f8 virtual false final false
 void MainSort() ;

/// @brief Method RandomiseBlock addr 0x101d138 size 0x138 virtual false final false
 void RandomiseBlock() ;

/// @brief Method DoReversibleTransformation addr 0x101aa20 size 0xb4 virtual false final false
 void DoReversibleTransformation() ;

/// @brief Method FullGtU addr 0x101c148 size 0x314 virtual false final false
 bool FullGtU(int32_t i1, int32_t i2) ;

/// @brief Method AllocateCompressStructures addr 0x101a3c0 size 0xe0 virtual false final false
 void AllocateCompressStructures() ;

/// @brief Method GenerateMTFValues addr 0x101ba90 size 0x3a4 virtual false final false
 void GenerateMTFValues() ;

/// @brief Method Read addr 0x101d270 size 0x8 virtual true final false
 int32_t Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method Seek addr 0x101d278 size 0x8 virtual true final false
 int64_t Seek(int64_t offset, System::IO::SeekOrigin origin) ;

/// @brief Method SetLength addr 0x101d280 size 0x4 virtual true final false
 void SetLength(int64_t value) ;

/// @brief Method Write addr 0x101d284 size 0x88 virtual true final false
 void Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method get_CanRead addr 0x101d30c size 0x8 virtual true final false
 bool get_CanRead() ;

/// @brief Method get_CanSeek addr 0x101d314 size 0x8 virtual true final false
 bool get_CanSeek() ;

/// @brief Method get_CanWrite addr 0x101d31c size 0x8 virtual true final false
 bool get_CanWrite() ;

/// @brief Method get_Length addr 0x101d324 size 0x8 virtual true final false
 int64_t get_Length() ;

/// @brief Method get_Position addr 0x101d32c size 0x8 virtual true final false
 int64_t get_Position() ;

/// @brief Method set_Position addr 0x101d334 size 0x4 virtual true final false
 void set_Position(int64_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Apache::Bzip2
NEED_NO_BOX(Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream, "Org.BouncyCastle.Apache.Bzip2", "CBZip2OutputStream");
NEED_NO_BOX(Org::BouncyCastle::Apache::Bzip2::Org__BouncyCastle__Apache__Bzip2__CBZip2OutputStream__StackElem);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Apache::Bzip2::Org__BouncyCastle__Apache__Bzip2__CBZip2OutputStream__StackElem, "Org.BouncyCastle.Apache.Bzip2", "CBZip2OutputStream/StackElem");
