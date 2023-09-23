#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Reflection/zzzz__Module_def.hpp"
// Forward declare root types
namespace System::Reflection::Emit {
class ModuleBuilder;
}
// Type: System.Reflection.Emit::ModuleBuilder
namespace System::Reflection::Emit {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3473))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3536))
// CS Name: System.Reflection.Emit.ModuleBuilder
class CORDL_TYPE ModuleBuilder : public System::Reflection::Module {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ModuleBuilder() = default;

// Ctor Parameters [CppParam { name: "", ty: "ModuleBuilder", modifiers: " const&", def_value: None }]
constexpr ModuleBuilder(ModuleBuilder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ModuleBuilder", modifiers: "&&", def_value: None }]
constexpr ModuleBuilder(ModuleBuilder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ModuleBuilder(void* ptr) noexcept : System::Reflection::Module(ptr) {
}


  constexpr ModuleBuilder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ModuleBuilder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ModuleBuilder& operator=(ModuleBuilder&& o) noexcept = default;
  constexpr ModuleBuilder& operator=(ModuleBuilder const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection::Emit
NEED_NO_BOX(System::Reflection::Emit::ModuleBuilder);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::Emit::ModuleBuilder, "System.Reflection.Emit", "ModuleBuilder");
