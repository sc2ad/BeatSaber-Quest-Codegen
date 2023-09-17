#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace VRUIControls {
class PhysicsRaycasterWithCache;
}
namespace UnityEngine {
class Canvas;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
struct Ray;
}
namespace HMUI {
class CurvedCanvasSettingsHelper;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine {
class Camera;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UI {
class Graphic;
}
// Forward declare root types
namespace VRUIControls {
class VRGraphicRaycaster;
}
namespace VRUIControls {
class ____VRUIControls__VRGraphicRaycaster____c;
}
namespace VRUIControls {
struct ____VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult;
}
// Type: ::VRGraphicRaycastResult
namespace VRUIControls {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15639))
// CS Name: VRUIControls.VRGraphicRaycaster::VRGraphicRaycastResult
struct CORDL_TYPE ____VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "graphic", ty: "::UnityEngine::UI::Graphic", modifiers: "", def_value: None }, CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "insideRootCanvasPosition", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
constexpr ____VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult(::UnityEngine::UI::Graphic graphic, float_t distance, ::UnityEngine::Vector3 position, ::UnityEngine::Vector2 insideRootCanvasPosition) noexcept;


                    constexpr ____VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult(____VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult const&) = default;
                    constexpr ____VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult(____VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult&&) = default;
                    constexpr ____VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult& operator=(____VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult& operator=(____VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::UI::Graphic __declspec(property(get=__get_graphic, put=__set_graphic))  graphic;

constexpr void __set_graphic(::UnityEngine::UI::Graphic value) ;

constexpr ::UnityEngine::UI::Graphic __get_graphic() const;

 float_t __declspec(property(get=__get_distance, put=__set_distance))  distance;

constexpr void __set_distance(float_t value) ;

constexpr float_t __get_distance() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_position, put=__set_position))  position;

constexpr void __set_position(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_position() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_insideRootCanvasPosition, put=__set_insideRootCanvasPosition))  insideRootCanvasPosition;

