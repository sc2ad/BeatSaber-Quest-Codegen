#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class Camera;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace UnityEngine {
struct RaycastHit;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class OVRPhysicsRaycaster;
}
namespace UnityEngine::EventSystems {
class ____UnityEngine__EventSystems__OVRPhysicsRaycaster____c;
}
// Type: ::<>c
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9519))
// CS Name: UnityEngine.EventSystems.OVRPhysicsRaycaster::<>c
class CORDL_TYPE ____UnityEngine__EventSystems__OVRPhysicsRaycaster____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____UnityEngine__EventSystems__OVRPhysicsRaycaster____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__EventSystems__OVRPhysicsRaycaster____c", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__EventSystems__OVRPhysicsRaycaster____c(____UnityEngine__EventSystems__OVRPhysicsRaycaster____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__EventSystems__OVRPhysicsRaycaster____c", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__EventSystems__OVRPhysicsRaycaster____c(____UnityEngine__EventSystems__OVRPhysicsRaycaster____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__EventSystems__OVRPhysicsRaycaster____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__EventSystems__OVRPhysicsRaycaster____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__EventSystems__OVRPhysicsRaycaster____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__EventSystems__OVRPhysicsRaycaster____c& operator=(____UnityEngine__EventSystems__OVRPhysicsRaycaster____c&& o) noexcept = default;
  constexpr ____UnityEngine__EventSystems__OVRPhysicsRaycaster____c& operator=(____UnityEngine__EventSystems__OVRPhysicsRaycaster____c const& o) noexcept = default;
                


// Fields

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__OVRPhysicsRaycaster____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::UnityEngine::EventSystems::____UnityEngine__EventSystems__OVRPhysicsRaycaster____c value) ;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__OVRPhysicsRaycaster____c __get___9() ;

static ::System::Comparison_1<::UnityEngine::RaycastHit> __declspec(property(get=__get___9__15_0, put=__set___9__15_0))  __9__15_0;

static void __set___9__15_0(::System::Comparison_1<::UnityEngine::RaycastHit> value) ;

static ::System::Comparison_1<::UnityEngine::RaycastHit> __get___9__15_0() ;

static ::System::Comparison_1<::UnityEngine::RaycastHit> __declspec(property(get=__get___9__16_0, put=__set___9__16_0))  __9__16_0;

static void __set___9__16_0(::System::Comparison_1<::UnityEngine::RaycastHit> value) ;

static ::System::Comparison_1<::UnityEngine::RaycastHit> __get___9__16_0() ;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__EventSystems__OVRPhysicsRaycaster____c() ;

/// @brief Method .ctor addr 0x266e6e0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Raycast>b__15_0 addr 0x266e6e8 size 0x40 virtual false final false
 int32_t _Raycast_b__15_0(::UnityEngine::RaycastHit r1, ::UnityEngine::RaycastHit r2) ;

/// @brief Method <Spherecast>b__16_0 addr 0x266e728 size 0x40 virtual false final false
 int32_t _Spherecast_b__16_0(::UnityEngine::RaycastHit r1, ::UnityEngine::RaycastHit r2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
// Type: UnityEngine.EventSystems::OVRPhysicsRaycaster
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13148))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9520))
// CS Name: UnityEngine.EventSystems.OVRPhysicsRaycaster
class CORDL_TYPE OVRPhysicsRaycaster : public ::UnityEngine::EventSystems::BaseRaycaster {
public:
// Declarations
using __c = ::UnityEngine::EventSystems::____UnityEngine__EventSystems__OVRPhysicsRaycaster____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~OVRPhysicsRaycaster() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRPhysicsRaycaster", modifiers: " const&", def_value: None }]
constexpr OVRPhysicsRaycaster(OVRPhysicsRaycaster const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRPhysicsRaycaster", modifiers: "&&", def_value: None }]
constexpr OVRPhysicsRaycaster(OVRPhysicsRaycaster&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRPhysicsRaycaster(void* ptr) noexcept : ::UnityEngine::EventSystems::BaseRaycaster(ptr) {
}


  constexpr OVRPhysicsRaycaster& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRPhysicsRaycaster& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRPhysicsRaycaster& operator=(OVRPhysicsRaycaster&& o) noexcept = default;
  constexpr OVRPhysicsRaycaster& operator=(OVRPhysicsRaycaster const& o) noexcept = default;
                


// Fields

/// @brief Field kNoEventMaskSet offset 0
static constexpr int32_t  kNoEventMaskSet{-1};

 ::UnityEngine::LayerMask __declspec(property(get=__get_m_EventMask, put=__set_m_EventMask))  m_EventMask;

constexpr void __set_m_EventMask(::UnityEngine::LayerMask value) ;

constexpr ::UnityEngine::LayerMask __get_m_EventMask() const;

 int32_t __declspec(property(get=__get_sortOrder, put=__set_sortOrder))  sortOrder;

constexpr void __set_sortOrder(int32_t value) ;

constexpr int32_t __get_sortOrder() const;


// Properties

 ::UnityEngine::Camera __declspec(property(get=get_eventCamera))  eventCamera;

 int32_t __declspec(property(get=get_depth))  depth;

 int32_t __declspec(property(get=get_sortOrderPriority))  sortOrderPriority;

 int32_t __declspec(property(get=get_finalEventMask))  finalEventMask;

 ::UnityEngine::LayerMask __declspec(property(get=get_eventMask, put=set_eventMask))  eventMask;


// Methods

// Ctor Parameters []
explicit OVRPhysicsRaycaster() ;

/// @brief Method .ctor addr 0x266dfa4 size 0x28 virtual false final false
 void _ctor() ;

/// @brief Method get_eventCamera addr 0x266dfcc size 0x58 virtual true final false
 ::UnityEngine::Camera get_eventCamera() ;

/// @brief Method get_depth addr 0x266e024 size 0xc4 virtual true final false
 int32_t get_depth() ;

/// @brief Method get_sortOrderPriority addr 0x266e0e8 size 0x8 virtual true final false
 int32_t get_sortOrderPriority() ;

/// @brief Method get_finalEventMask addr 0x266e0f0 size 0xc4 virtual false final false
 int32_t get_finalEventMask() ;

/// @brief Method get_eventMask addr 0x266e1b4 size 0x8 virtual false final false
 ::UnityEngine::LayerMask get_eventMask() ;

/// @brief Method set_eventMask addr 0x266e1bc size 0x8 virtual false final false
 void set_eventMask(::UnityEngine::LayerMask value) ;

/// @brief Method Raycast addr 0x266e1c4 size 0x430 virtual true final false
 void Raycast(::UnityEngine::EventSystems::PointerEventData eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult> resultAppendList) ;

/// @brief Method Spherecast addr 0x266cf30 size 0x438 virtual false final false
 void Spherecast(::UnityEngine::EventSystems::PointerEventData eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult> resultAppendList, float_t radius) ;

/// @brief Method GetScreenPos addr 0x266d368 size 0x50 virtual false final false
 ::UnityEngine::Vector2 GetScreenPos(::UnityEngine::Vector3 worldPosition) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::EventSystems::OVRPhysicsRaycaster);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::OVRPhysicsRaycaster, "UnityEngine.EventSystems", "OVRPhysicsRaycaster");
NEED_NO_BOX(::UnityEngine::EventSystems::____UnityEngine__EventSystems__OVRPhysicsRaycaster____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::____UnityEngine__EventSystems__OVRPhysicsRaycaster____c, "UnityEngine.EventSystems", "OVRPhysicsRaycaster/<>c");
