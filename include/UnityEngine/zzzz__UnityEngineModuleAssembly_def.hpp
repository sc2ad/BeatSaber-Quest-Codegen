#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace UnityEngine {
class UnityEngineModuleAssembly;
}
// Type: UnityEngine::UnityEngineModuleAssembly
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15863))
// CS Name: UnityEngine.UnityEngineModuleAssembly
class CORDL_TYPE UnityEngineModuleAssembly : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngineModuleAssembly() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngineModuleAssembly", modifiers: " const&", def_value: None }]
constexpr UnityEngineModuleAssembly(UnityEngineModuleAssembly const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngineModuleAssembly", modifiers: "&&", def_value: None }]
constexpr UnityEngineModuleAssembly(UnityEngineModuleAssembly&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngineModuleAssembly(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr UnityEngineModuleAssembly& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngineModuleAssembly& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngineModuleAssembly& operator=(UnityEngineModuleAssembly&& o) noexcept = default;
  constexpr UnityEngineModuleAssembly& operator=(UnityEngineModuleAssembly const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UnityEngineModuleAssembly() ;

/// @brief Method .ctor addr 0x2ba0e98 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::UnityEngineModuleAssembly);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngineModuleAssembly, "UnityEngine", "UnityEngineModuleAssembly");
