#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
namespace {
namespace System {
struct RuntimeTypeHandle;
}
// Forward declare root types
namespace System {
class ReflectionOnlyType;
}
// Type: System::ReflectionOnlyType
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2566))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2567))
// CS Name: System.ReflectionOnlyType
class CORDL_TYPE ReflectionOnlyType : public ::System::RuntimeType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ReflectionOnlyType() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionOnlyType", modifiers: " const&", def_value: None }]
constexpr ReflectionOnlyType(ReflectionOnlyType const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionOnlyType", modifiers: "&&", def_value: None }]
constexpr ReflectionOnlyType(ReflectionOnlyType&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReflectionOnlyType(void* ptr) noexcept : ::System::RuntimeType(ptr) {
}


  constexpr ReflectionOnlyType& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReflectionOnlyType& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReflectionOnlyType& operator=(ReflectionOnlyType&& o) noexcept = default;
  constexpr ReflectionOnlyType& operator=(ReflectionOnlyType const& o) noexcept = default;
                


// Properties

 ::System::RuntimeTypeHandle __declspec(property(get=get_TypeHandle))  TypeHandle;


// Methods

// Ctor Parameters []
explicit ReflectionOnlyType() ;

/// @brief Method .ctor addr 0x248340c size 0x58 virtual false final false
 void _ctor() ;

/// @brief Method get_TypeHandle addr 0x2483464 size 0x58 virtual true final false
 ::System::RuntimeTypeHandle get_TypeHandle() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::ReflectionOnlyType);
DEFINE_IL2CPP_ARG_TYPE(::System::ReflectionOnlyType, "System", "ReflectionOnlyType");
