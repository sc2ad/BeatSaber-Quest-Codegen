#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace GlobalNamespace {
class PlayerSpecificSettingsNetSerializable;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerSpecificSettingsAtStartNetSerializable;
}
// Type: ::PlayerSpecificSettingsAtStartNetSerializable
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12865))
// CS Name: PlayerSpecificSettingsAtStartNetSerializable
class CORDL_TYPE PlayerSpecificSettingsAtStartNetSerializable : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::LiteNetLib::Utils::INetSerializable
constexpr operator  ::LiteNetLib::Utils::INetSerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PlayerSpecificSettingsAtStartNetSerializable() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerSpecificSettingsAtStartNetSerializable", modifiers: " const&", def_value: None }]
constexpr PlayerSpecificSettingsAtStartNetSerializable(PlayerSpecificSettingsAtStartNetSerializable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerSpecificSettingsAtStartNetSerializable", modifiers: "&&", def_value: None }]
constexpr PlayerSpecificSettingsAtStartNetSerializable(PlayerSpecificSettingsAtStartNetSerializable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayerSpecificSettingsAtStartNetSerializable(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PlayerSpecificSettingsAtStartNetSerializable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayerSpecificSettingsAtStartNetSerializable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayerSpecificSettingsAtStartNetSerializable& operator=(PlayerSpecificSettingsAtStartNetSerializable&& o) noexcept = default;
  constexpr PlayerSpecificSettingsAtStartNetSerializable& operator=(PlayerSpecificSettingsAtStartNetSerializable const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable> __declspec(property(get=__get__activePlayerSpecificSettingsAtGameStart_k__BackingField, put=__set__activePlayerSpecificSettingsAtGameStart_k__BackingField))  _activePlayerSpecificSettingsAtGameStart_k__BackingField;

constexpr void __set__activePlayerSpecificSettingsAtGameStart_k__BackingField(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable> value) ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable> __get__activePlayerSpecificSettingsAtGameStart_k__BackingField() const;

 ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer> __declspec(property(get=__get__activePlayersAtGameStart, put=__set__activePlayersAtGameStart))  _activePlayersAtGameStart;

constexpr void __set__activePlayersAtGameStart(::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer> __get__activePlayersAtGameStart() const;


// Properties

 ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer> __declspec(property(get=get_activePlayersAtGameStart))  activePlayersAtGameStart;

 ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable> __declspec(property(get=get_activePlayerSpecificSettingsAtGameStart, put=set_activePlayerSpecificSettingsAtGameStart))  activePlayerSpecificSettingsAtGameStart;


// Methods

/// @brief Method get_activePlayersAtGameStart addr 0xdc4c80 size 0x260 virtual false final false
 ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer> get_activePlayersAtGameStart() ;

/// @brief Method get_activePlayerSpecificSettingsAtGameStart addr 0xdc4ee0 size 0x8 virtual false final false
 ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable> get_activePlayerSpecificSettingsAtGameStart() ;

/// @brief Method set_activePlayerSpecificSettingsAtGameStart addr 0xdc4ee8 size 0x8 virtual false final false
 void set_activePlayerSpecificSettingsAtGameStart(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable> value) ;

// Ctor Parameters []
explicit PlayerSpecificSettingsAtStartNetSerializable() ;

/// @brief Method .ctor addr 0xdc4ef0 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "activePlayerSpecificSettingsAtGameStart", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable>", modifiers: "", def_value: None }]
explicit PlayerSpecificSettingsAtStartNetSerializable(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable> activePlayerSpecificSettingsAtGameStart) ;

/// @brief Method .ctor addr 0xdc4ef8 size 0x28 virtual false final false
 void _ctor(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable> activePlayerSpecificSettingsAtGameStart) ;

/// @brief Method Serialize addr 0xdc4f20 size 0x36c virtual true final true
 void Serialize(::LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0xdc531c size 0x158 virtual true final true
 void Deserialize(::LiteNetLib::Utils::NetDataReader reader) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable, "", "PlayerSpecificSettingsAtStartNetSerializable");
