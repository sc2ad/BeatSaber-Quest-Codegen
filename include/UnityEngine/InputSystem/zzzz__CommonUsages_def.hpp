#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class CommonUsages;
}
// Type: UnityEngine.InputSystem::CommonUsages
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6296))
// CS Name: UnityEngine.InputSystem.CommonUsages
class CORDL_TYPE CommonUsages : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CommonUsages() = default;

// Ctor Parameters [CppParam { name: "", ty: "CommonUsages", modifiers: " const&", def_value: None }]
constexpr CommonUsages(CommonUsages const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CommonUsages", modifiers: "&&", def_value: None }]
constexpr CommonUsages(CommonUsages&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CommonUsages(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CommonUsages& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CommonUsages& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CommonUsages& operator=(CommonUsages&& o) noexcept = default;
  constexpr CommonUsages& operator=(CommonUsages const& o) noexcept = default;
                


// Fields

static UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get_Primary2DMotion, put=__set_Primary2DMotion))  Primary2DMotion;

static void __set_Primary2DMotion(UnityEngine::InputSystem::Utilities::InternedString value) ;

static UnityEngine::InputSystem::Utilities::InternedString __get_Primary2DMotion() ;

static UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get_Secondary2DMotion, put=__set_Secondary2DMotion))  Secondary2DMotion;

static void __set_Secondary2DMotion(UnityEngine::InputSystem::Utilities::InternedString value) ;

static UnityEngine::InputSystem::Utilities::InternedString __get_Secondary2DMotion() ;

static UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get_PrimaryAction, put=__set_PrimaryAction))  PrimaryAction;

static void __set_PrimaryAction(UnityEngine::InputSystem::Utilities::InternedString value) ;

static UnityEngine::InputSystem::Utilities::InternedString __get_PrimaryAction() ;

static UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get_SecondaryAction, put=__set_SecondaryAction))  SecondaryAction;

static void __set_SecondaryAction(UnityEngine::InputSystem::Utilities::InternedString value) ;

static UnityEngine::InputSystem::Utilities::InternedString __get_SecondaryAction() ;

static UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get_PrimaryTrigger, put=__set_PrimaryTrigger))  PrimaryTrigger;

static void __set_PrimaryTrigger(UnityEngine::InputSystem::Utilities::InternedString value) ;

static UnityEngine::InputSystem::Utilities::InternedString __get_PrimaryTrigger() ;

static UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get_SecondaryTrigger, put=__set_SecondaryTrigger))  SecondaryTrigger;

static void __set_SecondaryTrigger(UnityEngine::InputSystem::Utilities::InternedString value) ;

static UnityEngine::InputSystem::Utilities::InternedString __get_SecondaryTrigger() ;

static UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get_Modifier, put=__set_Modifier))  Modifier;

static void __set_Modifier(UnityEngine::InputSystem::Utilities::InternedString value) ;

static UnityEngine::InputSystem::Utilities::InternedString __get_Modifier() ;

static UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get_Position, put=__set_Position))  Position;

static void __set_Position(UnityEngine::InputSystem::Utilities::InternedString value) ;

static UnityEngine::InputSystem::Utilities::InternedString __get_Position() ;

static UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get_Orientation, put=__set_Orientation))  Orientation;

static void __set_Orientation(UnityEngine::InputSystem::Utilities::InternedString value) ;

static UnityEngine::InputSystem::Utilities::InternedString __get_Orientation() ;

static UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get_Hatswitch, put=__set_Hatswitch))  Hatswitch;

static void __set_Hatswitch(UnityEngine::InputSystem::Utilities::InternedString value) ;

static UnityEngine::InputSystem::Utilities::InternedString __get_Hatswitch() ;

static UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get_Back, put=__set_Back))  Back;

static void __set_Back(UnityEngine::InputSystem::Utilities::InternedString value) ;

static UnityEngine::InputSystem::Utilities::InternedString __get_Back() ;

static UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get_Forward, put=__set_Forward))  Forward;

static void __set_Forward(UnityEngine::InputSystem::Utilities::InternedString value) ;

