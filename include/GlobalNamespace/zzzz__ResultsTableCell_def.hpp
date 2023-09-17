#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__TableCellWithSeparator_def.hpp"
#include <cstdint>
namespace {
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class ResultsTableCell;
}
// Type: ::ResultsTableCell
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13556))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5898))
// CS Name: ResultsTableCell
class CORDL_TYPE ResultsTableCell : public ::GlobalNamespace::TableCellWithSeparator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~ResultsTableCell() = default;

// Ctor Parameters [CppParam { name: "", ty: "ResultsTableCell", modifiers: " const&", def_value: None }]
constexpr ResultsTableCell(ResultsTableCell const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ResultsTableCell", modifiers: "&&", def_value: None }]
constexpr ResultsTableCell(ResultsTableCell&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ResultsTableCell(void* ptr) noexcept : ::GlobalNamespace::TableCellWithSeparator(ptr) {
}


  constexpr ResultsTableCell& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ResultsTableCell& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ResultsTableCell& operator=(ResultsTableCell&& o) noexcept = default;
  constexpr ResultsTableCell& operator=(ResultsTableCell const& o) noexcept = default;
                


// Fields

 ::UnityEngine::GameObject __declspec(property(get=__get__border, put=__set__border))  _border;

constexpr void __set__border(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__border() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__orderText, put=__set__orderText))  _orderText;

constexpr void __set__orderText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__orderText() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__nameText, put=__set__nameText))  _nameText;

constexpr void __set__nameText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__nameText() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__scoreText, put=__set__scoreText))  _scoreText;

constexpr void __set__scoreText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__scoreText() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__rankText, put=__set__rankText))  _rankText;

constexpr void __set__rankText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__rankText() const;


// Methods

/// @brief Method SetData addr 0x218edf0 size 0x38c virtual false final false
 void SetData(int32_t order, ::GlobalNamespace::IConnectedPlayer connectedPlayer, ::GlobalNamespace::LevelCompletionResults levelCompletionResults) ;

// Ctor Parameters []
explicit ResultsTableCell() ;

/// @brief Method .ctor addr 0x218f17c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ResultsTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ResultsTableCell, "", "ResultsTableCell");
