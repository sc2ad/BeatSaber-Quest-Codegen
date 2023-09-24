#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
class LightManager;
}
// Type: ::LightManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14658))
// CS Name: LightManager
class CORDL_TYPE LightManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~LightManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightManager", modifiers: " const&", def_value: None }]
constexpr LightManager(LightManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightManager", modifiers: "&&", def_value: None }]
constexpr LightManager(LightManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr LightManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightManager& operator=(LightManager&& o) noexcept = default;
  constexpr LightManager& operator=(LightManager const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get__directionalLightDirectionsID, put=__set__directionalLightDirectionsID))  _directionalLightDirectionsID;

static void __set__directionalLightDirectionsID(int32_t value) ;

static int32_t __get__directionalLightDirectionsID() ;

static int32_t __declspec(property(get=__get__directionalLightPositionID, put=__set__directionalLightPositionID))  _directionalLightPositionID;

static void __set__directionalLightPositionID(int32_t value) ;

static int32_t __get__directionalLightPositionID() ;

static int32_t __declspec(property(get=__get__directionalLightRadiiID, put=__set__directionalLightRadiiID))  _directionalLightRadiiID;

static void __set__directionalLightRadiiID(int32_t value) ;

static int32_t __get__directionalLightRadiiID() ;

static int32_t __declspec(property(get=__get__directionalLightColorsID, put=__set__directionalLightColorsID))  _directionalLightColorsID;

static void __set__directionalLightColorsID(int32_t value) ;

static int32_t __get__directionalLightColorsID() ;

static int32_t __declspec(property(get=__get__pointLightPositionsID, put=__set__pointLightPositionsID))  _pointLightPositionsID;

static void __set__pointLightPositionsID(int32_t value) ;

static int32_t __get__pointLightPositionsID() ;

static int32_t __declspec(property(get=__get__pointLightColorsID, put=__set__pointLightColorsID))  _pointLightColorsID;

static void __set__pointLightColorsID(int32_t value) ;

static int32_t __get__pointLightColorsID() ;

 ::ArrayW<UnityEngine::Vector4> __declspec(property(get=__get__directionalLightDirections, put=__set__directionalLightDirections))  _directionalLightDirections;

constexpr void __set__directionalLightDirections(::ArrayW<UnityEngine::Vector4> value) ;

constexpr ::ArrayW<UnityEngine::Vector4> __get__directionalLightDirections() const;

 ::ArrayW<UnityEngine::Vector4> __declspec(property(get=__get__directionalLightColors, put=__set__directionalLightColors))  _directionalLightColors;

constexpr void __set__directionalLightColors(::ArrayW<UnityEngine::Vector4> value) ;

constexpr ::ArrayW<UnityEngine::Vector4> __get__directionalLightColors() const;

 ::ArrayW<UnityEngine::Vector4> __declspec(property(get=__get__directionalLightPositions, put=__set__directionalLightPositions))  _directionalLightPositions;

constexpr void __set__directionalLightPositions(::ArrayW<UnityEngine::Vector4> value) ;

constexpr ::ArrayW<UnityEngine::Vector4> __get__directionalLightPositions() const;

 ::ArrayW<float_t> __declspec(property(get=__get__directionalLightRadii, put=__set__directionalLightRadii))  _directionalLightRadii;

constexpr void __set__directionalLightRadii(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get__directionalLightRadii() const;

 ::ArrayW<UnityEngine::Vector4> __declspec(property(get=__get__pointLightPositions, put=__set__pointLightPositions))  _pointLightPositions;

constexpr void __set__pointLightPositions(::ArrayW<UnityEngine::Vector4> value) ;

constexpr ::ArrayW<UnityEngine::Vector4> __get__pointLightPositions() const;

 ::ArrayW<UnityEngine::Vector4> __declspec(property(get=__get__pointLightColors, put=__set__pointLightColors))  _pointLightColors;

constexpr void __set__pointLightColors(::ArrayW<UnityEngine::Vector4> value) ;

constexpr ::ArrayW<UnityEngine::Vector4> __get__pointLightColors() const;

 int32_t __declspec(property(get=__get_lastRefreshFrameNum, put=__set_lastRefreshFrameNum))  lastRefreshFrameNum;

constexpr void __set_lastRefreshFrameNum(int32_t value) ;

constexpr int32_t __get_lastRefreshFrameNum() const;


// Methods

/// @brief Method OnEnable addr 0x1f99110 size 0xec virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x1f991fc size 0xec virtual false final false
 void OnDisable() ;

/// @brief Method OnCameraPreRender addr 0x1f992e8 size 0x560 virtual false final false
 void OnCameraPreRender(UnityEngine::Camera camera) ;

/// @brief Method OnDestroy addr 0x1f99848 size 0x4 virtual false final false
 void OnDestroy() ;

/// @brief Method ResetColors addr 0x1f9984c size 0xe4 virtual false final false
 void ResetColors() ;

static GlobalNamespace::LightManager New_ctor() ;

/// @brief Method .ctor addr 0x1f99930 size 0xcc virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LightManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightManager, "", "LightManager");
