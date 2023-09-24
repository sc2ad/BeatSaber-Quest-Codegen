#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace ENet {
class AllocCallback;
}
// Type: ENet::AllocCallback
namespace ENet {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15261))
// CS Name: ENet.AllocCallback
class CORDL_TYPE AllocCallback : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~AllocCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "AllocCallback", modifiers: " const&", def_value: None }]
constexpr AllocCallback(AllocCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AllocCallback", modifiers: "&&", def_value: None }]
constexpr AllocCallback(AllocCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AllocCallback(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr AllocCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AllocCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AllocCallback& operator=(AllocCallback&& o) noexcept = default;
  constexpr AllocCallback& operator=(AllocCallback const& o) noexcept = default;
                


// Methods

static ENet::AllocCallback New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x207c434 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x207c4f8 size 0x14 virtual true final false
 ::cordl_internals::intptr_t Invoke(::cordl_internals::intptr_t size) ;

/// @brief Method BeginInvoke addr 0x207c50c size 0x84 virtual true final false
 System::IAsyncResult BeginInvoke(::cordl_internals::intptr_t size, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x207c590 size 0x28 virtual true final false
 ::cordl_internals::intptr_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ENet
NEED_NO_BOX(ENet::AllocCallback);
DEFINE_IL2CPP_ARG_TYPE(ENet::AllocCallback, "ENet", "AllocCallback");
