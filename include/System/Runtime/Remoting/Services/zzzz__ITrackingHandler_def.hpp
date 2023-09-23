#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Runtime::Remoting {
class ObjRef;
}
// Forward declare root types
namespace System::Runtime::Remoting::Services {
class ITrackingHandler;
}
// Type: System.Runtime.Remoting.Services::ITrackingHandler
namespace System::Runtime::Remoting::Services {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3080))
// CS Name: System.Runtime.Remoting.Services.ITrackingHandler
class CORDL_TYPE ITrackingHandler : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ITrackingHandler() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ITrackingHandler(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method DisconnectedObject addr 0x0 size 0xffffffffffffffff virtual true final false
 void DisconnectedObject(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method MarshaledObject addr 0x0 size 0xffffffffffffffff virtual true final false
 void MarshaledObject(::bs_hook::Il2CppWrapperType obj, System::Runtime::Remoting::ObjRef or) ;

/// @brief Method UnmarshaledObject addr 0x0 size 0xffffffffffffffff virtual true final false
 void UnmarshaledObject(::bs_hook::Il2CppWrapperType obj, System::Runtime::Remoting::ObjRef or) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Services
NEED_NO_BOX(System::Runtime::Remoting::Services::ITrackingHandler);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Services::ITrackingHandler, "System.Runtime.Remoting.Services", "ITrackingHandler");
