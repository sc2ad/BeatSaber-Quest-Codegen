#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__HMAC_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Security::Cryptography {
class HMACRIPEMD160;
}
// Type: System.Security.Cryptography::HMACRIPEMD160
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2930))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2932))
// CS Name: System.Security.Cryptography.HMACRIPEMD160
class CORDL_TYPE HMACRIPEMD160 : public System::Security::Cryptography::HMAC {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~HMACRIPEMD160() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMACRIPEMD160", modifiers: " const&", def_value: None }]
constexpr HMACRIPEMD160(HMACRIPEMD160 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMACRIPEMD160", modifiers: "&&", def_value: None }]
constexpr HMACRIPEMD160(HMACRIPEMD160&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMACRIPEMD160(void* ptr) noexcept : System::Security::Cryptography::HMAC(ptr) {
}


  constexpr HMACRIPEMD160& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMACRIPEMD160& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMACRIPEMD160& operator=(HMACRIPEMD160&& o) noexcept = default;
  constexpr HMACRIPEMD160& operator=(HMACRIPEMD160 const& o) noexcept = default;
                


// Methods

static System::Security::Cryptography::HMACRIPEMD160 New_ctor() ;

/// @brief Method .ctor addr 0x22f3840 size 0x24 virtual false final false
 void _ctor() ;

static System::Security::Cryptography::HMACRIPEMD160 New_ctor(::ArrayW<uint8_t> key) ;

/// @brief Method .ctor addr 0x22f3864 size 0xc0 virtual false final false
 void _ctor(::ArrayW<uint8_t> key) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::HMACRIPEMD160);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::HMACRIPEMD160, "System.Security.Cryptography", "HMACRIPEMD160");
