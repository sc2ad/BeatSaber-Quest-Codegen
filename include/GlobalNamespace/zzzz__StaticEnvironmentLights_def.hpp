#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class StaticEnvironmentLights;
}
// Type: ::StaticEnvironmentLights
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5102))
// CS Name: StaticEnvironmentLights
class CORDL_TYPE StaticEnvironmentLights : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~StaticEnvironmentLights() = default;

// Ctor Parameters [CppParam { name: "", ty: "StaticEnvironmentLights", modifiers: " const&", def_value: None }]
constexpr StaticEnvironmentLights(StaticEnvironmentLights const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StaticEnvironmentLights", modifiers: "&&", def_value: None }]
constexpr StaticEnvironmentLights(StaticEnvironmentLights&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StaticEnvironmentLights(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr StaticEnvironmentLights& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StaticEnvironmentLights& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StaticEnvironmentLights& operator=(StaticEnvironmentLights&& o) noexcept = default;
  constexpr StaticEnvironmentLights& operator=(StaticEnvironmentLights const& o) noexcept = default;
                


// Fields

 ::ArrayW<UnityEngine::Color> __declspec(property(get=__get__lightColors, put=__set__lightColors))  _lightColors;

constexpr void __set__lightColors(::ArrayW<UnityEngine::Color> value) ;

constexpr ::ArrayW<UnityEngine::Color> __get__lightColors() const;

 ::ArrayW<UnityEngine::Material> __declspec(property(get=__get__materials, put=__set__materials))  _materials;

constexpr void __set__materials(::ArrayW<UnityEngine::Material> value) ;

constexpr ::ArrayW<UnityEngine::Material> __get__materials() const;


// Methods

/// @brief Method Awake addr 0x226c6cc size 0x94 virtual false final false
 void Awake() ;

// Ctor Parameters []
explicit StaticEnvironmentLights() ;

/// @brief Method .ctor addr 0x226c760 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::StaticEnvironmentLights);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StaticEnvironmentLights, "", "StaticEnvironmentLights");
