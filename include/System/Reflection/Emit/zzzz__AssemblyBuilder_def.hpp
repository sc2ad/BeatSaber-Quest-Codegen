#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
namespace {
// Forward declare root types
namespace System::Reflection::Emit {
class AssemblyBuilder;
}
// Type: System.Reflection.Emit::AssemblyBuilder
namespace System::Reflection::Emit {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3503))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3526))
// CS Name: System.Reflection.Emit.AssemblyBuilder
class CORDL_TYPE AssemblyBuilder : public ::System::Reflection::Assembly {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AssemblyBuilder() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyBuilder", modifiers: " const&", def_value: None }]
constexpr AssemblyBuilder(AssemblyBuilder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyBuilder", modifiers: "&&", def_value: None }]
constexpr AssemblyBuilder(AssemblyBuilder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssemblyBuilder(void* ptr) noexcept : ::System::Reflection::Assembly(ptr) {
}


  constexpr AssemblyBuilder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssemblyBuilder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssemblyBuilder& operator=(AssemblyBuilder&& o) noexcept = default;
  constexpr AssemblyBuilder& operator=(AssemblyBuilder const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection::Emit
} // end anonymous namespace
NEED_NO_BOX(::System::Reflection::Emit::AssemblyBuilder);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::Emit::AssemblyBuilder, "System.Reflection.Emit", "AssemblyBuilder");
