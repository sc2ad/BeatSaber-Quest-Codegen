#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__SignatureDescription_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace System::Security::Cryptography {
class RSAPKCS1SignatureDescription;
}
// Type: System.Security.Cryptography::RSAPKCS1SignatureDescription
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2962))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2963))
// CS Name: System.Security.Cryptography.RSAPKCS1SignatureDescription
class CORDL_TYPE RSAPKCS1SignatureDescription : public System::Security::Cryptography::SignatureDescription {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~RSAPKCS1SignatureDescription() = default;

// Ctor Parameters [CppParam { name: "", ty: "RSAPKCS1SignatureDescription", modifiers: " const&", def_value: None }]
constexpr RSAPKCS1SignatureDescription(RSAPKCS1SignatureDescription const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RSAPKCS1SignatureDescription", modifiers: "&&", def_value: None }]
constexpr RSAPKCS1SignatureDescription(RSAPKCS1SignatureDescription&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RSAPKCS1SignatureDescription(void* ptr) noexcept : System::Security::Cryptography::SignatureDescription(ptr) {
}


  constexpr RSAPKCS1SignatureDescription& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RSAPKCS1SignatureDescription& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RSAPKCS1SignatureDescription& operator=(RSAPKCS1SignatureDescription&& o) noexcept = default;
  constexpr RSAPKCS1SignatureDescription& operator=(RSAPKCS1SignatureDescription const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__hashAlgorithm, put=__set__hashAlgorithm))  _hashAlgorithm;

constexpr void __set__hashAlgorithm(::StringW value) ;

constexpr ::StringW __get__hashAlgorithm() const;


// Methods

static System::Security::Cryptography::RSAPKCS1SignatureDescription New_ctor(::StringW hashAlgorithm, ::StringW digestAlgorithm) ;

/// @brief Method .ctor addr 0x22fee24 size 0xa4 virtual false final false
 void _ctor(::StringW hashAlgorithm, ::StringW digestAlgorithm) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::RSAPKCS1SignatureDescription);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::RSAPKCS1SignatureDescription, "System.Security.Cryptography", "RSAPKCS1SignatureDescription");
