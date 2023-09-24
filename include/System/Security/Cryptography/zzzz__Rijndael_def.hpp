#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__SymmetricAlgorithm_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System::Security::Cryptography {
class KeySizes;
}
// Forward declare root types
namespace System::Security::Cryptography {
class Rijndael;
}
// Type: System.Security.Cryptography::Rijndael
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2969))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2945))
// CS Name: System.Security.Cryptography.Rijndael
class CORDL_TYPE Rijndael : public System::Security::Cryptography::SymmetricAlgorithm {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~Rijndael() = default;

// Ctor Parameters [CppParam { name: "", ty: "Rijndael", modifiers: " const&", def_value: None }]
constexpr Rijndael(Rijndael const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Rijndael", modifiers: "&&", def_value: None }]
constexpr Rijndael(Rijndael&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Rijndael(void* ptr) noexcept : System::Security::Cryptography::SymmetricAlgorithm(ptr) {
}


  constexpr Rijndael& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Rijndael& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Rijndael& operator=(Rijndael&& o) noexcept = default;
  constexpr Rijndael& operator=(Rijndael const& o) noexcept = default;
                


// Fields

static ::ArrayW<System::Security::Cryptography::KeySizes> __declspec(property(get=__get_s_legalBlockSizes, put=__set_s_legalBlockSizes))  s_legalBlockSizes;

static void __set_s_legalBlockSizes(::ArrayW<System::Security::Cryptography::KeySizes> value) ;

static ::ArrayW<System::Security::Cryptography::KeySizes> __get_s_legalBlockSizes() ;

static ::ArrayW<System::Security::Cryptography::KeySizes> __declspec(property(get=__get_s_legalKeySizes, put=__set_s_legalKeySizes))  s_legalKeySizes;

static void __set_s_legalKeySizes(::ArrayW<System::Security::Cryptography::KeySizes> value) ;

static ::ArrayW<System::Security::Cryptography::KeySizes> __get_s_legalKeySizes() ;


// Methods

static System::Security::Cryptography::Rijndael New_ctor() ;

/// @brief Method .ctor addr 0x22f554c size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::Rijndael);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::Rijndael, "System.Security.Cryptography", "Rijndael");
