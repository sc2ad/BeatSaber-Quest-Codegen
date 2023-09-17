#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace GlobalNamespace {
class HEU_BoundingVolume;
}
namespace UnityEngine::Tilemaps {
class Tilemap;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Terrain;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace System {
class Type;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_InputObjectInfo;
}
// Type: HoudiniEngineUnity::HEU_InputObjectInfo
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9587))
// CS Name: HoudiniEngineUnity.HEU_InputObjectInfo
class CORDL_TYPE HEU_InputObjectInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InputObjectInfo>
constexpr operator  ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InputObjectInfo>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~HEU_InputObjectInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_InputObjectInfo", modifiers: " const&", def_value: None }]
constexpr HEU_InputObjectInfo(HEU_InputObjectInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_InputObjectInfo", modifiers: "&&", def_value: None }]
constexpr HEU_InputObjectInfo(HEU_InputObjectInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_InputObjectInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_InputObjectInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_InputObjectInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_InputObjectInfo& operator=(HEU_InputObjectInfo&& o) noexcept = default;
  constexpr HEU_InputObjectInfo& operator=(HEU_InputObjectInfo const& o) noexcept = default;
                


// Fields

 ::UnityEngine::GameObject __declspec(property(get=__get__gameObject, put=__set__gameObject))  _gameObject;

constexpr void __set__gameObject(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__gameObject() const;

 ::UnityEngine::Terrain __declspec(property(get=__get__terrainReference, put=__set__terrainReference))  _terrainReference;

constexpr void __set__terrainReference(::UnityEngine::Terrain value) ;

constexpr ::UnityEngine::Terrain __get__terrainReference() const;

 ::GlobalNamespace::HEU_BoundingVolume __declspec(property(get=__get__boundingVolumeReference, put=__set__boundingVolumeReference))  _boundingVolumeReference;

constexpr void __set__boundingVolumeReference(::GlobalNamespace::HEU_BoundingVolume value) ;

constexpr ::GlobalNamespace::HEU_BoundingVolume __get__boundingVolumeReference() const;

 ::UnityEngine::Tilemaps::Tilemap __declspec(property(get=__get__tilemapReference, put=__set__tilemapReference))  _tilemapReference;

constexpr void __set__tilemapReference(::UnityEngine::Tilemaps::Tilemap value) ;

constexpr ::UnityEngine::Tilemaps::Tilemap __get__tilemapReference() const;

 ::UnityEngine::Matrix4x4 __declspec(property(get=__get__syncdTransform, put=__set__syncdTransform))  _syncdTransform;

constexpr void __set__syncdTransform(::UnityEngine::Matrix4x4 value) ;

constexpr ::UnityEngine::Matrix4x4 __get__syncdTransform() const;

 bool __declspec(property(get=__get__useTransformOffset, put=__set__useTransformOffset))  _useTransformOffset;

constexpr void __set__useTransformOffset(bool value) ;

constexpr bool __get__useTransformOffset() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__translateOffset, put=__set__translateOffset))  _translateOffset;

constexpr void __set__translateOffset(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__translateOffset() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__rotateOffset, put=__set__rotateOffset))  _rotateOffset;

constexpr void __set__rotateOffset(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__rotateOffset() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__scaleOffset, put=__set__scaleOffset))  _scaleOffset;

constexpr void __set__scaleOffset(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__scaleOffset() const;

 ::System::Type __declspec(property(get=__get__inputInterfaceType, put=__set__inputInterfaceType))  _inputInterfaceType;

constexpr void __set__inputInterfaceType(::System::Type value) ;

constexpr ::System::Type __get__inputInterfaceType() const;


// Methods

/// @brief Method CopyTo addr 0x1ffc43c size 0x74 virtual false final false
 void CopyTo(::HoudiniEngineUnity::HEU_InputObjectInfo destObject) ;

/// @brief Method SetReferencesFromGameObject addr 0x1ffc724 size 0xec virtual false final false
 void SetReferencesFromGameObject() ;

/// @brief Method IsEquivalentTo addr 0x1ffe75c size 0x28c virtual true final true
 bool IsEquivalentTo(::HoudiniEngineUnity::HEU_InputObjectInfo other) ;

// Ctor Parameters []
explicit HEU_InputObjectInfo() ;

/// @brief Method .ctor addr 0x1ffc354 size 0xe8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InputObjectInfo);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputObjectInfo, "HoudiniEngineUnity", "HEU_InputObjectInfo");
