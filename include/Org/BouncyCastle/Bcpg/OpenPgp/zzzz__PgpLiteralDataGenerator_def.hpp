#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class IStreamGenerator;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace System {
struct DateTime;
}
namespace System::IO {
class FileInfo;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpLiteralDataGenerator;
}
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpLiteralDataGenerator
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1651))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpLiteralDataGenerator
class CORDL_TYPE PgpLiteralDataGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator
constexpr operator  Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PgpLiteralDataGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpLiteralDataGenerator", modifiers: " const&", def_value: None }]
constexpr PgpLiteralDataGenerator(PgpLiteralDataGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpLiteralDataGenerator", modifiers: "&&", def_value: None }]
constexpr PgpLiteralDataGenerator(PgpLiteralDataGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PgpLiteralDataGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PgpLiteralDataGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PgpLiteralDataGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PgpLiteralDataGenerator& operator=(PgpLiteralDataGenerator&& o) noexcept = default;
  constexpr PgpLiteralDataGenerator& operator=(PgpLiteralDataGenerator const& o) noexcept = default;
                


// Fields

/// @brief Field Binary offset 0
static constexpr char16_t  Binary{b};

/// @brief Field Text offset 0
static constexpr char16_t  Text{t};

/// @brief Field Utf8 offset 0
static constexpr char16_t  Utf8{u};

/// @brief Field Console offset 0
static constexpr ::ConstString  Console{u"_CONSOLE"};

 Org::BouncyCastle::Bcpg::BcpgOutputStream __declspec(property(get=__get_pkOut, put=__set_pkOut))  pkOut;

constexpr void __set_pkOut(Org::BouncyCastle::Bcpg::BcpgOutputStream value) ;

constexpr Org::BouncyCastle::Bcpg::BcpgOutputStream __get_pkOut() const;

 bool __declspec(property(get=__get_oldFormat, put=__set_oldFormat))  oldFormat;

constexpr void __set_oldFormat(bool value) ;

constexpr bool __get_oldFormat() const;


// Methods

static Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator New_ctor() ;

/// @brief Method .ctor addr 0x1023f94 size 0x8 virtual false final false
 void _ctor() ;

static Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator New_ctor(bool oldFormat) ;

/// @brief Method .ctor addr 0x1023f9c size 0x28 virtual false final false
 void _ctor(bool oldFormat) ;

/// @brief Method WriteHeader addr 0x1023fc4 size 0x144 virtual false final false
 void WriteHeader(Org::BouncyCastle::Bcpg::BcpgOutputStream outStr, char16_t format, ::ArrayW<uint8_t> encName, int64_t modificationTime) ;

/// @brief Method Open addr 0x1024108 size 0x1d4 virtual false final false
 System::IO::Stream Open(System::IO::Stream outStr, char16_t format, ::StringW name, int64_t length, System::DateTime modificationTime) ;

/// @brief Method Open addr 0x10242dc size 0x1c0 virtual false final false
 System::IO::Stream Open(System::IO::Stream outStr, char16_t format, ::StringW name, System::DateTime modificationTime, ::ArrayW<uint8_t> buffer) ;

/// @brief Method Open addr 0x102449c size 0x84 virtual false final false
 System::IO::Stream Open(System::IO::Stream outStr, char16_t format, System::IO::FileInfo file) ;

/// @brief Method Close addr 0x1024520 size 0x40 virtual true final true
 void Close() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::OpenPgp::PgpLiteralDataGenerator, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpLiteralDataGenerator");
