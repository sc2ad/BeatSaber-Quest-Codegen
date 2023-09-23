#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
// Forward declare root types
namespace UnityEngine {
class PhysicMaterial;
}
// Type: UnityEngine::PhysicMaterial
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10142))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15462))
// CS Name: UnityEngine.PhysicMaterial
class CORDL_TYPE PhysicMaterial : public UnityEngine::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PhysicMaterial() = default;

// Ctor Parameters [CppParam { name: "", ty: "PhysicMaterial", modifiers: " const&", def_value: None }]
constexpr PhysicMaterial(PhysicMaterial const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PhysicMaterial", modifiers: "&&", def_value: None }]
constexpr PhysicMaterial(PhysicMaterial&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PhysicMaterial(void* ptr) noexcept : UnityEngine::Object(ptr) {
}


  constexpr PhysicMaterial& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PhysicMaterial& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PhysicMaterial& operator=(PhysicMaterial&& o) noexcept = default;
  constexpr PhysicMaterial& operator=(PhysicMaterial const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::PhysicMaterial);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PhysicMaterial, "UnityEngine", "PhysicMaterial");
