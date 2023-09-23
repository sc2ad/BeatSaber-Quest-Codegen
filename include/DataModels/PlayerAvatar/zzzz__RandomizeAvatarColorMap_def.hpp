#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace DataModels::PlayerAvatar {
class RandomizeAvatarColorMap;
}
// Type: DataModels.PlayerAvatar::RandomizeAvatarColorMap
namespace DataModels::PlayerAvatar {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6146))
// CS Name: DataModels.PlayerAvatar.RandomizeAvatarColorMap
class CORDL_TYPE RandomizeAvatarColorMap : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RandomizeAvatarColorMap() = default;

// Ctor Parameters [CppParam { name: "", ty: "RandomizeAvatarColorMap", modifiers: " const&", def_value: None }]
constexpr RandomizeAvatarColorMap(RandomizeAvatarColorMap const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RandomizeAvatarColorMap", modifiers: "&&", def_value: None }]
constexpr RandomizeAvatarColorMap(RandomizeAvatarColorMap&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RandomizeAvatarColorMap(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RandomizeAvatarColorMap& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RandomizeAvatarColorMap& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RandomizeAvatarColorMap& operator=(RandomizeAvatarColorMap&& o) noexcept = default;
  constexpr RandomizeAvatarColorMap& operator=(RandomizeAvatarColorMap const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__totalIndices_k__BackingField, put=__set__totalIndices_k__BackingField))  _totalIndices_k__BackingField;

constexpr void __set__totalIndices_k__BackingField(int32_t value) ;

constexpr int32_t __get__totalIndices_k__BackingField() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__colorIndices_k__BackingField, put=__set__colorIndices_k__BackingField))  _colorIndices_k__BackingField;

constexpr void __set__colorIndices_k__BackingField(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__colorIndices_k__BackingField() const;


// Properties

 int32_t __declspec(property(get=get_totalIndices))  totalIndices;

 ::ArrayW<int32_t> __declspec(property(get=get_colorIndices))  colorIndices;


// Methods

/// @brief Method get_totalIndices addr 0x21d55f0 size 0x8 virtual false final false
 int32_t get_totalIndices() ;

/// @brief Method get_colorIndices addr 0x21d55f8 size 0x8 virtual false final false
 ::ArrayW<int32_t> get_colorIndices() ;

// Ctor Parameters [CppParam { name: "headTopPrimaryColorIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "headTopSecondaryColorIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "glassesColorIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "facialHairColorIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "handsColorIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "clothesPrimaryColorIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "clothesSecondaryColorIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "clothesDetailColorIndex", ty: "int32_t", modifiers: "", def_value: None }]
explicit RandomizeAvatarColorMap(int32_t headTopPrimaryColorIndex, int32_t headTopSecondaryColorIndex, int32_t glassesColorIndex, int32_t facialHairColorIndex, int32_t handsColorIndex, int32_t clothesPrimaryColorIndex, int32_t clothesSecondaryColorIndex, int32_t clothesDetailColorIndex) ;

/// @brief Method .ctor addr 0x21d5004 size 0x188 virtual false final false
 void _ctor(int32_t headTopPrimaryColorIndex, int32_t headTopSecondaryColorIndex, int32_t glassesColorIndex, int32_t facialHairColorIndex, int32_t handsColorIndex, int32_t clothesPrimaryColorIndex, int32_t clothesSecondaryColorIndex, int32_t clothesDetailColorIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def DataModels::PlayerAvatar
NEED_NO_BOX(DataModels::PlayerAvatar::RandomizeAvatarColorMap);
DEFINE_IL2CPP_ARG_TYPE(DataModels::PlayerAvatar::RandomizeAvatarColorMap, "DataModels.PlayerAvatar", "RandomizeAvatarColorMap");
