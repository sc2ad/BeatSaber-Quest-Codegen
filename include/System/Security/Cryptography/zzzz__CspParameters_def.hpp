#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Security::Cryptography {
struct CspProviderFlags;
}
// Forward declare root types
namespace System::Security::Cryptography {
class CspParameters;
}
// Type: System.Security.Cryptography::CspParameters
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2923))
// CS Name: System.Security.Cryptography.CspParameters
class CORDL_TYPE CspParameters : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~CspParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "CspParameters", modifiers: " const&", def_value: None }]
constexpr CspParameters(CspParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CspParameters", modifiers: "&&", def_value: None }]
constexpr CspParameters(CspParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CspParameters(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CspParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CspParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CspParameters& operator=(CspParameters&& o) noexcept = default;
  constexpr CspParameters& operator=(CspParameters const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_ProviderType, put=__set_ProviderType))  ProviderType;

constexpr void __set_ProviderType(int32_t value) ;

constexpr int32_t __get_ProviderType() const;

 ::StringW __declspec(property(get=__get_ProviderName, put=__set_ProviderName))  ProviderName;

constexpr void __set_ProviderName(::StringW value) ;

constexpr ::StringW __get_ProviderName() const;

 ::StringW __declspec(property(get=__get_KeyContainerName, put=__set_KeyContainerName))  KeyContainerName;

constexpr void __set_KeyContainerName(::StringW value) ;

constexpr ::StringW __get_KeyContainerName() const;

 int32_t __declspec(property(get=__get_KeyNumber, put=__set_KeyNumber))  KeyNumber;

constexpr void __set_KeyNumber(int32_t value) ;

constexpr int32_t __get_KeyNumber() const;

 int32_t __declspec(property(get=__get_m_flags, put=__set_m_flags))  m_flags;

constexpr void __set_m_flags(int32_t value) ;

constexpr int32_t __get_m_flags() const;


// Properties

 ::System::Security::Cryptography::CspProviderFlags __declspec(property(get=get_Flags, put=set_Flags))  Flags;


// Methods

/// @brief Method get_Flags addr 0x22f0008 size 0x8 virtual false final false
 ::System::Security::Cryptography::CspProviderFlags get_Flags() ;

/// @brief Method set_Flags addr 0x22f0010 size 0xe8 virtual false final false
 void set_Flags(::System::Security::Cryptography::CspProviderFlags value) ;

// Ctor Parameters []
explicit CspParameters() ;

/// @brief Method .ctor addr 0x22f00f8 size 0x2c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "dwTypeIn", ty: "int32_t", modifiers: "", def_value: None }]
explicit CspParameters(int32_t dwTypeIn) ;

/// @brief Method .ctor addr 0x22f0168 size 0x34 virtual false final false
 void _ctor(int32_t dwTypeIn) ;

// Ctor Parameters [CppParam { name: "dwTypeIn", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "strProviderNameIn", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "strContainerNameIn", ty: "::StringW", modifiers: "", def_value: None }]
explicit CspParameters(int32_t dwTypeIn, ::StringW strProviderNameIn, ::StringW strContainerNameIn) ;

/// @brief Method .ctor addr 0x22f0124 size 0x44 virtual false final false
 void _ctor(int32_t dwTypeIn, ::StringW strProviderNameIn, ::StringW strContainerNameIn) ;

// Ctor Parameters [CppParam { name: "providerType", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "providerName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "keyContainerName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "::System::Security::Cryptography::CspProviderFlags", modifiers: "", def_value: None }]
explicit CspParameters(int32_t providerType, ::StringW providerName, ::StringW keyContainerName, ::System::Security::Cryptography::CspProviderFlags flags) ;

/// @brief Method .ctor addr 0x22f019c size 0x50 virtual false final false
 void _ctor(int32_t providerType, ::StringW providerName, ::StringW keyContainerName, ::System::Security::Cryptography::CspProviderFlags flags) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
} // end anonymous namespace
NEED_NO_BOX(::System::Security::Cryptography::CspParameters);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::CspParameters, "System.Security.Cryptography", "CspParameters");
