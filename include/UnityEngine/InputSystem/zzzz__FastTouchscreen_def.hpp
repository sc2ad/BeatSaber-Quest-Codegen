#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__Touchscreen_def.hpp"
namespace UnityEngine::InputSystem::Controls {
class DoubleControl;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::InputSystem::Controls {
class TouchPressControl;
}
namespace UnityEngine::InputSystem::Controls {
class TouchControl;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem::Controls {
class TouchPhaseControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::InputSystem::Controls {
class DeltaControl;
}
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class FastTouchscreen;
}
// Type: UnityEngine.InputSystem::FastTouchscreen
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6371))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6333))
// CS Name: UnityEngine.InputSystem.FastTouchscreen
class CORDL_TYPE FastTouchscreen : public UnityEngine::InputSystem::Touchscreen {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x198};

virtual ~FastTouchscreen() = default;

// Ctor Parameters [CppParam { name: "", ty: "FastTouchscreen", modifiers: " const&", def_value: None }]
constexpr FastTouchscreen(FastTouchscreen const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FastTouchscreen", modifiers: "&&", def_value: None }]
constexpr FastTouchscreen(FastTouchscreen&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FastTouchscreen(void* ptr) noexcept : UnityEngine::InputSystem::Touchscreen(ptr) {
}


  constexpr FastTouchscreen& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FastTouchscreen& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FastTouchscreen& operator=(FastTouchscreen&& o) noexcept = default;
  constexpr FastTouchscreen& operator=(FastTouchscreen const& o) noexcept = default;
                


// Fields

/// @brief Field metadata offset 0
static constexpr ::ConstString  metadata{u"AutoWindowSpace;Touch;Vector2;Delta;Analog;TouchPress;Button;Axis;Integer;TouchPhase;Double;Touchscreen;Pointer"};


// Methods

// Ctor Parameters []
explicit FastTouchscreen() ;

/// @brief Method .ctor addr 0x28eb52c size 0x2e08 virtual false final false
 void _ctor() ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouch addr 0x28ee334 size 0x180 virtual false final false
 UnityEngine::InputSystem::Controls::TouchControl Initialize_ctrlTouchscreenprimaryTouch(UnityEngine::InputSystem::Utilities::InternedString kTouchLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenposition addr 0x28ee4b4 size 0x1a0 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreenposition(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreendelta addr 0x28ee654 size 0x180 virtual false final false
 UnityEngine::InputSystem::Controls::DeltaControl Initialize_ctrlTouchscreendelta(UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenpressure addr 0x28ee7d4 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreenpressure(UnityEngine::InputSystem::Utilities::InternedString kAnalogLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenradius addr 0x28ee970 size 0x180 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreenradius(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenpress addr 0x28eeaf0 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::TouchPressControl Initialize_ctrlTouchscreenpress(UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0 addr 0x28eeca0 size 0x174 virtual false final false
 UnityEngine::InputSystem::Controls::TouchControl Initialize_ctrlTouchscreentouch0(UnityEngine::InputSystem::Utilities::InternedString kTouchLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1 addr 0x28eee14 size 0x174 virtual false final false
 UnityEngine::InputSystem::Controls::TouchControl Initialize_ctrlTouchscreentouch1(UnityEngine::InputSystem::Utilities::InternedString kTouchLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2 addr 0x28eef88 size 0x174 virtual false final false
 UnityEngine::InputSystem::Controls::TouchControl Initialize_ctrlTouchscreentouch2(UnityEngine::InputSystem::Utilities::InternedString kTouchLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3 addr 0x28ef0fc size 0x174 virtual false final false
 UnityEngine::InputSystem::Controls::TouchControl Initialize_ctrlTouchscreentouch3(UnityEngine::InputSystem::Utilities::InternedString kTouchLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4 addr 0x28ef270 size 0x174 virtual false final false
 UnityEngine::InputSystem::Controls::TouchControl Initialize_ctrlTouchscreentouch4(UnityEngine::InputSystem::Utilities::InternedString kTouchLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5 addr 0x28ef3e4 size 0x174 virtual false final false
 UnityEngine::InputSystem::Controls::TouchControl Initialize_ctrlTouchscreentouch5(UnityEngine::InputSystem::Utilities::InternedString kTouchLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6 addr 0x28ef558 size 0x174 virtual false final false
 UnityEngine::InputSystem::Controls::TouchControl Initialize_ctrlTouchscreentouch6(UnityEngine::InputSystem::Utilities::InternedString kTouchLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7 addr 0x28ef6cc size 0x174 virtual false final false
 UnityEngine::InputSystem::Controls::TouchControl Initialize_ctrlTouchscreentouch7(UnityEngine::InputSystem::Utilities::InternedString kTouchLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8 addr 0x28ef840 size 0x174 virtual false final false
 UnityEngine::InputSystem::Controls::TouchControl Initialize_ctrlTouchscreentouch8(UnityEngine::InputSystem::Utilities::InternedString kTouchLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9 addr 0x28ef9b4 size 0x174 virtual false final false
 UnityEngine::InputSystem::Controls::TouchControl Initialize_ctrlTouchscreentouch9(UnityEngine::InputSystem::Utilities::InternedString kTouchLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchtouchId addr 0x28efb28 size 0x1c0 virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreenprimaryTouchtouchId(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchposition addr 0x28efce8 size 0x1bc virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreenprimaryTouchposition(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchdelta addr 0x28efea4 size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::DeltaControl Initialize_ctrlTouchscreenprimaryTouchdelta(UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchpressure addr 0x28f003c size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreenprimaryTouchpressure(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchradius addr 0x28f01c8 size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreenprimaryTouchradius(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchphase addr 0x28f0360 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::TouchPhaseControl Initialize_ctrlTouchscreenprimaryTouchphase(UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchpress addr 0x28f04fc size 0x1c4 virtual false final false
 UnityEngine::InputSystem::Controls::TouchPressControl Initialize_ctrlTouchscreenprimaryTouchpress(UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchtapCount addr 0x28f06c0 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreenprimaryTouchtapCount(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchindirectTouch addr 0x28f084c size 0x1d4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreenprimaryTouchindirectTouch(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchtap addr 0x28f0a20 size 0x1d0 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreenprimaryTouchtap(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchstartTime addr 0x28f0bf0 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::DoubleControl Initialize_ctrlTouchscreenprimaryTouchstartTime(UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchstartPosition addr 0x28f0d8c size 0x1a8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreenprimaryTouchstartPosition(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchpositionx addr 0x28f0f34 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreenprimaryTouchpositionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchpositiony addr 0x28f10e4 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreenprimaryTouchpositiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchdeltaup addr 0x28f1294 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreenprimaryTouchdeltaup(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchdeltadown addr 0x28f1444 size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreenprimaryTouchdeltadown(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchdeltaleft addr 0x28f15f8 size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreenprimaryTouchdeltaleft(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchdeltaright addr 0x28f17ac size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreenprimaryTouchdeltaright(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchdeltax addr 0x28f195c size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreenprimaryTouchdeltax(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchdeltay addr 0x28f1ae8 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreenprimaryTouchdeltay(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchradiusx addr 0x28f1c74 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreenprimaryTouchradiusx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchradiusy addr 0x28f1e00 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreenprimaryTouchradiusy(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchstartPositionx addr 0x28f1f8c size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreenprimaryTouchstartPositionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchstartPositiony addr 0x28f2118 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreenprimaryTouchstartPositiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenpositionx addr 0x28f22a4 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreenpositionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenpositiony addr 0x28f2454 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreenpositiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreendeltaup addr 0x28f2604 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreendeltaup(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreendeltadown addr 0x28f27b4 size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreendeltadown(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreendeltaleft addr 0x28f2968 size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreendeltaleft(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreendeltaright addr 0x28f2b1c size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreendeltaright(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreendeltax addr 0x28f2ccc size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreendeltax(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreendeltay addr 0x28f2e58 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreendeltay(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenradiusx addr 0x28f2fe4 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreenradiusx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreenradiusy addr 0x28f3170 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreenradiusy(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0touchId addr 0x28f32fc size 0x1c0 virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreentouch0touchId(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0position addr 0x28f34bc size 0x1bc virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch0position(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0delta addr 0x28f3678 size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::DeltaControl Initialize_ctrlTouchscreentouch0delta(UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0pressure addr 0x28f3810 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch0pressure(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0radius addr 0x28f399c size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch0radius(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0phase addr 0x28f3b34 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::TouchPhaseControl Initialize_ctrlTouchscreentouch0phase(UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0press addr 0x28f3cd0 size 0x1c4 virtual false final false
 UnityEngine::InputSystem::Controls::TouchPressControl Initialize_ctrlTouchscreentouch0press(UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0tapCount addr 0x28f3e94 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreentouch0tapCount(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0indirectTouch addr 0x28f4020 size 0x1d4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreentouch0indirectTouch(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0tap addr 0x28f41f4 size 0x1c4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreentouch0tap(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0startTime addr 0x28f43b8 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::DoubleControl Initialize_ctrlTouchscreentouch0startTime(UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0startPosition addr 0x28f4554 size 0x1a8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch0startPosition(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0positionx addr 0x28f46fc size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch0positionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0positiony addr 0x28f48ac size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch0positiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0deltaup addr 0x28f4a5c size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch0deltaup(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0deltadown addr 0x28f4c0c size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch0deltadown(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0deltaleft addr 0x28f4dc0 size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch0deltaleft(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0deltaright addr 0x28f4f74 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch0deltaright(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0deltax addr 0x28f5124 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch0deltax(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0deltay addr 0x28f52b0 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch0deltay(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0radiusx addr 0x28f543c size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch0radiusx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0radiusy addr 0x28f55c8 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch0radiusy(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0startPositionx addr 0x28f5754 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch0startPositionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0startPositiony addr 0x28f58e0 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch0startPositiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1touchId addr 0x28f5a6c size 0x1c0 virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreentouch1touchId(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1position addr 0x28f5c2c size 0x1bc virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch1position(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1delta addr 0x28f5de8 size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::DeltaControl Initialize_ctrlTouchscreentouch1delta(UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1pressure addr 0x28f5f80 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch1pressure(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1radius addr 0x28f610c size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch1radius(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1phase addr 0x28f62a4 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::TouchPhaseControl Initialize_ctrlTouchscreentouch1phase(UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1press addr 0x28f6440 size 0x1c4 virtual false final false
 UnityEngine::InputSystem::Controls::TouchPressControl Initialize_ctrlTouchscreentouch1press(UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1tapCount addr 0x28f6604 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreentouch1tapCount(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1indirectTouch addr 0x28f6790 size 0x1d4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreentouch1indirectTouch(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1tap addr 0x28f6964 size 0x1c4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreentouch1tap(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1startTime addr 0x28f6b28 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::DoubleControl Initialize_ctrlTouchscreentouch1startTime(UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1startPosition addr 0x28f6cc4 size 0x1a8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch1startPosition(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1positionx addr 0x28f6e6c size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch1positionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1positiony addr 0x28f701c size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch1positiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1deltaup addr 0x28f71cc size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch1deltaup(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1deltadown addr 0x28f737c size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch1deltadown(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1deltaleft addr 0x28f7530 size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch1deltaleft(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1deltaright addr 0x28f76e4 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch1deltaright(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1deltax addr 0x28f7894 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch1deltax(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1deltay addr 0x28f7a20 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch1deltay(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1radiusx addr 0x28f7bac size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch1radiusx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1radiusy addr 0x28f7d38 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch1radiusy(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1startPositionx addr 0x28f7ec4 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch1startPositionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1startPositiony addr 0x28f8050 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch1startPositiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2touchId addr 0x28f81dc size 0x1c0 virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreentouch2touchId(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2position addr 0x28f839c size 0x1bc virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch2position(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2delta addr 0x28f8558 size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::DeltaControl Initialize_ctrlTouchscreentouch2delta(UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2pressure addr 0x28f86f0 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch2pressure(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2radius addr 0x28f887c size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch2radius(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2phase addr 0x28f8a14 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::TouchPhaseControl Initialize_ctrlTouchscreentouch2phase(UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2press addr 0x28f8bb0 size 0x1c4 virtual false final false
 UnityEngine::InputSystem::Controls::TouchPressControl Initialize_ctrlTouchscreentouch2press(UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2tapCount addr 0x28f8d74 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreentouch2tapCount(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2indirectTouch addr 0x28f8f00 size 0x1d4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreentouch2indirectTouch(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2tap addr 0x28f90d4 size 0x1c4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreentouch2tap(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2startTime addr 0x28f9298 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::DoubleControl Initialize_ctrlTouchscreentouch2startTime(UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2startPosition addr 0x28f9434 size 0x1a8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch2startPosition(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2positionx addr 0x28f95dc size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch2positionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2positiony addr 0x28f978c size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch2positiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2deltaup addr 0x28f993c size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch2deltaup(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2deltadown addr 0x28f9aec size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch2deltadown(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2deltaleft addr 0x28f9ca0 size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch2deltaleft(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2deltaright addr 0x28f9e54 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch2deltaright(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2deltax addr 0x28fa004 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch2deltax(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2deltay addr 0x28fa190 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch2deltay(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2radiusx addr 0x28fa31c size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch2radiusx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2radiusy addr 0x28fa4a8 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch2radiusy(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2startPositionx addr 0x28fa634 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch2startPositionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2startPositiony addr 0x28fa7c0 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch2startPositiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3touchId addr 0x28fa94c size 0x1c0 virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreentouch3touchId(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3position addr 0x28fab0c size 0x1bc virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch3position(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3delta addr 0x28facc8 size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::DeltaControl Initialize_ctrlTouchscreentouch3delta(UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3pressure addr 0x28fae60 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch3pressure(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3radius addr 0x28fafec size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch3radius(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3phase addr 0x28fb184 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::TouchPhaseControl Initialize_ctrlTouchscreentouch3phase(UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3press addr 0x28fb320 size 0x1c4 virtual false final false
 UnityEngine::InputSystem::Controls::TouchPressControl Initialize_ctrlTouchscreentouch3press(UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3tapCount addr 0x28fb4e4 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreentouch3tapCount(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3indirectTouch addr 0x28fb670 size 0x1d4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreentouch3indirectTouch(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3tap addr 0x28fb844 size 0x1c4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreentouch3tap(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3startTime addr 0x28fba08 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::DoubleControl Initialize_ctrlTouchscreentouch3startTime(UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3startPosition addr 0x28fbba4 size 0x1a8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch3startPosition(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3positionx addr 0x28fbd4c size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch3positionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3positiony addr 0x28fbefc size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch3positiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3deltaup addr 0x28fc0ac size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch3deltaup(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3deltadown addr 0x28fc25c size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch3deltadown(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3deltaleft addr 0x28fc410 size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch3deltaleft(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3deltaright addr 0x28fc5c4 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch3deltaright(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3deltax addr 0x28fc774 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch3deltax(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3deltay addr 0x28fc900 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch3deltay(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3radiusx addr 0x28fca8c size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch3radiusx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3radiusy addr 0x28fcc18 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch3radiusy(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3startPositionx addr 0x28fcda4 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch3startPositionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3startPositiony addr 0x28fcf30 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch3startPositiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4touchId addr 0x28fd0bc size 0x1c0 virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreentouch4touchId(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4position addr 0x28fd27c size 0x1bc virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch4position(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4delta addr 0x28fd438 size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::DeltaControl Initialize_ctrlTouchscreentouch4delta(UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4pressure addr 0x28fd5d0 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch4pressure(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4radius addr 0x28fd75c size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch4radius(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4phase addr 0x28fd8f4 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::TouchPhaseControl Initialize_ctrlTouchscreentouch4phase(UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4press addr 0x28fda90 size 0x1c4 virtual false final false
 UnityEngine::InputSystem::Controls::TouchPressControl Initialize_ctrlTouchscreentouch4press(UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4tapCount addr 0x28fdc54 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreentouch4tapCount(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4indirectTouch addr 0x28fdde0 size 0x1d4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreentouch4indirectTouch(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4tap addr 0x28fdfb4 size 0x1c4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreentouch4tap(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4startTime addr 0x28fe178 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::DoubleControl Initialize_ctrlTouchscreentouch4startTime(UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4startPosition addr 0x28fe314 size 0x1a8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch4startPosition(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4positionx addr 0x28fe4bc size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch4positionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4positiony addr 0x28fe66c size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch4positiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4deltaup addr 0x28fe81c size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch4deltaup(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4deltadown addr 0x28fe9cc size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch4deltadown(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4deltaleft addr 0x28feb80 size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch4deltaleft(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4deltaright addr 0x28fed34 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch4deltaright(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4deltax addr 0x28feee4 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch4deltax(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4deltay addr 0x28ff070 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch4deltay(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4radiusx addr 0x28ff1fc size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch4radiusx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4radiusy addr 0x28ff388 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch4radiusy(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4startPositionx addr 0x28ff514 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch4startPositionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4startPositiony addr 0x28ff6a0 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch4startPositiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5touchId addr 0x28ff82c size 0x1c0 virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreentouch5touchId(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5position addr 0x28ff9ec size 0x1bc virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch5position(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5delta addr 0x28ffba8 size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::DeltaControl Initialize_ctrlTouchscreentouch5delta(UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5pressure addr 0x28ffd40 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch5pressure(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5radius addr 0x28ffecc size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch5radius(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5phase addr 0x2900064 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::TouchPhaseControl Initialize_ctrlTouchscreentouch5phase(UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5press addr 0x2900200 size 0x1c4 virtual false final false
 UnityEngine::InputSystem::Controls::TouchPressControl Initialize_ctrlTouchscreentouch5press(UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5tapCount addr 0x29003c4 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreentouch5tapCount(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5indirectTouch addr 0x2900550 size 0x1d4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreentouch5indirectTouch(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5tap addr 0x2900724 size 0x1c4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreentouch5tap(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5startTime addr 0x29008e8 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::DoubleControl Initialize_ctrlTouchscreentouch5startTime(UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5startPosition addr 0x2900a84 size 0x1a8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch5startPosition(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5positionx addr 0x2900c2c size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch5positionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5positiony addr 0x2900ddc size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch5positiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5deltaup addr 0x2900f8c size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch5deltaup(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5deltadown addr 0x290113c size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch5deltadown(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5deltaleft addr 0x29012f0 size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch5deltaleft(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5deltaright addr 0x29014a4 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch5deltaright(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5deltax addr 0x2901654 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch5deltax(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5deltay addr 0x29017e0 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch5deltay(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5radiusx addr 0x290196c size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch5radiusx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5radiusy addr 0x2901af8 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch5radiusy(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5startPositionx addr 0x2901c84 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch5startPositionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5startPositiony addr 0x2901e10 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch5startPositiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6touchId addr 0x2901f9c size 0x1c0 virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreentouch6touchId(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6position addr 0x290215c size 0x1bc virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch6position(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6delta addr 0x2902318 size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::DeltaControl Initialize_ctrlTouchscreentouch6delta(UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6pressure addr 0x29024b0 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch6pressure(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6radius addr 0x290263c size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch6radius(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6phase addr 0x29027d4 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::TouchPhaseControl Initialize_ctrlTouchscreentouch6phase(UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6press addr 0x2902970 size 0x1c4 virtual false final false
 UnityEngine::InputSystem::Controls::TouchPressControl Initialize_ctrlTouchscreentouch6press(UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6tapCount addr 0x2902b34 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreentouch6tapCount(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6indirectTouch addr 0x2902cc0 size 0x1d4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreentouch6indirectTouch(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6tap addr 0x2902e94 size 0x1c4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreentouch6tap(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6startTime addr 0x2903058 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::DoubleControl Initialize_ctrlTouchscreentouch6startTime(UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6startPosition addr 0x29031f4 size 0x1a8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch6startPosition(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6positionx addr 0x290339c size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch6positionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6positiony addr 0x290354c size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch6positiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6deltaup addr 0x29036fc size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch6deltaup(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6deltadown addr 0x29038ac size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch6deltadown(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6deltaleft addr 0x2903a60 size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch6deltaleft(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6deltaright addr 0x2903c14 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch6deltaright(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6deltax addr 0x2903dc4 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch6deltax(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6deltay addr 0x2903f50 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch6deltay(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6radiusx addr 0x29040dc size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch6radiusx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6radiusy addr 0x2904268 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch6radiusy(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6startPositionx addr 0x29043f4 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch6startPositionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6startPositiony addr 0x2904580 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch6startPositiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7touchId addr 0x290470c size 0x1c0 virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreentouch7touchId(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7position addr 0x29048cc size 0x1bc virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch7position(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7delta addr 0x2904a88 size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::DeltaControl Initialize_ctrlTouchscreentouch7delta(UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7pressure addr 0x2904c20 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch7pressure(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7radius addr 0x2904dac size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch7radius(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7phase addr 0x2904f44 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::TouchPhaseControl Initialize_ctrlTouchscreentouch7phase(UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7press addr 0x29050e0 size 0x1c4 virtual false final false
 UnityEngine::InputSystem::Controls::TouchPressControl Initialize_ctrlTouchscreentouch7press(UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7tapCount addr 0x29052a4 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreentouch7tapCount(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7indirectTouch addr 0x2905430 size 0x1d4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreentouch7indirectTouch(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7tap addr 0x2905604 size 0x1c4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreentouch7tap(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7startTime addr 0x29057c8 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::DoubleControl Initialize_ctrlTouchscreentouch7startTime(UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7startPosition addr 0x2905964 size 0x1a8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch7startPosition(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7positionx addr 0x2905b0c size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch7positionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7positiony addr 0x2905cbc size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch7positiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7deltaup addr 0x2905e6c size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch7deltaup(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7deltadown addr 0x290601c size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch7deltadown(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7deltaleft addr 0x29061d0 size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch7deltaleft(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7deltaright addr 0x2906384 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch7deltaright(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7deltax addr 0x2906534 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch7deltax(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7deltay addr 0x29066c0 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch7deltay(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7radiusx addr 0x290684c size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch7radiusx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7radiusy addr 0x29069d8 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch7radiusy(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7startPositionx addr 0x2906b64 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch7startPositionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7startPositiony addr 0x2906cf0 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch7startPositiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8touchId addr 0x2906e7c size 0x1c0 virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreentouch8touchId(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8position addr 0x290703c size 0x1bc virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch8position(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8delta addr 0x29071f8 size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::DeltaControl Initialize_ctrlTouchscreentouch8delta(UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8pressure addr 0x2907390 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch8pressure(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8radius addr 0x290751c size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch8radius(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8phase addr 0x29076b4 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::TouchPhaseControl Initialize_ctrlTouchscreentouch8phase(UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8press addr 0x2907850 size 0x1c4 virtual false final false
 UnityEngine::InputSystem::Controls::TouchPressControl Initialize_ctrlTouchscreentouch8press(UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8tapCount addr 0x2907a14 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreentouch8tapCount(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8indirectTouch addr 0x2907ba0 size 0x1d4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreentouch8indirectTouch(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8tap addr 0x2907d74 size 0x1c4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreentouch8tap(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8startTime addr 0x2907f38 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::DoubleControl Initialize_ctrlTouchscreentouch8startTime(UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8startPosition addr 0x29080d4 size 0x1a8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch8startPosition(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8positionx addr 0x290827c size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch8positionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8positiony addr 0x290842c size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch8positiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8deltaup addr 0x29085dc size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch8deltaup(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8deltadown addr 0x290878c size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch8deltadown(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8deltaleft addr 0x2908940 size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch8deltaleft(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8deltaright addr 0x2908af4 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch8deltaright(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8deltax addr 0x2908ca4 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch8deltax(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8deltay addr 0x2908e30 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch8deltay(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8radiusx addr 0x2908fbc size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch8radiusx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8radiusy addr 0x2909148 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch8radiusy(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8startPositionx addr 0x29092d4 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch8startPositionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8startPositiony addr 0x2909460 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch8startPositiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9touchId addr 0x29095ec size 0x1c0 virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreentouch9touchId(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9position addr 0x29097ac size 0x1bc virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch9position(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9delta addr 0x2909968 size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::DeltaControl Initialize_ctrlTouchscreentouch9delta(UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9pressure addr 0x2909b00 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch9pressure(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9radius addr 0x2909c8c size 0x198 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch9radius(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9phase addr 0x2909e24 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::TouchPhaseControl Initialize_ctrlTouchscreentouch9phase(UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9press addr 0x2909fc0 size 0x1c4 virtual false final false
 UnityEngine::InputSystem::Controls::TouchPressControl Initialize_ctrlTouchscreentouch9press(UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9tapCount addr 0x290a184 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl Initialize_ctrlTouchscreentouch9tapCount(UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9indirectTouch addr 0x290a310 size 0x1d4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreentouch9indirectTouch(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9tap addr 0x290a4e4 size 0x1c4 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl Initialize_ctrlTouchscreentouch9tap(UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9startTime addr 0x290a6a8 size 0x19c virtual false final false
 UnityEngine::InputSystem::Controls::DoubleControl Initialize_ctrlTouchscreentouch9startTime(UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9startPosition addr 0x290a844 size 0x1a8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control Initialize_ctrlTouchscreentouch9startPosition(UnityEngine::InputSystem::Utilities::InternedString kVector2Layout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9positionx addr 0x290a9ec size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch9positionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9positiony addr 0x290ab9c size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch9positiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9deltaup addr 0x290ad4c size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch9deltaup(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9deltadown addr 0x290aefc size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch9deltadown(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9deltaleft addr 0x290b0b0 size 0x1b4 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch9deltaleft(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9deltaright addr 0x290b264 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch9deltaright(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9deltax addr 0x290b414 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch9deltax(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9deltay addr 0x290b5a0 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch9deltay(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9radiusx addr 0x290b72c size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch9radiusx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9radiusy addr 0x290b8b8 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch9radiusy(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9startPositionx addr 0x290ba44 size 0x18c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch9startPositionx(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9startPositiony addr 0x290bbd0 size 0x118c virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl Initialize_ctrlTouchscreentouch9startPositiony(UnityEngine::InputSystem::Utilities::InternedString kAxisLayout, UnityEngine::InputSystem::InputControl parent) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
NEED_NO_BOX(UnityEngine::InputSystem::FastTouchscreen);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::FastTouchscreen, "UnityEngine.InputSystem", "FastTouchscreen");
