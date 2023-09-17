#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Runtime::Remoting {
class WellKnownClientTypeEntry;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodMessage;
}
namespace System::Runtime::Remoting {
class ClientIdentity;
}
namespace System::Runtime::Remoting {
class Identity;
}
namespace System::Runtime::Remoting {
class ActivatedClientTypeEntry;
}
namespace System {
class Exception;
}
namespace System {
class MarshalByRefObject;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Runtime::Remoting {
struct WellKnownObjectMode;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryFormatter;
}
namespace System::Reflection {
class MethodBase;
}
namespace System::Runtime::Remoting {
class ObjRef;
}
namespace System {
class Type;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodReturnMessage;
}
namespace System::Runtime::Remoting {
class ClientActivatedIdentity;
}
namespace System::Runtime::Remoting {
class ServerIdentity;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodCallMessage;
}
namespace System::Runtime::Remoting::Proxies {
class RealProxy;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class RemotingServices;
}
namespace System::Runtime::Remoting {
class ____System__Runtime__Remoting__RemotingServices__CACD;
}
// Type: ::CACD
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3066))
// CS Name: System.Runtime.Remoting.RemotingServices::CACD
class CORDL_TYPE ____System__Runtime__Remoting__RemotingServices__CACD : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____System__Runtime__Remoting__RemotingServices__CACD() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Runtime__Remoting__RemotingServices__CACD", modifiers: " const&", def_value: None }]
constexpr ____System__Runtime__Remoting__RemotingServices__CACD(____System__Runtime__Remoting__RemotingServices__CACD const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Runtime__Remoting__RemotingServices__CACD", modifiers: "&&", def_value: None }]
constexpr ____System__Runtime__Remoting__RemotingServices__CACD(____System__Runtime__Remoting__RemotingServices__CACD&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Runtime__Remoting__RemotingServices__CACD(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Runtime__Remoting__RemotingServices__CACD& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Runtime__Remoting__RemotingServices__CACD& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Runtime__Remoting__RemotingServices__CACD& operator=(____System__Runtime__Remoting__RemotingServices__CACD&& o) noexcept = default;
  constexpr ____System__Runtime__Remoting__RemotingServices__CACD& operator=(____System__Runtime__Remoting__RemotingServices__CACD const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_d, put=__set_d))  d;

constexpr void __set_d(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_d() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_c, put=__set_c))  c;

constexpr void __set_c(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_c() const;


// Methods

// Ctor Parameters []
explicit ____System__Runtime__Remoting__RemotingServices__CACD() ;

/// @brief Method .ctor addr 0x2326544 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting
// Type: System.Runtime.Remoting::RemotingServices
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3067))
// CS Name: System.Runtime.Remoting.RemotingServices
class CORDL_TYPE RemotingServices : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using CACD = ::System::Runtime::Remoting::____System__Runtime__Remoting__RemotingServices__CACD;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~RemotingServices() = default;

