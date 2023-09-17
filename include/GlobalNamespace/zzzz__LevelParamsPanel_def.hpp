#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelParamsPanel;
}
// Type: ::LevelParamsPanel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5880))
// CS Name: LevelParamsPanel
class CORDL_TYPE LevelParamsPanel : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~LevelParamsPanel() = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelParamsPanel", modifiers: " const&", def_value: None }]
constexpr LevelParamsPanel(LevelParamsPanel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelParamsPanel", modifiers: "&&", def_value: None }]
constexpr LevelParamsPanel(LevelParamsPanel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LevelParamsPanel(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr LevelParamsPanel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LevelParamsPanel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LevelParamsPanel& operator=(LevelParamsPanel&& o) noexcept = default;
  constexpr LevelParamsPanel& operator=(LevelParamsPanel const& o) noexcept = default;
                


// Fields

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__notesPerSecondText, put=__set__notesPerSecondText))  _notesPerSecondText;

constexpr void __set__notesPerSecondText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__notesPerSecondText() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__notesCountText, put=__set__notesCountText))  _notesCountText;

constexpr void __set__notesCountText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__notesCountText() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__obstaclesCountText, put=__set__obstaclesCountText))  _obstaclesCountText;

constexpr void __set__obstaclesCountText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__obstaclesCountText() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__bombsCountText, put=__set__bombsCountText))  _bombsCountText;

constexpr void __set__bombsCountText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__bombsCountText() const;


// Properties

 float_t __declspec(property(put=set_notesPerSecond))  notesPerSecond;

 int32_t __declspec(property(put=set_notesCount))  notesCount;

 int32_t __declspec(property(put=set_obstaclesCount))  obstaclesCount;

 int32_t __declspec(property(put=set_bombsCount))  bombsCount;


// Methods

/// @brief Method set_notesPerSecond addr 0x218bf30 size 0x80 virtual false final false
 void set_notesPerSecond(float_t value) ;

/// @brief Method set_notesCount addr 0x218bfb0 size 0x48 virtual false final false
 void set_notesCount(int32_t value) ;

/// @brief Method set_obstaclesCount addr 0x218bff8 size 0x48 virtual false final false
 void set_obstaclesCount(int32_t value) ;

/// @brief Method set_bombsCount addr 0x218c040 size 0x48 virtual false final false
 void set_bombsCount(int32_t value) ;

// Ctor Parameters []
explicit LevelParamsPanel() ;

/// @brief Method .ctor addr 0x218c088 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::LevelParamsPanel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelParamsPanel, "", "LevelParamsPanel");
