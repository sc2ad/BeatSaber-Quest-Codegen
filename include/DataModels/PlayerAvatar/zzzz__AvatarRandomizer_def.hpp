#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace DataModels::PlayerAvatar {
class RandomizeAvatarColorMap;
}
namespace GlobalNamespace {
class AvatarData;
}
namespace GlobalNamespace {
class AvatarPartsModel;
}
// Forward declare root types
namespace DataModels::PlayerAvatar {
class AvatarRandomizer;
}
// Type: DataModels.PlayerAvatar::AvatarRandomizer
namespace DataModels::PlayerAvatar {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6145))
// CS Name: DataModels.PlayerAvatar.AvatarRandomizer
class CORDL_TYPE AvatarRandomizer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AvatarRandomizer() = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarRandomizer", modifiers: " const&", def_value: None }]
constexpr AvatarRandomizer(AvatarRandomizer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarRandomizer", modifiers: "&&", def_value: None }]
constexpr AvatarRandomizer(AvatarRandomizer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AvatarRandomizer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AvatarRandomizer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AvatarRandomizer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AvatarRandomizer& operator=(AvatarRandomizer&& o) noexcept = default;
  constexpr AvatarRandomizer& operator=(AvatarRandomizer const& o) noexcept = default;
                


// Fields

static ::ArrayW<DataModels::PlayerAvatar::RandomizeAvatarColorMap> __declspec(property(get=__get__randomizeColorsParamsCollection, put=__set__randomizeColorsParamsCollection))  _randomizeColorsParamsCollection;

static void __set__randomizeColorsParamsCollection(::ArrayW<DataModels::PlayerAvatar::RandomizeAvatarColorMap> value) ;

static ::ArrayW<DataModels::PlayerAvatar::RandomizeAvatarColorMap> __get__randomizeColorsParamsCollection() ;


// Methods

/// @brief Method RandomizeAll addr 0x21d518c size 0x6c virtual false final false
static void RandomizeAll(GlobalNamespace::AvatarData avatarData, GlobalNamespace::AvatarPartsModel avatarPartsModel) ;

/// @brief Method RandomizeModels addr 0x21d51f8 size 0x15c virtual false final false
static void RandomizeModels(GlobalNamespace::AvatarData avatarData, GlobalNamespace::AvatarPartsModel avatarPartsModel) ;

/// @brief Method RandomizeColors addr 0x21d5354 size 0x29c virtual false final false
static void RandomizeColors(GlobalNamespace::AvatarData avatarData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def DataModels::PlayerAvatar
NEED_NO_BOX(DataModels::PlayerAvatar::AvatarRandomizer);
DEFINE_IL2CPP_ARG_TYPE(DataModels::PlayerAvatar::AvatarRandomizer, "DataModels.PlayerAvatar", "AvatarRandomizer");
