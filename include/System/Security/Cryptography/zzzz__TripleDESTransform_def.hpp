#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Mono/Security/Cryptography/zzzz__SymmetricTransform_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Security::Cryptography {
class DESTransform;
}
namespace System::Security::Cryptography {
class TripleDES;
}
// Forward declare root types
namespace System::Security::Cryptography {
class TripleDESTransform;
}
// Type: System.Security.Cryptography::TripleDESTransform
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2284))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2983))
// CS Name: System.Security.Cryptography.TripleDESTransform
class CORDL_TYPE TripleDESTransform : public Mono::Security::Cryptography::SymmetricTransform {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~TripleDESTransform() = default;

// Ctor Parameters [CppParam { name: "", ty: "TripleDESTransform", modifiers: " const&", def_value: None }]
constexpr TripleDESTransform(TripleDESTransform const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TripleDESTransform", modifiers: "&&", def_value: None }]
constexpr TripleDESTransform(TripleDESTransform&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TripleDESTransform(void* ptr) noexcept : Mono::Security::Cryptography::SymmetricTransform(ptr) {
}


  constexpr TripleDESTransform& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TripleDESTransform& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TripleDESTransform& operator=(TripleDESTransform&& o) noexcept = default;
  constexpr TripleDESTransform& operator=(TripleDESTransform const& o) noexcept = default;
                


// Fields

 System::Security::Cryptography::DESTransform __declspec(property(get=__get_E1, put=__set_E1))  E1;

constexpr void __set_E1(System::Security::Cryptography::DESTransform value) ;

constexpr System::Security::Cryptography::DESTransform __get_E1() const;

 System::Security::Cryptography::DESTransform __declspec(property(get=__get_D2, put=__set_D2))  D2;

constexpr void __set_D2(System::Security::Cryptography::DESTransform value) ;

constexpr System::Security::Cryptography::DESTransform __get_D2() const;

 System::Security::Cryptography::DESTransform __declspec(property(get=__get_E3, put=__set_E3))  E3;

constexpr void __set_E3(System::Security::Cryptography::DESTransform value) ;

constexpr System::Security::Cryptography::DESTransform __get_E3() const;

 System::Security::Cryptography::DESTransform __declspec(property(get=__get_D1, put=__set_D1))  D1;

constexpr void __set_D1(System::Security::Cryptography::DESTransform value) ;

constexpr System::Security::Cryptography::DESTransform __get_D1() const;

 System::Security::Cryptography::DESTransform __declspec(property(get=__get_E2, put=__set_E2))  E2;

constexpr void __set_E2(System::Security::Cryptography::DESTransform value) ;

constexpr System::Security::Cryptography::DESTransform __get_E2() const;

 System::Security::Cryptography::DESTransform __declspec(property(get=__get_D3, put=__set_D3))  D3;

constexpr void __set_D3(System::Security::Cryptography::DESTransform value) ;

constexpr System::Security::Cryptography::DESTransform __get_D3() const;


// Methods

static System::Security::Cryptography::TripleDESTransform New_ctor(System::Security::Cryptography::TripleDES algo, bool encryption, ::ArrayW<uint8_t> key, ::ArrayW<uint8_t> iv) ;

/// @brief Method .ctor addr 0x23005e0 size 0x320 virtual false final false
 void _ctor(System::Security::Cryptography::TripleDES algo, bool encryption, ::ArrayW<uint8_t> key, ::ArrayW<uint8_t> iv) ;

/// @brief Method ECB addr 0x2309734 size 0x120 virtual true final false
 void ECB(::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output) ;

/// @brief Method GetStrongKey addr 0x2309690 size 0xa4 virtual false final false
static ::ArrayW<uint8_t> GetStrongKey() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::TripleDESTransform);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::TripleDESTransform, "System.Security.Cryptography", "TripleDESTransform");
