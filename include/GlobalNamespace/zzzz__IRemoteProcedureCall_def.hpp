#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
// Forward declare root types
namespace GlobalNamespace {
class IRemoteProcedureCall;
}
// Type: ::IRemoteProcedureCall
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12754))
// CS Name: IRemoteProcedureCall
class CORDL_TYPE IRemoteProcedureCall : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr operator  LiteNetLib::Utils::INetSerializable() const noexcept;

/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr operator  GlobalNamespace::IPoolablePacket() const noexcept;

~IRemoteProcedureCall() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IRemoteProcedureCall(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 float_t __declspec(property(get=get_syncTime))  syncTime;


// Methods

/// @brief Method get_syncTime addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_syncTime() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IRemoteProcedureCall);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IRemoteProcedureCall, "", "IRemoteProcedureCall");
