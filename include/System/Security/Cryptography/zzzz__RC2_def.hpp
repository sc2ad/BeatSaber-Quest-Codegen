#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__SymmetricAlgorithm_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::Security::Cryptography {
class KeySizes;
}
// Forward declare root types
namespace System::Security::Cryptography {
class RC2;
}
// Type: System.Security.Cryptography::RC2
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2969))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2943))
// CS Name: System.Security.Cryptography.RC2
class CORDL_TYPE RC2 : public ::System::Security::Cryptography::SymmetricAlgorithm {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~RC2() = default;

// Ctor Parameters [CppParam { name: "", ty: "RC2", modifiers: " const&", def_value: None }]
constexpr RC2(RC2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RC2", modifiers: "&&", def_value: None }]
constexpr RC2(RC2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RC2(void* ptr) noexcept : ::System::Security::Cryptography::SymmetricAlgorithm(ptr) {
}


  constexpr RC2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RC2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RC2& operator=(RC2&& o) noexcept = default;
  constexpr RC2& operator=(RC2 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_EffectiveKeySizeValue, put=__set_EffectiveKeySizeValue))  EffectiveKeySizeValue;

constexpr void __set_EffectiveKeySizeValue(int32_t value) ;

constexpr int32_t __get_EffectiveKeySizeValue() const;

static ::ArrayW<::System::Security::Cryptography::KeySizes> __declspec(property(get=__get_s_legalBlockSizes, put=__set_s_legalBlockSizes))  s_legalBlockSizes;

static void __set_s_legalBlockSizes(::ArrayW<::System::Security::Cryptography::KeySizes> value) ;

static ::ArrayW<::System::Security::Cryptography::KeySizes> __get_s_legalBlockSizes() ;

static ::ArrayW<::System::Security::Cryptography::KeySizes> __declspec(property(get=__get_s_legalKeySizes, put=__set_s_legalKeySizes))  s_legalKeySizes;

static void __set_s_legalKeySizes(::ArrayW<::System::Security::Cryptography::KeySizes> value) ;

static ::ArrayW<::System::Security::Cryptography::KeySizes> __get_s_legalKeySizes() ;


// Properties

 int32_t __declspec(property(get=get_EffectiveKeySize))  EffectiveKeySize;

 int32_t __declspec(property(get=get_KeySize, put=set_KeySize))  KeySize;


// Methods

// Ctor Parameters []
explicit RC2() ;

/// @brief Method .ctor addr 0x22f4df4 size 0x7c virtual false final false
 void _ctor() ;

/// @brief Method get_EffectiveKeySize addr 0x22f4e70 size 0x1c virtual true final false
 int32_t get_EffectiveKeySize() ;

/// @brief Method get_KeySize addr 0x22f4e8c size 0x8 virtual true final false
 int32_t get_KeySize() ;

/// @brief Method set_KeySize addr 0x22f4e94 size 0x7c virtual true final false
 void set_KeySize(int32_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
} // end anonymous namespace
NEED_NO_BOX(::System::Security::Cryptography::RC2);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RC2, "System.Security.Cryptography", "RC2");
