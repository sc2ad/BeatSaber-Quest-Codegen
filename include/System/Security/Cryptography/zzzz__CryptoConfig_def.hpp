#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Security::Cryptography {
class CryptoConfig;
}
// Type: System.Security.Cryptography::CryptoConfig
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2973))
// CS Name: System.Security.Cryptography.CryptoConfig
class CORDL_TYPE CryptoConfig : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CryptoConfig() = default;

// Ctor Parameters [CppParam { name: "", ty: "CryptoConfig", modifiers: " const&", def_value: None }]
constexpr CryptoConfig(CryptoConfig const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CryptoConfig", modifiers: "&&", def_value: None }]
constexpr CryptoConfig(CryptoConfig&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CryptoConfig(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CryptoConfig& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CryptoConfig& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CryptoConfig& operator=(CryptoConfig&& o) noexcept = default;
  constexpr CryptoConfig& operator=(CryptoConfig const& o) noexcept = default;
                


// Fields

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_lockObject, put=__set_lockObject))  lockObject;

static void __set_lockObject(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_lockObject() ;

static System::Collections::Generic::Dictionary_2<::StringW,System::Type> __declspec(property(get=__get_algorithms, put=__set_algorithms))  algorithms;

static void __set_algorithms(System::Collections::Generic::Dictionary_2<::StringW,System::Type> value) ;

static System::Collections::Generic::Dictionary_2<::StringW,System::Type> __get_algorithms() ;


// Properties

static bool __declspec(property(get=get_AllowOnlyFipsAlgorithms))  AllowOnlyFipsAlgorithms;


// Methods

/// @brief Method CreateFromName addr 0x22ffac8 size 0x58 virtual false final false
static ::bs_hook::Il2CppWrapperType CreateFromName(::StringW name) ;

/// @brief Method CreateFromName addr 0x230129c size 0x1f14 virtual false final false
static ::bs_hook::Il2CppWrapperType CreateFromName(::StringW name, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method MapNameToOID addr 0x23032fc size 0x7b4 virtual false final false
static ::StringW MapNameToOID(::StringW name) ;

/// @brief Method EncodeOID addr 0x2303ab0 size 0x40c virtual false final false
static ::ArrayW<uint8_t> EncodeOID(::StringW str) ;

/// @brief Method EncodeLongNumber addr 0x2303ebc size 0x190 virtual false final false
static ::ArrayW<uint8_t> EncodeLongNumber(int64_t x) ;

/// @brief Method get_AllowOnlyFipsAlgorithms addr 0x22fd088 size 0x8 virtual false final false
static bool get_AllowOnlyFipsAlgorithms() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::CryptoConfig);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::CryptoConfig, "System.Security.Cryptography", "CryptoConfig");
