#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine {
struct LayerMask;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::UI {
class UnityEngine__UI__GraphicRaycaster____c;
}
namespace UnityEngine::UI {
struct UnityEngine__UI__GraphicRaycaster__BlockingObjects;
}
namespace System {
template<typename T>
class Comparison_1;
}
// Forward declare root types
namespace UnityEngine::UI {
struct UnityEngine__UI__GraphicRaycaster__BlockingObjects;
}
namespace UnityEngine::UI {
class GraphicRaycaster;
}
namespace UnityEngine::UI {
class UnityEngine__UI__GraphicRaycaster____c;
}
// Type: ::BlockingObjects
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12982))
// CS Name: UnityEngine.UI.GraphicRaycaster::BlockingObjects
struct CORDL_TYPE UnityEngine__UI__GraphicRaycaster__BlockingObjects : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UI__GraphicRaycaster__BlockingObjects(int32_t value__) noexcept;


                    constexpr UnityEngine__UI__GraphicRaycaster__BlockingObjects(UnityEngine__UI__GraphicRaycaster__BlockingObjects const&) = default;
                    constexpr UnityEngine__UI__GraphicRaycaster__BlockingObjects(UnityEngine__UI__GraphicRaycaster__BlockingObjects&&) = default;
                    constexpr UnityEngine__UI__GraphicRaycaster__BlockingObjects& operator=(UnityEngine__UI__GraphicRaycaster__BlockingObjects const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UI__GraphicRaycaster__BlockingObjects& operator=(UnityEngine__UI__GraphicRaycaster__BlockingObjects&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__GraphicRaycaster__BlockingObjects(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UI__GraphicRaycaster__BlockingObjects_Unwrapped : int32_t {
__None = 0,
__TwoD = 1,
__ThreeD = 2,
__All = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UI__GraphicRaycaster__BlockingObjects_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UI__GraphicRaycaster__BlockingObjects_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::UI::UnityEngine__UI__GraphicRaycaster__BlockingObjects const None;

/// @brief Field TwoD offset 0
static UnityEngine::UI::UnityEngine__UI__GraphicRaycaster__BlockingObjects const TwoD;

/// @brief Field ThreeD offset 0
static UnityEngine::UI::UnityEngine__UI__GraphicRaycaster__BlockingObjects const ThreeD;

/// @brief Field All offset 0
static UnityEngine::UI::UnityEngine__UI__GraphicRaycaster__BlockingObjects const All;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::<>c
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12983))
// CS Name: UnityEngine.UI.GraphicRaycaster::<>c
class CORDL_TYPE UnityEngine__UI__GraphicRaycaster____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__UI__GraphicRaycaster____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__GraphicRaycaster____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UI__GraphicRaycaster____c(UnityEngine__UI__GraphicRaycaster____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__GraphicRaycaster____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UI__GraphicRaycaster____c(UnityEngine__UI__GraphicRaycaster____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__GraphicRaycaster____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UI__GraphicRaycaster____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UI__GraphicRaycaster____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UI__GraphicRaycaster____c& operator=(UnityEngine__UI__GraphicRaycaster____c&& o) noexcept = default;
  constexpr UnityEngine__UI__GraphicRaycaster____c& operator=(UnityEngine__UI__GraphicRaycaster____c const& o) noexcept = default;
                


// Fields

static UnityEngine::UI::UnityEngine__UI__GraphicRaycaster____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::UI::UnityEngine__UI__GraphicRaycaster____c value) ;

static UnityEngine::UI::UnityEngine__UI__GraphicRaycaster____c __get___9() ;

static System::Comparison_1<UnityEngine::UI::Graphic> __declspec(property(get=__get___9__27_0, put=__set___9__27_0))  __9__27_0;

static void __set___9__27_0(System::Comparison_1<UnityEngine::UI::Graphic> value) ;

static System::Comparison_1<UnityEngine::UI::Graphic> __get___9__27_0() ;


// Methods

static UnityEngine::UI::UnityEngine__UI__GraphicRaycaster____c New_ctor() ;

/// @brief Method .ctor addr 0x2be7778 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Raycast>b__27_0 addr 0x2be7780 size 0x4c virtual false final false
 int32_t _Raycast_b__27_0(UnityEngine::UI::Graphic g1, UnityEngine::UI::Graphic g2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: UnityEngine.UI::GraphicRaycaster
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13148))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12984))
// CS Name: UnityEngine.UI.GraphicRaycaster
class CORDL_TYPE GraphicRaycaster : public UnityEngine::EventSystems::BaseRaycaster {
public:
// Declarations
using __c = UnityEngine::UI::UnityEngine__UI__GraphicRaycaster____c;

using BlockingObjects = UnityEngine::UI::UnityEngine__UI__GraphicRaycaster__BlockingObjects;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GraphicRaycaster() = default;

// Ctor Parameters [CppParam { name: "", ty: "GraphicRaycaster", modifiers: " const&", def_value: None }]
constexpr GraphicRaycaster(GraphicRaycaster const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GraphicRaycaster", modifiers: "&&", def_value: None }]
constexpr GraphicRaycaster(GraphicRaycaster&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GraphicRaycaster(void* ptr) noexcept : UnityEngine::EventSystems::BaseRaycaster(ptr) {
}


  constexpr GraphicRaycaster& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GraphicRaycaster& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GraphicRaycaster& operator=(GraphicRaycaster&& o) noexcept = default;
  constexpr GraphicRaycaster& operator=(GraphicRaycaster const& o) noexcept = default;
                


// Fields

/// @brief Field kNoEventMaskSet offset 0
static constexpr int32_t  kNoEventMaskSet{-1};

 bool __declspec(property(get=__get_m_IgnoreReversedGraphics, put=__set_m_IgnoreReversedGraphics))  m_IgnoreReversedGraphics;

constexpr void __set_m_IgnoreReversedGraphics(bool value) ;

constexpr bool __get_m_IgnoreReversedGraphics() const;

 UnityEngine::UI::UnityEngine__UI__GraphicRaycaster__BlockingObjects __declspec(property(get=__get_m_BlockingObjects, put=__set_m_BlockingObjects))  m_BlockingObjects;

constexpr void __set_m_BlockingObjects(UnityEngine::UI::UnityEngine__UI__GraphicRaycaster__BlockingObjects value) ;

constexpr UnityEngine::UI::UnityEngine__UI__GraphicRaycaster__BlockingObjects __get_m_BlockingObjects() const;

 UnityEngine::LayerMask __declspec(property(get=__get_m_BlockingMask, put=__set_m_BlockingMask))  m_BlockingMask;

constexpr void __set_m_BlockingMask(UnityEngine::LayerMask value) ;

constexpr UnityEngine::LayerMask __get_m_BlockingMask() const;

 UnityEngine::Canvas __declspec(property(get=__get_m_Canvas, put=__set_m_Canvas))  m_Canvas;

constexpr void __set_m_Canvas(UnityEngine::Canvas value) ;

constexpr UnityEngine::Canvas __get_m_Canvas() const;

 System::Collections::Generic::List_1<UnityEngine::UI::Graphic> __declspec(property(get=__get_m_RaycastResults, put=__set_m_RaycastResults))  m_RaycastResults;

constexpr void __set_m_RaycastResults(System::Collections::Generic::List_1<UnityEngine::UI::Graphic> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UI::Graphic> __get_m_RaycastResults() const;

static System::Collections::Generic::List_1<UnityEngine::UI::Graphic> __declspec(property(get=__get_s_SortedGraphics, put=__set_s_SortedGraphics))  s_SortedGraphics;

static void __set_s_SortedGraphics(System::Collections::Generic::List_1<UnityEngine::UI::Graphic> value) ;

static System::Collections::Generic::List_1<UnityEngine::UI::Graphic> __get_s_SortedGraphics() ;


// Properties

 int32_t __declspec(property(get=get_sortOrderPriority))  sortOrderPriority;

 int32_t __declspec(property(get=get_renderOrderPriority))  renderOrderPriority;

 bool __declspec(property(get=get_ignoreReversedGraphics, put=set_ignoreReversedGraphics))  ignoreReversedGraphics;

 UnityEngine::UI::UnityEngine__UI__GraphicRaycaster__BlockingObjects __declspec(property(get=get_blockingObjects, put=set_blockingObjects))  blockingObjects;

 UnityEngine::LayerMask __declspec(property(get=get_blockingMask, put=set_blockingMask))  blockingMask;

 UnityEngine::Canvas __declspec(property(get=get_canvas))  canvas;

 UnityEngine::Camera __declspec(property(get=get_eventCamera))  eventCamera;


// Methods

/// @brief Method get_sortOrderPriority addr 0x2be6120 size 0x48 virtual true final false
 int32_t get_sortOrderPriority() ;

/// @brief Method get_renderOrderPriority addr 0x2be61fc size 0x54 virtual true final false
 int32_t get_renderOrderPriority() ;

/// @brief Method get_ignoreReversedGraphics addr 0x2be6250 size 0x8 virtual false final false
 bool get_ignoreReversedGraphics() ;

/// @brief Method set_ignoreReversedGraphics addr 0x2be6258 size 0xc virtual false final false
 void set_ignoreReversedGraphics(bool value) ;

/// @brief Method get_blockingObjects addr 0x2be6264 size 0x8 virtual false final false
 UnityEngine::UI::UnityEngine__UI__GraphicRaycaster__BlockingObjects get_blockingObjects() ;

/// @brief Method set_blockingObjects addr 0x2be626c size 0x8 virtual false final false
 void set_blockingObjects(UnityEngine::UI::UnityEngine__UI__GraphicRaycaster__BlockingObjects value) ;

/// @brief Method get_blockingMask addr 0x2be6274 size 0x8 virtual false final false
 UnityEngine::LayerMask get_blockingMask() ;

/// @brief Method set_blockingMask addr 0x2be627c size 0x8 virtual false final false
 void set_blockingMask(UnityEngine::LayerMask value) ;

static UnityEngine::UI::GraphicRaycaster New_ctor() ;

/// @brief Method .ctor addr 0x2be6284 size 0x94 virtual false final false
 void _ctor() ;

/// @brief Method get_canvas addr 0x2be6168 size 0x94 virtual false final false
 UnityEngine::Canvas get_canvas() ;

/// @brief Method Raycast addr 0x2be6318 size 0xc7c virtual true final false
 void Raycast(UnityEngine::EventSystems::PointerEventData eventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult> resultAppendList) ;

/// @brief Method get_eventCamera addr 0x2be75c0 size 0xc8 virtual true final false
 UnityEngine::Camera get_eventCamera() ;

/// @brief Method Raycast addr 0x2be7050 size 0x570 virtual false final false
static void Raycast(UnityEngine::Canvas canvas, UnityEngine::Camera eventCamera, UnityEngine::Vector2 pointerPosition, System::Collections::Generic::IList_1<UnityEngine::UI::Graphic> foundGraphics, System::Collections::Generic::List_1<UnityEngine::UI::Graphic> results) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__GraphicRaycaster__BlockingObjects, "UnityEngine.UI", "GraphicRaycaster/BlockingObjects");
NEED_NO_BOX(UnityEngine::UI::GraphicRaycaster);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::GraphicRaycaster, "UnityEngine.UI", "GraphicRaycaster");
NEED_NO_BOX(UnityEngine::UI::UnityEngine__UI__GraphicRaycaster____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__GraphicRaycaster____c, "UnityEngine.UI", "GraphicRaycaster/<>c");
