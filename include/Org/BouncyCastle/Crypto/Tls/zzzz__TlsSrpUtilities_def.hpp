#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSrpUtilities;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsSrpUtilities
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1328))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsSrpUtilities
class CORDL_TYPE TlsSrpUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TlsSrpUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsSrpUtilities", modifiers: " const&", def_value: None }]
constexpr TlsSrpUtilities(TlsSrpUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsSrpUtilities", modifiers: "&&", def_value: None }]
constexpr TlsSrpUtilities(TlsSrpUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsSrpUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TlsSrpUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsSrpUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsSrpUtilities& operator=(TlsSrpUtilities&& o) noexcept = default;
  constexpr TlsSrpUtilities& operator=(TlsSrpUtilities const& o) noexcept = default;
                


// Methods

/// @brief Method AddSrpExtension addr 0xf2b8d8 size 0xf0 virtual false final false
static void AddSrpExtension(System::Collections::IDictionary extensions, ::ArrayW<uint8_t> identity) ;

/// @brief Method GetSrpExtension addr 0xf2ba5c size 0x6c virtual false final false
static ::ArrayW<uint8_t> GetSrpExtension(System::Collections::IDictionary extensions) ;

/// @brief Method CreateSrpExtension addr 0xf2b9c8 size 0x94 virtual false final false
static ::ArrayW<uint8_t> CreateSrpExtension(::ArrayW<uint8_t> identity) ;

/// @brief Method ReadSrpExtension addr 0xf2bac8 size 0xf4 virtual false final false
static ::ArrayW<uint8_t> ReadSrpExtension(::ArrayW<uint8_t> extensionData) ;

/// @brief Method ReadSrpParameter addr 0xf2b500 size 0x9c virtual false final false
static Org::BouncyCastle::Math::BigInteger ReadSrpParameter(System::IO::Stream input) ;

/// @brief Method WriteSrpParameter addr 0xf2b2b4 size 0x78 virtual false final false
static void WriteSrpParameter(Org::BouncyCastle::Math::BigInteger x, System::IO::Stream output) ;

/// @brief Method IsSrpCipherSuite addr 0xf2bc4c size 0x14 virtual false final false
static bool IsSrpCipherSuite(int32_t cipherSuite) ;

// Ctor Parameters []
explicit TlsSrpUtilities() ;

/// @brief Method .ctor addr 0xf2bc60 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities, "Org.BouncyCastle.Crypto.Tls", "TlsSrpUtilities");
