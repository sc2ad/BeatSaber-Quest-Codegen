#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class XPlatformAccessTokenFetchException;
}
// Type: ::XPlatformAccessTokenFetchException
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4693))
// CS Name: XPlatformAccessTokenFetchException
class CORDL_TYPE XPlatformAccessTokenFetchException : public ::System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~XPlatformAccessTokenFetchException() = default;

// Ctor Parameters [CppParam { name: "", ty: "XPlatformAccessTokenFetchException", modifiers: " const&", def_value: None }]
constexpr XPlatformAccessTokenFetchException(XPlatformAccessTokenFetchException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XPlatformAccessTokenFetchException", modifiers: "&&", def_value: None }]
constexpr XPlatformAccessTokenFetchException(XPlatformAccessTokenFetchException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XPlatformAccessTokenFetchException(void* ptr) noexcept : ::System::Exception(ptr) {
}


  constexpr XPlatformAccessTokenFetchException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XPlatformAccessTokenFetchException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XPlatformAccessTokenFetchException& operator=(XPlatformAccessTokenFetchException&& o) noexcept = default;
  constexpr XPlatformAccessTokenFetchException& operator=(XPlatformAccessTokenFetchException const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit XPlatformAccessTokenFetchException(::StringW message) ;

/// @brief Method .ctor addr 0x221cca4 size 0x68 virtual false final false
 void _ctor(::StringW message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::XPlatformAccessTokenFetchException);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::XPlatformAccessTokenFetchException, "", "XPlatformAccessTokenFetchException");
