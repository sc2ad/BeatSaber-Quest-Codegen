#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct KeyCode;
}
namespace GlobalNamespace {
class OVRCameraRig;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRGridCube;
}
// Type: ::OVRGridCube
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8908))
// CS Name: OVRGridCube
class CORDL_TYPE OVRGridCube : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~OVRGridCube() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRGridCube", modifiers: " const&", def_value: None }]
constexpr OVRGridCube(OVRGridCube const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRGridCube", modifiers: "&&", def_value: None }]
constexpr OVRGridCube(OVRGridCube&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRGridCube(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRGridCube& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRGridCube& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRGridCube& operator=(OVRGridCube&& o) noexcept = default;
  constexpr OVRGridCube& operator=(OVRGridCube const& o) noexcept = default;
                


// Fields

 UnityEngine::KeyCode __declspec(property(get=__get_GridKey, put=__set_GridKey))  GridKey;

constexpr void __set_GridKey(UnityEngine::KeyCode value) ;

constexpr UnityEngine::KeyCode __get_GridKey() const;

 UnityEngine::GameObject __declspec(property(get=__get_CubeGrid, put=__set_CubeGrid))  CubeGrid;

constexpr void __set_CubeGrid(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_CubeGrid() const;

 bool __declspec(property(get=__get_CubeGridOn, put=__set_CubeGridOn))  CubeGridOn;

constexpr void __set_CubeGridOn(bool value) ;

constexpr bool __get_CubeGridOn() const;

 bool __declspec(property(get=__get_CubeSwitchColorOld, put=__set_CubeSwitchColorOld))  CubeSwitchColorOld;

constexpr void __set_CubeSwitchColorOld(bool value) ;

constexpr bool __get_CubeSwitchColorOld() const;

 bool __declspec(property(get=__get_CubeSwitchColor, put=__set_CubeSwitchColor))  CubeSwitchColor;

constexpr void __set_CubeSwitchColor(bool value) ;

constexpr bool __get_CubeSwitchColor() const;

 int32_t __declspec(property(get=__get_gridSizeX, put=__set_gridSizeX))  gridSizeX;

constexpr void __set_gridSizeX(int32_t value) ;

constexpr int32_t __get_gridSizeX() const;

 int32_t __declspec(property(get=__get_gridSizeY, put=__set_gridSizeY))  gridSizeY;

constexpr void __set_gridSizeY(int32_t value) ;

constexpr int32_t __get_gridSizeY() const;

 int32_t __declspec(property(get=__get_gridSizeZ, put=__set_gridSizeZ))  gridSizeZ;

constexpr void __set_gridSizeZ(int32_t value) ;

constexpr int32_t __get_gridSizeZ() const;

 float_t __declspec(property(get=__get_gridScale, put=__set_gridScale))  gridScale;

constexpr void __set_gridScale(float_t value) ;

constexpr float_t __get_gridScale() const;

 float_t __declspec(property(get=__get_cubeScale, put=__set_cubeScale))  cubeScale;

constexpr void __set_cubeScale(float_t value) ;

constexpr float_t __get_cubeScale() const;

 GlobalNamespace::OVRCameraRig __declspec(property(get=__get_CameraController, put=__set_CameraController))  CameraController;

constexpr void __set_CameraController(GlobalNamespace::OVRCameraRig value) ;

constexpr GlobalNamespace::OVRCameraRig __get_CameraController() const;


// Methods

/// @brief Method Update addr 0x2622e20 size 0x4 virtual false final false
 void Update() ;

/// @brief Method SetOVRCameraController addr 0x2623038 size 0xc virtual false final false
 void SetOVRCameraController(ByRef<GlobalNamespace::OVRCameraRig> cameraController) ;

/// @brief Method UpdateCubeGrid addr 0x2622e24 size 0x214 virtual false final false
 void UpdateCubeGrid() ;

/// @brief Method CreateCubeGrid addr 0x2623044 size 0x3a8 virtual false final false
 void CreateCubeGrid() ;

/// @brief Method CubeGridSwitchColor addr 0x26233ec size 0x188 virtual false final false
 void CubeGridSwitchColor(bool CubeSwitchColor) ;

// Ctor Parameters []
explicit OVRGridCube() ;

/// @brief Method .ctor addr 0x2623574 size 0x30 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVRGridCube);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRGridCube, "", "OVRGridCube");
