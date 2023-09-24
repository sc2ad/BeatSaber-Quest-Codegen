#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__ContextBoundObject_def.hpp"
namespace System::Runtime::Remoting::Contexts {
class CrossContextDelegate;
}
// Forward declare root types
namespace System::Runtime::Remoting::Contexts {
class ContextCallbackObject;
}
// Type: System.Runtime.Remoting.Contexts::ContextCallbackObject
namespace System::Runtime::Remoting::Contexts {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2548))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3097))
// CS Name: System.Runtime.Remoting.Contexts.ContextCallbackObject
class CORDL_TYPE ContextCallbackObject : public System::ContextBoundObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ContextCallbackObject() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContextCallbackObject", modifiers: " const&", def_value: None }]
constexpr ContextCallbackObject(ContextCallbackObject const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContextCallbackObject", modifiers: "&&", def_value: None }]
constexpr ContextCallbackObject(ContextCallbackObject&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContextCallbackObject(void* ptr) noexcept : System::ContextBoundObject(ptr) {
}


  constexpr ContextCallbackObject& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContextCallbackObject& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContextCallbackObject& operator=(ContextCallbackObject&& o) noexcept = default;
  constexpr ContextCallbackObject& operator=(ContextCallbackObject const& o) noexcept = default;
                


// Methods

/// @brief Method DoCallBack addr 0x2332754 size 0x4 virtual false final false
 void DoCallBack(System::Runtime::Remoting::Contexts::CrossContextDelegate deleg) ;

static System::Runtime::Remoting::Contexts::ContextCallbackObject New_ctor() ;

/// @brief Method .ctor addr 0x233274c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Contexts
NEED_NO_BOX(System::Runtime::Remoting::Contexts::ContextCallbackObject);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Contexts::ContextCallbackObject, "System.Runtime.Remoting.Contexts", "ContextCallbackObject");
