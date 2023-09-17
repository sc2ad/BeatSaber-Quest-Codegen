#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodCallMessage;
}
namespace System {
class Type;
}
namespace System::Collections {
class IList;
}
namespace System::Runtime::Remoting::Activation {
class IActivator;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Activation {
class IConstructionCallMessage;
}
// Type: System.Runtime.Remoting.Activation::IConstructionCallMessage
namespace System::Runtime::Remoting::Activation {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3130))
// CS Name: System.Runtime.Remoting.Activation.IConstructionCallMessage
class CORDL_TYPE IConstructionCallMessage : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::Remoting::Messaging::IMessage
constexpr operator  ::System::Runtime::Remoting::Messaging::IMessage() const noexcept;

/// @brief Convert operator to ::System::Runtime::Remoting::Messaging::IMethodCallMessage
constexpr operator  ::System::Runtime::Remoting::Messaging::IMethodCallMessage() const noexcept;

/// @brief Convert operator to ::System::Runtime::Remoting::Messaging::IMethodMessage
constexpr operator  ::System::Runtime::Remoting::Messaging::IMethodMessage() const noexcept;

~IConstructionCallMessage() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IConstructionCallMessage(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::System::Type __declspec(property(get=get_ActivationType))  ActivationType;

 ::StringW __declspec(property(get=get_ActivationTypeName))  ActivationTypeName;

 ::System::Runtime::Remoting::Activation::IActivator __declspec(property(get=get_Activator, put=set_Activator))  Activator;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=get_CallSiteActivationAttributes))  CallSiteActivationAttributes;

 ::System::Collections::IList __declspec(property(get=get_ContextProperties))  ContextProperties;


// Methods

/// @brief Method get_ActivationType addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Type get_ActivationType() ;

/// @brief Method get_ActivationTypeName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_ActivationTypeName() ;

/// @brief Method get_Activator addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Runtime::Remoting::Activation::IActivator get_Activator() ;

/// @brief Method set_Activator addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_Activator(::System::Runtime::Remoting::Activation::IActivator value) ;

/// @brief Method get_CallSiteActivationAttributes addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> get_CallSiteActivationAttributes() ;

/// @brief Method get_ContextProperties addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Collections::IList get_ContextProperties() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Activation
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::Activation::IConstructionCallMessage);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Activation::IConstructionCallMessage, "System.Runtime.Remoting.Activation", "IConstructionCallMessage");
