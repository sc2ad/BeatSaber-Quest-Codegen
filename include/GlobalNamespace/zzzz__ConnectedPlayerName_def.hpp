#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class ConnectedPlayerName;
}
// Type: ::ConnectedPlayerName
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4086))
// CS Name: ConnectedPlayerName
class CORDL_TYPE ConnectedPlayerName : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ConnectedPlayerName() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerName", modifiers: " const&", def_value: None }]
constexpr ConnectedPlayerName(ConnectedPlayerName const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerName", modifiers: "&&", def_value: None }]
constexpr ConnectedPlayerName(ConnectedPlayerName&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConnectedPlayerName(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ConnectedPlayerName& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConnectedPlayerName& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConnectedPlayerName& operator=(ConnectedPlayerName&& o) noexcept = default;
  constexpr ConnectedPlayerName& operator=(ConnectedPlayerName const& o) noexcept = default;
                


// Fields

 TMPro::TextMeshProUGUI __declspec(property(get=__get__nameText, put=__set__nameText))  _nameText;

constexpr void __set__nameText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__nameText() const;

 GlobalNamespace::IConnectedPlayer __declspec(property(get=__get__connectedPlayer, put=__set__connectedPlayer))  _connectedPlayer;

constexpr void __set__connectedPlayer(GlobalNamespace::IConnectedPlayer value) ;

constexpr GlobalNamespace::IConnectedPlayer __get__connectedPlayer() const;


// Methods

/// @brief Method Start addr 0x20c2ea0 size 0xc4 virtual false final false
 void Start() ;

// Ctor Parameters []
explicit ConnectedPlayerName() ;

/// @brief Method .ctor addr 0x20c2f64 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ConnectedPlayerName);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ConnectedPlayerName, "", "ConnectedPlayerName");
