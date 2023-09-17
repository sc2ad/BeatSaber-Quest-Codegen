#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace BGNet::Core {
struct DeliveryMethod;
}
// Forward declare root types
namespace GlobalNamespace {
class IConnection;
}
// Type: ::IConnection
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12723))
// CS Name: IConnection
class CORDL_TYPE IConnection : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IConnection() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IConnection(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_userId))  userId;

 ::StringW __declspec(property(get=get_userName))  userName;

 bool __declspec(property(get=get_isConnectionOwner))  isConnectionOwner;


// Methods

/// @brief Method get_userId addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_userId() ;

/// @brief Method get_userName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_userName() ;

/// @brief Method get_isConnectionOwner addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isConnectionOwner() ;

/// @brief Method Send addr 0x0 size 0xffffffffffffffff virtual true final false
 void Send(::LiteNetLib::Utils::NetDataWriter writer, ::BGNet::Core::DeliveryMethod deliveryMethod) ;

/// @brief Method Disconnect addr 0x0 size 0xffffffffffffffff virtual true final false
 void Disconnect() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IConnection);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IConnection, "", "IConnection");
