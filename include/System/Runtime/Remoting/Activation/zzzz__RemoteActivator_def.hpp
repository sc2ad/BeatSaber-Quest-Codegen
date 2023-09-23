#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
namespace System::Runtime::Remoting::Activation {
class IActivator;
}
namespace System::Runtime::Remoting::Activation {
class IConstructionCallMessage;
}
namespace System::Runtime::Remoting::Activation {
class IConstructionReturnMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Activation {
class RemoteActivator;
}
// Type: System.Runtime.Remoting.Activation::RemoteActivator
namespace System::Runtime::Remoting::Activation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3133))
// CS Name: System.Runtime.Remoting.Activation.RemoteActivator
class CORDL_TYPE RemoteActivator : public System::MarshalByRefObject {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Remoting::Activation::IActivator
constexpr operator  System::Runtime::Remoting::Activation::IActivator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RemoteActivator() = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteActivator", modifiers: " const&", def_value: None }]
constexpr RemoteActivator(RemoteActivator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteActivator", modifiers: "&&", def_value: None }]
constexpr RemoteActivator(RemoteActivator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RemoteActivator(void* ptr) noexcept : System::MarshalByRefObject(ptr) {
}


  constexpr RemoteActivator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RemoteActivator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RemoteActivator& operator=(RemoteActivator&& o) noexcept = default;
  constexpr RemoteActivator& operator=(RemoteActivator const& o) noexcept = default;
                


// Properties

 System::Runtime::Remoting::Activation::IActivator __declspec(property(get=get_NextActivator))  NextActivator;


// Methods

/// @brief Method Activate addr 0x2339594 size 0x47c virtual true final true
 System::Runtime::Remoting::Activation::IConstructionReturnMessage Activate(System::Runtime::Remoting::Activation::IConstructionCallMessage msg) ;

/// @brief Method get_NextActivator addr 0x2339a10 size 0x40 virtual true final true
 System::Runtime::Remoting::Activation::IActivator get_NextActivator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Activation
NEED_NO_BOX(System::Runtime::Remoting::Activation::RemoteActivator);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Activation::RemoteActivator, "System.Runtime.Remoting.Activation", "RemoteActivator");
