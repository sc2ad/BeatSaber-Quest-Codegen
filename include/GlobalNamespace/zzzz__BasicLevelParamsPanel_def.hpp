#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class BasicLevelParamsPanel;
}
// Type: ::BasicLevelParamsPanel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5857))
// CS Name: BasicLevelParamsPanel
class CORDL_TYPE BasicLevelParamsPanel : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~BasicLevelParamsPanel() = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicLevelParamsPanel", modifiers: " const&", def_value: None }]
constexpr BasicLevelParamsPanel(BasicLevelParamsPanel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicLevelParamsPanel", modifiers: "&&", def_value: None }]
constexpr BasicLevelParamsPanel(BasicLevelParamsPanel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BasicLevelParamsPanel(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BasicLevelParamsPanel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BasicLevelParamsPanel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BasicLevelParamsPanel& operator=(BasicLevelParamsPanel&& o) noexcept = default;
  constexpr BasicLevelParamsPanel& operator=(BasicLevelParamsPanel const& o) noexcept = default;
                


// Fields

 TMPro::TextMeshProUGUI __declspec(property(get=__get__durationText, put=__set__durationText))  _durationText;

constexpr void __set__durationText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__durationText() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__bpmText, put=__set__bpmText))  _bpmText;

constexpr void __set__bpmText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__bpmText() const;


// Properties

 float_t __declspec(property(put=set_duration))  duration;

 float_t __declspec(property(put=set_bpm))  bpm;


// Methods

/// @brief Method set_duration addr 0x2184968 size 0x34 virtual false final false
 void set_duration(float_t value) ;

/// @brief Method set_bpm addr 0x218499c size 0x48 virtual false final false
 void set_bpm(float_t value) ;

static GlobalNamespace::BasicLevelParamsPanel New_ctor() ;

/// @brief Method .ctor addr 0x21849e4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BasicLevelParamsPanel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BasicLevelParamsPanel, "", "BasicLevelParamsPanel");
