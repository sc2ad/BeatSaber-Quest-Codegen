#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__Panel_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class ScriptableObject;
}
namespace UnityEngine::UIElements {
class EventDispatcher;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__BaseRuntimePanel____c;
}
namespace UnityEngine {
class GameObject;
}
namespace System {
class Action;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine {
struct Vector2;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class BaseRuntimePanel;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__BaseRuntimePanel____c;
}
// Type: ::<>c
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6962))
// CS Name: UnityEngine.UIElements.BaseRuntimePanel::<>c
class CORDL_TYPE UnityEngine__UIElements__BaseRuntimePanel____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__UIElements__BaseRuntimePanel____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__BaseRuntimePanel____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__BaseRuntimePanel____c(UnityEngine__UIElements__BaseRuntimePanel____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__BaseRuntimePanel____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__BaseRuntimePanel____c(UnityEngine__UIElements__BaseRuntimePanel____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__BaseRuntimePanel____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__BaseRuntimePanel____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__BaseRuntimePanel____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__BaseRuntimePanel____c& operator=(UnityEngine__UIElements__BaseRuntimePanel____c&& o) noexcept = default;
  constexpr UnityEngine__UIElements__BaseRuntimePanel____c& operator=(UnityEngine__UIElements__BaseRuntimePanel____c const& o) noexcept = default;
                


// Fields

static UnityEngine::UIElements::UnityEngine__UIElements__BaseRuntimePanel____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::UIElements::UnityEngine__UIElements__BaseRuntimePanel____c value) ;

static UnityEngine::UIElements::UnityEngine__UIElements__BaseRuntimePanel____c __get___9() ;


// Methods

static UnityEngine::UIElements::UnityEngine__UIElements__BaseRuntimePanel____c New_ctor() ;

/// @brief Method .ctor addr 0x2c80e30 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <.cctor>b__44_0 addr 0x2c80e38 size 0x4 virtual false final false
 UnityEngine::Vector2 __cctor_b__44_0(UnityEngine::Vector2 p) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::BaseRuntimePanel
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6961))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6963))
// CS Name: UnityEngine.UIElements.BaseRuntimePanel
class CORDL_TYPE BaseRuntimePanel : public UnityEngine::UIElements::Panel {
public:
// Declarations
using __c = UnityEngine::UIElements::UnityEngine__UIElements__BaseRuntimePanel____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x1d8};

