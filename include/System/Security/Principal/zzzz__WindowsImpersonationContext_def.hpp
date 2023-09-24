#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Security::Principal {
class WindowsImpersonationContext;
}
// Type: System.Security.Principal::WindowsImpersonationContext
namespace System::Security::Principal {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3003))
// CS Name: System.Security.Principal.WindowsImpersonationContext
class CORDL_TYPE WindowsImpersonationContext : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~WindowsImpersonationContext() = default;

// Ctor Parameters [CppParam { name: "", ty: "WindowsImpersonationContext", modifiers: " const&", def_value: None }]
constexpr WindowsImpersonationContext(WindowsImpersonationContext const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WindowsImpersonationContext", modifiers: "&&", def_value: None }]
constexpr WindowsImpersonationContext(WindowsImpersonationContext&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WindowsImpersonationContext(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr WindowsImpersonationContext& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WindowsImpersonationContext& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WindowsImpersonationContext& operator=(WindowsImpersonationContext&& o) noexcept = default;
  constexpr WindowsImpersonationContext& operator=(WindowsImpersonationContext const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get__token, put=__set__token))  _token;

constexpr void __set__token(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get__token() const;

 bool __declspec(property(get=__get_undo, put=__set_undo))  undo;

constexpr void __set_undo(bool value) ;

constexpr bool __get_undo() const;


// Methods

static System::Security::Principal::WindowsImpersonationContext New_ctor(::cordl_internals::intptr_t token) ;

/// @brief Method .ctor addr 0x230fd50 size 0x8c virtual false final false
 void _ctor(::cordl_internals::intptr_t token) ;

/// @brief Method Dispose addr 0x231045c size 0x10 virtual true final true
 void Dispose() ;

/// @brief Method Undo addr 0x231046c size 0xc4 virtual false final false
 void Undo() ;

/// @brief Method CloseToken addr 0x2310534 size 0x4 virtual false final false
static bool CloseToken(::cordl_internals::intptr_t token) ;

/// @brief Method DuplicateToken addr 0x2310454 size 0x4 virtual false final false
static ::cordl_internals::intptr_t DuplicateToken(::cordl_internals::intptr_t token) ;

/// @brief Method SetCurrentToken addr 0x2310458 size 0x4 virtual false final false
static bool SetCurrentToken(::cordl_internals::intptr_t token) ;

/// @brief Method RevertToSelf addr 0x2310530 size 0x4 virtual false final false
static bool RevertToSelf() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Principal
NEED_NO_BOX(System::Security::Principal::WindowsImpersonationContext);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Principal::WindowsImpersonationContext, "System.Security.Principal", "WindowsImpersonationContext");
