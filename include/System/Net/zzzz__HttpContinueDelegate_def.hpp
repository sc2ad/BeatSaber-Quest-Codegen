#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Net {
class WebHeaderCollection;
}
// Forward declare root types
namespace System::Net {
class HttpContinueDelegate;
}
// Type: System.Net::HttpContinueDelegate
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7929))
// CS Name: System.Net.HttpContinueDelegate
class CORDL_TYPE HttpContinueDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HttpContinueDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpContinueDelegate", modifiers: " const&", def_value: None }]
constexpr HttpContinueDelegate(HttpContinueDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpContinueDelegate", modifiers: "&&", def_value: None }]
constexpr HttpContinueDelegate(HttpContinueDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HttpContinueDelegate(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr HttpContinueDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HttpContinueDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HttpContinueDelegate& operator=(HttpContinueDelegate&& o) noexcept = default;
  constexpr HttpContinueDelegate& operator=(HttpContinueDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HttpContinueDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x280ce20 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x280cee4 size 0x14 virtual true final false
 void Invoke(int32_t StatusCode, ::System::Net::WebHeaderCollection httpHeaders) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
NEED_NO_BOX(::System::Net::HttpContinueDelegate);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpContinueDelegate, "System.Net", "HttpContinueDelegate");
