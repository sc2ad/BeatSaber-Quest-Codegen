#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace GlobalNamespace {
class LightGroup;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class LightGroupElementsSpawner;
}
// Type: ::LightGroupElementsSpawner
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5029))
// CS Name: LightGroupElementsSpawner
class CORDL_TYPE LightGroupElementsSpawner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~LightGroupElementsSpawner() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightGroupElementsSpawner", modifiers: " const&", def_value: None }]
constexpr LightGroupElementsSpawner(LightGroupElementsSpawner const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightGroupElementsSpawner", modifiers: "&&", def_value: None }]
constexpr LightGroupElementsSpawner(LightGroupElementsSpawner&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightGroupElementsSpawner(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr LightGroupElementsSpawner& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightGroupElementsSpawner& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightGroupElementsSpawner& operator=(LightGroupElementsSpawner&& o) noexcept = default;
  constexpr LightGroupElementsSpawner& operator=(LightGroupElementsSpawner const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::LightGroup __declspec(property(get=__get__lightGroup, put=__set__lightGroup))  _lightGroup;

constexpr void __set__lightGroup(::GlobalNamespace::LightGroup value) ;

constexpr ::GlobalNamespace::LightGroup __get__lightGroup() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__lightPrefab, put=__set__lightPrefab))  _lightPrefab;

constexpr void __set__lightPrefab(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__lightPrefab() const;

 bool __declspec(property(get=__get__useAlternatePrefab, put=__set__useAlternatePrefab))  _useAlternatePrefab;

constexpr void __set__useAlternatePrefab(bool value) ;

constexpr bool __get__useAlternatePrefab() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__alternateLightPrefab, put=__set__alternateLightPrefab))  _alternateLightPrefab;

constexpr void __set__alternateLightPrefab(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__alternateLightPrefab() const;


// Methods

/// @brief Method OnEnable addr 0x225e608 size 0x60 virtual false final false
 void OnEnable() ;

// Ctor Parameters []
explicit LightGroupElementsSpawner() ;

/// @brief Method .ctor addr 0x225e668 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::LightGroupElementsSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightGroupElementsSpawner, "", "LightGroupElementsSpawner");