virtual ~BaseRuntimePanel() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseRuntimePanel", modifiers: " const&", def_value: None }]
constexpr BaseRuntimePanel(BaseRuntimePanel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseRuntimePanel", modifiers: "&&", def_value: None }]
constexpr BaseRuntimePanel(BaseRuntimePanel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseRuntimePanel(void* ptr) noexcept : UnityEngine::UIElements::Panel(ptr) {
}


  constexpr BaseRuntimePanel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseRuntimePanel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseRuntimePanel& operator=(BaseRuntimePanel&& o) noexcept = default;
  constexpr BaseRuntimePanel& operator=(BaseRuntimePanel const& o) noexcept = default;
                


// Fields

 UnityEngine::GameObject __declspec(property(get=__get_m_SelectableGameObject, put=__set_m_SelectableGameObject))  m_SelectableGameObject;

constexpr void __set_m_SelectableGameObject(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_m_SelectableGameObject() const;

static int32_t __declspec(property(get=__get_s_CurrentRuntimePanelCounter, put=__set_s_CurrentRuntimePanelCounter))  s_CurrentRuntimePanelCounter;

static void __set_s_CurrentRuntimePanelCounter(int32_t value) ;

static int32_t __get_s_CurrentRuntimePanelCounter() ;

 int32_t __declspec(property(get=__get_m_RuntimePanelCreationIndex, put=__set_m_RuntimePanelCreationIndex))  m_RuntimePanelCreationIndex;

constexpr void __set_m_RuntimePanelCreationIndex(int32_t value) ;

constexpr int32_t __get_m_RuntimePanelCreationIndex() const;

 float_t __declspec(property(get=__get_m_SortingPriority, put=__set_m_SortingPriority))  m_SortingPriority;

constexpr void __set_m_SortingPriority(float_t value) ;

constexpr float_t __get_m_SortingPriority() const;

 System::Action __declspec(property(get=__get_destroyed, put=__set_destroyed))  destroyed;

constexpr void __set_destroyed(System::Action value) ;

constexpr System::Action __get_destroyed() const;

 UnityEngine::Shader __declspec(property(get=__get_m_StandardWorldSpaceShader, put=__set_m_StandardWorldSpaceShader))  m_StandardWorldSpaceShader;

constexpr void __set_m_StandardWorldSpaceShader(UnityEngine::Shader value) ;

constexpr UnityEngine::Shader __get_m_StandardWorldSpaceShader() const;

 bool __declspec(property(get=__get_m_DrawToCameras, put=__set_m_DrawToCameras))  m_DrawToCameras;

constexpr void __set_m_DrawToCameras(bool value) ;

constexpr bool __get_m_DrawToCameras() const;

 UnityEngine::RenderTexture __declspec(property(get=__get_targetTexture, put=__set_targetTexture))  targetTexture;

constexpr void __set_targetTexture(UnityEngine::RenderTexture value) ;

constexpr UnityEngine::RenderTexture __get_targetTexture() const;

 UnityEngine::Matrix4x4 __declspec(property(get=__get_panelToWorld, put=__set_panelToWorld))  panelToWorld;

constexpr void __set_panelToWorld(UnityEngine::Matrix4x4 value) ;

constexpr UnityEngine::Matrix4x4 __get_panelToWorld() const;

 int32_t __declspec(property(get=__get__targetDisplay_k__BackingField, put=__set__targetDisplay_k__BackingField))  _targetDisplay_k__BackingField;

constexpr void __set__targetDisplay_k__BackingField(int32_t value) ;

constexpr int32_t __get__targetDisplay_k__BackingField() const;

static System::Func_2<UnityEngine::Vector2,UnityEngine::Vector2> __declspec(property(get=__get_DefaultScreenToPanelSpace, put=__set_DefaultScreenToPanelSpace))  DefaultScreenToPanelSpace;

static void __set_DefaultScreenToPanelSpace(System::Func_2<UnityEngine::Vector2,UnityEngine::Vector2> value) ;

static System::Func_2<UnityEngine::Vector2,UnityEngine::Vector2> __get_DefaultScreenToPanelSpace() ;

 System::Func_2<UnityEngine::Vector2,UnityEngine::Vector2> __declspec(property(get=__get_m_ScreenToPanelSpace, put=__set_m_ScreenToPanelSpace))  m_ScreenToPanelSpace;

constexpr void __set_m_ScreenToPanelSpace(System::Func_2<UnityEngine::Vector2,UnityEngine::Vector2> value) ;

constexpr System::Func_2<UnityEngine::Vector2,UnityEngine::Vector2> __get_m_ScreenToPanelSpace() const;


// Properties

 UnityEngine::GameObject __declspec(property(get=get_selectableGameObject, put=set_selectableGameObject))  selectableGameObject;

 float_t __declspec(property(get=get_sortingPriority, put=set_sortingPriority))  sortingPriority;

 UnityEngine::Shader __declspec(property(get=get_standardWorldSpaceShader))  standardWorldSpaceShader;

 bool __declspec(property(get=get_drawToCameras, put=set_drawToCameras))  drawToCameras;

 int32_t __declspec(property(get=get_targetDisplay, put=set_targetDisplay))  targetDisplay;

 int32_t __declspec(property(get=get_screenRenderingWidth))  screenRenderingWidth;

 int32_t __declspec(property(get=get_screenRenderingHeight))  screenRenderingHeight;

 System::Func_2<UnityEngine::Vector2,UnityEngine::Vector2> __declspec(property(get=get_screenToPanelSpace, put=set_screenToPanelSpace))  screenToPanelSpace;


// Methods

/// @brief Method get_selectableGameObject addr 0x2c7fd98 size 0x8 virtual true final true
 UnityEngine::GameObject get_selectableGameObject() ;

/// @brief Method set_selectableGameObject addr 0x2c7fda0 size 0x9c virtual true final true
 void set_selectableGameObject(UnityEngine::GameObject value) ;

/// @brief Method get_sortingPriority addr 0x2c80168 size 0x8 virtual false final false
 float_t get_sortingPriority() ;

/// @brief Method set_sortingPriority addr 0x2c80170 size 0xf8 virtual false final false
 void set_sortingPriority(float_t value) ;

/// @brief Method add_destroyed addr 0x2c802c4 size 0xa0 virtual false final false
 void add_destroyed(System::Action value) ;

/// @brief Method remove_destroyed addr 0x2c80364 size 0xa0 virtual false final false
 void remove_destroyed(System::Action value) ;

static UnityEngine::UIElements::BaseRuntimePanel New_ctor(UnityEngine::ScriptableObject ownerObject, UnityEngine::UIElements::EventDispatcher dispatcher) ;

/// @brief Method .ctor addr 0x2c80404 size 0x110 virtual false final false
 void _ctor(UnityEngine::ScriptableObject ownerObject, UnityEngine::UIElements::EventDispatcher dispatcher) ;

/// @brief Method Dispose addr 0x2c80514 size 0x58 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method get_standardWorldSpaceShader addr 0x2c8056c size 0x8 virtual true final false
 UnityEngine::Shader get_standardWorldSpaceShader() ;

/// @brief Method get_drawToCameras addr 0x2c80574 size 0x8 virtual false final false
 bool get_drawToCameras() ;

/// @brief Method set_drawToCameras addr 0x2c8057c size 0xb0 virtual false final false
 void set_drawToCameras(bool value) ;

/// @brief Method get_targetDisplay addr 0x2c8062c size 0x8 virtual false final false
 int32_t get_targetDisplay() ;

/// @brief Method set_targetDisplay addr 0x2c80634 size 0x8 virtual false final false
 void set_targetDisplay(int32_t value) ;

/// @brief Method get_screenRenderingWidth addr 0x2c8063c size 0xcc virtual false final false
 int32_t get_screenRenderingWidth() ;

/// @brief Method get_screenRenderingHeight addr 0x2c80708 size 0xcc virtual false final false
 int32_t get_screenRenderingHeight() ;

/// @brief Method Repaint addr 0x2c807d4 size 0x1e8 virtual true final false
 void Repaint(UnityEngine::Event e) ;

/// @brief Method get_screenToPanelSpace addr 0x2c809bc size 0x8 virtual false final false
 System::Func_2<UnityEngine::Vector2,UnityEngine::Vector2> get_screenToPanelSpace() ;

/// @brief Method set_screenToPanelSpace addr 0x2c809c4 size 0x78 virtual false final false
 void set_screenToPanelSpace(System::Func_2<UnityEngine::Vector2,UnityEngine::Vector2> value) ;

/// @brief Method ScreenToPanel addr 0x2c80a3c size 0x54 virtual false final false
 UnityEngine::Vector2 ScreenToPanel(UnityEngine::Vector2 screen) ;

/// @brief Method ScreenToPanel addr 0x2c80a90 size 0x104 virtual false final false
 bool ScreenToPanel(UnityEngine::Vector2 screenPosition, UnityEngine::Vector2 screenDelta, ByRef<UnityEngine::Vector2> panelPosition, ByRef<UnityEngine::Vector2> panelDelta, bool allowOutside) ;

/// @brief Method AssignPanelToComponents addr 0x2c7fe3c size 0x32c virtual false final false
 void AssignPanelToComponents(UnityEngine::UIElements::BaseRuntimePanel panel) ;

/// @brief Method PointerLeavesPanel addr 0x2c80b94 size 0xc0 virtual false final false
 void PointerLeavesPanel(int32_t pointerId, UnityEngine::Vector2 position) ;

/// @brief Method PointerEntersPanel addr 0x2c80c54 size 0xa0 virtual false final false
 void PointerEntersPanel(int32_t pointerId, UnityEngine::Vector2 position) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::BaseRuntimePanel);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::BaseRuntimePanel, "UnityEngine.UIElements", "BaseRuntimePanel");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__BaseRuntimePanel____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__BaseRuntimePanel____c, "UnityEngine.UIElements", "BaseRuntimePanel/<>c");
