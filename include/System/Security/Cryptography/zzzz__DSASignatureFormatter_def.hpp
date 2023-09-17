#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricSignatureFormatter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace System::Security::Cryptography {
class DSASignatureFormatter;
}
// Type: System.Security.Cryptography::DSASignatureFormatter
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2916))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2929))
// CS Name: System.Security.Cryptography.DSASignatureFormatter
class CORDL_TYPE DSASignatureFormatter : public ::System::Security::Cryptography::AsymmetricSignatureFormatter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DSASignatureFormatter() = default;

// Ctor Parameters [CppParam { name: "", ty: "DSASignatureFormatter", modifiers: " const&", def_value: None }]
constexpr DSASignatureFormatter(DSASignatureFormatter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DSASignatureFormatter", modifiers: "&&", def_value: None }]
constexpr DSASignatureFormatter(DSASignatureFormatter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DSASignatureFormatter(void* ptr) noexcept : ::System::Security::Cryptography::AsymmetricSignatureFormatter(ptr) {
}


  constexpr DSASignatureFormatter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DSASignatureFormatter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DSASignatureFormatter& operator=(DSASignatureFormatter&& o) noexcept = default;
  constexpr DSASignatureFormatter& operator=(DSASignatureFormatter const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__oid, put=__set__oid))  _oid;

constexpr void __set__oid(::StringW value) ;

constexpr ::StringW __get__oid() const;


// Methods

// Ctor Parameters []
explicit DSASignatureFormatter() ;

/// @brief Method .ctor addr 0x22f2f4c size 0x80 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
} // end anonymous namespace
NEED_NO_BOX(::System::Security::Cryptography::DSASignatureFormatter);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::DSASignatureFormatter, "System.Security.Cryptography", "DSASignatureFormatter");
