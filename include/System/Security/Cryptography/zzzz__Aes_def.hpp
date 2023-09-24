#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__SymmetricAlgorithm_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System::Security::Cryptography {
class KeySizes;
}
// Forward declare root types
namespace System::Security::Cryptography {
class Aes;
}
// Type: System.Security.Cryptography::Aes
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2969))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2913))
// CS Name: System.Security.Cryptography.Aes
class CORDL_TYPE Aes : public System::Security::Cryptography::SymmetricAlgorithm {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~Aes() = default;

// Ctor Parameters [CppParam { name: "", ty: "Aes", modifiers: " const&", def_value: None }]
constexpr Aes(Aes const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Aes", modifiers: "&&", def_value: None }]
constexpr Aes(Aes&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Aes(void* ptr) noexcept : System::Security::Cryptography::SymmetricAlgorithm(ptr) {
}


  constexpr Aes& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Aes& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Aes& operator=(Aes&& o) noexcept = default;
  constexpr Aes& operator=(Aes const& o) noexcept = default;
                


// Fields

static ::ArrayW<System::Security::Cryptography::KeySizes> __declspec(property(get=__get_s_legalBlockSizes, put=__set_s_legalBlockSizes))  s_legalBlockSizes;

static void __set_s_legalBlockSizes(::ArrayW<System::Security::Cryptography::KeySizes> value) ;

static ::ArrayW<System::Security::Cryptography::KeySizes> __get_s_legalBlockSizes() ;

static ::ArrayW<System::Security::Cryptography::KeySizes> __declspec(property(get=__get_s_legalKeySizes, put=__set_s_legalKeySizes))  s_legalKeySizes;

static void __set_s_legalKeySizes(::ArrayW<System::Security::Cryptography::KeySizes> value) ;

static ::ArrayW<System::Security::Cryptography::KeySizes> __get_s_legalKeySizes() ;


// Methods

static System::Security::Cryptography::Aes New_ctor() ;

/// @brief Method .ctor addr 0x22ef994 size 0x84 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::Aes);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::Aes, "System.Security.Cryptography", "Aes");
