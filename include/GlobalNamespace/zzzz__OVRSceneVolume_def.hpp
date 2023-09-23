#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class OVRSceneAnchor;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class IOVRSceneComponent;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRSceneVolume;
}
// Type: ::OVRSceneVolume
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8836))
// CS Name: OVRSceneVolume
class CORDL_TYPE OVRSceneVolume : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IOVRSceneComponent
constexpr operator  GlobalNamespace::IOVRSceneComponent() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~OVRSceneVolume() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRSceneVolume", modifiers: " const&", def_value: None }]
constexpr OVRSceneVolume(OVRSceneVolume const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRSceneVolume", modifiers: "&&", def_value: None }]
constexpr OVRSceneVolume(OVRSceneVolume&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRSceneVolume(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRSceneVolume& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRSceneVolume& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRSceneVolume& operator=(OVRSceneVolume&& o) noexcept = default;
  constexpr OVRSceneVolume& operator=(OVRSceneVolume const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__Width_k__BackingField, put=__set__Width_k__BackingField))  _Width_k__BackingField;

constexpr void __set__Width_k__BackingField(float_t value) ;

constexpr float_t __get__Width_k__BackingField() const;

 float_t __declspec(property(get=__get__Height_k__BackingField, put=__set__Height_k__BackingField))  _Height_k__BackingField;

constexpr void __set__Height_k__BackingField(float_t value) ;

constexpr float_t __get__Height_k__BackingField() const;

 float_t __declspec(property(get=__get__Depth_k__BackingField, put=__set__Depth_k__BackingField))  _Depth_k__BackingField;

constexpr void __set__Depth_k__BackingField(float_t value) ;

constexpr float_t __get__Depth_k__BackingField() const;

 bool __declspec(property(get=__get__scaleChildren, put=__set__scaleChildren))  _scaleChildren;

constexpr void __set__scaleChildren(bool value) ;

constexpr bool __get__scaleChildren() const;

 GlobalNamespace::OVRSceneAnchor __declspec(property(get=__get__sceneAnchor, put=__set__sceneAnchor))  _sceneAnchor;

constexpr void __set__sceneAnchor(GlobalNamespace::OVRSceneAnchor value) ;

constexpr GlobalNamespace::OVRSceneAnchor __get__sceneAnchor() const;


// Properties

 float_t __declspec(property(get=get_Width, put=set_Width))  Width;

 float_t __declspec(property(get=get_Height, put=set_Height))  Height;

 float_t __declspec(property(get=get_Depth, put=set_Depth))  Depth;

 UnityEngine::Vector3 __declspec(property(get=get_Dimensions))  Dimensions;

 bool __declspec(property(get=get_ScaleChildren, put=set_ScaleChildren))  ScaleChildren;


// Methods

/// @brief Method get_Width addr 0x260c4c4 size 0x8 virtual false final false
 float_t get_Width() ;

/// @brief Method set_Width addr 0x260c4cc size 0x8 virtual false final false
 void set_Width(float_t value) ;

/// @brief Method get_Height addr 0x260c4d4 size 0x8 virtual false final false
 float_t get_Height() ;

/// @brief Method set_Height addr 0x260c4dc size 0x8 virtual false final false
 void set_Height(float_t value) ;

/// @brief Method get_Depth addr 0x260c4e4 size 0x8 virtual false final false
 float_t get_Depth() ;

/// @brief Method set_Depth addr 0x260c4ec size 0x8 virtual false final false
 void set_Depth(float_t value) ;

/// @brief Method get_Dimensions addr 0x260c4f4 size 0xc virtual false final false
 UnityEngine::Vector3 get_Dimensions() ;

/// @brief Method get_ScaleChildren addr 0x260c500 size 0x8 virtual false final false
 bool get_ScaleChildren() ;

/// @brief Method set_ScaleChildren addr 0x260c508 size 0x4c virtual false final false
 void set_ScaleChildren(bool value) ;

/// @brief Method Awake addr 0x260c5e4 size 0xd4 virtual false final false
 void Awake() ;

/// @brief Method IOVRSceneComponent.Initialize addr 0x260c6b8 size 0xc8 virtual true final true
 void IOVRSceneComponent_Initialize() ;

/// @brief Method SetChildScale addr 0x260c554 size 0x90 virtual false final false
static void SetChildScale(UnityEngine::Transform parentTransform, UnityEngine::Vector3 dimensions) ;

// Ctor Parameters []
explicit OVRSceneVolume() ;

/// @brief Method .ctor addr 0x260c780 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVRSceneVolume);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRSceneVolume, "", "OVRSceneVolume");
