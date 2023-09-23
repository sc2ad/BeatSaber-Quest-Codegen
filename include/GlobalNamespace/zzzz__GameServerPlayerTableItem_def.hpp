#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace GlobalNamespace {
class GameServerPlayerTableItem;
}
// Type: ::GameServerPlayerTableItem
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4497))
// CS Name: GameServerPlayerTableItem
class CORDL_TYPE GameServerPlayerTableItem : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GameServerPlayerTableItem() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameServerPlayerTableItem", modifiers: " const&", def_value: None }]
constexpr GameServerPlayerTableItem(GameServerPlayerTableItem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameServerPlayerTableItem", modifiers: "&&", def_value: None }]
constexpr GameServerPlayerTableItem(GameServerPlayerTableItem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameServerPlayerTableItem(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GameServerPlayerTableItem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameServerPlayerTableItem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameServerPlayerTableItem& operator=(GameServerPlayerTableItem&& o) noexcept = default;
  constexpr GameServerPlayerTableItem& operator=(GameServerPlayerTableItem const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_playerName, put=__set_playerName))  playerName;

constexpr void __set_playerName(::StringW value) ;

constexpr ::StringW __get_playerName() const;

 ::StringW __declspec(property(get=__get_suggestedLevel, put=__set_suggestedLevel))  suggestedLevel;

constexpr void __set_suggestedLevel(::StringW value) ;

constexpr ::StringW __get_suggestedLevel() const;

 ::StringW __declspec(property(get=__get_suggestedModifiers, put=__set_suggestedModifiers))  suggestedModifiers;

constexpr void __set_suggestedModifiers(::StringW value) ;

constexpr ::StringW __get_suggestedModifiers() const;

 bool __declspec(property(get=__get_isReady, put=__set_isReady))  isReady;

constexpr void __set_isReady(bool value) ;

constexpr bool __get_isReady() const;


// Methods

// Ctor Parameters [CppParam { name: "playerName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "suggestedLevel", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "suggestedModifiers", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "isReady", ty: "bool", modifiers: "", def_value: None }]
explicit GameServerPlayerTableItem(::StringW playerName, ::StringW suggestedLevel, ::StringW suggestedModifiers, bool isReady) ;

/// @brief Method .ctor addr 0x21f2fdc size 0x44 virtual false final false
 void _ctor(::StringW playerName, ::StringW suggestedLevel, ::StringW suggestedModifiers, bool isReady) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GameServerPlayerTableItem);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameServerPlayerTableItem, "", "GameServerPlayerTableItem");