// Ctor Parameters [CppParam { name: "", ty: "RemotingServices", modifiers: " const&", def_value: None }]
constexpr RemotingServices(RemotingServices const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RemotingServices", modifiers: "&&", def_value: None }]
constexpr RemotingServices(RemotingServices&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RemotingServices(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RemotingServices& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RemotingServices& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RemotingServices& operator=(RemotingServices&& o) noexcept = default;
  constexpr RemotingServices& operator=(RemotingServices const& o) noexcept = default;
                


// Fields

static ::System::Collections::Hashtable __declspec(property(get=__get_uri_hash, put=__set_uri_hash))  uri_hash;

static void __set_uri_hash(::System::Collections::Hashtable value) ;

static ::System::Collections::Hashtable __get_uri_hash() ;

static ::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter __declspec(property(get=__get__serializationFormatter, put=__set__serializationFormatter))  _serializationFormatter;

static void __set__serializationFormatter(::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter value) ;

static ::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter __get__serializationFormatter() ;

static ::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter __declspec(property(get=__get__deserializationFormatter, put=__set__deserializationFormatter))  _deserializationFormatter;

static void __set__deserializationFormatter(::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter value) ;

static ::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter __get__deserializationFormatter() ;

static ::StringW __declspec(property(get=__get_app_id, put=__set_app_id))  app_id;

static void __set_app_id(::StringW value) ;

static ::StringW __get_app_id() ;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_app_id_lock, put=__set_app_id_lock))  app_id_lock;

static void __set_app_id_lock(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_app_id_lock() ;

static int32_t __declspec(property(get=__get_next_id, put=__set_next_id))  next_id;

static void __set_next_id(int32_t value) ;

static int32_t __get_next_id() ;

static ::System::Reflection::MethodInfo __declspec(property(get=__get_FieldSetterMethod, put=__set_FieldSetterMethod))  FieldSetterMethod;

static void __set_FieldSetterMethod(::System::Reflection::MethodInfo value) ;

static ::System::Reflection::MethodInfo __get_FieldSetterMethod() ;

static ::System::Reflection::MethodInfo __declspec(property(get=__get_FieldGetterMethod, put=__set_FieldGetterMethod))  FieldGetterMethod;

static void __set_FieldGetterMethod(::System::Reflection::MethodInfo value) ;

static ::System::Reflection::MethodInfo __get_FieldGetterMethod() ;


// Methods

/// @brief Method InternalExecute addr 0x2322a08 size 0x4 virtual false final false
static ::bs_hook::Il2CppWrapperType InternalExecute(::System::Reflection::MethodBase method, ::bs_hook::Il2CppWrapperType obj, ::ArrayW<::bs_hook::Il2CppWrapperType> parameters, ByRef<::ArrayW<::bs_hook::Il2CppWrapperType>> out_args) ;

/// @brief Method GetVirtualMethod addr 0x2322a0c size 0x4 virtual false final false
static ::System::Reflection::MethodBase GetVirtualMethod(::System::Type type, ::System::Reflection::MethodBase method) ;

/// @brief Method IsTransparentProxy addr 0x2322a10 size 0x40 virtual false final false
static bool IsTransparentProxy(::bs_hook::Il2CppWrapperType proxy) ;

/// @brief Method InternalExecuteMessage addr 0x2322a50 size 0xa20 virtual false final false
static ::System::Runtime::Remoting::Messaging::IMethodReturnMessage InternalExecuteMessage(::System::MarshalByRefObject target, ::System::Runtime::Remoting::Messaging::IMethodCallMessage reqMsg) ;

/// @brief Method Connect addr 0x2323470 size 0x9c virtual false final false
static ::bs_hook::Il2CppWrapperType Connect(::System::Type classToProxy, ::StringW url) ;

/// @brief Method Connect addr 0x2323580 size 0xa0 virtual false final false
static ::bs_hook::Il2CppWrapperType Connect(::System::Type classToProxy, ::StringW url, ::bs_hook::Il2CppWrapperType data) ;

/// @brief Method GetServerTypeForUri addr 0x2323620 size 0xbc virtual false final false
static ::System::Type GetServerTypeForUri(::StringW URI) ;

/// @brief Method Unmarshal addr 0x231b394 size 0x58 virtual false final false
static ::bs_hook::Il2CppWrapperType Unmarshal(::System::Runtime::Remoting::ObjRef objectRef) ;

/// @brief Method Unmarshal addr 0x2323928 size 0x254 virtual false final false
static ::bs_hook::Il2CppWrapperType Unmarshal(::System::Runtime::Remoting::ObjRef objectRef, bool fRefine) ;

/// @brief Method Marshal addr 0x2323c70 size 0x4c virtual false final false
static ::System::Runtime::Remoting::ObjRef Marshal(::System::MarshalByRefObject Obj) ;

/// @brief Method Marshal addr 0x2323cbc size 0x78 virtual false final false
static ::System::Runtime::Remoting::ObjRef Marshal(::System::MarshalByRefObject Obj, ::StringW ObjURI, ::System::Type RequestedType) ;

/// @brief Method NewUri addr 0x2323d7c size 0x384 virtual false final false
static ::StringW NewUri() ;

/// @brief Method GetRealProxy addr 0x2323d34 size 0x48 virtual false final false
static ::System::Runtime::Remoting::Proxies::RealProxy GetRealProxy(::bs_hook::Il2CppWrapperType proxy) ;

/// @brief Method GetMethodBaseFromMethodMessage addr 0x232445c size 0x2f0 virtual false final false
static ::System::Reflection::MethodBase GetMethodBaseFromMethodMessage(::System::Runtime::Remoting::Messaging::IMethodMessage msg) ;

/// @brief Method GetMethodBaseFromName addr 0x232474c size 0x1d0 virtual false final false
static ::System::Reflection::MethodBase GetMethodBaseFromName(::System::Type type, ::StringW methodName, ::ArrayW<::System::Type> signature) ;

/// @brief Method FindInterfaceMethod addr 0x232491c size 0x130 virtual false final false
static ::System::Reflection::MethodBase FindInterfaceMethod(::System::Type type, ::StringW methodName, ::ArrayW<::System::Type> signature) ;

/// @brief Method GetObjectData addr 0x2324a4c size 0xb0 virtual false final false
static void GetObjectData(::bs_hook::Il2CppWrapperType obj, ::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method IsOneWay addr 0x2324afc size 0x98 virtual false final false
static bool IsOneWay(::System::Reflection::MethodBase method) ;

/// @brief Method CreateClientProxy addr 0x2324b94 size 0xfc virtual false final false
static ::bs_hook::Il2CppWrapperType CreateClientProxy(::System::Runtime::Remoting::ActivatedClientTypeEntry entry, ::ArrayW<::bs_hook::Il2CppWrapperType> activationAttributes) ;

/// @brief Method CreateClientProxy addr 0x2324c90 size 0x134 virtual false final false
static ::bs_hook::Il2CppWrapperType CreateClientProxy(::System::Type objectType, ::StringW url, ::ArrayW<::bs_hook::Il2CppWrapperType> activationAttributes) ;

/// @brief Method CreateClientProxy addr 0x2324eac size 0x6c virtual false final false
static ::bs_hook::Il2CppWrapperType CreateClientProxy(::System::Runtime::Remoting::WellKnownClientTypeEntry entry) ;

/// @brief Method CreateClientProxyForContextBound addr 0x2324f18 size 0x180 virtual false final false
static ::bs_hook::Il2CppWrapperType CreateClientProxyForContextBound(::System::Type type, ::ArrayW<::bs_hook::Il2CppWrapperType> activationAttributes) ;

/// @brief Method GetIdentityForUri addr 0x23236dc size 0x24c virtual false final false
static ::System::Runtime::Remoting::Identity GetIdentityForUri(::StringW uri) ;

/// @brief Method RemoveAppNameFromUri addr 0x2325110 size 0xf4 virtual false final false
static ::StringW RemoveAppNameFromUri(::StringW uri) ;

/// @brief Method GetOrCreateClientIdentity addr 0x2325204 size 0x4c8 virtual false final false
static ::System::Runtime::Remoting::ClientIdentity GetOrCreateClientIdentity(::System::Runtime::Remoting::ObjRef objRef, ::System::Type proxyType, ByRef<::bs_hook::Il2CppWrapperType> clientProxy) ;

/// @brief Method GetClientChannelSinkChain addr 0x2324dc4 size 0xe8 virtual false final false
static ::System::Runtime::Remoting::Messaging::IMessageSink GetClientChannelSinkChain(::StringW url, ::bs_hook::Il2CppWrapperType channelData, ByRef<::StringW> objectUri) ;

/// @brief Method CreateContextBoundObjectIdentity addr 0x23258d0 size 0xcc virtual false final false
static ::System::Runtime::Remoting::ClientActivatedIdentity CreateContextBoundObjectIdentity(::System::Type objectType) ;

/// @brief Method CreateClientActivatedServerIdentity addr 0x2324310 size 0x14c virtual false final false
static ::System::Runtime::Remoting::ClientActivatedIdentity CreateClientActivatedServerIdentity(::System::MarshalByRefObject realObject, ::System::Type objectType, ::StringW objectUri) ;

/// @brief Method CreateWellKnownServerIdentity addr 0x231c740 size 0x11c virtual false final false
static ::System::Runtime::Remoting::ServerIdentity CreateWellKnownServerIdentity(::System::Type objectType, ::StringW objectUri, ::System::Runtime::Remoting::WellKnownObjectMode mode) ;

/// @brief Method RegisterServerIdentity addr 0x2324100 size 0x210 virtual false final false
static void RegisterServerIdentity(::System::Runtime::Remoting::ServerIdentity identity) ;

/// @brief Method GetProxyForRemoteObject addr 0x2323b7c size 0xf4 virtual false final false
static ::bs_hook::Il2CppWrapperType GetProxyForRemoteObject(::System::Runtime::Remoting::ObjRef objref, ::System::Type classToProxy) ;

/// @brief Method GetRemoteObject addr 0x232350c size 0x74 virtual false final false
static ::bs_hook::Il2CppWrapperType GetRemoteObject(::System::Runtime::Remoting::ObjRef objRef, ::System::Type proxyType) ;

/// @brief Method SerializeCallData addr 0x232599c size 0x20c virtual false final false
static ::ArrayW<uint8_t> SerializeCallData(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method DeserializeCallData addr 0x2325ba8 size 0x24c virtual false final false
static ::bs_hook::Il2CppWrapperType DeserializeCallData(::ArrayW<uint8_t> array) ;

/// @brief Method SerializeExceptionData addr 0x2325df4 size 0x174 virtual false final false
static ::ArrayW<uint8_t> SerializeExceptionData(::System::Exception ex) ;

/// @brief Method RegisterInternalChannels addr 0x23229b8 size 0x50 virtual false final false
static void RegisterInternalChannels() ;

/// @brief Method DisposeIdentity addr 0x23256cc size 0x204 virtual false final false
static void DisposeIdentity(::System::Runtime::Remoting::Identity ident) ;

/// @brief Method GetMessageTargetIdentity addr 0x2325f68 size 0x338 virtual false final false
static ::System::Runtime::Remoting::Identity GetMessageTargetIdentity(::System::Runtime::Remoting::Messaging::IMessage msg) ;

/// @brief Method SetMessageTargetIdentity addr 0x23262a0 size 0x114 virtual false final false
static void SetMessageTargetIdentity(::System::Runtime::Remoting::Messaging::IMessage msg, ::System::Runtime::Remoting::Identity ident) ;

/// @brief Method UpdateOutArgObject addr 0x23263b4 size 0x190 virtual false final false
static bool UpdateOutArgObject(::System::Reflection::ParameterInfo pi, ::bs_hook::Il2CppWrapperType local, ::bs_hook::Il2CppWrapperType remote) ;

/// @brief Method GetNormalizedUri addr 0x2325098 size 0x78 virtual false final false
static ::StringW GetNormalizedUri(::StringW uri) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::RemotingServices);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::RemotingServices, "System.Runtime.Remoting", "RemotingServices");
NEED_NO_BOX(::System::Runtime::Remoting::____System__Runtime__Remoting__RemotingServices__CACD);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::____System__Runtime__Remoting__RemotingServices__CACD, "System.Runtime.Remoting", "RemotingServices/CACD");
