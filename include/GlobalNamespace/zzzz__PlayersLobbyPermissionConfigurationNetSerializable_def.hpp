#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PoolableSerializable_def.hpp"
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace GlobalNamespace {
class PlayerLobbyPermissionConfigurationNetSerializable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayersLobbyPermissionConfigurationNetSerializable;
}
// Type: ::PlayersLobbyPermissionConfigurationNetSerializable
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15122))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15120))
// CS Name: PlayersLobbyPermissionConfigurationNetSerializable
class CORDL_TYPE PlayersLobbyPermissionConfigurationNetSerializable : public GlobalNamespace::PoolableSerializable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PlayersLobbyPermissionConfigurationNetSerializable() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayersLobbyPermissionConfigurationNetSerializable", modifiers: " const&", def_value: None }]
constexpr PlayersLobbyPermissionConfigurationNetSerializable(PlayersLobbyPermissionConfigurationNetSerializable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayersLobbyPermissionConfigurationNetSerializable", modifiers: "&&", def_value: None }]
constexpr PlayersLobbyPermissionConfigurationNetSerializable(PlayersLobbyPermissionConfigurationNetSerializable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayersLobbyPermissionConfigurationNetSerializable(void* ptr) noexcept : GlobalNamespace::PoolableSerializable(ptr) {
}


  constexpr PlayersLobbyPermissionConfigurationNetSerializable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayersLobbyPermissionConfigurationNetSerializable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayersLobbyPermissionConfigurationNetSerializable& operator=(PlayersLobbyPermissionConfigurationNetSerializable&& o) noexcept = default;
  constexpr PlayersLobbyPermissionConfigurationNetSerializable& operator=(PlayersLobbyPermissionConfigurationNetSerializable const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable> __declspec(property(get=__get__playersPermission, put=__set__playersPermission))  _playersPermission;

constexpr void __set__playersPermission(System::Collections::Generic::List_1<GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable> __get__playersPermission() const;


// Properties

 System::Collections::Generic::List_1<GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable> __declspec(property(get=get_playersPermission))  playersPermission;


// Methods

/// @brief Method get_playersPermission addr 0x1218728 size 0x8 virtual false final false
 System::Collections::Generic::List_1<GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable> get_playersPermission() ;

/// @brief Method Obtain addr 0x1218730 size 0x64 virtual false final false
static GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable Obtain() ;

/// @brief Method Init addr 0x1218794 size 0x60 virtual false final false
 GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable Init(System::Collections::Generic::IEnumerable_1<GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable> playersPermission) ;

static GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable New_ctor() ;

/// @brief Method .ctor addr 0x12187f4 size 0xa0 virtual false final false
 void _ctor() ;

/// @brief Method Serialize addr 0x1218894 size 0x180 virtual true final false
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0x1218a14 size 0x168 virtual true final false
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Release addr 0x1218b7c size 0xc4 virtual true final false
 void Release() ;

/// @brief Method Retain addr 0x1218cb0 size 0x9c virtual true final false
 void Retain() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable, "", "PlayersLobbyPermissionConfigurationNetSerializable");
