#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Runtime::Remoting::Proxies {
class RealProxy;
}
namespace System {
class Type;
}
namespace System {
class MarshalByRefObject;
}
namespace System::Runtime::Remoting::Contexts {
class Context;
}
namespace System::Runtime::Remoting::Activation {
class IConstructionCallMessage;
}
namespace System::Runtime::Remoting::Contexts {
class IContextAttribute;
}
namespace System::Runtime::Remoting {
class ObjRef;
}
// Forward declare root types
namespace System::Runtime::Remoting::Proxies {
class ProxyAttribute;
}
// Type: System.Runtime.Remoting.Proxies::ProxyAttribute
namespace System::Runtime::Remoting::Proxies {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3082))
// CS Name: System.Runtime.Remoting.Proxies.ProxyAttribute
class CORDL_TYPE ProxyAttribute : public System::Attribute {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Remoting::Contexts::IContextAttribute
constexpr operator  System::Runtime::Remoting::Contexts::IContextAttribute() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ProxyAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProxyAttribute", modifiers: " const&", def_value: None }]
constexpr ProxyAttribute(ProxyAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProxyAttribute", modifiers: "&&", def_value: None }]
constexpr ProxyAttribute(ProxyAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProxyAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr ProxyAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProxyAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProxyAttribute& operator=(ProxyAttribute&& o) noexcept = default;
  constexpr ProxyAttribute& operator=(ProxyAttribute const& o) noexcept = default;
                


// Methods

/// @brief Method CreateInstance addr 0x232a15c size 0x104 virtual true final false
 System::MarshalByRefObject CreateInstance(System::Type serverType) ;

/// @brief Method CreateProxy addr 0x232a2a8 size 0x70 virtual true final false
 System::Runtime::Remoting::Proxies::RealProxy CreateProxy(System::Runtime::Remoting::ObjRef objRef, System::Type serverType, ::bs_hook::Il2CppWrapperType serverObject, System::Runtime::Remoting::Contexts::Context serverContext) ;

/// @brief Method GetPropertiesForNewContext addr 0x232a318 size 0x4 virtual true final true
 void GetPropertiesForNewContext(System::Runtime::Remoting::Activation::IConstructionCallMessage msg) ;

/// @brief Method IsContextOK addr 0x232a31c size 0x8 virtual true final true
 bool IsContextOK(System::Runtime::Remoting::Contexts::Context ctx, System::Runtime::Remoting::Activation::IConstructionCallMessage msg) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Proxies
NEED_NO_BOX(System::Runtime::Remoting::Proxies::ProxyAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Proxies::ProxyAttribute, "System.Runtime.Remoting.Proxies", "ProxyAttribute");
