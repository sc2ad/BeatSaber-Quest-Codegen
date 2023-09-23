#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace UnityEngine::UI {
class ToggleGroup;
}
namespace UnityEngine::UI {
class UnityEngine__UI__ToggleGroup____c;
}
// Type: ::<>c
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13071))
// CS Name: UnityEngine.UI.ToggleGroup::<>c
class CORDL_TYPE UnityEngine__UI__ToggleGroup____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__UI__ToggleGroup____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__ToggleGroup____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UI__ToggleGroup____c(UnityEngine__UI__ToggleGroup____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__ToggleGroup____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UI__ToggleGroup____c(UnityEngine__UI__ToggleGroup____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__ToggleGroup____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UI__ToggleGroup____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UI__ToggleGroup____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UI__ToggleGroup____c& operator=(UnityEngine__UI__ToggleGroup____c&& o) noexcept = default;
  constexpr UnityEngine__UI__ToggleGroup____c& operator=(UnityEngine__UI__ToggleGroup____c const& o) noexcept = default;
                


// Fields

static UnityEngine::UI::UnityEngine__UI__ToggleGroup____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::UI::UnityEngine__UI__ToggleGroup____c value) ;

static UnityEngine::UI::UnityEngine__UI__ToggleGroup____c __get___9() ;

static System::Predicate_1<UnityEngine::UI::Toggle> __declspec(property(get=__get___9__13_0, put=__set___9__13_0))  __9__13_0;

static void __set___9__13_0(System::Predicate_1<UnityEngine::UI::Toggle> value) ;

static System::Predicate_1<UnityEngine::UI::Toggle> __get___9__13_0() ;

static System::Func_2<UnityEngine::UI::Toggle,bool> __declspec(property(get=__get___9__14_0, put=__set___9__14_0))  __9__14_0;

static void __set___9__14_0(System::Func_2<UnityEngine::UI::Toggle,bool> value) ;

static System::Func_2<UnityEngine::UI::Toggle,bool> __get___9__14_0() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__UI__ToggleGroup____c() ;

/// @brief Method .ctor addr 0x2c14754 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <AnyTogglesOn>b__13_0 addr 0x2c1475c size 0x18 virtual false final false
 bool _AnyTogglesOn_b__13_0(UnityEngine::UI::Toggle x) ;

/// @brief Method <ActiveToggles>b__14_0 addr 0x2c14774 size 0x18 virtual false final false
 bool _ActiveToggles_b__14_0(UnityEngine::UI::Toggle x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: UnityEngine.UI::ToggleGroup
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13153))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13072))
// CS Name: UnityEngine.UI.ToggleGroup
class CORDL_TYPE ToggleGroup : public UnityEngine::EventSystems::UIBehaviour {
public:
// Declarations
using __c = UnityEngine::UI::UnityEngine__UI__ToggleGroup____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ToggleGroup() = default;

// Ctor Parameters [CppParam { name: "", ty: "ToggleGroup", modifiers: " const&", def_value: None }]
constexpr ToggleGroup(ToggleGroup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ToggleGroup", modifiers: "&&", def_value: None }]
constexpr ToggleGroup(ToggleGroup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ToggleGroup(void* ptr) noexcept : UnityEngine::EventSystems::UIBehaviour(ptr) {
}


  constexpr ToggleGroup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ToggleGroup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ToggleGroup& operator=(ToggleGroup&& o) noexcept = default;
  constexpr ToggleGroup& operator=(ToggleGroup const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_m_AllowSwitchOff, put=__set_m_AllowSwitchOff))  m_AllowSwitchOff;

constexpr void __set_m_AllowSwitchOff(bool value) ;

constexpr bool __get_m_AllowSwitchOff() const;

 System::Collections::Generic::List_1<UnityEngine::UI::Toggle> __declspec(property(get=__get_m_Toggles, put=__set_m_Toggles))  m_Toggles;

constexpr void __set_m_Toggles(System::Collections::Generic::List_1<UnityEngine::UI::Toggle> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UI::Toggle> __get_m_Toggles() const;


// Properties

 bool __declspec(property(get=get_allowSwitchOff, put=set_allowSwitchOff))  allowSwitchOff;


// Methods

/// @brief Method get_allowSwitchOff addr 0x2c1425c size 0x8 virtual false final false
 bool get_allowSwitchOff() ;

/// @brief Method set_allowSwitchOff addr 0x2c14264 size 0xc virtual false final false
 void set_allowSwitchOff(bool value) ;

// Ctor Parameters []
explicit ToggleGroup() ;

/// @brief Method .ctor addr 0x2c14270 size 0x7c virtual false final false
 void _ctor() ;

/// @brief Method Start addr 0x2c142ec size 0x1c virtual true final false
 void Start() ;

/// @brief Method OnEnable addr 0x2c14308 size 0x1c virtual true final false
 void OnEnable() ;

/// @brief Method ValidateToggleIsInGroup addr 0x2c14324 size 0x158 virtual false final false
 void ValidateToggleIsInGroup(UnityEngine::UI::Toggle toggle) ;

/// @brief Method NotifyToggleOn addr 0x2c13f68 size 0x10c virtual false final false
 void NotifyToggleOn(UnityEngine::UI::Toggle toggle, bool sendCallback) ;

/// @brief Method UnregisterToggle addr 0x2c13e04 size 0x90 virtual false final false
 void UnregisterToggle(UnityEngine::UI::Toggle toggle) ;

/// @brief Method RegisterToggle addr 0x2c13e94 size 0xd4 virtual false final false
 void RegisterToggle(UnityEngine::UI::Toggle toggle) ;

/// @brief Method EnsureValidState addr 0x2c13734 size 0x3ec virtual false final false
 void EnsureValidState() ;

/// @brief Method AnyTogglesOn addr 0x2c14094 size 0x13c virtual false final false
 bool AnyTogglesOn() ;

/// @brief Method ActiveToggles addr 0x2c1447c size 0xfc virtual false final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::UI::Toggle> ActiveToggles() ;

/// @brief Method GetFirstActiveToggle addr 0x2c14578 size 0x88 virtual false final false
 UnityEngine::UI::Toggle GetFirstActiveToggle() ;

/// @brief Method SetAllTogglesOff addr 0x2c14600 size 0xf0 virtual false final false
 void SetAllTogglesOff(bool sendCallback) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
NEED_NO_BOX(UnityEngine::UI::ToggleGroup);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::ToggleGroup, "UnityEngine.UI", "ToggleGroup");
NEED_NO_BOX(UnityEngine::UI::UnityEngine__UI__ToggleGroup____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__ToggleGroup____c, "UnityEngine.UI", "ToggleGroup/<>c");
