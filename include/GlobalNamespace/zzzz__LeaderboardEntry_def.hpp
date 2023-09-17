#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class LeaderboardEntry;
}
// Type: ::LeaderboardEntry
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5622))
// CS Name: LeaderboardEntry
class CORDL_TYPE LeaderboardEntry : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LeaderboardEntry() = default;

// Ctor Parameters [CppParam { name: "", ty: "LeaderboardEntry", modifiers: " const&", def_value: None }]
constexpr LeaderboardEntry(LeaderboardEntry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LeaderboardEntry", modifiers: "&&", def_value: None }]
constexpr LeaderboardEntry(LeaderboardEntry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LeaderboardEntry(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr LeaderboardEntry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LeaderboardEntry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LeaderboardEntry& operator=(LeaderboardEntry&& o) noexcept = default;
  constexpr LeaderboardEntry& operator=(LeaderboardEntry const& o) noexcept = default;
                


// Fields

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__scoreText, put=__set__scoreText))  _scoreText;

constexpr void __set__scoreText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__scoreText() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__playerNameText, put=__set__playerNameText))  _playerNameText;

constexpr void __set__playerNameText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__playerNameText() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__rankText, put=__set__rankText))  _rankText;

constexpr void __set__rankText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__rankText() const;

 ::UnityEngine::Color __declspec(property(get=__get__color, put=__set__color))  _color;

constexpr void __set__color(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__color() const;


// Methods

/// @brief Method SetScore addr 0x2146f20 size 0x190 virtual false final false
 void SetScore(int32_t score, ::StringW playerName, int32_t rank, bool highlighted, bool showSeparator) ;

// Ctor Parameters []
explicit LeaderboardEntry() ;

/// @brief Method .ctor addr 0x21470b0 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::LeaderboardEntry);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeaderboardEntry, "", "LeaderboardEntry");
