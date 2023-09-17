#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__MethodCall_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Runtime::Remoting::Messaging {
class IMethodCallMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Remoting::Activation {
class IConstructionCallMessage;
}
namespace System {
class Type;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Collections {
class IList;
}
namespace System::Runtime::Remoting::Proxies {
class RemotingProxy;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodMessage;
}
namespace System::Runtime::Remoting::Activation {
class IActivator;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class ConstructionCall;
}
// Type: System.Runtime.Remoting.Messaging::ConstructionCall
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3170))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3156))
// CS Name: System.Runtime.Remoting.Messaging.ConstructionCall
class CORDL_TYPE ConstructionCall : public ::System::Runtime::Remoting::Messaging::MethodCall {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::Remoting::Activation::IConstructionCallMessage
constexpr operator  ::System::Runtime::Remoting::Activation::IConstructionCallMessage() const noexcept;

/// @brief Convert operator to ::System::Runtime::Remoting::Messaging::IMessage
constexpr operator  ::System::Runtime::Remoting::Messaging::IMessage() const noexcept;

/// @brief Convert operator to ::System::Runtime::Remoting::Messaging::IMethodCallMessage
constexpr operator  ::System::Runtime::Remoting::Messaging::IMethodCallMessage() const noexcept;

/// @brief Convert operator to ::System::Runtime::Remoting::Messaging::IMethodMessage
constexpr operator  ::System::Runtime::Remoting::Messaging::IMethodMessage() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~ConstructionCall() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConstructionCall", modifiers: " const&", def_value: None }]
constexpr ConstructionCall(ConstructionCall const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConstructionCall", modifiers: "&&", def_value: None }]
constexpr ConstructionCall(ConstructionCall&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConstructionCall(void* ptr) noexcept : ::System::Runtime::Remoting::Messaging::MethodCall(ptr) {
}


  constexpr ConstructionCall& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConstructionCall& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConstructionCall& operator=(ConstructionCall&& o) noexcept = default;
  constexpr ConstructionCall& operator=(ConstructionCall const& o) noexcept = default;
                


// Fields

 ::System::Runtime::Remoting::Activation::IActivator __declspec(property(get=__get__activator, put=__set__activator))  _activator;

constexpr void __set__activator(::System::Runtime::Remoting::Activation::IActivator value) ;

constexpr ::System::Runtime::Remoting::Activation::IActivator __get__activator() const;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__activationAttributes, put=__set__activationAttributes))  _activationAttributes;

constexpr void __set__activationAttributes(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get__activationAttributes() const;

 ::System::Collections::IList __declspec(property(get=__get__contextProperties, put=__set__contextProperties))  _contextProperties;

constexpr void __set__contextProperties(::System::Collections::IList value) ;

constexpr ::System::Collections::IList __get__contextProperties() const;

 ::System::Type __declspec(property(get=__get__activationType, put=__set__activationType))  _activationType;

constexpr void __set__activationType(::System::Type value) ;

constexpr ::System::Type __get__activationType() const;

 ::StringW __declspec(property(get=__get__activationTypeName, put=__set__activationTypeName))  _activationTypeName;

constexpr void __set__activationTypeName(::StringW value) ;

constexpr ::StringW __get__activationTypeName() const;

 bool __declspec(property(get=__get__isContextOk, put=__set__isContextOk))  _isContextOk;

constexpr void __set__isContextOk(bool value) ;

constexpr bool __get__isContextOk() const;

 ::System::Runtime::Remoting::Proxies::RemotingProxy __declspec(property(get=__get__sourceProxy, put=__set__sourceProxy))  _sourceProxy;

constexpr void __set__sourceProxy(::System::Runtime::Remoting::Proxies::RemotingProxy value) ;

constexpr ::System::Runtime::Remoting::Proxies::RemotingProxy __get__sourceProxy() const;


// Properties

 bool __declspec(property(get=get_IsContextOk, put=set_IsContextOk))  IsContextOk;

 ::System::Type __declspec(property(get=get_ActivationType))  ActivationType;

 ::StringW __declspec(property(get=get_ActivationTypeName))  ActivationTypeName;

 ::System::Runtime::Remoting::Activation::IActivator __declspec(property(get=get_Activator, put=set_Activator))  Activator;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=get_CallSiteActivationAttributes))  CallSiteActivationAttributes;

 ::System::Collections::IList __declspec(property(get=get_ContextProperties))  ContextProperties;

 ::System::Collections::IDictionary __declspec(property(get=get_Properties))  Properties;

 ::System::Runtime::Remoting::Proxies::RemotingProxy __declspec(property(get=get_SourceProxy, put=set_SourceProxy))  SourceProxy;


// Methods

// Ctor Parameters [CppParam { name: "type", ty: "::System::Type", modifiers: "", def_value: None }]
explicit ConstructionCall(::System::Type type) ;

/// @brief Method .ctor addr 0x232b9fc size 0x50 virtual false final false
 void _ctor(::System::Type type) ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit ConstructionCall(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x233ee58 size 0x4 virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method InitDictionary addr 0x233eef4 size 0x84 virtual true final false
 void InitDictionary() ;

/// @brief Method get_IsContextOk addr 0x233f024 size 0x8 virtual false final false
 bool get_IsContextOk() ;

/// @brief Method set_IsContextOk addr 0x233f02c size 0xc virtual false final false
 void set_IsContextOk(bool value) ;

/// @brief Method get_ActivationType addr 0x233f038 size 0xc8 virtual true final true
 ::System::Type get_ActivationType() ;

/// @brief Method get_ActivationTypeName addr 0x233f100 size 0x8 virtual true final true
 ::StringW get_ActivationTypeName() ;

/// @brief Method get_Activator addr 0x233f108 size 0x8 virtual true final true
 ::System::Runtime::Remoting::Activation::IActivator get_Activator() ;

/// @brief Method set_Activator addr 0x233f110 size 0x8 virtual true final true
 void set_Activator(::System::Runtime::Remoting::Activation::IActivator value) ;

/// @brief Method get_CallSiteActivationAttributes addr 0x233f118 size 0x8 virtual true final true
 ::ArrayW<::bs_hook::Il2CppWrapperType> get_CallSiteActivationAttributes() ;

/// @brief Method SetActivationAttributes addr 0x233f120 size 0x8 virtual false final false
 void SetActivationAttributes(::ArrayW<::bs_hook::Il2CppWrapperType> attributes) ;

/// @brief Method get_ContextProperties addr 0x233f128 size 0x6c virtual true final true
 ::System::Collections::IList get_ContextProperties() ;

/// @brief Method InitMethodProperty addr 0x233f194 size 0x2b0 virtual true final false
 void InitMethodProperty(::StringW key, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetObjectData addr 0x233f860 size 0x198 virtual true final false
 void GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_Properties addr 0x233fe88 size 0x30 virtual true final false
 ::System::Collections::IDictionary get_Properties() ;

/// @brief Method get_SourceProxy addr 0x233fee8 size 0x8 virtual false final false
 ::System::Runtime::Remoting::Proxies::RemotingProxy get_SourceProxy() ;

/// @brief Method set_SourceProxy addr 0x233fef0 size 0x8 virtual false final false
 void set_SourceProxy(::System::Runtime::Remoting::Proxies::RemotingProxy value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::ConstructionCall);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::ConstructionCall, "System.Runtime.Remoting.Messaging", "ConstructionCall");
