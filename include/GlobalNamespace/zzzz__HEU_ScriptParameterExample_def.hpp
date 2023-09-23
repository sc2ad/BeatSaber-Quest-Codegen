#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class HEU_ScriptParameterExample;
}
// Type: ::HEU_ScriptParameterExample
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9533))
// CS Name: HEU_ScriptParameterExample
class CORDL_TYPE HEU_ScriptParameterExample : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HEU_ScriptParameterExample() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ScriptParameterExample", modifiers: " const&", def_value: None }]
constexpr HEU_ScriptParameterExample(HEU_ScriptParameterExample const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ScriptParameterExample", modifiers: "&&", def_value: None }]
constexpr HEU_ScriptParameterExample(HEU_ScriptParameterExample&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_ScriptParameterExample(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr HEU_ScriptParameterExample& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_ScriptParameterExample& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_ScriptParameterExample& operator=(HEU_ScriptParameterExample&& o) noexcept = default;
  constexpr HEU_ScriptParameterExample& operator=(HEU_ScriptParameterExample const& o) noexcept = default;
                


// Fields

 UnityEngine::GameObject __declspec(property(get=__get__evergreenGameObject, put=__set__evergreenGameObject))  _evergreenGameObject;

constexpr void __set__evergreenGameObject(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__evergreenGameObject() const;

 HoudiniEngineUnity::HEU_HoudiniAsset __declspec(property(get=__get__evergreenAsset, put=__set__evergreenAsset))  _evergreenAsset;

constexpr void __set__evergreenAsset(HoudiniEngineUnity::HEU_HoudiniAsset value) ;

constexpr HoudiniEngineUnity::HEU_HoudiniAsset __get__evergreenAsset() const;

 float_t __declspec(property(get=__get__updateRate, put=__set__updateRate))  _updateRate;

constexpr void __set__updateRate(float_t value) ;

constexpr float_t __get__updateRate() const;

 float_t __declspec(property(get=__get__scale, put=__set__scale))  _scale;

constexpr void __set__scale(float_t value) ;

constexpr float_t __get__scale() const;


// Methods

/// @brief Method Start addr 0x1fda13c size 0x288 virtual false final false
 void Start() ;

/// @brief Method UpdateGravity addr 0x1fda3c4 size 0xe4 virtual false final false
 void UpdateGravity() ;

// Ctor Parameters []
explicit HEU_ScriptParameterExample() ;

/// @brief Method .ctor addr 0x1fda4a8 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::HEU_ScriptParameterExample);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HEU_ScriptParameterExample, "", "HEU_ScriptParameterExample");
