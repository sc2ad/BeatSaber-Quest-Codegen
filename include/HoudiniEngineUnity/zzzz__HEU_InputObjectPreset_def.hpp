#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_InputObjectPreset;
}
// Type: HoudiniEngineUnity::HEU_InputObjectPreset
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9550))
// CS Name: HoudiniEngineUnity.HEU_InputObjectPreset
class CORDL_TYPE HEU_InputObjectPreset : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~HEU_InputObjectPreset() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_InputObjectPreset", modifiers: " const&", def_value: None }]
constexpr HEU_InputObjectPreset(HEU_InputObjectPreset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_InputObjectPreset", modifiers: "&&", def_value: None }]
constexpr HEU_InputObjectPreset(HEU_InputObjectPreset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_InputObjectPreset(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_InputObjectPreset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_InputObjectPreset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_InputObjectPreset& operator=(HEU_InputObjectPreset&& o) noexcept = default;
  constexpr HEU_InputObjectPreset& operator=(HEU_InputObjectPreset const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__gameObjectName, put=__set__gameObjectName))  _gameObjectName;

constexpr void __set__gameObjectName(::StringW value) ;

constexpr ::StringW __get__gameObjectName() const;

 bool __declspec(property(get=__get__isSceneObject, put=__set__isSceneObject))  _isSceneObject;

constexpr void __set__isSceneObject(bool value) ;

constexpr bool __get__isSceneObject() const;

 bool __declspec(property(get=__get__useTransformOffset, put=__set__useTransformOffset))  _useTransformOffset;

constexpr void __set__useTransformOffset(bool value) ;

constexpr bool __get__useTransformOffset() const;

 UnityEngine::Vector3 __declspec(property(get=__get__translateOffset, put=__set__translateOffset))  _translateOffset;

constexpr void __set__translateOffset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__translateOffset() const;

 UnityEngine::Vector3 __declspec(property(get=__get__rotateOffset, put=__set__rotateOffset))  _rotateOffset;

constexpr void __set__rotateOffset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__rotateOffset() const;

 UnityEngine::Vector3 __declspec(property(get=__get__scaleOffset, put=__set__scaleOffset))  _scaleOffset;

constexpr void __set__scaleOffset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__scaleOffset() const;


// Methods

static HoudiniEngineUnity::HEU_InputObjectPreset New_ctor() ;

/// @brief Method .ctor addr 0x1fdaf34 size 0xa8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_InputObjectPreset);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_InputObjectPreset, "HoudiniEngineUnity", "HEU_InputObjectPreset");
