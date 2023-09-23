#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseInputStream_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Bcpg {
class InputStreamPacket;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedData__TruncatedStream;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpEncryptedData;
}
// Type: ::TruncatedStream
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(498))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1637))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpEncryptedData::TruncatedStream
class CORDL_TYPE Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedData__TruncatedStream : public Org::BouncyCastle::Utilities::IO::BaseInputStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedData__TruncatedStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedData__TruncatedStream", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedData__TruncatedStream(Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedData__TruncatedStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedData__TruncatedStream", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedData__TruncatedStream(Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedData__TruncatedStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedData__TruncatedStream(void* ptr) noexcept : Org::BouncyCastle::Utilities::IO::BaseInputStream(ptr) {
}


  constexpr Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedData__TruncatedStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedData__TruncatedStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedData__TruncatedStream& operator=(Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedData__TruncatedStream&& o) noexcept = default;
  constexpr Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedData__TruncatedStream& operator=(Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedData__TruncatedStream const& o) noexcept = default;
                


// Fields

/// @brief Field LookAheadSize offset 0
static constexpr int32_t  LookAheadSize{22};

/// @brief Field LookAheadBufSize offset 0
static constexpr int32_t  LookAheadBufSize{512};

/// @brief Field LookAheadBufLimit offset 0
static constexpr int32_t  LookAheadBufLimit{490};

 System::IO::Stream __declspec(property(get=__get_inStr, put=__set_inStr))  inStr;

constexpr void __set_inStr(System::IO::Stream value) ;

constexpr System::IO::Stream __get_inStr() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_lookAhead, put=__set_lookAhead))  lookAhead;

constexpr void __set_lookAhead(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_lookAhead() const;

 int32_t __declspec(property(get=__get_bufStart, put=__set_bufStart))  bufStart;

constexpr void __set_bufStart(int32_t value) ;

constexpr int32_t __get_bufStart() const;

 int32_t __declspec(property(get=__get_bufEnd, put=__set_bufEnd))  bufEnd;

constexpr void __set_bufEnd(int32_t value) ;

constexpr int32_t __get_bufEnd() const;


// Methods

// Ctor Parameters [CppParam { name: "inStr", ty: "System::IO::Stream", modifiers: "", def_value: None }]
explicit Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedData__TruncatedStream(System::IO::Stream inStr) ;

/// @brief Method .ctor addr 0x101d7a8 size 0xd8 virtual false final false
 void _ctor(System::IO::Stream inStr) ;

/// @brief Method FillBuffer addr 0x101d880 size 0x58 virtual false final false
 int32_t FillBuffer() ;

/// @brief Method ReadByte addr 0x101d8d8 size 0x64 virtual true final false
 int32_t ReadByte() ;

/// @brief Method Read addr 0x101d93c size 0xcc virtual true final false
 int32_t Read(::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

/// @brief Method GetLookAhead addr 0x101d734 size 0x74 virtual false final false
 ::ArrayW<uint8_t> GetLookAhead() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpEncryptedData
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1638))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpEncryptedData
class CORDL_TYPE PgpEncryptedData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using TruncatedStream = Org::BouncyCastle::Bcpg::OpenPgp::Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedData__TruncatedStream;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~PgpEncryptedData() = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpEncryptedData", modifiers: " const&", def_value: None }]
constexpr PgpEncryptedData(PgpEncryptedData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpEncryptedData", modifiers: "&&", def_value: None }]
constexpr PgpEncryptedData(PgpEncryptedData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PgpEncryptedData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PgpEncryptedData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PgpEncryptedData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PgpEncryptedData& operator=(PgpEncryptedData&& o) noexcept = default;
  constexpr PgpEncryptedData& operator=(PgpEncryptedData const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Bcpg::InputStreamPacket __declspec(property(get=__get_encData, put=__set_encData))  encData;

constexpr void __set_encData(Org::BouncyCastle::Bcpg::InputStreamPacket value) ;

constexpr Org::BouncyCastle::Bcpg::InputStreamPacket __get_encData() const;

 System::IO::Stream __declspec(property(get=__get_encStream, put=__set_encStream))  encStream;

constexpr void __set_encStream(System::IO::Stream value) ;

constexpr System::IO::Stream __get_encStream() const;

 Org::BouncyCastle::Bcpg::OpenPgp::Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedData__TruncatedStream __declspec(property(get=__get_truncStream, put=__set_truncStream))  truncStream;

constexpr void __set_truncStream(Org::BouncyCastle::Bcpg::OpenPgp::Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedData__TruncatedStream value) ;

constexpr Org::BouncyCastle::Bcpg::OpenPgp::Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedData__TruncatedStream __get_truncStream() const;


// Methods

// Ctor Parameters [CppParam { name: "encData", ty: "Org::BouncyCastle::Bcpg::InputStreamPacket", modifiers: "", def_value: None }]
explicit PgpEncryptedData(Org::BouncyCastle::Bcpg::InputStreamPacket encData) ;

/// @brief Method .ctor addr 0x101d414 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::InputStreamPacket encData) ;

/// @brief Method GetInputStream addr 0x101d43c size 0x1c virtual true final false
 System::IO::Stream GetInputStream() ;

/// @brief Method IsIntegrityProtected addr 0x101d458 size 0x7c virtual false final false
 bool IsIntegrityProtected() ;

/// @brief Method Verify addr 0x101d4d4 size 0x260 virtual false final false
 bool Verify() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(Org::BouncyCastle::Bcpg::OpenPgp::Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedData__TruncatedStream);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::OpenPgp::Org__BouncyCastle__Bcpg__OpenPgp__PgpEncryptedData__TruncatedStream, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpEncryptedData/TruncatedStream");
NEED_NO_BOX(Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpEncryptedData");
