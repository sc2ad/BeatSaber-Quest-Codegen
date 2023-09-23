#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Remoting::Activation {
class IConstructionCallMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Proxies {
class RemotingProxy;
}
namespace System::Runtime::Remoting::Activation {
class IActivator;
}
namespace System::Runtime::Remoting::Messaging {
class ConstructionCall;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Remoting::Activation {
class ActivationServices;
}
// Type: System.Runtime.Remoting.Activation::ActivationServices
namespace System::Runtime::Remoting::Activation {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3125))
// CS Name: System.Runtime.Remoting.Activation.ActivationServices
class CORDL_TYPE ActivationServices : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ActivationServices() = default;

// Ctor Parameters [CppParam { name: "", ty: "ActivationServices", modifiers: " const&", def_value: None }]
constexpr ActivationServices(ActivationServices const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ActivationServices", modifiers: "&&", def_value: None }]
constexpr ActivationServices(ActivationServices&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ActivationServices(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ActivationServices& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ActivationServices& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ActivationServices& operator=(ActivationServices&& o) noexcept = default;
  constexpr ActivationServices& operator=(ActivationServices const& o) noexcept = default;
                


// Fields

static System::Runtime::Remoting::Activation::IActivator __declspec(property(get=__get__constructionActivator, put=__set__constructionActivator))  _constructionActivator;

static void __set__constructionActivator(System::Runtime::Remoting::Activation::IActivator value) ;

static System::Runtime::Remoting::Activation::IActivator __get__constructionActivator() ;


// Properties

static System::Runtime::Remoting::Activation::IActivator __declspec(property(get=get_ConstructionActivator))  ConstructionActivator;


// Methods

/// @brief Method get_ConstructionActivator addr 0x2338054 size 0x94 virtual false final false
static System::Runtime::Remoting::Activation::IActivator get_ConstructionActivator() ;

/// @brief Method Activate addr 0x232e2ec size 0x228 virtual false final false
static System::Runtime::Remoting::Messaging::IMessage Activate(System::Runtime::Remoting::Proxies::RemotingProxy proxy, System::Runtime::Remoting::Messaging::ConstructionCall ctorCall) ;

/// @brief Method RemoteActivate addr 0x23380f0 size 0x1d0 virtual false final false
static System::Runtime::Remoting::Messaging::IMessage RemoteActivate(System::Runtime::Remoting::Activation::IConstructionCallMessage ctorCall) ;

/// @brief Method CreateConstructionCall addr 0x232ca3c size 0x9bc virtual false final false
static System::Runtime::Remoting::Messaging::ConstructionCall CreateConstructionCall(System::Type type, ::StringW activationUrl, ::ArrayW<::bs_hook::Il2CppWrapperType> activationAttributes) ;

/// @brief Method CreateInstanceFromMessage addr 0x2338314 size 0x400 virtual false final false
static System::Runtime::Remoting::Messaging::IMessage CreateInstanceFromMessage(System::Runtime::Remoting::Activation::IConstructionCallMessage ctorCall) ;

/// @brief Method CreateProxyForType addr 0x2338718 size 0x140 virtual false final false
static ::bs_hook::Il2CppWrapperType CreateProxyForType(System::Type type) ;

/// @brief Method AllocateUninitializedClassInstance addr 0x2338714 size 0x4 virtual false final false
static ::bs_hook::Il2CppWrapperType AllocateUninitializedClassInstance(System::Type type) ;

/// @brief Method EnableProxyActivation addr 0x2338858 size 0x8 virtual false final false
static void EnableProxyActivation(System::Type type, bool enable) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Activation
NEED_NO_BOX(System::Runtime::Remoting::Activation::ActivationServices);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Activation::ActivationServices, "System.Runtime.Remoting.Activation", "ActivationServices");
