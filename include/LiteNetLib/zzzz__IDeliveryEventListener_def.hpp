#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace LiteNetLib {
class NetPeer;
}
// Forward declare root types
namespace LiteNetLib {
class IDeliveryEventListener;
}
// Type: LiteNetLib::IDeliveryEventListener
namespace LiteNetLib {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14415))
// CS Name: LiteNetLib.IDeliveryEventListener
class CORDL_TYPE IDeliveryEventListener : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IDeliveryEventListener() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDeliveryEventListener(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method OnMessageDelivered addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnMessageDelivered(LiteNetLib::NetPeer peer, ::bs_hook::Il2CppWrapperType userData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib
NEED_NO_BOX(LiteNetLib::IDeliveryEventListener);
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::IDeliveryEventListener, "LiteNetLib", "IDeliveryEventListener");
