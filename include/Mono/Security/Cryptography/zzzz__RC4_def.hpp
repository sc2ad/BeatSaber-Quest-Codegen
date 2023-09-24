#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__SymmetricAlgorithm_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Security::Cryptography {
class KeySizes;
}
// Forward declare root types
namespace Mono::Security::Cryptography {
class RC4;
}
// Type: Mono.Security.Cryptography::RC4
namespace Mono::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2969))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14009))
// CS Name: Mono.Security.Cryptography.RC4
class CORDL_TYPE RC4 : public System::Security::Cryptography::SymmetricAlgorithm {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~RC4() = default;

// Ctor Parameters [CppParam { name: "", ty: "RC4", modifiers: " const&", def_value: None }]
constexpr RC4(RC4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RC4", modifiers: "&&", def_value: None }]
constexpr RC4(RC4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RC4(void* ptr) noexcept : System::Security::Cryptography::SymmetricAlgorithm(ptr) {
}


  constexpr RC4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RC4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RC4& operator=(RC4&& o) noexcept = default;
  constexpr RC4& operator=(RC4 const& o) noexcept = default;
                


// Fields

static ::ArrayW<System::Security::Cryptography::KeySizes> __declspec(property(get=__get_s_legalBlockSizes, put=__set_s_legalBlockSizes))  s_legalBlockSizes;

static void __set_s_legalBlockSizes(::ArrayW<System::Security::Cryptography::KeySizes> value) ;

static ::ArrayW<System::Security::Cryptography::KeySizes> __get_s_legalBlockSizes() ;

static ::ArrayW<System::Security::Cryptography::KeySizes> __declspec(property(get=__get_s_legalKeySizes, put=__set_s_legalKeySizes))  s_legalKeySizes;

static void __set_s_legalKeySizes(::ArrayW<System::Security::Cryptography::KeySizes> value) ;

static ::ArrayW<System::Security::Cryptography::KeySizes> __get_s_legalKeySizes() ;


// Properties

 ::ArrayW<uint8_t> __declspec(property(get=get_IV, put=set_IV))  IV;


// Methods

static Mono::Security::Cryptography::RC4 New_ctor() ;

/// @brief Method .ctor addr 0x2295d08 size 0x7c virtual false final false
 void _ctor() ;

/// @brief Method get_IV addr 0x229a87c size 0x44 virtual true final false
 ::ArrayW<uint8_t> get_IV() ;

/// @brief Method set_IV addr 0x229a8c0 size 0x4 virtual true final false
 void set_IV(::ArrayW<uint8_t> value) ;

/// @brief Method Create addr 0x229a8c4 size 0x58 virtual false final false
static Mono::Security::Cryptography::RC4 Create() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::Cryptography
NEED_NO_BOX(Mono::Security::Cryptography::RC4);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Cryptography::RC4, "Mono.Security.Cryptography", "RC4");
