#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
// Forward declare root types
namespace ENet {
class FreeCallback;
}
// Type: ENet::FreeCallback
namespace ENet {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15262))
// CS Name: ENet.FreeCallback
class CORDL_TYPE FreeCallback : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~FreeCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "FreeCallback", modifiers: " const&", def_value: None }]
constexpr FreeCallback(FreeCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FreeCallback", modifiers: "&&", def_value: None }]
constexpr FreeCallback(FreeCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FreeCallback(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr FreeCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FreeCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FreeCallback& operator=(FreeCallback&& o) noexcept = default;
  constexpr FreeCallback& operator=(FreeCallback const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit FreeCallback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x207c5b8 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x207c67c size 0x14 virtual true final false
 void Invoke(::cordl_internals::intptr_t memory) ;

/// @brief Method BeginInvoke addr 0x207c690 size 0x84 virtual true final false
 System::IAsyncResult BeginInvoke(::cordl_internals::intptr_t memory, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x207c714 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ENet
NEED_NO_BOX(ENet::FreeCallback);
DEFINE_IL2CPP_ARG_TYPE(ENet::FreeCallback, "ENet", "FreeCallback");
