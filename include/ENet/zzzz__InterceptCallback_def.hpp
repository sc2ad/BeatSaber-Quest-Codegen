#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace ENet {
struct Address;
}
namespace ENet {
struct Event;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace ENet {
class InterceptCallback;
}
// Type: ENet::InterceptCallback
namespace ENet {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15265))
// CS Name: ENet.InterceptCallback
class CORDL_TYPE InterceptCallback : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~InterceptCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "InterceptCallback", modifiers: " const&", def_value: None }]
constexpr InterceptCallback(InterceptCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InterceptCallback", modifiers: "&&", def_value: None }]
constexpr InterceptCallback(InterceptCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InterceptCallback(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr InterceptCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InterceptCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InterceptCallback& operator=(InterceptCallback&& o) noexcept = default;
  constexpr InterceptCallback& operator=(InterceptCallback const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit InterceptCallback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x207c984 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x207ca5c size 0x14 virtual true final false
 int32_t Invoke(ByRef<ENet::Event> event, ByRef<ENet::Address> address, ::cordl_internals::intptr_t receivedData, int32_t receivedDataLength) ;

/// @brief Method BeginInvoke addr 0x207ca70 size 0x11c virtual true final false
 System::IAsyncResult BeginInvoke(ByRef<ENet::Event> event, ByRef<ENet::Address> address, ::cordl_internals::intptr_t receivedData, int32_t receivedDataLength, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x207cb8c size 0x34 virtual true final false
 int32_t EndInvoke(ByRef<ENet::Event> event, ByRef<ENet::Address> address, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ENet
NEED_NO_BOX(ENet::InterceptCallback);
DEFINE_IL2CPP_ARG_TYPE(ENet::InterceptCallback, "ENet", "InterceptCallback");