constexpr void __set_insideRootCanvasPosition(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_insideRootCanvasPosition() const;


// Methods

/// @brief Method .ctor addr 0x2d3c8fc size 0x14 virtual false final false
 void _ctor(::UnityEngine::UI::Graphic graphic, float_t distance, ::UnityEngine::Vector3 position, ::UnityEngine::Vector2 insideRootCanvasPosition) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def VRUIControls
// Type: ::<>c
namespace VRUIControls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15640))
// CS Name: VRUIControls.VRGraphicRaycaster::<>c
class CORDL_TYPE ____VRUIControls__VRGraphicRaycaster____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____VRUIControls__VRGraphicRaycaster____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____VRUIControls__VRGraphicRaycaster____c", modifiers: " const&", def_value: None }]
constexpr ____VRUIControls__VRGraphicRaycaster____c(____VRUIControls__VRGraphicRaycaster____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____VRUIControls__VRGraphicRaycaster____c", modifiers: "&&", def_value: None }]
constexpr ____VRUIControls__VRGraphicRaycaster____c(____VRUIControls__VRGraphicRaycaster____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____VRUIControls__VRGraphicRaycaster____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____VRUIControls__VRGraphicRaycaster____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____VRUIControls__VRGraphicRaycaster____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____VRUIControls__VRGraphicRaycaster____c& operator=(____VRUIControls__VRGraphicRaycaster____c&& o) noexcept = default;
  constexpr ____VRUIControls__VRGraphicRaycaster____c& operator=(____VRUIControls__VRGraphicRaycaster____c const& o) noexcept = default;
                


// Fields

static ::VRUIControls::____VRUIControls__VRGraphicRaycaster____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::VRUIControls::____VRUIControls__VRGraphicRaycaster____c value) ;

static ::VRUIControls::____VRUIControls__VRGraphicRaycaster____c __get___9() ;

static ::System::Comparison_1<::VRUIControls::____VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult> __declspec(property(get=__get___9__12_0, put=__set___9__12_0))  __9__12_0;

static void __set___9__12_0(::System::Comparison_1<::VRUIControls::____VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult> value) ;

static ::System::Comparison_1<::VRUIControls::____VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult> __get___9__12_0() ;


// Methods

// Ctor Parameters []
explicit ____VRUIControls__VRGraphicRaycaster____c() ;

/// @brief Method .ctor addr 0x2d3ca98 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <RaycastCanvas>b__12_0 addr 0x2d3caa0 size 0x54 virtual false final false
 int32_t _RaycastCanvas_b__12_0(::VRUIControls::____VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult g1, ::VRUIControls::____VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult g2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def VRUIControls
// Type: VRUIControls::VRGraphicRaycaster
namespace VRUIControls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13148))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15641))
// CS Name: VRUIControls.VRGraphicRaycaster
class CORDL_TYPE VRGraphicRaycaster : public ::UnityEngine::EventSystems::BaseRaycaster {
public:
// Declarations
using __c = ::VRUIControls::____VRUIControls__VRGraphicRaycaster____c;

using VRGraphicRaycastResult = ::VRUIControls::____VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~VRGraphicRaycaster() = default;

// Ctor Parameters [CppParam { name: "", ty: "VRGraphicRaycaster", modifiers: " const&", def_value: None }]
constexpr VRGraphicRaycaster(VRGraphicRaycaster const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VRGraphicRaycaster", modifiers: "&&", def_value: None }]
constexpr VRGraphicRaycaster(VRGraphicRaycaster&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VRGraphicRaycaster(void* ptr) noexcept : ::UnityEngine::EventSystems::BaseRaycaster(ptr) {
}


  constexpr VRGraphicRaycaster& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VRGraphicRaycaster& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VRGraphicRaycaster& operator=(VRGraphicRaycaster&& o) noexcept = default;
  constexpr VRGraphicRaycaster& operator=(VRGraphicRaycaster const& o) noexcept = default;
                


// Fields

 ::UnityEngine::LayerMask __declspec(property(get=__get__blockingMask, put=__set__blockingMask))  _blockingMask;

constexpr void __set__blockingMask(::UnityEngine::LayerMask value) ;

constexpr ::UnityEngine::LayerMask __get__blockingMask() const;

 ::VRUIControls::PhysicsRaycasterWithCache __declspec(property(get=__get__physicsRaycaster, put=__set__physicsRaycaster))  _physicsRaycaster;

constexpr void __set__physicsRaycaster(::VRUIControls::PhysicsRaycasterWithCache value) ;

constexpr ::VRUIControls::PhysicsRaycasterWithCache __get__physicsRaycaster() const;

 ::UnityEngine::Canvas __declspec(property(get=__get__canvas, put=__set__canvas))  _canvas;

constexpr void __set__canvas(::UnityEngine::Canvas value) ;

constexpr ::UnityEngine::Canvas __get__canvas() const;

 ::System::Collections::Generic::List_1<::VRUIControls::____VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult> __declspec(property(get=__get__raycastResults, put=__set__raycastResults))  _raycastResults;

constexpr void __set__raycastResults(::System::Collections::Generic::List_1<::VRUIControls::____VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult> value) ;

constexpr ::System::Collections::Generic::List_1<::VRUIControls::____VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult> __get__raycastResults() const;

 ::HMUI::CurvedCanvasSettingsHelper __declspec(property(get=__get__curvedCanvasSettingsHelper, put=__set__curvedCanvasSettingsHelper))  _curvedCanvasSettingsHelper;

constexpr void __set__curvedCanvasSettingsHelper(::HMUI::CurvedCanvasSettingsHelper value) ;

constexpr ::HMUI::CurvedCanvasSettingsHelper __get__curvedCanvasSettingsHelper() const;

/// @brief Field kPhysics3DRaycastDistance offset 0
static constexpr float_t  kPhysics3DRaycastDistance{6};

static ::ArrayW<float_t> __declspec(property(get=__get__ray2DCircleIntersectionDistances, put=__set__ray2DCircleIntersectionDistances))  _ray2DCircleIntersectionDistances;

static void __set__ray2DCircleIntersectionDistances(::ArrayW<float_t> value) ;

static ::ArrayW<float_t> __get__ray2DCircleIntersectionDistances() ;


// Properties

 ::UnityEngine::Camera __declspec(property(get=get_eventCamera))  eventCamera;


// Methods

/// @brief Method get_eventCamera addr 0x2d3b6ac size 0x8 virtual true final false
 ::UnityEngine::Camera get_eventCamera() ;

/// @brief Method OnEnable addr 0x2d3b6b4 size 0x70 virtual true final false
 void OnEnable() ;

/// @brief Method Raycast addr 0x2d3b724 size 0x690 virtual true final false
 void Raycast(::UnityEngine::EventSystems::PointerEventData eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult> resultAppendList) ;

/// @brief Method RaycastCanvas addr 0x2d3bdb4 size 0xb48 virtual false final false
static void RaycastCanvas(::UnityEngine::Canvas canvas, ::UnityEngine::Ray ray, float_t hitDistance, float_t curvedUIRadius, ::System::Collections::Generic::List_1<::VRUIControls::____VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult> results) ;

// Ctor Parameters []
explicit VRGraphicRaycaster() ;

/// @brief Method .ctor addr 0x2d3c910 size 0xbc virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def VRUIControls
} // end anonymous namespace
NEED_NO_BOX(::VRUIControls::VRGraphicRaycaster);
DEFINE_IL2CPP_ARG_TYPE(::VRUIControls::VRGraphicRaycaster, "VRUIControls", "VRGraphicRaycaster");
NEED_NO_BOX(::VRUIControls::____VRUIControls__VRGraphicRaycaster____c);
DEFINE_IL2CPP_ARG_TYPE(::VRUIControls::____VRUIControls__VRGraphicRaycaster____c, "VRUIControls", "VRGraphicRaycaster/<>c");
DEFINE_IL2CPP_ARG_TYPE(::VRUIControls::____VRUIControls__VRGraphicRaycaster__VRGraphicRaycastResult, "VRUIControls", "VRGraphicRaycaster/VRGraphicRaycastResult");
