#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerPsPlusFeatureNotifier;
}
// Type: ::MultiplayerPsPlusFeatureNotifier
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5330))
// CS Name: MultiplayerPsPlusFeatureNotifier
class CORDL_TYPE MultiplayerPsPlusFeatureNotifier : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MultiplayerPsPlusFeatureNotifier() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerPsPlusFeatureNotifier", modifiers: " const&", def_value: None }]
constexpr MultiplayerPsPlusFeatureNotifier(MultiplayerPsPlusFeatureNotifier const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerPsPlusFeatureNotifier", modifiers: "&&", def_value: None }]
constexpr MultiplayerPsPlusFeatureNotifier(MultiplayerPsPlusFeatureNotifier&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerPsPlusFeatureNotifier(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerPsPlusFeatureNotifier& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerPsPlusFeatureNotifier& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerPsPlusFeatureNotifier& operator=(MultiplayerPsPlusFeatureNotifier&& o) noexcept = default;
  constexpr MultiplayerPsPlusFeatureNotifier& operator=(MultiplayerPsPlusFeatureNotifier const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__isSpectator, put=__set__isSpectator))  _isSpectator;

constexpr void __set__isSpectator(bool value) ;

constexpr bool __get__isSpectator() const;


// Methods

// Ctor Parameters []
explicit MultiplayerPsPlusFeatureNotifier() ;

/// @brief Method .ctor addr 0x2100db0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerPsPlusFeatureNotifier);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerPsPlusFeatureNotifier, "", "MultiplayerPsPlusFeatureNotifier");
