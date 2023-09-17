#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace GlobalNamespace {
class Deeplink;
}
// Type: ::Deeplink
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4179))
// CS Name: Deeplink
class CORDL_TYPE Deeplink : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~Deeplink() = default;

// Ctor Parameters [CppParam { name: "", ty: "Deeplink", modifiers: " const&", def_value: None }]
constexpr Deeplink(Deeplink const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Deeplink", modifiers: "&&", def_value: None }]
constexpr Deeplink(Deeplink&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Deeplink(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Deeplink& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Deeplink& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Deeplink& operator=(Deeplink&& o) noexcept = default;
  constexpr Deeplink& operator=(Deeplink const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_Destination, put=__set_Destination))  Destination;

constexpr void __set_Destination(::StringW value) ;

constexpr ::StringW __get_Destination() const;

 ::StringW __declspec(property(get=__get_LevelID, put=__set_LevelID))  LevelID;

constexpr void __set_LevelID(::StringW value) ;

constexpr ::StringW __get_LevelID() const;

 ::StringW __declspec(property(get=__get_PackID, put=__set_PackID))  PackID;

constexpr void __set_PackID(::StringW value) ;

constexpr ::StringW __get_PackID() const;

 ::StringW __declspec(property(get=__get_Difficulty, put=__set_Difficulty))  Difficulty;

constexpr void __set_Difficulty(::StringW value) ;

constexpr ::StringW __get_Difficulty() const;

 ::StringW __declspec(property(get=__get_Characteristic, put=__set_Characteristic))  Characteristic;

constexpr void __set_Characteristic(::StringW value) ;

constexpr ::StringW __get_Characteristic() const;

 ::StringW __declspec(property(get=__get_MultiplayerLobbyCode, put=__set_MultiplayerLobbyCode))  MultiplayerLobbyCode;

constexpr void __set_MultiplayerLobbyCode(::StringW value) ;

constexpr ::StringW __get_MultiplayerLobbyCode() const;

 ::StringW __declspec(property(get=__get_MultiplayerSecret, put=__set_MultiplayerSecret))  MultiplayerSecret;

constexpr void __set_MultiplayerSecret(::StringW value) ;

constexpr ::StringW __get_MultiplayerSecret() const;

 uint64_t __declspec(property(get=__get_MultiplayerRoomId, put=__set_MultiplayerRoomId))  MultiplayerRoomId;

constexpr void __set_MultiplayerRoomId(uint64_t value) ;

constexpr uint64_t __get_MultiplayerRoomId() const;


// Methods

// Ctor Parameters []
explicit Deeplink() ;

/// @brief Method .ctor addr 0x21bc748 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::Deeplink);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Deeplink, "", "Deeplink");
