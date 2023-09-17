#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
namespace {
// Forward declare root types
namespace System {
class MonoType;
}
// Type: System::MonoType
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2566))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2609))
// CS Name: System.MonoType
class CORDL_TYPE MonoType : public ::System::RuntimeType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MonoType() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoType", modifiers: " const&", def_value: None }]
constexpr MonoType(MonoType const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoType", modifiers: "&&", def_value: None }]
constexpr MonoType(MonoType&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonoType(void* ptr) noexcept : ::System::RuntimeType(ptr) {
}


  constexpr MonoType& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonoType& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonoType& operator=(MonoType&& o) noexcept = default;
  constexpr MonoType& operator=(MonoType const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::MonoType);
DEFINE_IL2CPP_ARG_TYPE(::System::MonoType, "System", "MonoType");
