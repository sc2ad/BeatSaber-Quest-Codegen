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
class ContextLevelActivator;
}
// Type: System.Runtime.Remoting.Activation::ContextLevelActivator
namespace System::Runtime::Remoting::Activation {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3128))
// CS Name: System.Runtime.Remoting.Activation.ContextLevelActivator
class CORDL_TYPE ContextLevelActivator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Remoting::Activation::IActivator
constexpr operator  System::Runtime::Remoting::Activation::IActivator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ContextLevelActivator() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContextLevelActivator", modifiers: " const&", def_value: None }]
constexpr ContextLevelActivator(ContextLevelActivator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContextLevelActivator", modifiers: "&&", def_value: None }]
constexpr ContextLevelActivator(ContextLevelActivator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContextLevelActivator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ContextLevelActivator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContextLevelActivator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContextLevelActivator& operator=(ContextLevelActivator&& o) noexcept = default;
  constexpr ContextLevelActivator& operator=(ContextLevelActivator const& o) noexcept = default;
                


// Fields

 System::Runtime::Remoting::Activation::IActivator __declspec(property(get=__get_m_NextActivator, put=__set_m_NextActivator))  m_NextActivator;

constexpr void __set_m_NextActivator(System::Runtime::Remoting::Activation::IActivator value) ;

constexpr System::Runtime::Remoting::Activation::IActivator __get_m_NextActivator() const;


// Properties

 System::Runtime::Remoting::Activation::IActivator __declspec(property(get=get_NextActivator))  NextActivator;


// Methods

static System::Runtime::Remoting::Activation::ContextLevelActivator New_ctor(System::Runtime::Remoting::Activation::IActivator next) ;

/// @brief Method .ctor addr 0x23382ec size 0x28 virtual false final false
 void _ctor(System::Runtime::Remoting::Activation::IActivator next) ;

/// @brief Method get_NextActivator addr 0x2338e40 size 0x8 virtual true final true
 System::Runtime::Remoting::Activation::IActivator get_NextActivator() ;

/// @brief Method Activate addr 0x2338e48 size 0x334 virtual true final true
 System::Runtime::Remoting::Activation::IConstructionReturnMessage Activate(System::Runtime::Remoting::Activation::IConstructionCallMessage ctorCall) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Activation
NEED_NO_BOX(System::Runtime::Remoting::Activation::ContextLevelActivator);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Activation::ContextLevelActivator, "System.Runtime.Remoting.Activation", "ContextLevelActivator");
