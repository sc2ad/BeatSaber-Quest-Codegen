#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace System::Runtime::Remoting::Contexts {
class IContextAttribute;
}
namespace System::Collections {
class IList;
}
namespace System::Runtime::Remoting::Contexts {
class Context;
}
namespace System::Runtime::Remoting::Activation {
class IConstructionCallMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Activation {
class RemoteActivationAttribute;
}
// Type: System.Runtime.Remoting.Activation::RemoteActivationAttribute
namespace System::Runtime::Remoting::Activation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3132))
// CS Name: System.Runtime.Remoting.Activation.RemoteActivationAttribute
class CORDL_TYPE RemoteActivationAttribute : public System::Attribute {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Remoting::Contexts::IContextAttribute
constexpr operator  System::Runtime::Remoting::Contexts::IContextAttribute() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RemoteActivationAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteActivationAttribute", modifiers: " const&", def_value: None }]
constexpr RemoteActivationAttribute(RemoteActivationAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteActivationAttribute", modifiers: "&&", def_value: None }]
constexpr RemoteActivationAttribute(RemoteActivationAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RemoteActivationAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr RemoteActivationAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RemoteActivationAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RemoteActivationAttribute& operator=(RemoteActivationAttribute&& o) noexcept = default;
  constexpr RemoteActivationAttribute& operator=(RemoteActivationAttribute const& o) noexcept = default;
                


// Fields

 System::Collections::IList __declspec(property(get=__get__contextProperties, put=__set__contextProperties))  _contextProperties;

constexpr void __set__contextProperties(System::Collections::IList value) ;

constexpr System::Collections::IList __get__contextProperties() const;


// Methods

static System::Runtime::Remoting::Activation::RemoteActivationAttribute New_ctor(System::Collections::IList contextProperties) ;

/// @brief Method .ctor addr 0x233917c size 0x28 virtual false final false
 void _ctor(System::Collections::IList contextProperties) ;

/// @brief Method IsContextOK addr 0x23391a4 size 0x8 virtual true final true
 bool IsContextOK(System::Runtime::Remoting::Contexts::Context ctx, System::Runtime::Remoting::Activation::IConstructionCallMessage ctor) ;

/// @brief Method GetPropertiesForNewContext addr 0x23391ac size 0x3e8 virtual true final true
 void GetPropertiesForNewContext(System::Runtime::Remoting::Activation::IConstructionCallMessage ctor) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Activation
NEED_NO_BOX(System::Runtime::Remoting::Activation::RemoteActivationAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Activation::RemoteActivationAttribute, "System.Runtime.Remoting.Activation", "RemoteActivationAttribute");
