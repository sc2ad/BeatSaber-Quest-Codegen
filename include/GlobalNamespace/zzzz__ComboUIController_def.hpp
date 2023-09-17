#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
class Animator;
}
namespace GlobalNamespace {
class IComboController;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class ComboUIController;
}
// Type: ::ComboUIController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5130))
// CS Name: ComboUIController
class CORDL_TYPE ComboUIController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~ComboUIController() = default;

// Ctor Parameters [CppParam { name: "", ty: "ComboUIController", modifiers: " const&", def_value: None }]
constexpr ComboUIController(ComboUIController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ComboUIController", modifiers: "&&", def_value: None }]
constexpr ComboUIController(ComboUIController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ComboUIController(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ComboUIController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ComboUIController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ComboUIController& operator=(ComboUIController&& o) noexcept = default;
  constexpr ComboUIController& operator=(ComboUIController const& o) noexcept = default;
                


// Fields

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__comboText, put=__set__comboText))  _comboText;

constexpr void __set__comboText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__comboText() const;

 ::UnityEngine::Animator __declspec(property(get=__get__animator, put=__set__animator))  _animator;

constexpr void __set__animator(::UnityEngine::Animator value) ;

constexpr ::UnityEngine::Animator __get__animator() const;

 ::GlobalNamespace::IComboController __declspec(property(get=__get__comboController, put=__set__comboController))  _comboController;

constexpr void __set__comboController(::GlobalNamespace::IComboController value) ;

constexpr ::GlobalNamespace::IComboController __get__comboController() const;

 int32_t __declspec(property(get=__get__comboLostId, put=__set__comboLostId))  _comboLostId;

constexpr void __set__comboLostId(int32_t value) ;

constexpr int32_t __get__comboLostId() const;

 bool __declspec(property(get=__get__fullComboLost, put=__set__fullComboLost))  _fullComboLost;

constexpr void __set__fullComboLost(bool value) ;

constexpr bool __get__fullComboLost() const;


// Methods

/// @brief Method Start addr 0x22744c0 size 0x88 virtual false final false
 void Start() ;

/// @brief Method OnEnable addr 0x2274818 size 0x4 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x227481c size 0x4 virtual false final false
 void OnDisable() ;

/// @brief Method RegisterForEvents addr 0x2274548 size 0x2d0 virtual false final false
 void RegisterForEvents() ;

/// @brief Method UnregisterFromEvents addr 0x2274820 size 0x1b8 virtual false final false
 void UnregisterFromEvents() ;

/// @brief Method HandleComboDidChange addr 0x22749d8 size 0x48 virtual false final false
 void HandleComboDidChange(int32_t combo) ;

/// @brief Method HandleComboBreakingEventHappened addr 0x2274a20 size 0x3c virtual false final false
 void HandleComboBreakingEventHappened() ;

// Ctor Parameters []
explicit ComboUIController() ;

/// @brief Method .ctor addr 0x2274a5c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ComboUIController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ComboUIController, "", "ComboUIController");
