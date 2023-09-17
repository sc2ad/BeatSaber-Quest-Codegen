#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Security {
class SecureString;
}
// Type: System.Security::SecureString
namespace System::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2881))
// CS Name: System.Security.SecureString
class CORDL_TYPE SecureString : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SecureString() = default;

// Ctor Parameters [CppParam { name: "", ty: "SecureString", modifiers: " const&", def_value: None }]
constexpr SecureString(SecureString const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SecureString", modifiers: "&&", def_value: None }]
constexpr SecureString(SecureString&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SecureString(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SecureString& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SecureString& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SecureString& operator=(SecureString&& o) noexcept = default;
  constexpr SecureString& operator=(SecureString const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_length, put=__set_length))  length;

constexpr void __set_length(int32_t value) ;

constexpr int32_t __get_length() const;

 bool __declspec(property(get=__get_disposed, put=__set_disposed))  disposed;

constexpr void __set_disposed(bool value) ;

constexpr bool __get_disposed() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_data() const;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;


// Methods

// Ctor Parameters []
explicit SecureString() ;

/// @brief Method .ctor addr 0x22e6710 size 0x24 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "value", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }]
explicit SecureString(void* value, int32_t length) ;

/// @brief Method .ctor addr 0x22e68b0 size 0x14c virtual false final false
 void _ctor(void* value, int32_t length) ;

/// @brief Method get_Length addr 0x22e6a00 size 0x64 virtual false final false
 int32_t get_Length() ;

/// @brief Method Dispose addr 0x22e6a64 size 0x38 virtual true final true
 void Dispose() ;

/// @brief Method Encrypt addr 0x22e69fc size 0x4 virtual false final false
 void Encrypt() ;

/// @brief Method Decrypt addr 0x22e6a9c size 0x4 virtual false final false
 void Decrypt() ;

/// @brief Method Alloc addr 0x22e6734 size 0x17c virtual false final false
 void Alloc(int32_t length, bool realloc) ;

/// @brief Method GetBuffer addr 0x22e6aa0 size 0xb0 virtual false final false
 ::ArrayW<uint8_t> GetBuffer() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security
} // end anonymous namespace
NEED_NO_BOX(::System::Security::SecureString);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::SecureString, "System.Security", "SecureString");
