#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::InputSystem::UI {
class ExtendedPointerEventData;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct InlinedArray_1;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
class Canvas;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UI {
class Graphic;
}
// Forward declare root types
namespace UnityEngine::InputSystem::UI {
class TrackedDeviceRaycaster;
}
namespace UnityEngine::InputSystem::UI {
class UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c;
}
namespace UnityEngine::InputSystem::UI {
struct UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData;
}
// Type: ::RaycastHitData
namespace UnityEngine::InputSystem::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6464))
// CS Name: UnityEngine.InputSystem.UI.TrackedDeviceRaycaster::RaycastHitData
struct CORDL_TYPE UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_graphic_k__BackingField", ty: "UnityEngine::UI::Graphic", modifiers: "", def_value: None }, CppParam { name: "_worldHitPosition_k__BackingField", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_screenPosition_k__BackingField", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "_distance_k__BackingField", ty: "float_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData(UnityEngine::UI::Graphic _graphic_k__BackingField, UnityEngine::Vector3 _worldHitPosition_k__BackingField, UnityEngine::Vector2 _screenPosition_k__BackingField, float_t _distance_k__BackingField) noexcept;


                    constexpr UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData(UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData const&) = default;
                    constexpr UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData(UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData&&) = default;
                    constexpr UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData& operator=(UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData& operator=(UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::UI::Graphic __declspec(property(get=__get__graphic_k__BackingField, put=__set__graphic_k__BackingField))  _graphic_k__BackingField;

constexpr void __set__graphic_k__BackingField(UnityEngine::UI::Graphic value) ;

constexpr UnityEngine::UI::Graphic __get__graphic_k__BackingField() const;

 UnityEngine::Vector3 __declspec(property(get=__get__worldHitPosition_k__BackingField, put=__set__worldHitPosition_k__BackingField))  _worldHitPosition_k__BackingField;

constexpr void __set__worldHitPosition_k__BackingField(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__worldHitPosition_k__BackingField() const;

 UnityEngine::Vector2 __declspec(property(get=__get__screenPosition_k__BackingField, put=__set__screenPosition_k__BackingField))  _screenPosition_k__BackingField;

constexpr void __set__screenPosition_k__BackingField(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__screenPosition_k__BackingField() const;

 float_t __declspec(property(get=__get__distance_k__BackingField, put=__set__distance_k__BackingField))  _distance_k__BackingField;

constexpr void __set__distance_k__BackingField(float_t value) ;

constexpr float_t __get__distance_k__BackingField() const;


// Properties

 UnityEngine::UI::Graphic __declspec(property(get=get_graphic))  graphic;

 UnityEngine::Vector3 __declspec(property(get=get_worldHitPosition))  worldHitPosition;

 UnityEngine::Vector2 __declspec(property(get=get_screenPosition))  screenPosition;

 float_t __declspec(property(get=get_distance))  distance;


// Methods

/// @brief Method .ctor addr 0x2943a3c size 0x14 virtual false final false
 void _ctor(UnityEngine::UI::Graphic graphic, UnityEngine::Vector3 worldHitPosition, UnityEngine::Vector2 screenPosition, float_t distance) ;

/// @brief Method get_graphic addr 0x2943b60 size 0x8 virtual false final false
 UnityEngine::UI::Graphic get_graphic() ;

/// @brief Method get_worldHitPosition addr 0x2943b68 size 0xc virtual false final false
 UnityEngine::Vector3 get_worldHitPosition() ;

/// @brief Method get_screenPosition addr 0x2943b74 size 0x8 virtual false final false
 UnityEngine::Vector2 get_screenPosition() ;

/// @brief Method get_distance addr 0x2943b7c size 0x8 virtual false final false
 float_t get_distance() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::UI
// Type: ::<>c
namespace UnityEngine::InputSystem::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6465))
// CS Name: UnityEngine.InputSystem.UI.TrackedDeviceRaycaster::<>c
class CORDL_TYPE UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c(UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c(UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c& operator=(UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c& operator=(UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c const& o) noexcept = default;
                


// Fields

static UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c value) ;

static UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c __get___9() ;

static System::Comparison_1<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData> __declspec(property(get=__get___9__25_0, put=__set___9__25_0))  __9__25_0;

static void __set___9__25_0(System::Comparison_1<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData> value) ;

static System::Comparison_1<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData> __get___9__25_0() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c() ;

/// @brief Method .ctor addr 0x2943be8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SortedRaycastGraphics>b__25_0 addr 0x2943bf0 size 0x54 virtual false final false
 int32_t _SortedRaycastGraphics_b__25_0(UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData g1, UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData g2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::UI
// Type: UnityEngine.InputSystem.UI::TrackedDeviceRaycaster
namespace UnityEngine::InputSystem::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13148))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6466))
// CS Name: UnityEngine.InputSystem.UI.TrackedDeviceRaycaster
class CORDL_TYPE TrackedDeviceRaycaster : public UnityEngine::EventSystems::BaseRaycaster {
public:
// Declarations
using __c = UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c;

using RaycastHitData = UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~TrackedDeviceRaycaster() = default;

// Ctor Parameters [CppParam { name: "", ty: "TrackedDeviceRaycaster", modifiers: " const&", def_value: None }]
constexpr TrackedDeviceRaycaster(TrackedDeviceRaycaster const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TrackedDeviceRaycaster", modifiers: "&&", def_value: None }]
constexpr TrackedDeviceRaycaster(TrackedDeviceRaycaster&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TrackedDeviceRaycaster(void* ptr) noexcept : UnityEngine::EventSystems::BaseRaycaster(ptr) {
}


  constexpr TrackedDeviceRaycaster& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TrackedDeviceRaycaster& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TrackedDeviceRaycaster& operator=(TrackedDeviceRaycaster&& o) noexcept = default;
  constexpr TrackedDeviceRaycaster& operator=(TrackedDeviceRaycaster const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData> __declspec(property(get=__get_m_RaycastResultsCache, put=__set_m_RaycastResultsCache))  m_RaycastResultsCache;

constexpr void __set_m_RaycastResultsCache(System::Collections::Generic::List_1<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData> __get_m_RaycastResultsCache() const;

static UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster> __declspec(property(get=__get_s_Instances, put=__set_s_Instances))  s_Instances;

static void __set_s_Instances(UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster> value) ;

static UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::UI::TrackedDeviceRaycaster> __get_s_Instances() ;

static System::Collections::Generic::List_1<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData> __declspec(property(get=__get_s_SortedGraphics, put=__set_s_SortedGraphics))  s_SortedGraphics;

static void __set_s_SortedGraphics(System::Collections::Generic::List_1<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData> value) ;

static System::Collections::Generic::List_1<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData> __get_s_SortedGraphics() ;

 bool __declspec(property(get=__get_m_IgnoreReversedGraphics, put=__set_m_IgnoreReversedGraphics))  m_IgnoreReversedGraphics;

constexpr void __set_m_IgnoreReversedGraphics(bool value) ;

constexpr bool __get_m_IgnoreReversedGraphics() const;

 bool __declspec(property(get=__get_m_CheckFor2DOcclusion, put=__set_m_CheckFor2DOcclusion))  m_CheckFor2DOcclusion;

constexpr void __set_m_CheckFor2DOcclusion(bool value) ;

constexpr bool __get_m_CheckFor2DOcclusion() const;

 bool __declspec(property(get=__get_m_CheckFor3DOcclusion, put=__set_m_CheckFor3DOcclusion))  m_CheckFor3DOcclusion;

constexpr void __set_m_CheckFor3DOcclusion(bool value) ;

constexpr bool __get_m_CheckFor3DOcclusion() const;

 float_t __declspec(property(get=__get_m_MaxDistance, put=__set_m_MaxDistance))  m_MaxDistance;

constexpr void __set_m_MaxDistance(float_t value) ;

constexpr float_t __get_m_MaxDistance() const;

 UnityEngine::LayerMask __declspec(property(get=__get_m_BlockingMask, put=__set_m_BlockingMask))  m_BlockingMask;

constexpr void __set_m_BlockingMask(UnityEngine::LayerMask value) ;

constexpr UnityEngine::LayerMask __get_m_BlockingMask() const;

 UnityEngine::Canvas __declspec(property(get=__get_m_Canvas, put=__set_m_Canvas))  m_Canvas;

constexpr void __set_m_Canvas(UnityEngine::Canvas value) ;

constexpr UnityEngine::Canvas __get_m_Canvas() const;


// Properties

 UnityEngine::Camera __declspec(property(get=get_eventCamera))  eventCamera;

 UnityEngine::LayerMask __declspec(property(get=get_blockingMask, put=set_blockingMask))  blockingMask;

 bool __declspec(property(get=get_checkFor3DOcclusion, put=set_checkFor3DOcclusion))  checkFor3DOcclusion;

 bool __declspec(property(get=get_checkFor2DOcclusion, put=set_checkFor2DOcclusion))  checkFor2DOcclusion;

 bool __declspec(property(get=get_ignoreReversedGraphics, put=set_ignoreReversedGraphics))  ignoreReversedGraphics;

 float_t __declspec(property(get=get_maxDistance, put=set_maxDistance))  maxDistance;

 UnityEngine::Canvas __declspec(property(get=get_canvas))  canvas;


// Methods

/// @brief Method get_eventCamera addr 0x2942f5c size 0x94 virtual true final false
 UnityEngine::Camera get_eventCamera() ;

/// @brief Method get_blockingMask addr 0x2943084 size 0x8 virtual false final false
 UnityEngine::LayerMask get_blockingMask() ;

/// @brief Method set_blockingMask addr 0x294308c size 0x8 virtual false final false
 void set_blockingMask(UnityEngine::LayerMask value) ;

/// @brief Method get_checkFor3DOcclusion addr 0x2943094 size 0x8 virtual false final false
 bool get_checkFor3DOcclusion() ;

/// @brief Method set_checkFor3DOcclusion addr 0x294309c size 0xc virtual false final false
 void set_checkFor3DOcclusion(bool value) ;

/// @brief Method get_checkFor2DOcclusion addr 0x29430a8 size 0x8 virtual false final false
 bool get_checkFor2DOcclusion() ;

/// @brief Method set_checkFor2DOcclusion addr 0x29430b0 size 0xc virtual false final false
 void set_checkFor2DOcclusion(bool value) ;

/// @brief Method get_ignoreReversedGraphics addr 0x29430bc size 0x8 virtual false final false
 bool get_ignoreReversedGraphics() ;

/// @brief Method set_ignoreReversedGraphics addr 0x29430c4 size 0xc virtual false final false
 void set_ignoreReversedGraphics(bool value) ;

/// @brief Method get_maxDistance addr 0x29430d0 size 0x8 virtual false final false
 float_t get_maxDistance() ;

/// @brief Method set_maxDistance addr 0x29430d8 size 0x8 virtual false final false
 void set_maxDistance(float_t value) ;

/// @brief Method OnEnable addr 0x29430e0 size 0x84 virtual true final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2943164 size 0xf4 virtual true final false
 void OnDisable() ;

/// @brief Method Raycast addr 0x2943258 size 0xb0 virtual true final false
 void Raycast(UnityEngine::EventSystems::PointerEventData eventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult> resultAppendList) ;

/// @brief Method PerformRaycast addr 0x293cf38 size 0x5e0 virtual false final false
 void PerformRaycast(UnityEngine::InputSystem::UI::ExtendedPointerEventData eventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult> resultAppendList) ;

/// @brief Method SortedRaycastGraphics addr 0x2943308 size 0x4dc virtual false final false
 void SortedRaycastGraphics(UnityEngine::Canvas canvas, UnityEngine::Ray ray, System::Collections::Generic::List_1<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData> results) ;

/// @brief Method RayIntersectsRectTransform addr 0x29437e4 size 0x258 virtual false final false
static bool RayIntersectsRectTransform(UnityEngine::RectTransform transform, UnityEngine::Ray ray, ByRef<UnityEngine::Vector3> worldPosition, ByRef<float_t> distance) ;

/// @brief Method get_canvas addr 0x2942ff0 size 0x94 virtual false final false
 UnityEngine::Canvas get_canvas() ;

// Ctor Parameters []
explicit TrackedDeviceRaycaster() ;

/// @brief Method .ctor addr 0x2943a50 size 0x84 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::UI
NEED_NO_BOX(UnityEngine::InputSystem::UI::TrackedDeviceRaycaster);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UI::TrackedDeviceRaycaster, "UnityEngine.InputSystem.UI", "TrackedDeviceRaycaster");
NEED_NO_BOX(UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster____c, "UnityEngine.InputSystem.UI", "TrackedDeviceRaycaster/<>c");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__TrackedDeviceRaycaster__RaycastHitData, "UnityEngine.InputSystem.UI", "TrackedDeviceRaycaster/RaycastHitData");
