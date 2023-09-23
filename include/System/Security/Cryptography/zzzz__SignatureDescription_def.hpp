#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace System::Security::Cryptography {
class SignatureDescription;
}
// Type: System.Security.Cryptography::SignatureDescription
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2962))
// CS Name: System.Security.Cryptography.SignatureDescription
class CORDL_TYPE SignatureDescription : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SignatureDescription() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignatureDescription", modifiers: " const&", def_value: None }]
constexpr SignatureDescription(SignatureDescription const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignatureDescription", modifiers: "&&", def_value: None }]
constexpr SignatureDescription(SignatureDescription&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignatureDescription(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SignatureDescription& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignatureDescription& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignatureDescription& operator=(SignatureDescription&& o) noexcept = default;
  constexpr SignatureDescription& operator=(SignatureDescription const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__strKey, put=__set__strKey))  _strKey;

constexpr void __set__strKey(::StringW value) ;

constexpr ::StringW __get__strKey() const;

 ::StringW __declspec(property(get=__get__strDigest, put=__set__strDigest))  _strDigest;

constexpr void __set__strDigest(::StringW value) ;

constexpr ::StringW __get__strDigest() const;

 ::StringW __declspec(property(get=__get__strFormatter, put=__set__strFormatter))  _strFormatter;

constexpr void __set__strFormatter(::StringW value) ;

constexpr ::StringW __get__strFormatter() const;

 ::StringW __declspec(property(get=__get__strDeformatter, put=__set__strDeformatter))  _strDeformatter;

constexpr void __set__strDeformatter(::StringW value) ;

constexpr ::StringW __get__strDeformatter() const;


// Properties

 ::StringW __declspec(property(put=set_KeyAlgorithm))  KeyAlgorithm;

 ::StringW __declspec(property(put=set_DigestAlgorithm))  DigestAlgorithm;

 ::StringW __declspec(property(put=set_FormatterAlgorithm))  FormatterAlgorithm;

 ::StringW __declspec(property(put=set_DeformatterAlgorithm))  DeformatterAlgorithm;


// Methods

// Ctor Parameters []
explicit SignatureDescription() ;

/// @brief Method .ctor addr 0x22fedfc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method set_KeyAlgorithm addr 0x22fee04 size 0x8 virtual false final false
 void set_KeyAlgorithm(::StringW value) ;

/// @brief Method set_DigestAlgorithm addr 0x22fee0c size 0x8 virtual false final false
 void set_DigestAlgorithm(::StringW value) ;

/// @brief Method set_FormatterAlgorithm addr 0x22fee14 size 0x8 virtual false final false
 void set_FormatterAlgorithm(::StringW value) ;

/// @brief Method set_DeformatterAlgorithm addr 0x22fee1c size 0x8 virtual false final false
 void set_DeformatterAlgorithm(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::SignatureDescription);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::SignatureDescription, "System.Security.Cryptography", "SignatureDescription");
