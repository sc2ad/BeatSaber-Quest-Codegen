#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace Mono::Security::Interface {
class Alert;
}
namespace Mono::Security::Interface {
struct AlertDescription;
}
// Forward declare root types
namespace Mono::Security::Interface {
class TlsException;
}
// Type: Mono.Security.Interface::TlsException
namespace Mono::Security::Interface {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13996))
// CS Name: Mono.Security.Interface.TlsException
class CORDL_TYPE TlsException : public ::System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~TlsException() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsException", modifiers: " const&", def_value: None }]
constexpr TlsException(TlsException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsException", modifiers: "&&", def_value: None }]
constexpr TlsException(TlsException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsException(void* ptr) noexcept : ::System::Exception(ptr) {
}


  constexpr TlsException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsException& operator=(TlsException&& o) noexcept = default;
  constexpr TlsException& operator=(TlsException const& o) noexcept = default;
                


// Fields

 ::Mono::Security::Interface::Alert __declspec(property(get=__get_alert, put=__set_alert))  alert;

constexpr void __set_alert(::Mono::Security::Interface::Alert value) ;

constexpr ::Mono::Security::Interface::Alert __get_alert() const;


// Methods

// Ctor Parameters [CppParam { name: "alert", ty: "::Mono::Security::Interface::Alert", modifiers: "", def_value: None }, CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit TlsException(::Mono::Security::Interface::Alert alert, ::StringW message) ;

/// @brief Method .ctor addr 0x2295b98 size 0x74 virtual false final false
 void _ctor(::Mono::Security::Interface::Alert alert, ::StringW message) ;

// Ctor Parameters [CppParam { name: "description", ty: "::Mono::Security::Interface::AlertDescription", modifiers: "", def_value: None }, CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit TlsException(::Mono::Security::Interface::AlertDescription description, ::StringW message) ;

/// @brief Method .ctor addr 0x2295c0c size 0x7c virtual false final false
 void _ctor(::Mono::Security::Interface::AlertDescription description, ::StringW message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::Interface
} // end anonymous namespace
NEED_NO_BOX(::Mono::Security::Interface::TlsException);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Interface::TlsException, "Mono.Security.Interface", "TlsException");
