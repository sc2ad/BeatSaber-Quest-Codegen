#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Net {
class IPEndPoint;
}
namespace LiteNetLib {
struct NatAddressType;
}
// Forward declare root types
namespace LiteNetLib {
class INatPunchListener;
}
// Type: LiteNetLib::INatPunchListener
namespace LiteNetLib {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14426))
// CS Name: LiteNetLib.INatPunchListener
class CORDL_TYPE INatPunchListener : public ::cordl_internals::InterfaceW {
public:
// Declarations
~INatPunchListener() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit INatPunchListener(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method OnNatIntroductionRequest addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnNatIntroductionRequest(System::Net::IPEndPoint localEndPoint, System::Net::IPEndPoint remoteEndPoint, ::StringW token) ;

/// @brief Method OnNatIntroductionSuccess addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnNatIntroductionSuccess(System::Net::IPEndPoint targetEndPoint, LiteNetLib::NatAddressType type, ::StringW token) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib
NEED_NO_BOX(LiteNetLib::INatPunchListener);
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::INatPunchListener, "LiteNetLib", "INatPunchListener");
