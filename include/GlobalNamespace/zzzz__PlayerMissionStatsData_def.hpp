#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace GlobalNamespace {
class PlayerMissionStatsData;
}
// Type: ::PlayerMissionStatsData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4742))
// CS Name: PlayerMissionStatsData
class CORDL_TYPE PlayerMissionStatsData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PlayerMissionStatsData() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerMissionStatsData", modifiers: " const&", def_value: None }]
constexpr PlayerMissionStatsData(PlayerMissionStatsData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerMissionStatsData", modifiers: "&&", def_value: None }]
constexpr PlayerMissionStatsData(PlayerMissionStatsData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayerMissionStatsData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PlayerMissionStatsData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayerMissionStatsData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayerMissionStatsData& operator=(PlayerMissionStatsData&& o) noexcept = default;
  constexpr PlayerMissionStatsData& operator=(PlayerMissionStatsData const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__missionId, put=__set__missionId))  _missionId;

constexpr void __set__missionId(::StringW value) ;

constexpr ::StringW __get__missionId() const;

 bool __declspec(property(get=__get__cleared, put=__set__cleared))  _cleared;

constexpr void __set__cleared(bool value) ;

constexpr bool __get__cleared() const;


// Properties

 ::StringW __declspec(property(get=get_missionId))  missionId;

 bool __declspec(property(get=get_cleared, put=set_cleared))  cleared;


// Methods

/// @brief Method get_missionId addr 0x2226f48 size 0x8 virtual false final false
 ::StringW get_missionId() ;

/// @brief Method get_cleared addr 0x2226f50 size 0x8 virtual false final false
 bool get_cleared() ;

/// @brief Method set_cleared addr 0x2226f58 size 0xc virtual false final false
 void set_cleared(bool value) ;

static GlobalNamespace::PlayerMissionStatsData New_ctor(::StringW missionId, bool cleared) ;

/// @brief Method .ctor addr 0x2225cac size 0x30 virtual false final false
 void _ctor(::StringW missionId, bool cleared) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PlayerMissionStatsData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerMissionStatsData, "", "PlayerMissionStatsData");
