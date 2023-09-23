#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Net::Sockets {
struct SocketError;
}
namespace System::Net {
class IPEndPoint;
}
// Forward declare root types
namespace LiteNetLib {
class INetSocketListener;
}
// Type: LiteNetLib::INetSocketListener
namespace LiteNetLib {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14460))
// CS Name: LiteNetLib.INetSocketListener
class CORDL_TYPE INetSocketListener : public ::cordl_internals::InterfaceW {
public:
// Declarations
~INetSocketListener() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit INetSocketListener(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method OnMessageReceived addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnMessageReceived(::ArrayW<uint8_t> data, int32_t length, System::Net::Sockets::SocketError errorCode, System::Net::IPEndPoint remoteEndPoint) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib
NEED_NO_BOX(LiteNetLib::INetSocketListener);
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::INetSocketListener, "LiteNetLib", "INetSocketListener");
