#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Runtime/Remoting/zzzz__Identity_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Remoting::Lifetime {
class Lease;
}
namespace System::Runtime::Remoting::Lifetime {
class ILease;
}
namespace System::Runtime::Remoting {
class ObjRef;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System {
class MarshalByRefObject;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageCtrl;
}
namespace System {
class Type;
}
namespace System::Runtime::Remoting::Contexts {
class Context;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class ServerIdentity;
}
// Type: System.Runtime.Remoting::ServerIdentity
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3056))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3068))
// CS Name: System.Runtime.Remoting.ServerIdentity
class CORDL_TYPE ServerIdentity : public System::Runtime::Remoting::Identity {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~ServerIdentity() = default;

// Ctor Parameters [CppParam { name: "", ty: "ServerIdentity", modifiers: " const&", def_value: None }]
constexpr ServerIdentity(ServerIdentity const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ServerIdentity", modifiers: "&&", def_value: None }]
constexpr ServerIdentity(ServerIdentity&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ServerIdentity(void* ptr) noexcept : System::Runtime::Remoting::Identity(ptr) {
}


  constexpr ServerIdentity& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ServerIdentity& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ServerIdentity& operator=(ServerIdentity&& o) noexcept = default;
  constexpr ServerIdentity& operator=(ServerIdentity const& o) noexcept = default;
                


// Fields

 System::Type __declspec(property(get=__get__objectType, put=__set__objectType))  _objectType;

constexpr void __set__objectType(System::Type value) ;

constexpr System::Type __get__objectType() const;

 System::MarshalByRefObject __declspec(property(get=__get__serverObject, put=__set__serverObject))  _serverObject;

constexpr void __set__serverObject(System::MarshalByRefObject value) ;

constexpr System::MarshalByRefObject __get__serverObject() const;

 System::Runtime::Remoting::Messaging::IMessageSink __declspec(property(get=__get__serverSink, put=__set__serverSink))  _serverSink;

constexpr void __set__serverSink(System::Runtime::Remoting::Messaging::IMessageSink value) ;

constexpr System::Runtime::Remoting::Messaging::IMessageSink __get__serverSink() const;

 System::Runtime::Remoting::Contexts::Context __declspec(property(get=__get__context, put=__set__context))  _context;

constexpr void __set__context(System::Runtime::Remoting::Contexts::Context value) ;

constexpr System::Runtime::Remoting::Contexts::Context __get__context() const;

 System::Runtime::Remoting::Lifetime::Lease __declspec(property(get=__get__lease, put=__set__lease))  _lease;

constexpr void __set__lease(System::Runtime::Remoting::Lifetime::Lease value) ;

constexpr System::Runtime::Remoting::Lifetime::Lease __get__lease() const;


// Properties

 System::Type __declspec(property(get=get_ObjectType))  ObjectType;

 System::Runtime::Remoting::Lifetime::Lease __declspec(property(get=get_Lease))  Lease;

 System::Runtime::Remoting::Contexts::Context __declspec(property(get=get_Context, put=set_Context))  Context;


// Methods

// Ctor Parameters [CppParam { name: "objectUri", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Remoting::Contexts::Context", modifiers: "", def_value: None }, CppParam { name: "objectType", ty: "System::Type", modifiers: "", def_value: None }]
explicit ServerIdentity(::StringW objectUri, System::Runtime::Remoting::Contexts::Context context, System::Type objectType) ;

/// @brief Method .ctor addr 0x232654c size 0x30 virtual false final false
 void _ctor(::StringW objectUri, System::Runtime::Remoting::Contexts::Context context, System::Type objectType) ;

/// @brief Method get_ObjectType addr 0x232657c size 0x8 virtual false final false
 System::Type get_ObjectType() ;

/// @brief Method StartTrackingLifetime addr 0x2326584 size 0x18c virtual false final false
 void StartTrackingLifetime(System::Runtime::Remoting::Lifetime::ILease lease) ;

/// @brief Method OnLifetimeExpired addr 0x23268d0 size 0x4 virtual true final false
 void OnLifetimeExpired() ;

/// @brief Method CreateObjRef addr 0x2326950 size 0x1ac virtual true final false
 System::Runtime::Remoting::ObjRef CreateObjRef(System::Type requestedType) ;

/// @brief Method AttachServerObject addr 0x2326f0c size 0xf8 virtual false final false
 void AttachServerObject(System::MarshalByRefObject serverObject, System::Runtime::Remoting::Contexts::Context context) ;

/// @brief Method get_Lease addr 0x2327208 size 0x8 virtual false final false
 System::Runtime::Remoting::Lifetime::Lease get_Lease() ;

/// @brief Method get_Context addr 0x2327210 size 0x8 virtual false final false
 System::Runtime::Remoting::Contexts::Context get_Context() ;

/// @brief Method set_Context addr 0x2327218 size 0x8 virtual false final false
 void set_Context(System::Runtime::Remoting::Contexts::Context value) ;

/// @brief Method SyncObjectProcessMessage addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Runtime::Remoting::Messaging::IMessage SyncObjectProcessMessage(System::Runtime::Remoting::Messaging::IMessage msg) ;

/// @brief Method AsyncObjectProcessMessage addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Runtime::Remoting::Messaging::IMessageCtrl AsyncObjectProcessMessage(System::Runtime::Remoting::Messaging::IMessage msg, System::Runtime::Remoting::Messaging::IMessageSink replySink) ;

/// @brief Method DisposeServerObject addr 0x23268d4 size 0x7c virtual false final false
 void DisposeServerObject() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting
NEED_NO_BOX(System::Runtime::Remoting::ServerIdentity);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::ServerIdentity, "System.Runtime.Remoting", "ServerIdentity");
