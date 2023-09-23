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
namespace ENet {
struct Packet;
}
// Forward declare root types
namespace ENet {
class PacketFreeCallback;
}
// Type: ENet::PacketFreeCallback
namespace ENet {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15264))
// CS Name: ENet.PacketFreeCallback
class CORDL_TYPE PacketFreeCallback : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~PacketFreeCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "PacketFreeCallback", modifiers: " const&", def_value: None }]
constexpr PacketFreeCallback(PacketFreeCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PacketFreeCallback", modifiers: "&&", def_value: None }]
constexpr PacketFreeCallback(PacketFreeCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PacketFreeCallback(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr PacketFreeCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PacketFreeCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PacketFreeCallback& operator=(PacketFreeCallback&& o) noexcept = default;
  constexpr PacketFreeCallback& operator=(PacketFreeCallback const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit PacketFreeCallback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x207c81c size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x207c8e0 size 0x14 virtual true final false
 void Invoke(ENet::Packet packet) ;

/// @brief Method BeginInvoke addr 0x207c8f4 size 0x84 virtual true final false
 System::IAsyncResult BeginInvoke(ENet::Packet packet, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x207c978 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ENet
NEED_NO_BOX(ENet::PacketFreeCallback);
DEFINE_IL2CPP_ARG_TYPE(ENet::PacketFreeCallback, "ENet", "PacketFreeCallback");
