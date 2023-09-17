#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace GlobalNamespace {
class GameServerListItem;
}
// Type: ::GameServerListItem
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4496))
// CS Name: GameServerListItem
class CORDL_TYPE GameServerListItem : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GameServerListItem() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameServerListItem", modifiers: " const&", def_value: None }]
constexpr GameServerListItem(GameServerListItem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameServerListItem", modifiers: "&&", def_value: None }]
constexpr GameServerListItem(GameServerListItem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameServerListItem(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GameServerListItem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameServerListItem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameServerListItem& operator=(GameServerListItem&& o) noexcept = default;
  constexpr GameServerListItem& operator=(GameServerListItem const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_serverName, put=__set_serverName))  serverName;

constexpr void __set_serverName(::StringW value) ;

constexpr ::StringW __get_serverName() const;

 int32_t __declspec(property(get=__get_capacity, put=__set_capacity))  capacity;

constexpr void __set_capacity(int32_t value) ;

constexpr int32_t __get_capacity() const;

 int32_t __declspec(property(get=__get_occupied, put=__set_occupied))  occupied;

constexpr void __set_occupied(int32_t value) ;

constexpr int32_t __get_occupied() const;

 bool __declspec(property(get=__get_password, put=__set_password))  password;

constexpr void __set_password(bool value) ;

constexpr bool __get_password() const;


// Methods

// Ctor Parameters [CppParam { name: "serverName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "occupied", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "password", ty: "bool", modifiers: "", def_value: None }]
explicit GameServerListItem(::StringW serverName, int32_t capacity, int32_t occupied, bool password) ;

/// @brief Method .ctor addr 0x21f2f98 size 0x44 virtual false final false
 void _ctor(::StringW serverName, int32_t capacity, int32_t occupied, bool password) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::GameServerListItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameServerListItem, "", "GameServerListItem");
