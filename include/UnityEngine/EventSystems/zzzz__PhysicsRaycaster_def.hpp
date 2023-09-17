#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct LayerMask;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class PhysicsRaycaster;
}
namespace UnityEngine::EventSystems {
class ____UnityEngine__EventSystems__PhysicsRaycaster__RaycastHitComparer;
}
// Type: ::RaycastHitComparer
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13150))
// CS Name: UnityEngine.EventSystems.PhysicsRaycaster::RaycastHitComparer
class CORDL_TYPE ____UnityEngine__EventSystems__PhysicsRaycaster__RaycastHitComparer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>
constexpr operator  ::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____UnityEngine__EventSystems__PhysicsRaycaster__RaycastHitComparer() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__EventSystems__PhysicsRaycaster__RaycastHitComparer", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__EventSystems__PhysicsRaycaster__RaycastHitComparer(____UnityEngine__EventSystems__PhysicsRaycaster__RaycastHitComparer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__EventSystems__PhysicsRaycaster__RaycastHitComparer", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__EventSystems__PhysicsRaycaster__RaycastHitComparer(____UnityEngine__EventSystems__PhysicsRaycaster__RaycastHitComparer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__EventSystems__PhysicsRaycaster__RaycastHitComparer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__EventSystems__PhysicsRaycaster__RaycastHitComparer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__EventSystems__PhysicsRaycaster__RaycastHitComparer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__EventSystems__PhysicsRaycaster__RaycastHitComparer& operator=(____UnityEngine__EventSystems__PhysicsRaycaster__RaycastHitComparer&& o) noexcept = default;
  constexpr ____UnityEngine__EventSystems__PhysicsRaycaster__RaycastHitComparer& operator=(____UnityEngine__EventSystems__PhysicsRaycaster__RaycastHitComparer const& o) noexcept = default;
                


// Fields

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__PhysicsRaycaster__RaycastHitComparer __declspec(property(get=__get_instance, put=__set_instance))  instance;

static void __set_instance(::UnityEngine::EventSystems::____UnityEngine__EventSystems__PhysicsRaycaster__RaycastHitComparer value) ;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__PhysicsRaycaster__RaycastHitComparer __get_instance() ;


// Methods

/// @brief Method Compare addr 0x2c28190 size 0x40 virtual true final true
 int32_t Compare(::UnityEngine::RaycastHit x, ::UnityEngine::RaycastHit y) ;

// Ctor Parameters []
explicit ____UnityEngine__EventSystems__PhysicsRaycaster__RaycastHitComparer() ;

/// @brief Method .ctor addr 0x2c281d0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
// Type: UnityEngine.EventSystems::PhysicsRaycaster
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13148))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13151))
// CS Name: UnityEngine.EventSystems.PhysicsRaycaster
class CORDL_TYPE PhysicsRaycaster : public ::UnityEngine::EventSystems::BaseRaycaster {
public:
// Declarations
using RaycastHitComparer = ::UnityEngine::EventSystems::____UnityEngine__EventSystems__PhysicsRaycaster__RaycastHitComparer;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~PhysicsRaycaster() = default;

// Ctor Parameters [CppParam { name: "", ty: "PhysicsRaycaster", modifiers: " const&", def_value: None }]
constexpr PhysicsRaycaster(PhysicsRaycaster const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PhysicsRaycaster", modifiers: "&&", def_value: None }]
constexpr PhysicsRaycaster(PhysicsRaycaster&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PhysicsRaycaster(void* ptr) noexcept : ::UnityEngine::EventSystems::BaseRaycaster(ptr) {
}


  constexpr PhysicsRaycaster& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PhysicsRaycaster& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PhysicsRaycaster& operator=(PhysicsRaycaster&& o) noexcept = default;
  constexpr PhysicsRaycaster& operator=(PhysicsRaycaster const& o) noexcept = default;
                


// Fields

/// @brief Field kNoEventMaskSet offset 0
static constexpr int32_t  kNoEventMaskSet{-1};

 ::UnityEngine::Camera __declspec(property(get=__get_m_EventCamera, put=__set_m_EventCamera))  m_EventCamera;

constexpr void __set_m_EventCamera(::UnityEngine::Camera value) ;

constexpr ::UnityEngine::Camera __get_m_EventCamera() const;

 ::UnityEngine::LayerMask __declspec(property(get=__get_m_EventMask, put=__set_m_EventMask))  m_EventMask;

constexpr void __set_m_EventMask(::UnityEngine::LayerMask value) ;

constexpr ::UnityEngine::LayerMask __get_m_EventMask() const;

 int32_t __declspec(property(get=__get_m_MaxRayIntersections, put=__set_m_MaxRayIntersections))  m_MaxRayIntersections;

constexpr void __set_m_MaxRayIntersections(int32_t value) ;

constexpr int32_t __get_m_MaxRayIntersections() const;

 int32_t __declspec(property(get=__get_m_LastMaxRayIntersections, put=__set_m_LastMaxRayIntersections))  m_LastMaxRayIntersections;

constexpr void __set_m_LastMaxRayIntersections(int32_t value) ;

constexpr int32_t __get_m_LastMaxRayIntersections() const;

 ::ArrayW<::UnityEngine::RaycastHit> __declspec(property(get=__get_m_Hits, put=__set_m_Hits))  m_Hits;

constexpr void __set_m_Hits(::ArrayW<::UnityEngine::RaycastHit> value) ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> __get_m_Hits() const;


// Properties

 ::UnityEngine::Camera __declspec(property(get=get_eventCamera))  eventCamera;

 int32_t __declspec(property(get=get_depth))  depth;

 int32_t __declspec(property(get=get_finalEventMask))  finalEventMask;

 ::UnityEngine::LayerMask __declspec(property(get=get_eventMask, put=set_eventMask))  eventMask;

 int32_t __declspec(property(get=get_maxRayIntersections, put=set_maxRayIntersections))  maxRayIntersections;


// Methods

// Ctor Parameters []
explicit PhysicsRaycaster() ;

/// @brief Method .ctor addr 0x2c27290 size 0x28 virtual false final false
 void _ctor() ;

/// @brief Method get_eventCamera addr 0x2c27c34 size 0xa4 virtual true final false
 ::UnityEngine::Camera get_eventCamera() ;

/// @brief Method get_depth addr 0x2c27cd8 size 0xc4 virtual true final false
 int32_t get_depth() ;

/// @brief Method get_finalEventMask addr 0x2c27b70 size 0xc4 virtual false final false
 int32_t get_finalEventMask() ;

/// @brief Method get_eventMask addr 0x2c27d9c size 0x8 virtual false final false
 ::UnityEngine::LayerMask get_eventMask() ;

/// @brief Method set_eventMask addr 0x2c27da4 size 0x8 virtual false final false
 void set_eventMask(::UnityEngine::LayerMask value) ;

/// @brief Method get_maxRayIntersections addr 0x2c27dac size 0x8 virtual false final false
 int32_t get_maxRayIntersections() ;

/// @brief Method set_maxRayIntersections addr 0x2c27db4 size 0x8 virtual false final false
 void set_maxRayIntersections(int32_t value) ;

/// @brief Method ComputeRayAndDistance addr 0x2c27878 size 0x2f8 virtual false final false
 bool ComputeRayAndDistance(::UnityEngine::EventSystems::PointerEventData eventData, ByRef<::UnityEngine::Ray> ray, ByRef<int32_t> eventDisplayIndex, ByRef<float_t> distanceToClipPlane) ;

/// @brief Method Raycast addr 0x2c27dbc size 0x3d4 virtual true final false
 void Raycast(::UnityEngine::EventSystems::PointerEventData eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult> resultAppendList) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::EventSystems::PhysicsRaycaster);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::PhysicsRaycaster, "UnityEngine.EventSystems", "PhysicsRaycaster");
NEED_NO_BOX(::UnityEngine::EventSystems::____UnityEngine__EventSystems__PhysicsRaycaster__RaycastHitComparer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::____UnityEngine__EventSystems__PhysicsRaycaster__RaycastHitComparer, "UnityEngine.EventSystems", "PhysicsRaycaster/RaycastHitComparer");
