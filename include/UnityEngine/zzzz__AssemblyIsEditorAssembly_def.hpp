#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace UnityEngine {
class AssemblyIsEditorAssembly;
}
// Type: UnityEngine::AssemblyIsEditorAssembly
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10164))
// CS Name: UnityEngine.AssemblyIsEditorAssembly
class CORDL_TYPE AssemblyIsEditorAssembly : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AssemblyIsEditorAssembly() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyIsEditorAssembly", modifiers: " const&", def_value: None }]
constexpr AssemblyIsEditorAssembly(AssemblyIsEditorAssembly const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyIsEditorAssembly", modifiers: "&&", def_value: None }]
constexpr AssemblyIsEditorAssembly(AssemblyIsEditorAssembly&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssemblyIsEditorAssembly(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr AssemblyIsEditorAssembly& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssemblyIsEditorAssembly& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssemblyIsEditorAssembly& operator=(AssemblyIsEditorAssembly&& o) noexcept = default;
  constexpr AssemblyIsEditorAssembly& operator=(AssemblyIsEditorAssembly const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::AssemblyIsEditorAssembly);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AssemblyIsEditorAssembly, "UnityEngine", "AssemblyIsEditorAssembly");
