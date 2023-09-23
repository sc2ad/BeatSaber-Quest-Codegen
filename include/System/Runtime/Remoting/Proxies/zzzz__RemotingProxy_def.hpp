#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/Runtime/Remoting/Proxies/zzzz__RealProxy_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System {
class Type;
}
namespace System::Runtime::Remoting {
class IRemotingTypeInfo;
}
namespace System::Runtime::Remoting {
class ClientIdentity;
}
namespace System::Runtime::Remoting {
class Identity;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodMessage;
}
namespace System::Runtime::Remoting::Messaging {
class ConstructionCall;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Proxies {
class RemotingProxy;
}
// Type: System.Runtime.Remoting.Proxies::RemotingProxy
namespace System::Runtime::Remoting::Proxies {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3084))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3085))
// CS Name: System.Runtime.Remoting.Proxies.RemotingProxy
class CORDL_TYPE RemotingProxy : public System::Runtime::Remoting::Proxies::RealProxy {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Remoting::IRemotingTypeInfo
constexpr operator  System::Runtime::Remoting::IRemotingTypeInfo() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~RemotingProxy() = default;

// Ctor Parameters [CppParam { name: "", ty: "RemotingProxy", modifiers: " const&", def_value: None }]
constexpr RemotingProxy(RemotingProxy const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RemotingProxy", modifiers: "&&", def_value: None }]
constexpr RemotingProxy(RemotingProxy&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RemotingProxy(void* ptr) noexcept : System::Runtime::Remoting::Proxies::RealProxy(ptr) {
}


  constexpr RemotingProxy& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RemotingProxy& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RemotingProxy& operator=(RemotingProxy&& o) noexcept = default;
  constexpr RemotingProxy& operator=(RemotingProxy const& o) noexcept = default;
                


// Fields

static System::Reflection::MethodInfo __declspec(property(get=__get__cache_GetTypeMethod, put=__set__cache_GetTypeMethod))  _cache_GetTypeMethod;

static void __set__cache_GetTypeMethod(System::Reflection::MethodInfo value) ;

static System::Reflection::MethodInfo __get__cache_GetTypeMethod() ;

static System::Reflection::MethodInfo __declspec(property(get=__get__cache_GetHashCodeMethod, put=__set__cache_GetHashCodeMethod))  _cache_GetHashCodeMethod;

static void __set__cache_GetHashCodeMethod(System::Reflection::MethodInfo value) ;

static System::Reflection::MethodInfo __get__cache_GetHashCodeMethod() ;

 System::Runtime::Remoting::Messaging::IMessageSink __declspec(property(get=__get__sink, put=__set__sink))  _sink;

constexpr void __set__sink(System::Runtime::Remoting::Messaging::IMessageSink value) ;

constexpr System::Runtime::Remoting::Messaging::IMessageSink __get__sink() const;

 bool __declspec(property(get=__get__hasEnvoySink, put=__set__hasEnvoySink))  _hasEnvoySink;

constexpr void __set__hasEnvoySink(bool value) ;

constexpr bool __get__hasEnvoySink() const;

 System::Runtime::Remoting::Messaging::ConstructionCall __declspec(property(get=__get__ctorCall, put=__set__ctorCall))  _ctorCall;

constexpr void __set__ctorCall(System::Runtime::Remoting::Messaging::ConstructionCall value) ;

constexpr System::Runtime::Remoting::Messaging::ConstructionCall __get__ctorCall() const;


// Properties

 ::StringW __declspec(property(get=get_TypeName))  TypeName;


// Methods

// Ctor Parameters [CppParam { name: "type", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "identity", ty: "System::Runtime::Remoting::ClientIdentity", modifiers: "", def_value: None }]
explicit RemotingProxy(System::Type type, System::Runtime::Remoting::ClientIdentity identity) ;

/// @brief Method .ctor addr 0x232c9f8 size 0x44 virtual false final false
 void _ctor(System::Type type, System::Runtime::Remoting::ClientIdentity identity) ;

// Ctor Parameters [CppParam { name: "type", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "activationUrl", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "activationAttributes", ty: "::ArrayW<::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }]
explicit RemotingProxy(System::Type type, ::StringW activationUrl, ::ArrayW<::bs_hook::Il2CppWrapperType> activationAttributes) ;

/// @brief Method .ctor addr 0x232a260 size 0x48 virtual false final false
 void _ctor(System::Type type, ::StringW activationUrl, ::ArrayW<::bs_hook::Il2CppWrapperType> activationAttributes) ;

/// @brief Method Invoke addr 0x232d3f8 size 0x5c8 virtual true final false
 System::Runtime::Remoting::Messaging::IMessage Invoke(System::Runtime::Remoting::Messaging::IMessage request) ;

/// @brief Method AttachIdentity addr 0x232dd54 size 0x230 virtual false final false
 void AttachIdentity(System::Runtime::Remoting::Identity identity) ;

/// @brief Method ActivateRemoteObject addr 0x232b920 size 0xdc virtual false final false
 System::Runtime::Remoting::Messaging::IMessage ActivateRemoteObject(System::Runtime::Remoting::Messaging::IMethodMessage request) ;

/// @brief Method get_TypeName addr 0x232e514 size 0x138 virtual true final true
 ::StringW get_TypeName() ;

/// @brief Method CanCastTo addr 0x232e64c size 0x21c virtual true final true
 bool CanCastTo(System::Type fromType, ::bs_hook::Il2CppWrapperType o) ;

/// @brief Method Finalize addr 0x232e868 size 0x11c virtual true final false
 void Finalize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Proxies
NEED_NO_BOX(System::Runtime::Remoting::Proxies::RemotingProxy);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Proxies::RemotingProxy, "System.Runtime.Remoting.Proxies", "RemotingProxy");
