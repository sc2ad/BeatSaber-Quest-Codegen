#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UI/zzzz__GraphicRaycaster_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class Comparison_1;
}
namespace UnityEngine {
struct Ray;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRRaycaster____c;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
}
namespace UnityEngine {
class GameObject;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class RectTransform;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRRaycaster__RaycastHit;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::UI {
class Graphic;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__OVRRaycaster____c;
}
namespace GlobalNamespace {
class OVRRaycaster;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRRaycaster__RaycastHit;
}
// Type: ::RaycastHit
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8946))
// CS Name: OVRRaycaster::RaycastHit
struct CORDL_TYPE GlobalNamespace__OVRRaycaster__RaycastHit : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "graphic", ty: "UnityEngine::UI::Graphic", modifiers: "", def_value: None }, CppParam { name: "worldPos", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "fromMouse", ty: "bool", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRRaycaster__RaycastHit(UnityEngine::UI::Graphic graphic, UnityEngine::Vector3 worldPos, bool fromMouse) noexcept;


                    constexpr GlobalNamespace__OVRRaycaster__RaycastHit(GlobalNamespace__OVRRaycaster__RaycastHit const&) = default;
                    constexpr GlobalNamespace__OVRRaycaster__RaycastHit(GlobalNamespace__OVRRaycaster__RaycastHit&&) = default;
                    constexpr GlobalNamespace__OVRRaycaster__RaycastHit& operator=(GlobalNamespace__OVRRaycaster__RaycastHit const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRRaycaster__RaycastHit& operator=(GlobalNamespace__OVRRaycaster__RaycastHit&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRRaycaster__RaycastHit(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::UI::Graphic __declspec(property(get=__get_graphic, put=__set_graphic))  graphic;

constexpr void __set_graphic(UnityEngine::UI::Graphic value) ;

constexpr UnityEngine::UI::Graphic __get_graphic() const;

 UnityEngine::Vector3 __declspec(property(get=__get_worldPos, put=__set_worldPos))  worldPos;

constexpr void __set_worldPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_worldPos() const;

 bool __declspec(property(get=__get_fromMouse, put=__set_fromMouse))  fromMouse;

constexpr void __set_fromMouse(bool value) ;

constexpr bool __get_fromMouse() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8947))
// CS Name: OVRRaycaster::<>c
class CORDL_TYPE GlobalNamespace__OVRRaycaster____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__OVRRaycaster____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRRaycaster____c", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRRaycaster____c(GlobalNamespace__OVRRaycaster____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRRaycaster____c", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRRaycaster____c(GlobalNamespace__OVRRaycaster____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRRaycaster____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OVRRaycaster____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRRaycaster____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRRaycaster____c& operator=(GlobalNamespace__OVRRaycaster____c&& o) noexcept = default;
  constexpr GlobalNamespace__OVRRaycaster____c& operator=(GlobalNamespace__OVRRaycaster____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::GlobalNamespace__OVRRaycaster____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::GlobalNamespace__OVRRaycaster____c value) ;

static GlobalNamespace::GlobalNamespace__OVRRaycaster____c __get___9() ;

static System::Comparison_1<GlobalNamespace::GlobalNamespace__OVRRaycaster__RaycastHit> __declspec(property(get=__get___9__16_0, put=__set___9__16_0))  __9__16_0;

static void __set___9__16_0(System::Comparison_1<GlobalNamespace::GlobalNamespace__OVRRaycaster__RaycastHit> value) ;

static System::Comparison_1<GlobalNamespace::GlobalNamespace__OVRRaycaster__RaycastHit> __get___9__16_0() ;


// Methods

static GlobalNamespace::GlobalNamespace__OVRRaycaster____c New_ctor() ;

/// @brief Method .ctor addr 0x262f38c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GraphicRaycast>b__16_0 addr 0x262f394 size 0x54 virtual false final false
 int32_t _GraphicRaycast_b__16_0(GlobalNamespace::GlobalNamespace__OVRRaycaster__RaycastHit g1, GlobalNamespace::GlobalNamespace__OVRRaycaster__RaycastHit g2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRRaycaster
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12984))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8948))
// CS Name: OVRRaycaster
class CORDL_TYPE OVRRaycaster : public UnityEngine::UI::GraphicRaycaster {
public:
// Declarations
using __c = GlobalNamespace::GlobalNamespace__OVRRaycaster____c;

using RaycastHit = GlobalNamespace::GlobalNamespace__OVRRaycaster__RaycastHit;

/// @brief Convert operator to UnityEngine::EventSystems::IPointerEnterHandler
constexpr operator  UnityEngine::EventSystems::IPointerEnterHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IEventSystemHandler
constexpr operator  UnityEngine::EventSystems::IEventSystemHandler() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~OVRRaycaster() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRRaycaster", modifiers: " const&", def_value: None }]
constexpr OVRRaycaster(OVRRaycaster const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRRaycaster", modifiers: "&&", def_value: None }]
constexpr OVRRaycaster(OVRRaycaster&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRRaycaster(void* ptr) noexcept : UnityEngine::UI::GraphicRaycaster(ptr) {
}


  constexpr OVRRaycaster& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRRaycaster& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRRaycaster& operator=(OVRRaycaster&& o) noexcept = default;
  constexpr OVRRaycaster& operator=(OVRRaycaster const& o) noexcept = default;
                


// Fields

 UnityEngine::GameObject __declspec(property(get=__get_pointer, put=__set_pointer))  pointer;

constexpr void __set_pointer(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_pointer() const;

 int32_t __declspec(property(get=__get_sortOrder, put=__set_sortOrder))  sortOrder;

constexpr void __set_sortOrder(int32_t value) ;

constexpr int32_t __get_sortOrder() const;

 UnityEngine::Canvas __declspec(property(get=__get_m_Canvas, put=__set_m_Canvas))  m_Canvas;

constexpr void __set_m_Canvas(UnityEngine::Canvas value) ;

constexpr UnityEngine::Canvas __get_m_Canvas() const;

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OVRRaycaster__RaycastHit> __declspec(property(get=__get_m_RaycastResults, put=__set_m_RaycastResults))  m_RaycastResults;

constexpr void __set_m_RaycastResults(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OVRRaycaster__RaycastHit> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OVRRaycaster__RaycastHit> __get_m_RaycastResults() const;

static System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OVRRaycaster__RaycastHit> __declspec(property(get=__get_s_SortedGraphics, put=__set_s_SortedGraphics))  s_SortedGraphics;

static void __set_s_SortedGraphics(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OVRRaycaster__RaycastHit> value) ;

static System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OVRRaycaster__RaycastHit> __get_s_SortedGraphics() ;


// Properties

 UnityEngine::Canvas __declspec(property(get=get_canvas))  canvas;

 UnityEngine::Camera __declspec(property(get=get_eventCamera))  eventCamera;

 int32_t __declspec(property(get=get_sortOrderPriority))  sortOrderPriority;


// Methods

static GlobalNamespace::OVRRaycaster New_ctor() ;

/// @brief Method .ctor addr 0x262db40 size 0xa0 virtual false final false
 void _ctor() ;

/// @brief Method get_canvas addr 0x262dbe0 size 0x94 virtual false final false
 UnityEngine::Canvas get_canvas() ;

/// @brief Method get_eventCamera addr 0x262dc74 size 0x1c virtual true final false
 UnityEngine::Camera get_eventCamera() ;

/// @brief Method get_sortOrderPriority addr 0x262dc90 size 0x8 virtual true final false
 int32_t get_sortOrderPriority() ;

/// @brief Method Start addr 0x262dc98 size 0x150 virtual true final false
 void Start() ;

/// @brief Method Raycast addr 0x262dde8 size 0x6cc virtual false final false
 void Raycast(UnityEngine::EventSystems::PointerEventData eventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult> resultAppendList, UnityEngine::Ray ray, bool checkForBlocking) ;

/// @brief Method Raycast addr 0x262eb50 size 0x6c virtual true final false
 void Raycast(UnityEngine::EventSystems::PointerEventData eventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult> resultAppendList) ;

/// @brief Method RaycastPointer addr 0x262ebbc size 0x250 virtual false final false
 void RaycastPointer(UnityEngine::EventSystems::PointerEventData eventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult> resultAppendList) ;

/// @brief Method GraphicRaycast addr 0x262e4b4 size 0x69c virtual false final false
 void GraphicRaycast(UnityEngine::Canvas canvas, UnityEngine::Ray ray, System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OVRRaycaster__RaycastHit> results) ;

/// @brief Method GetScreenPosition addr 0x262f048 size 0x38 virtual false final false
 UnityEngine::Vector2 GetScreenPosition(UnityEngine::EventSystems::RaycastResult raycastResult) ;

/// @brief Method RayIntersectsRectTransform addr 0x262ee0c size 0x23c virtual false final false
static bool RayIntersectsRectTransform(UnityEngine::RectTransform rectTransform, UnityEngine::Ray ray, ByRef<UnityEngine::Vector3> worldPos) ;

/// @brief Method IsFocussed addr 0x262f080 size 0x118 virtual false final false
 bool IsFocussed() ;

/// @brief Method OnPointerEnter addr 0x262f198 size 0x104 virtual true final true
 void OnPointerEnter(UnityEngine::EventSystems::PointerEventData e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRRaycaster____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRRaycaster____c, "", "OVRRaycaster/<>c");
NEED_NO_BOX(GlobalNamespace::OVRRaycaster);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRRaycaster, "", "OVRRaycaster");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRRaycaster__RaycastHit, "", "OVRRaycaster/RaycastHit");
