#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System {
class Exception;
}
namespace Mono::Security::X509 {
class X509Certificate;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace System::Security::Cryptography::X509Certificates {
class X509ChainImpl;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509Helper2;
}
// Type: System.Security.Cryptography.X509Certificates::X509Helper2
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7865))
// CS Name: System.Security.Cryptography.X509Certificates.X509Helper2
class CORDL_TYPE X509Helper2 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~X509Helper2() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Helper2", modifiers: " const&", def_value: None }]
constexpr X509Helper2(X509Helper2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Helper2", modifiers: "&&", def_value: None }]
constexpr X509Helper2(X509Helper2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509Helper2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509Helper2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509Helper2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509Helper2& operator=(X509Helper2&& o) noexcept = default;
  constexpr X509Helper2& operator=(X509Helper2 const& o) noexcept = default;
                


// Methods

/// @brief Method GetMonoCertificate addr 0x27f3ba0 size 0xd4 virtual false final false
static ::Mono::Security::X509::X509Certificate GetMonoCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate2 certificate) ;

/// @brief Method CreateChainImpl addr 0x27f3c74 size 0x64 virtual false final false
static ::System::Security::Cryptography::X509Certificates::X509ChainImpl CreateChainImpl(bool useMachineContext) ;

/// @brief Method IsValid addr 0x27f3cd8 size 0x14 virtual false final false
static bool IsValid(::System::Security::Cryptography::X509Certificates::X509ChainImpl impl) ;

/// @brief Method ThrowIfContextInvalid addr 0x27f3cec size 0x40 virtual false final false
static void ThrowIfContextInvalid(::System::Security::Cryptography::X509Certificates::X509ChainImpl impl) ;

/// @brief Method GetInvalidChainContextException addr 0x27f3d2c size 0x88 virtual false final false
static ::System::Exception GetInvalidChainContextException() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
} // end anonymous namespace
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509Helper2);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509Helper2, "System.Security.Cryptography.X509Certificates", "X509Helper2");
