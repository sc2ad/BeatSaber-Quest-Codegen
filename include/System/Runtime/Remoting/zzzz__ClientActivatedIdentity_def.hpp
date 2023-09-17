#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Runtime/Remoting/zzzz__ServerIdentity_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System {
class Type;
}
namespace System {
class MarshalByRefObject;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageCtrl;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class ClientActivatedIdentity;
}
// Type: System.Runtime.Remoting::ClientActivatedIdentity
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3068))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3069))
// CS Name: System.Runtime.Remoting.ClientActivatedIdentity
class CORDL_TYPE ClientActivatedIdentity : public ::System::Runtime::Remoting::ServerIdentity {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~ClientActivatedIdentity() = default;

// Ctor Parameters [CppParam { name: "", ty: "ClientActivatedIdentity", modifiers: " const&", def_value: None }]
constexpr ClientActivatedIdentity(ClientActivatedIdentity const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ClientActivatedIdentity", modifiers: "&&", def_value: None }]
constexpr ClientActivatedIdentity(ClientActivatedIdentity&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ClientActivatedIdentity(void* ptr) noexcept : ::System::Runtime::Remoting::ServerIdentity(ptr) {
}


  constexpr ClientActivatedIdentity& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ClientActivatedIdentity& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ClientActivatedIdentity& operator=(ClientActivatedIdentity&& o) noexcept = default;
  constexpr ClientActivatedIdentity& operator=(ClientActivatedIdentity const& o) noexcept = default;
                


// Fields

 ::System::MarshalByRefObject __declspec(property(get=__get__targetThis, put=__set__targetThis))  _targetThis;

constexpr void __set__targetThis(::System::MarshalByRefObject value) ;

constexpr ::System::MarshalByRefObject __get__targetThis() const;


// Methods

// Ctor Parameters [CppParam { name: "objectUri", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "objectType", ty: "::System::Type", modifiers: "", def_value: None }]
explicit ClientActivatedIdentity(::StringW objectUri, ::System::Type objectType) ;

/// @brief Method .ctor addr 0x2327524 size 0x2c virtual false final false
 void _ctor(::StringW objectUri, ::System::Type objectType) ;

/// @brief Method GetServerObject addr 0x2327550 size 0x8 virtual false final false
 ::System::MarshalByRefObject GetServerObject() ;

/// @brief Method SetClientProxy addr 0x2327558 size 0x8 virtual false final false
 void SetClientProxy(::System::MarshalByRefObject obj) ;

/// @brief Method OnLifetimeExpired addr 0x2327560 size 0x60 virtual true final false
 void OnLifetimeExpired() ;

/// @brief Method SyncObjectProcessMessage addr 0x23275c0 size 0xdc virtual true final false
 ::System::Runtime::Remoting::Messaging::IMessage SyncObjectProcessMessage(::System::Runtime::Remoting::Messaging::IMessage msg) ;

/// @brief Method AsyncObjectProcessMessage addr 0x2327854 size 0xf0 virtual true final false
 ::System::Runtime::Remoting::Messaging::IMessageCtrl AsyncObjectProcessMessage(::System::Runtime::Remoting::Messaging::IMessage msg, ::System::Runtime::Remoting::Messaging::IMessageSink replySink) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::ClientActivatedIdentity);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::ClientActivatedIdentity, "System.Runtime.Remoting", "ClientActivatedIdentity");
