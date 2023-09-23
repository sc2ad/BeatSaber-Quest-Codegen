#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__Mouse_def.hpp"
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::Controls {
class DeltaControl;
}
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
namespace UnityEngine::InputSystem::LowLevel {
class IEventMerger;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateCallbackReceiver;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class FastMouse;
}
// Type: UnityEngine.InputSystem::FastMouse
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6327))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6332))
// CS Name: UnityEngine.InputSystem.FastMouse
class CORDL_TYPE FastMouse : public UnityEngine::InputSystem::Mouse {
public:
// Declarations
/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver
constexpr operator  UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver() const noexcept;

/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IEventMerger
constexpr operator  UnityEngine::InputSystem::LowLevel::IEventMerger() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x1b8};

virtual ~FastMouse() = default;

// Ctor Parameters [CppParam { name: "", ty: "FastMouse", modifiers: " const&", def_value: None }]
constexpr FastMouse(FastMouse const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FastMouse", modifiers: "&&", def_value: None }]
constexpr FastMouse(FastMouse&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FastMouse(void* ptr) noexcept : UnityEngine::InputSystem::Mouse(ptr) {
}


  constexpr FastMouse& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FastMouse& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FastMouse& operator=(FastMouse&& o) noexcept = default;
  constexpr FastMouse& operator=(FastMouse const& o) noexcept = default;
                


// Fields

/// @brief Field metadata offset 0
static constexpr ::ConstString  metadata{u"AutoWindowSpace;Vector2;Delta;Button;Axis;Digital;Integer;Mouse;Pointer"};


// Methods

// Ctor Parameters []
explicit FastMouse() ;

/// @brief Method .ctor addr 0x290cd5c size 0xa7c virtual false final false
 void _ctor() ;

/// @brief Method Initialize_ctrlMouseposition addr 0x290d7d8 size 0x1a0 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlMouseposition(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMousedelta addr 0x290d978 size 0x17c virtual false final false
 UnityEngine::InputSystem::Controls::DeltaControl Initialize_ctrlMousedelta(UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMousescroll addr 0x290daf4 size 0x174 virtual false final false
 UnityEngine::InputSystem::Controls::DeltaControl Initialize_ctrlMousescroll(UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMousepress addr 0x290dc68 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlMousepress(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMouseleftButton addr 0x290de18 size 0x1e4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlMouseleftButton(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMouserightButton addr 0x290dffc size 0x1e4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlMouserightButton(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMousemiddleButton addr 0x290e1e0 size 0x1d8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlMousemiddleButton(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMouseforwardButton addr 0x290e3b8 size 0x1ac virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlMouseforwardButton(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMousebackButton addr 0x290e564 size 0x1ac virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlMousebackButton(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMousepressure addr 0x290e710 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlMousepressure(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMouseradius addr 0x290e8ac size 0x180 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlMouseradius(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMousepointerId addr 0x290ea2c size 0x154 virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlMousepointerId(UnityEngine::InputSystem::Utilities::InternedString kDigitalLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMouseclickCount addr 0x290eb80 size 0x178 virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlMouseclickCount(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMousepositionx addr 0x290ecf8 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlMousepositionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMousepositiony addr 0x290eea8 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlMousepositiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMousedeltaup addr 0x290f058 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlMousedeltaup(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMousedeltadown addr 0x290f208 size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlMousedeltadown(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMousedeltaleft addr 0x290f3bc size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlMousedeltaleft(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMousedeltaright addr 0x290f570 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlMousedeltaright(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMousedeltax addr 0x290f720 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlMousedeltax(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMousedeltay addr 0x290f8ac size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlMousedeltay(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMousescrollup addr 0x290fa38 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlMousescrollup(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMousescrolldown addr 0x290fbe8 size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlMousescrolldown(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMousescrollleft addr 0x290fd9c size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlMousescrollleft(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMousescrollright addr 0x290ff50 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlMousescrollright(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMousescrollx addr 0x2910100 size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlMousescrollx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMousescrolly addr 0x2910298 size 0x1ac virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlMousescrolly(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMouseradiusx addr 0x2910444 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlMouseradiusx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlMouseradiusy addr 0x29105d0 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlMouseradiusy(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method OnNextUpdate addr 0x291075c size 0x144 virtual false final false
 void OnNextUpdate() ;

/// @brief Method OnStateEvent addr 0x29108a0 size 0x18c virtual false final false
 void OnStateEvent(UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) ;

/// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnNextUpdate addr 0x2910a2c size 0x4 virtual true final true
 void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate() ;

/// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnStateEvent addr 0x2910a30 size 0x4 virtual true final true
 void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent(UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) ;

/// @brief Method MergeForward addr 0x2910a34 size 0x16c virtual false final false
static bool MergeForward(UnityEngine::InputSystem::LowLevel::InputEventPtr currentEventPtr, UnityEngine::InputSystem::LowLevel::InputEventPtr nextEventPtr) ;

/// @brief Method UnityEngine.InputSystem.LowLevel.IEventMerger.MergeForward addr 0x2910ba0 size 0xc virtual true final true
 bool UnityEngine_InputSystem_LowLevel_IEventMerger_MergeForward(UnityEngine::InputSystem::LowLevel::InputEventPtr currentEventPtr, UnityEngine::InputSystem::LowLevel::InputEventPtr nextEventPtr) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
NEED_NO_BOX(UnityEngine::InputSystem::FastMouse);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::FastMouse, "UnityEngine.InputSystem", "FastMouse");
