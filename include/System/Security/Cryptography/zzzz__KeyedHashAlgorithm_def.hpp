#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithm_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Security::Cryptography {
class KeyedHashAlgorithm;
}
// Type: System.Security.Cryptography::KeyedHashAlgorithm
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2912))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2938))
// CS Name: System.Security.Cryptography.KeyedHashAlgorithm
class CORDL_TYPE KeyedHashAlgorithm : public System::Security::Cryptography::HashAlgorithm {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~KeyedHashAlgorithm() = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyedHashAlgorithm", modifiers: " const&", def_value: None }]
constexpr KeyedHashAlgorithm(KeyedHashAlgorithm const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyedHashAlgorithm", modifiers: "&&", def_value: None }]
constexpr KeyedHashAlgorithm(KeyedHashAlgorithm&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KeyedHashAlgorithm(void* ptr) noexcept : System::Security::Cryptography::HashAlgorithm(ptr) {
}


  constexpr KeyedHashAlgorithm& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KeyedHashAlgorithm& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KeyedHashAlgorithm& operator=(KeyedHashAlgorithm&& o) noexcept = default;
  constexpr KeyedHashAlgorithm& operator=(KeyedHashAlgorithm const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_KeyValue, put=__set_KeyValue))  KeyValue;

constexpr void __set_KeyValue(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_KeyValue() const;


// Properties

 ::ArrayW<uint8_t> __declspec(property(get=get_Key, put=set_Key))  Key;


// Methods

static System::Security::Cryptography::KeyedHashAlgorithm New_ctor() ;

/// @brief Method .ctor addr 0x22f374c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Dispose addr 0x22f36f4 size 0x48 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method get_Key addr 0x22f4094 size 0x78 virtual true final false
 ::ArrayW<uint8_t> get_Key() ;

/// @brief Method set_Key addr 0x22f410c size 0x10c virtual true final false
 void set_Key(::ArrayW<uint8_t> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::KeyedHashAlgorithm);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::KeyedHashAlgorithm, "System.Security.Cryptography", "KeyedHashAlgorithm");