static UnityEngine::InputSystem::Utilities::InternedString __get_Forward() ;

static UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get_Menu, put=__set_Menu))  Menu;

static void __set_Menu(UnityEngine::InputSystem::Utilities::InternedString value) ;

static UnityEngine::InputSystem::Utilities::InternedString __get_Menu() ;

static UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get_Submit, put=__set_Submit))  Submit;

static void __set_Submit(UnityEngine::InputSystem::Utilities::InternedString value) ;

static UnityEngine::InputSystem::Utilities::InternedString __get_Submit() ;

static UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get_Cancel, put=__set_Cancel))  Cancel;

static void __set_Cancel(UnityEngine::InputSystem::Utilities::InternedString value) ;

static UnityEngine::InputSystem::Utilities::InternedString __get_Cancel() ;

static UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get_Horizontal, put=__set_Horizontal))  Horizontal;

static void __set_Horizontal(UnityEngine::InputSystem::Utilities::InternedString value) ;

static UnityEngine::InputSystem::Utilities::InternedString __get_Horizontal() ;

static UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get_Vertical, put=__set_Vertical))  Vertical;

static void __set_Vertical(UnityEngine::InputSystem::Utilities::InternedString value) ;

static UnityEngine::InputSystem::Utilities::InternedString __get_Vertical() ;

static UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get_Twist, put=__set_Twist))  Twist;

static void __set_Twist(UnityEngine::InputSystem::Utilities::InternedString value) ;

static UnityEngine::InputSystem::Utilities::InternedString __get_Twist() ;

static UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get_Pressure, put=__set_Pressure))  Pressure;

static void __set_Pressure(UnityEngine::InputSystem::Utilities::InternedString value) ;

static UnityEngine::InputSystem::Utilities::InternedString __get_Pressure() ;

static UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get_ScrollHorizontal, put=__set_ScrollHorizontal))  ScrollHorizontal;

static void __set_ScrollHorizontal(UnityEngine::InputSystem::Utilities::InternedString value) ;

static UnityEngine::InputSystem::Utilities::InternedString __get_ScrollHorizontal() ;

static UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get_ScrollVertical, put=__set_ScrollVertical))  ScrollVertical;

static void __set_ScrollVertical(UnityEngine::InputSystem::Utilities::InternedString value) ;

static UnityEngine::InputSystem::Utilities::InternedString __get_ScrollVertical() ;

static UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get_Point, put=__set_Point))  Point;

static void __set_Point(UnityEngine::InputSystem::Utilities::InternedString value) ;

static UnityEngine::InputSystem::Utilities::InternedString __get_Point() ;

static UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get_LowFreqMotor, put=__set_LowFreqMotor))  LowFreqMotor;

static void __set_LowFreqMotor(UnityEngine::InputSystem::Utilities::InternedString value) ;

static UnityEngine::InputSystem::Utilities::InternedString __get_LowFreqMotor() ;

static UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get_HighFreqMotor, put=__set_HighFreqMotor))  HighFreqMotor;

static void __set_HighFreqMotor(UnityEngine::InputSystem::Utilities::InternedString value) ;

static UnityEngine::InputSystem::Utilities::InternedString __get_HighFreqMotor() ;

static UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get_LeftHand, put=__set_LeftHand))  LeftHand;

static void __set_LeftHand(UnityEngine::InputSystem::Utilities::InternedString value) ;

static UnityEngine::InputSystem::Utilities::InternedString __get_LeftHand() ;

static UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get_RightHand, put=__set_RightHand))  RightHand;

static void __set_RightHand(UnityEngine::InputSystem::Utilities::InternedString value) ;

static UnityEngine::InputSystem::Utilities::InternedString __get_RightHand() ;

static UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get_BatteryStrength, put=__set_BatteryStrength))  BatteryStrength;

static void __set_BatteryStrength(UnityEngine::InputSystem::Utilities::InternedString value) ;

static UnityEngine::InputSystem::Utilities::InternedString __get_BatteryStrength() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
NEED_NO_BOX(UnityEngine::InputSystem::CommonUsages);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::CommonUsages, "UnityEngine.InputSystem", "CommonUsages");
