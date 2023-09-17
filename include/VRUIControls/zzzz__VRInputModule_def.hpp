#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseInputModule_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System {
template<typename T>
class Comparison_1;
}
namespace VRUIControls {
class MouseButtonEventData;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace GlobalNamespace {
class HapticFeedbackManager;
}
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
namespace UnityEngine {
struct Vector2;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class Component;
}
namespace VRUIControls {
class VRPointer;
}
namespace VRUIControls {
class MouseState;
}
// Forward declare root types
namespace VRUIControls {
class VRInputModule;
}
// Type: VRUIControls::VRInputModule
namespace VRUIControls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13138))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15642))
// CS Name: VRUIControls.VRInputModule
class CORDL_TYPE VRInputModule : public ::UnityEngine::EventSystems::BaseInputModule {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~VRInputModule() = default;

// Ctor Parameters [CppParam { name: "", ty: "VRInputModule", modifiers: " const&", def_value: None }]
constexpr VRInputModule(VRInputModule const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VRInputModule", modifiers: "&&", def_value: None }]
constexpr VRInputModule(VRInputModule&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VRInputModule(void* ptr) noexcept : ::UnityEngine::EventSystems::BaseInputModule(ptr) {
}


  constexpr VRInputModule& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VRInputModule& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VRInputModule& operator=(VRInputModule&& o) noexcept = default;
  constexpr VRInputModule& operator=(VRInputModule const& o) noexcept = default;
                


// Fields

 ::VRUIControls::VRPointer __declspec(property(get=__get__vrPointer, put=__set__vrPointer))  _vrPointer;

constexpr void __set__vrPointer(::VRUIControls::VRPointer value) ;

constexpr ::VRUIControls::VRPointer __get__vrPointer() const;

 ::Libraries::HM::HMLib::VR::HapticPresetSO __declspec(property(get=__get__rumblePreset, put=__set__rumblePreset))  _rumblePreset;

constexpr void __set__rumblePreset(::Libraries::HM::HMLib::VR::HapticPresetSO value) ;

constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO __get__rumblePreset() const;

 ::GlobalNamespace::HapticFeedbackManager __declspec(property(get=__get__hapticFeedbackManager, put=__set__hapticFeedbackManager))  _hapticFeedbackManager;

constexpr void __set__hapticFeedbackManager(::GlobalNamespace::HapticFeedbackManager value) ;

constexpr ::GlobalNamespace::HapticFeedbackManager __get__hapticFeedbackManager() const;

/// @brief Field kMouseLeftId offset 0
static constexpr int32_t  kMouseLeftId{-1};

/// @brief Field kMinPressValue offset 0
static constexpr float_t  kMinPressValue{0.9};

 ::System::Action_1<::UnityEngine::GameObject> __declspec(property(get=__get_onProcessMousePressEvent, put=__set_onProcessMousePressEvent))  onProcessMousePressEvent;

constexpr void __set_onProcessMousePressEvent(::System::Action_1<::UnityEngine::GameObject> value) ;

constexpr ::System::Action_1<::UnityEngine::GameObject> __get_onProcessMousePressEvent() const;

 ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData> __declspec(property(get=__get__pointerData, put=__set__pointerData))  _pointerData;

constexpr void __set__pointerData(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData> __get__pointerData() const;

 ::System::Collections::Generic::List_1<::UnityEngine::Component> __declspec(property(get=__get__componentList, put=__set__componentList))  _componentList;

constexpr void __set__componentList(::System::Collections::Generic::List_1<::UnityEngine::Component> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Component> __get__componentList() const;

 ::VRUIControls::MouseState __declspec(property(get=__get__mouseState, put=__set__mouseState))  _mouseState;

constexpr void __set__mouseState(::VRUIControls::MouseState value) ;

constexpr ::VRUIControls::MouseState __get__mouseState() const;

static ::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult> __declspec(property(get=__get__raycastComparer, put=__set__raycastComparer))  _raycastComparer;

static void __set__raycastComparer(::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult> value) ;

static ::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult> __get__raycastComparer() ;


// Methods

/// @brief Method add_onProcessMousePressEvent addr 0x2d3caf4 size 0xb0 virtual false final false
 void add_onProcessMousePressEvent(::System::Action_1<::UnityEngine::GameObject> value) ;

/// @brief Method remove_onProcessMousePressEvent addr 0x2d3cba4 size 0xb0 virtual false final false
 void remove_onProcessMousePressEvent(::System::Action_1<::UnityEngine::GameObject> value) ;

/// @brief Method OnDisable addr 0x2d3cc54 size 0x1c virtual true final false
 void OnDisable() ;

/// @brief Method GetPointerData addr 0x2d3ce78 size 0xec virtual false final false
 bool GetPointerData(int32_t id, ByRef<::UnityEngine::EventSystems::PointerEventData> data, bool create) ;

/// @brief Method GetMousePointerEventData addr 0x2d3cf64 size 0x39c virtual true final false
 ::VRUIControls::MouseState GetMousePointerEventData(int32_t id) ;

/// @brief Method GetLastPointerEventData addr 0x2d3d300 size 0x20 virtual false final false
 ::UnityEngine::EventSystems::PointerEventData GetLastPointerEventData(int32_t id) ;

/// @brief Method ShouldStartDrag addr 0x2d3d320 size 0x30 virtual false final false
 bool ShouldStartDrag(::UnityEngine::Vector2 pressPos, ::UnityEngine::Vector2 currentPos, float_t threshold, bool useDragThreshold) ;

/// @brief Method ProcessMove addr 0x2d3d350 size 0x18 virtual true final false
 void ProcessMove(::UnityEngine::EventSystems::PointerEventData pointerEvent) ;

/// @brief Method ProcessDrag addr 0x2d3dc60 size 0x2c4 virtual true final false
 void ProcessDrag(::UnityEngine::EventSystems::PointerEventData pointerEvent) ;

/// @brief Method IsPointerOverGameObject addr 0x2d3df24 size 0x9c virtual true final false
 bool IsPointerOverGameObject(int32_t pointerId) ;

/// @brief Method ClearSelection addr 0x2d3cc70 size 0x208 virtual false final false
 void ClearSelection() ;

/// @brief Method ToString addr 0x2d3dfc0 size 0x270 virtual true final false
 ::StringW ToString() ;

/// @brief Method DeselectIfSelectionChanged addr 0x2d3e230 size 0xf0 virtual false final false
 void DeselectIfSelectionChanged(::UnityEngine::GameObject currentOverGo, ::UnityEngine::EventSystems::BaseEventData pointerEvent) ;

/// @brief Method Process addr 0x2d3e320 size 0x1fc virtual true final false
 void Process() ;

/// @brief Method SendUpdateEventToSelectedObject addr 0x2d3eca4 size 0x148 virtual false final false
 bool SendUpdateEventToSelectedObject() ;

/// @brief Method ProcessMousePress addr 0x2d3e51c size 0x720 virtual false final false
 void ProcessMousePress(::VRUIControls::MouseButtonEventData data) ;

/// @brief Method HandlePointerExitAndEnter addr 0x2d3d368 size 0x8f8 virtual false final false
 void HandlePointerExitAndEnter(::UnityEngine::EventSystems::PointerEventData currentPointerData, ::UnityEngine::GameObject newEnterTarget) ;

/// @brief Method RaycastComparer addr 0x2d3edec size 0x3e4 virtual false final false
static int32_t RaycastComparer(::UnityEngine::EventSystems::RaycastResult lhs, ::UnityEngine::EventSystems::RaycastResult rhs) ;

// Ctor Parameters []
explicit VRInputModule() ;

/// @brief Method .ctor addr 0x2d3f1d0 size 0xf0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def VRUIControls
} // end anonymous namespace
NEED_NO_BOX(::VRUIControls::VRInputModule);
DEFINE_IL2CPP_ARG_TYPE(::VRUIControls::VRInputModule, "VRUIControls", "VRInputModule");
