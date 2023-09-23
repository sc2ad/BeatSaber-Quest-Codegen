#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::Remoting::Contexts {
class Context;
}
namespace System::Runtime::Remoting {
class ClientIdentity;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodReturnMessage;
}
namespace System {
class Exception;
}
namespace System::Runtime::Remoting {
class Identity;
}
namespace System::Runtime::Remoting::Messaging {
class MonoMethodMessage;
}
namespace System {
class Type;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class MarshalByRefObject;
}
// Forward declare root types
namespace System::Runtime::Remoting::Proxies {
class RealProxy;
}
// Type: System.Runtime.Remoting.Proxies::RealProxy
namespace System::Runtime::Remoting::Proxies {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3084))
// CS Name: System.Runtime.Remoting.Proxies.RealProxy
class CORDL_TYPE RealProxy : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~RealProxy() = default;

// Ctor Parameters [CppParam { name: "", ty: "RealProxy", modifiers: " const&", def_value: None }]
constexpr RealProxy(RealProxy const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RealProxy", modifiers: "&&", def_value: None }]
constexpr RealProxy(RealProxy&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RealProxy(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RealProxy& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RealProxy& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RealProxy& operator=(RealProxy&& o) noexcept = default;
  constexpr RealProxy& operator=(RealProxy const& o) noexcept = default;
                


// Fields

 System::Type __declspec(property(get=__get_class_to_proxy, put=__set_class_to_proxy))  class_to_proxy;

constexpr void __set_class_to_proxy(System::Type value) ;

constexpr System::Type __get_class_to_proxy() const;

 System::Runtime::Remoting::Contexts::Context __declspec(property(get=__get__targetContext, put=__set__targetContext))  _targetContext;

constexpr void __set__targetContext(System::Runtime::Remoting::Contexts::Context value) ;

constexpr System::Runtime::Remoting::Contexts::Context __get__targetContext() const;

 System::MarshalByRefObject __declspec(property(get=__get__server, put=__set__server))  _server;

constexpr void __set__server(System::MarshalByRefObject value) ;

constexpr System::MarshalByRefObject __get__server() const;

 int32_t __declspec(property(get=__get__targetDomainId, put=__set__targetDomainId))  _targetDomainId;

constexpr void __set__targetDomainId(int32_t value) ;

constexpr int32_t __get__targetDomainId() const;

 ::StringW __declspec(property(get=__get__targetUri, put=__set__targetUri))  _targetUri;

constexpr void __set__targetUri(::StringW value) ;

constexpr ::StringW __get__targetUri() const;

 System::Runtime::Remoting::Identity __declspec(property(get=__get__objectIdentity, put=__set__objectIdentity))  _objectIdentity;

constexpr void __set__objectIdentity(System::Runtime::Remoting::Identity value) ;

constexpr System::Runtime::Remoting::Identity __get__objectIdentity() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__objTP, put=__set__objTP))  _objTP;

constexpr void __set__objTP(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__objTP() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__stubData, put=__set__stubData))  _stubData;

constexpr void __set__stubData(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__stubData() const;


// Properties

 System::Runtime::Remoting::Identity __declspec(property(get=get_ObjectIdentity, put=set_ObjectIdentity))  ObjectIdentity;


// Methods

// Ctor Parameters []
explicit RealProxy() ;

/// @brief Method .ctor addr 0x232b430 size 0x10 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "classToProxy", ty: "System::Type", modifiers: "", def_value: None }]
explicit RealProxy(System::Type classToProxy) ;

/// @brief Method .ctor addr 0x232b440 size 0x60 virtual false final false
 void _ctor(System::Type classToProxy) ;

// Ctor Parameters [CppParam { name: "classToProxy", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "identity", ty: "System::Runtime::Remoting::ClientIdentity", modifiers: "", def_value: None }]
explicit RealProxy(System::Type classToProxy, System::Runtime::Remoting::ClientIdentity identity) ;

/// @brief Method .ctor addr 0x232b5d0 size 0x6c virtual false final false
 void _ctor(System::Type classToProxy, System::Runtime::Remoting::ClientIdentity identity) ;

// Ctor Parameters [CppParam { name: "classToProxy", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "stub", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "stubData", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
explicit RealProxy(System::Type classToProxy, ::cordl_internals::intptr_t stub, ::bs_hook::Il2CppWrapperType stubData) ;

/// @brief Method .ctor addr 0x232b4a0 size 0x130 virtual false final false
 void _ctor(System::Type classToProxy, ::cordl_internals::intptr_t stub, ::bs_hook::Il2CppWrapperType stubData) ;

/// @brief Method InternalGetProxyType addr 0x232b63c size 0x4 virtual false final false
static System::Type InternalGetProxyType(::bs_hook::Il2CppWrapperType transparentProxy) ;

/// @brief Method GetProxiedType addr 0x232b640 size 0xac virtual false final false
 System::Type GetProxiedType() ;

/// @brief Method GetObjectData addr 0x232b6ec size 0x98 virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_ObjectIdentity addr 0x232b784 size 0x8 virtual false final false
 System::Runtime::Remoting::Identity get_ObjectIdentity() ;

/// @brief Method set_ObjectIdentity addr 0x232b78c size 0x8 virtual false final false
 void set_ObjectIdentity(System::Runtime::Remoting::Identity value) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Runtime::Remoting::Messaging::IMessage Invoke(System::Runtime::Remoting::Messaging::IMessage msg) ;

/// @brief Method PrivateInvoke addr 0x232a87c size 0x8d4 virtual false final false
static ::bs_hook::Il2CppWrapperType PrivateInvoke(System::Runtime::Remoting::Proxies::RealProxy rp, System::Runtime::Remoting::Messaging::IMessage msg, ByRef<System::Exception> exc, ByRef<::ArrayW<::bs_hook::Il2CppWrapperType>> out_args) ;

/// @brief Method InternalGetTransparentProxy addr 0x232c690 size 0x4 virtual true final false
 ::bs_hook::Il2CppWrapperType InternalGetTransparentProxy(::StringW className) ;

/// @brief Method GetTransparentProxy addr 0x232c694 size 0x164 virtual true final false
 ::bs_hook::Il2CppWrapperType GetTransparentProxy() ;

/// @brief Method AttachServer addr 0x232c7f8 size 0x8 virtual false final false
 void AttachServer(System::MarshalByRefObject s) ;

/// @brief Method SetTargetDomain addr 0x232c800 size 0x8 virtual false final false
 void SetTargetDomain(int32_t domainId) ;

/// @brief Method GetAppDomainTarget addr 0x232c808 size 0x12c virtual false final false
 ::bs_hook::Il2CppWrapperType GetAppDomainTarget() ;

/// @brief Method ProcessResponse addr 0x232bf8c size 0x704 virtual false final false
static ::ArrayW<::bs_hook::Il2CppWrapperType> ProcessResponse(System::Runtime::Remoting::Messaging::IMethodReturnMessage mrm, System::Runtime::Remoting::Messaging::MonoMethodMessage call) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Proxies
NEED_NO_BOX(System::Runtime::Remoting::Proxies::RealProxy);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Proxies::RealProxy, "System.Runtime.Remoting.Proxies", "RealProxy");
