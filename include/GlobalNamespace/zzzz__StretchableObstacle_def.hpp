#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class ParametricBoxFrameController;
}
namespace GlobalNamespace {
class ParametricBoxFakeGlowController;
}
namespace UnityEngine {
struct Bounds;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
// Forward declare root types
namespace GlobalNamespace {
class StretchableObstacle;
}
// Type: ::StretchableObstacle
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4913))
// CS Name: StretchableObstacle
class CORDL_TYPE StretchableObstacle : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~StretchableObstacle() = default;

// Ctor Parameters [CppParam { name: "", ty: "StretchableObstacle", modifiers: " const&", def_value: None }]
constexpr StretchableObstacle(StretchableObstacle const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StretchableObstacle", modifiers: "&&", def_value: None }]
constexpr StretchableObstacle(StretchableObstacle&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StretchableObstacle(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr StretchableObstacle& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StretchableObstacle& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StretchableObstacle& operator=(StretchableObstacle&& o) noexcept = default;
  constexpr StretchableObstacle& operator=(StretchableObstacle const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__edgeSize, put=__set__edgeSize))  _edgeSize;

constexpr void __set__edgeSize(float_t value) ;

constexpr float_t __get__edgeSize() const;

 float_t __declspec(property(get=__get__coreOffset, put=__set__coreOffset))  _coreOffset;

constexpr void __set__coreOffset(float_t value) ;

constexpr float_t __get__coreOffset() const;

 float_t __declspec(property(get=__get__addColorMultiplier, put=__set__addColorMultiplier))  _addColorMultiplier;

constexpr void __set__addColorMultiplier(float_t value) ;

constexpr float_t __get__addColorMultiplier() const;

 float_t __declspec(property(get=__get__obstacleCoreLerpToWhiteFactor, put=__set__obstacleCoreLerpToWhiteFactor))  _obstacleCoreLerpToWhiteFactor;

constexpr void __set__obstacleCoreLerpToWhiteFactor(float_t value) ;

constexpr float_t __get__obstacleCoreLerpToWhiteFactor() const;

 UnityEngine::Vector3 __declspec(property(get=__get__fakeGlowOffset, put=__set__fakeGlowOffset))  _fakeGlowOffset;

constexpr void __set__fakeGlowOffset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__fakeGlowOffset() const;

 UnityEngine::Transform __declspec(property(get=__get__obstacleCore, put=__set__obstacleCore))  _obstacleCore;

constexpr void __set__obstacleCore(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__obstacleCore() const;

 ::ArrayW<GlobalNamespace::MaterialPropertyBlockController> __declspec(property(get=__get__materialPropertyBlockControllers, put=__set__materialPropertyBlockControllers))  _materialPropertyBlockControllers;

constexpr void __set__materialPropertyBlockControllers(::ArrayW<GlobalNamespace::MaterialPropertyBlockController> value) ;

constexpr ::ArrayW<GlobalNamespace::MaterialPropertyBlockController> __get__materialPropertyBlockControllers() const;

 GlobalNamespace::ParametricBoxFrameController __declspec(property(get=__get__obstacleFrame, put=__set__obstacleFrame))  _obstacleFrame;

constexpr void __set__obstacleFrame(GlobalNamespace::ParametricBoxFrameController value) ;

constexpr GlobalNamespace::ParametricBoxFrameController __get__obstacleFrame() const;

 GlobalNamespace::ParametricBoxFakeGlowController __declspec(property(get=__get__obstacleFakeGlow, put=__set__obstacleFakeGlow))  _obstacleFakeGlow;

constexpr void __set__obstacleFakeGlow(GlobalNamespace::ParametricBoxFakeGlowController value) ;

constexpr GlobalNamespace::ParametricBoxFakeGlowController __get__obstacleFakeGlow() const;

static int32_t __declspec(property(get=__get__uvScaleID, put=__set__uvScaleID))  _uvScaleID;

static void __set__uvScaleID(int32_t value) ;

static int32_t __get__uvScaleID() ;

static int32_t __declspec(property(get=__get__tintColorID, put=__set__tintColorID))  _tintColorID;

static void __set__tintColorID(int32_t value) ;

static int32_t __get__tintColorID() ;

static int32_t __declspec(property(get=__get__addColorID, put=__set__addColorID))  _addColorID;

static void __set__addColorID(int32_t value) ;

static int32_t __get__addColorID() ;

 UnityEngine::Bounds __declspec(property(get=__get__bounds, put=__set__bounds))  _bounds;

constexpr void __set__bounds(UnityEngine::Bounds value) ;

constexpr UnityEngine::Bounds __get__bounds() const;


// Properties

 UnityEngine::Bounds __declspec(property(get=get_bounds))  bounds;


// Methods

/// @brief Method get_bounds addr 0x224700c size 0x14 virtual false final false
 UnityEngine::Bounds get_bounds() ;

/// @brief Method SetSizeAndColor addr 0x224455c size 0x3e4 virtual false final false
 void SetSizeAndColor(float_t width, float_t height, float_t length, UnityEngine::Color color) ;

/// @brief Method OnValidate addr 0x2247020 size 0x6c virtual false final false
 void OnValidate() ;

// Ctor Parameters []
explicit StretchableObstacle() ;

/// @brief Method .ctor addr 0x224708c size 0x34 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::StretchableObstacle);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StretchableObstacle, "", "StretchableObstacle");
