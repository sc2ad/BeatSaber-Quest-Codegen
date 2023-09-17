#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__IPollable_def.hpp"
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace System::Net {
class IPEndPoint;
}
// Forward declare root types
namespace GlobalNamespace {
class IUnconnectedMessageReceiver;
}
namespace {
// Type: ::IUnconnectedMessageReceiver
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12723))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12793))
// CS Name: IUnconnectedMessageReceiver
class CORDL_TYPE IUnconnectedMessageReceiver : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IPollable
constexpr operator  GlobalNamespace::IPollable() const noexcept;

~IUnconnectedMessageReceiver() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IUnconnectedMessageReceiver(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method ReceiveUnconnectedMessage addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReceiveUnconnectedMessage(System::Net::IPEndPoint endPoint, LiteNetLib::Utils::NetDataReader reader) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IUnconnectedMessageReceiver);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IUnconnectedMessageReceiver, "", "IUnconnectedMessageReceiver");
} // end anonymous namespace
