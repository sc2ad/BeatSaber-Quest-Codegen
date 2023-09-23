#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class MultiplayerBadgeDataSO;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerBadgesModelSO;
}
// Type: ::MultiplayerBadgesModelSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5210))
// CS Name: MultiplayerBadgesModelSO
class CORDL_TYPE MultiplayerBadgesModelSO : public UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MultiplayerBadgesModelSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgesModelSO", modifiers: " const&", def_value: None }]
constexpr MultiplayerBadgesModelSO(MultiplayerBadgesModelSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgesModelSO", modifiers: "&&", def_value: None }]
constexpr MultiplayerBadgesModelSO(MultiplayerBadgesModelSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerBadgesModelSO(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr MultiplayerBadgesModelSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerBadgesModelSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerBadgesModelSO& operator=(MultiplayerBadgesModelSO&& o) noexcept = default;
  constexpr MultiplayerBadgesModelSO& operator=(MultiplayerBadgesModelSO const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<GlobalNamespace::MultiplayerBadgeDataSO> __declspec(property(get=__get__positiveBadges, put=__set__positiveBadges))  _positiveBadges;

constexpr void __set__positiveBadges(System::Collections::Generic::List_1<GlobalNamespace::MultiplayerBadgeDataSO> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::MultiplayerBadgeDataSO> __get__positiveBadges() const;

 System::Collections::Generic::List_1<GlobalNamespace::MultiplayerBadgeDataSO> __declspec(property(get=__get__negativeBadges, put=__set__negativeBadges))  _negativeBadges;

constexpr void __set__negativeBadges(System::Collections::Generic::List_1<GlobalNamespace::MultiplayerBadgeDataSO> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::MultiplayerBadgeDataSO> __get__negativeBadges() const;


// Properties

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerBadgeDataSO> __declspec(property(get=get_positiveBadges))  positiveBadges;

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerBadgeDataSO> __declspec(property(get=get_negativeBadges))  negativeBadges;


// Methods

/// @brief Method get_positiveBadges addr 0x20da2ec size 0x8 virtual false final false
 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerBadgeDataSO> get_positiveBadges() ;

/// @brief Method get_negativeBadges addr 0x20da2f4 size 0x8 virtual false final false
 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerBadgeDataSO> get_negativeBadges() ;

// Ctor Parameters []
explicit MultiplayerBadgesModelSO() ;

/// @brief Method .ctor addr 0x20da2fc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerBadgesModelSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerBadgesModelSO, "", "MultiplayerBadgesModelSO");
