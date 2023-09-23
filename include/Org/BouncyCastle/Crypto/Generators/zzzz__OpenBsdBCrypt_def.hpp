#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class OpenBsdBCrypt;
}
// Type: Org.BouncyCastle.Crypto.Generators::OpenBsdBCrypt
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(915))
// CS Name: Org.BouncyCastle.Crypto.Generators.OpenBsdBCrypt
class CORDL_TYPE OpenBsdBCrypt : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OpenBsdBCrypt() = default;

// Ctor Parameters [CppParam { name: "", ty: "OpenBsdBCrypt", modifiers: " const&", def_value: None }]
constexpr OpenBsdBCrypt(OpenBsdBCrypt const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OpenBsdBCrypt", modifiers: "&&", def_value: None }]
constexpr OpenBsdBCrypt(OpenBsdBCrypt&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OpenBsdBCrypt(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OpenBsdBCrypt& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OpenBsdBCrypt& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OpenBsdBCrypt& operator=(OpenBsdBCrypt&& o) noexcept = default;
  constexpr OpenBsdBCrypt& operator=(OpenBsdBCrypt const& o) noexcept = default;
                


// Fields

static ::ArrayW<uint8_t> __declspec(property(get=__get_EncodingTable, put=__set_EncodingTable))  EncodingTable;

static void __set_EncodingTable(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_EncodingTable() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_DecodingTable, put=__set_DecodingTable))  DecodingTable;

static void __set_DecodingTable(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_DecodingTable() ;

static ::StringW __declspec(property(get=__get_DefaultVersion, put=__set_DefaultVersion))  DefaultVersion;

static void __set_DefaultVersion(::StringW value) ;

static ::StringW __get_DefaultVersion() ;

static Org::BouncyCastle::Utilities::Collections::ISet __declspec(property(get=__get_AllowedVersions, put=__set_AllowedVersions))  AllowedVersions;

static void __set_AllowedVersions(Org::BouncyCastle::Utilities::Collections::ISet value) ;

static Org::BouncyCastle::Utilities::Collections::ISet __get_AllowedVersions() ;


// Methods

// Ctor Parameters []
explicit OpenBsdBCrypt() ;

/// @brief Method .ctor addr 0xe753bc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method CreateBcryptString addr 0xe753c4 size 0x2e4 virtual false final false
static ::StringW CreateBcryptString(::StringW version, ::ArrayW<uint8_t> password, ::ArrayW<uint8_t> salt, int32_t cost) ;

/// @brief Method Generate addr 0xe75a04 size 0x78 virtual false final false
static ::StringW Generate(::ArrayW<char16_t> password, ::ArrayW<uint8_t> salt, int32_t cost) ;

/// @brief Method Generate addr 0xe75a7c size 0x3b4 virtual false final false
static ::StringW Generate(::StringW version, ::ArrayW<char16_t> password, ::ArrayW<uint8_t> salt, int32_t cost) ;

/// @brief Method CheckPassword addr 0xe75e30 size 0x528 virtual false final false
static bool CheckPassword(::StringW bcryptString, ::ArrayW<char16_t> password) ;

/// @brief Method EncodeData addr 0xe756a8 size 0x35c virtual false final false
static ::StringW EncodeData(::ArrayW<uint8_t> data) ;

/// @brief Method DecodeSaltString addr 0xe76358 size 0x3d4 virtual false final false
static ::ArrayW<uint8_t> DecodeSaltString(::StringW saltString) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt, "Org.BouncyCastle.Crypto.Generators", "OpenBsdBCrypt");
