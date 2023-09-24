#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Tls {
class UseSrtpData;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSRTPUtils;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsSRTPUtils
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1329))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsSRTPUtils
class CORDL_TYPE TlsSRTPUtils : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TlsSRTPUtils() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsSRTPUtils", modifiers: " const&", def_value: None }]
constexpr TlsSRTPUtils(TlsSRTPUtils const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsSRTPUtils", modifiers: "&&", def_value: None }]
constexpr TlsSRTPUtils(TlsSRTPUtils&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsSRTPUtils(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TlsSRTPUtils& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsSRTPUtils& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsSRTPUtils& operator=(TlsSRTPUtils&& o) noexcept = default;
  constexpr TlsSRTPUtils& operator=(TlsSRTPUtils const& o) noexcept = default;
                


// Methods

/// @brief Method AddUseSrtpExtension addr 0xf2bc68 size 0xf0 virtual false final false
static void AddUseSrtpExtension(System::Collections::IDictionary extensions, Org::BouncyCastle::Crypto::Tls::UseSrtpData useSRTPData) ;

/// @brief Method GetUseSrtpExtension addr 0xf2be74 size 0x6c virtual false final false
static Org::BouncyCastle::Crypto::Tls::UseSrtpData GetUseSrtpExtension(System::Collections::IDictionary extensions) ;

/// @brief Method CreateUseSrtpExtension addr 0xf2bd58 size 0x11c virtual false final false
static ::ArrayW<uint8_t> CreateUseSrtpExtension(Org::BouncyCastle::Crypto::Tls::UseSrtpData useSrtpData) ;

/// @brief Method ReadUseSrtpExtension addr 0xf2bee0 size 0x18c virtual false final false
static Org::BouncyCastle::Crypto::Tls::UseSrtpData ReadUseSrtpExtension(::ArrayW<uint8_t> extensionData) ;

static Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils New_ctor() ;

/// @brief Method .ctor addr 0xf2c224 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils, "Org.BouncyCastle.Crypto.Tls", "TlsSRTPUtils");
