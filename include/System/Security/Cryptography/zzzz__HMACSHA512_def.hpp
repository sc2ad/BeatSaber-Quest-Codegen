#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__HMAC_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Security::Cryptography {
class HMACSHA512;
}
// Type: System.Security.Cryptography::HMACSHA512
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2930))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2936))
// CS Name: System.Security.Cryptography.HMACSHA512
class CORDL_TYPE HMACSHA512 : public System::Security::Cryptography::HMAC {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~HMACSHA512() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMACSHA512", modifiers: " const&", def_value: None }]
constexpr HMACSHA512(HMACSHA512 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMACSHA512", modifiers: "&&", def_value: None }]
constexpr HMACSHA512(HMACSHA512&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMACSHA512(void* ptr) noexcept : System::Security::Cryptography::HMAC(ptr) {
}


  constexpr HMACSHA512& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMACSHA512& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMACSHA512& operator=(HMACSHA512&& o) noexcept = default;
  constexpr HMACSHA512& operator=(HMACSHA512 const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_m_useLegacyBlockSize, put=__set_m_useLegacyBlockSize))  m_useLegacyBlockSize;

constexpr void __set_m_useLegacyBlockSize(bool value) ;

constexpr bool __get_m_useLegacyBlockSize() const;


// Properties

 int32_t __declspec(property(get=get_BlockSize))  BlockSize;


// Methods

static System::Security::Cryptography::HMACSHA512 New_ctor() ;

/// @brief Method .ctor addr 0x22f3f68 size 0x24 virtual false final false
 void _ctor() ;

static System::Security::Cryptography::HMACSHA512 New_ctor(::ArrayW<uint8_t> key) ;

/// @brief Method .ctor addr 0x22f3f8c size 0xf0 virtual false final false
 void _ctor(::ArrayW<uint8_t> key) ;

/// @brief Method get_BlockSize addr 0x22f407c size 0x18 virtual false final false
 int32_t get_BlockSize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::HMACSHA512);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::HMACSHA512, "System.Security.Cryptography", "HMACSHA512");
