#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Net {
struct AuthenticationSchemes;
}
namespace System::Net {
class HttpListenerRequest;
}
// Forward declare root types
namespace System::Net {
class AuthenticationSchemeSelector;
}
// Type: System.Net::AuthenticationSchemeSelector
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7908))
// CS Name: System.Net.AuthenticationSchemeSelector
class CORDL_TYPE AuthenticationSchemeSelector : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~AuthenticationSchemeSelector() = default;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationSchemeSelector", modifiers: " const&", def_value: None }]
constexpr AuthenticationSchemeSelector(AuthenticationSchemeSelector const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationSchemeSelector", modifiers: "&&", def_value: None }]
constexpr AuthenticationSchemeSelector(AuthenticationSchemeSelector&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AuthenticationSchemeSelector(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr AuthenticationSchemeSelector& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AuthenticationSchemeSelector& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AuthenticationSchemeSelector& operator=(AuthenticationSchemeSelector&& o) noexcept = default;
  constexpr AuthenticationSchemeSelector& operator=(AuthenticationSchemeSelector const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit AuthenticationSchemeSelector(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2809ca8 size 0xd4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2809d7c size 0x14 virtual true final false
 ::System::Net::AuthenticationSchemes Invoke(::System::Net::HttpListenerRequest httpRequest) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
NEED_NO_BOX(::System::Net::AuthenticationSchemeSelector);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::AuthenticationSchemeSelector, "System.Net", "AuthenticationSchemeSelector");
