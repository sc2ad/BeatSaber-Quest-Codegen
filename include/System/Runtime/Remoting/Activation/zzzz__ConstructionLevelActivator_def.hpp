#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Runtime::Remoting::Activation {
class IConstructionCallMessage;
}
namespace System::Runtime::Remoting::Activation {
class IConstructionReturnMessage;
}
namespace System::Runtime::Remoting::Activation {
class IActivator;
}
// Forward declare root types
namespace System::Runtime::Remoting::Activation {
class ConstructionLevelActivator;
}
// Type: System.Runtime.Remoting.Activation::ConstructionLevelActivator
namespace System::Runtime::Remoting::Activation {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3127))
// CS Name: System.Runtime.Remoting.Activation.ConstructionLevelActivator
class CORDL_TYPE ConstructionLevelActivator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Remoting::Activation::IActivator
constexpr operator  System::Runtime::Remoting::Activation::IActivator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ConstructionLevelActivator() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConstructionLevelActivator", modifiers: " const&", def_value: None }]
constexpr ConstructionLevelActivator(ConstructionLevelActivator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConstructionLevelActivator", modifiers: "&&", def_value: None }]
constexpr ConstructionLevelActivator(ConstructionLevelActivator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConstructionLevelActivator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ConstructionLevelActivator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConstructionLevelActivator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConstructionLevelActivator& operator=(ConstructionLevelActivator&& o) noexcept = default;
  constexpr ConstructionLevelActivator& operator=(ConstructionLevelActivator const& o) noexcept = default;
                


// Properties

 System::Runtime::Remoting::Activation::IActivator __declspec(property(get=get_NextActivator))  NextActivator;


// Methods

/// @brief Method get_NextActivator addr 0x2338d48 size 0x8 virtual true final true
 System::Runtime::Remoting::Activation::IActivator get_NextActivator() ;

/// @brief Method Activate addr 0x2338d50 size 0xf0 virtual true final true
 System::Runtime::Remoting::Activation::IConstructionReturnMessage Activate(System::Runtime::Remoting::Activation::IConstructionCallMessage msg) ;

static System::Runtime::Remoting::Activation::ConstructionLevelActivator New_ctor() ;

/// @brief Method .ctor addr 0x23380e8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Activation
NEED_NO_BOX(System::Runtime::Remoting::Activation::ConstructionLevelActivator);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Activation::ConstructionLevelActivator, "System.Runtime.Remoting.Activation", "ConstructionLevelActivator");
