#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Runtime/Remoting/zzzz__Identity_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Type;
}
namespace System {
class MarshalByRefObject;
}
namespace System {
class WeakReference;
}
namespace System::Runtime::Remoting {
class ObjRef;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class ClientIdentity;
}
// Type: System.Runtime.Remoting::ClientIdentity
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3056))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3057))
// CS Name: System.Runtime.Remoting.ClientIdentity
class CORDL_TYPE ClientIdentity : public System::Runtime::Remoting::Identity {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~ClientIdentity() = default;

// Ctor Parameters [CppParam { name: "", ty: "ClientIdentity", modifiers: " const&", def_value: None }]
constexpr ClientIdentity(ClientIdentity const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ClientIdentity", modifiers: "&&", def_value: None }]
constexpr ClientIdentity(ClientIdentity&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ClientIdentity(void* ptr) noexcept : System::Runtime::Remoting::Identity(ptr) {
}


  constexpr ClientIdentity& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ClientIdentity& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ClientIdentity& operator=(ClientIdentity&& o) noexcept = default;
  constexpr ClientIdentity& operator=(ClientIdentity const& o) noexcept = default;
                


// Fields

 System::WeakReference __declspec(property(get=__get__proxyReference, put=__set__proxyReference))  _proxyReference;

constexpr void __set__proxyReference(System::WeakReference value) ;

constexpr System::WeakReference __get__proxyReference() const;


// Properties

 System::MarshalByRefObject __declspec(property(get=get_ClientProxy, put=set_ClientProxy))  ClientProxy;

 ::StringW __declspec(property(get=get_TargetUri))  TargetUri;


// Methods

static System::Runtime::Remoting::ClientIdentity New_ctor(::StringW objectUri, System::Runtime::Remoting::ObjRef objRef) ;

/// @brief Method .ctor addr 0x231a008 size 0x108 virtual false final false
 void _ctor(::StringW objectUri, System::Runtime::Remoting::ObjRef objRef) ;

/// @brief Method get_ClientProxy addr 0x231a110 size 0x88 virtual false final false
 System::MarshalByRefObject get_ClientProxy() ;

/// @brief Method set_ClientProxy addr 0x231a198 size 0x70 virtual false final false
 void set_ClientProxy(System::MarshalByRefObject value) ;

/// @brief Method CreateObjRef addr 0x231a208 size 0x8 virtual true final false
 System::Runtime::Remoting::ObjRef CreateObjRef(System::Type requestedType) ;

/// @brief Method get_TargetUri addr 0x231a210 size 0x20 virtual false final false
 ::StringW get_TargetUri() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting
NEED_NO_BOX(System::Runtime::Remoting::ClientIdentity);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::ClientIdentity, "System.Runtime.Remoting", "ClientIdentity");
