#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace GlobalNamespace {
class IConnectionRequestHandler;
}
// Forward declare root types
namespace GlobalNamespace {
class GameLiftClientConnectionRequestHandler;
}
// Type: ::GameLiftClientConnectionRequestHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12673))
// CS Name: GameLiftClientConnectionRequestHandler
class CORDL_TYPE GameLiftClientConnectionRequestHandler : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::IConnectionRequestHandler
constexpr operator  ::GlobalNamespace::IConnectionRequestHandler() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GameLiftClientConnectionRequestHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameLiftClientConnectionRequestHandler", modifiers: " const&", def_value: None }]
constexpr GameLiftClientConnectionRequestHandler(GameLiftClientConnectionRequestHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameLiftClientConnectionRequestHandler", modifiers: "&&", def_value: None }]
constexpr GameLiftClientConnectionRequestHandler(GameLiftClientConnectionRequestHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameLiftClientConnectionRequestHandler(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GameLiftClientConnectionRequestHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameLiftClientConnectionRequestHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameLiftClientConnectionRequestHandler& operator=(GameLiftClientConnectionRequestHandler&& o) noexcept = default;
  constexpr GameLiftClientConnectionRequestHandler& operator=(GameLiftClientConnectionRequestHandler const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__playerSessionId_k__BackingField, put=__set__playerSessionId_k__BackingField))  _playerSessionId_k__BackingField;

constexpr void __set__playerSessionId_k__BackingField(::StringW value) ;

constexpr ::StringW __get__playerSessionId_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_playerSessionId, put=set_playerSessionId))  playerSessionId;


// Methods

/// @brief Method get_playerSessionId addr 0xda9c74 size 0x8 virtual false final false
 ::StringW get_playerSessionId() ;

/// @brief Method set_playerSessionId addr 0xda9c7c size 0x8 virtual false final false
 void set_playerSessionId(::StringW value) ;

/// @brief Method GetConnectionMessage addr 0xda9c84 size 0x70 virtual true final true
 void GetConnectionMessage(::LiteNetLib::Utils::NetDataWriter writer, ::StringW userId, ::StringW userName, bool isConnectionOwner) ;

/// @brief Method ValidateConnectionMessage addr 0xda9cf4 size 0x14 virtual true final true
 bool ValidateConnectionMessage(::LiteNetLib::Utils::NetDataReader reader, ByRef<::StringW> userId, ByRef<::StringW> userName, ByRef<bool> isConnectionOwner) ;

// Ctor Parameters []
explicit GameLiftClientConnectionRequestHandler() ;

/// @brief Method .ctor addr 0xda9d08 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::GameLiftClientConnectionRequestHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameLiftClientConnectionRequestHandler, "", "GameLiftClientConnectionRequestHandler");
