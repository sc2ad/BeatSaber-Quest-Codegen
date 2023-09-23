#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class IDisposable;
}
namespace System::Security::Cryptography {
class KeySizes;
}
// Forward declare root types
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
// Type: System.Security.Cryptography::AsymmetricAlgorithm
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2914))
// CS Name: System.Security.Cryptography.AsymmetricAlgorithm
class CORDL_TYPE AsymmetricAlgorithm : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AsymmetricAlgorithm() = default;

// Ctor Parameters [CppParam { name: "", ty: "AsymmetricAlgorithm", modifiers: " const&", def_value: None }]
constexpr AsymmetricAlgorithm(AsymmetricAlgorithm const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AsymmetricAlgorithm", modifiers: "&&", def_value: None }]
constexpr AsymmetricAlgorithm(AsymmetricAlgorithm&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AsymmetricAlgorithm(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AsymmetricAlgorithm& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AsymmetricAlgorithm& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AsymmetricAlgorithm& operator=(AsymmetricAlgorithm&& o) noexcept = default;
  constexpr AsymmetricAlgorithm& operator=(AsymmetricAlgorithm const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_KeySizeValue, put=__set_KeySizeValue))  KeySizeValue;

constexpr void __set_KeySizeValue(int32_t value) ;

constexpr int32_t __get_KeySizeValue() const;

 ::ArrayW<System::Security::Cryptography::KeySizes> __declspec(property(get=__get_LegalKeySizesValue, put=__set_LegalKeySizesValue))  LegalKeySizesValue;

constexpr void __set_LegalKeySizesValue(::ArrayW<System::Security::Cryptography::KeySizes> value) ;

constexpr ::ArrayW<System::Security::Cryptography::KeySizes> __get_LegalKeySizesValue() const;


// Properties

 int32_t __declspec(property(get=get_KeySize, put=set_KeySize))  KeySize;


// Methods

// Ctor Parameters []
explicit AsymmetricAlgorithm() ;

/// @brief Method .ctor addr 0x22efbac size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Dispose addr 0x22efbb4 size 0x4 virtual true final true
 void Dispose() ;

/// @brief Method Clear addr 0x22efbb8 size 0x6c virtual false final false
 void Clear() ;

/// @brief Method Dispose addr 0x22efc24 size 0x4 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method get_KeySize addr 0x22efc28 size 0x8 virtual true final false
 int32_t get_KeySize() ;

/// @brief Method set_KeySize addr 0x22efc30 size 0xdc virtual true final false
 void set_KeySize(int32_t value) ;

/// @brief Method FromXmlString addr 0x22efd34 size 0x40 virtual true final false
 void FromXmlString(::StringW xmlString) ;

/// @brief Method ToXmlString addr 0x22efd74 size 0x40 virtual true final false
 ::StringW ToXmlString(bool includePrivateParameters) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::AsymmetricAlgorithm);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::AsymmetricAlgorithm, "System.Security.Cryptography", "AsymmetricAlgorithm");
