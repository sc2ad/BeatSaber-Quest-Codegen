#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
namespace {
// Forward declare root types
namespace System {
class ContextBoundObject;
}
// Type: System::ContextBoundObject
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2548))
// CS Name: System.ContextBoundObject
class CORDL_TYPE ContextBoundObject : public ::System::MarshalByRefObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ContextBoundObject() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContextBoundObject", modifiers: " const&", def_value: None }]
constexpr ContextBoundObject(ContextBoundObject const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContextBoundObject", modifiers: "&&", def_value: None }]
constexpr ContextBoundObject(ContextBoundObject&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContextBoundObject(void* ptr) noexcept : ::System::MarshalByRefObject(ptr) {
}


  constexpr ContextBoundObject& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContextBoundObject& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContextBoundObject& operator=(ContextBoundObject&& o) noexcept = default;
  constexpr ContextBoundObject& operator=(ContextBoundObject const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ContextBoundObject() ;

/// @brief Method .ctor addr 0x246e18c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::ContextBoundObject);
DEFINE_IL2CPP_ARG_TYPE(::System::ContextBoundObject, "System", "ContextBoundObject");
