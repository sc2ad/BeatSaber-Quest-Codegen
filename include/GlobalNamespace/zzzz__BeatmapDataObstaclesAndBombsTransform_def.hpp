#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class GlobalNamespace__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0;
}
namespace GlobalNamespace {
struct GlobalNamespace__GameplayModifiers__EnabledObstacleType;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataObstaclesAndBombsTransform;
}
namespace GlobalNamespace {
class GlobalNamespace__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0;
}
// Type: ::<>c__DisplayClass0_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4158))
// CS Name: BeatmapDataObstaclesAndBombsTransform::<>c__DisplayClass0_0
class CORDL_TYPE GlobalNamespace__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0(GlobalNamespace__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0(GlobalNamespace__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0& operator=(GlobalNamespace__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0&& o) noexcept = default;
  constexpr GlobalNamespace__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0& operator=(GlobalNamespace__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType __declspec(property(get=__get_enabledObstaclesType, put=__set_enabledObstaclesType))  enabledObstaclesType;

constexpr void __set_enabledObstaclesType(GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType value) ;

constexpr GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType __get_enabledObstaclesType() const;

 bool __declspec(property(get=__get_noBombs, put=__set_noBombs))  noBombs;

constexpr void __set_noBombs(bool value) ;

constexpr bool __get_noBombs() const;


// Methods

static GlobalNamespace::GlobalNamespace__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0 New_ctor() ;

/// @brief Method .ctor addr 0x21b9ec8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <CreateTransformedData>g__ProcessData|0 addr 0x21b9fd8 size 0x2c virtual false final false
 GlobalNamespace::BeatmapDataItem _CreateTransformedData_g__ProcessData_0(GlobalNamespace::BeatmapDataItem beatmapDataItem) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BeatmapDataObstaclesAndBombsTransform
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4159))
// CS Name: BeatmapDataObstaclesAndBombsTransform
class CORDL_TYPE BeatmapDataObstaclesAndBombsTransform : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass0_0 = GlobalNamespace::GlobalNamespace__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BeatmapDataObstaclesAndBombsTransform() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataObstaclesAndBombsTransform", modifiers: " const&", def_value: None }]
constexpr BeatmapDataObstaclesAndBombsTransform(BeatmapDataObstaclesAndBombsTransform const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataObstaclesAndBombsTransform", modifiers: "&&", def_value: None }]
constexpr BeatmapDataObstaclesAndBombsTransform(BeatmapDataObstaclesAndBombsTransform&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapDataObstaclesAndBombsTransform(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapDataObstaclesAndBombsTransform& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapDataObstaclesAndBombsTransform& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapDataObstaclesAndBombsTransform& operator=(BeatmapDataObstaclesAndBombsTransform&& o) noexcept = default;
  constexpr BeatmapDataObstaclesAndBombsTransform& operator=(BeatmapDataObstaclesAndBombsTransform const& o) noexcept = default;
                


// Methods

/// @brief Method CreateTransformedData addr 0x21b9d94 size 0x134 virtual false final false
static GlobalNamespace::IReadonlyBeatmapData CreateTransformedData(GlobalNamespace::IReadonlyBeatmapData beatmapData, GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType enabledObstaclesType, bool noBombs) ;

/// @brief Method ShouldUseBeatmapDataItem addr 0x21b9ed0 size 0x108 virtual false final false
static bool ShouldUseBeatmapDataItem(GlobalNamespace::BeatmapDataItem beatmapDataItem, GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType enabledObstaclesType, bool noBombs) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapDataObstaclesAndBombsTransform);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDataObstaclesAndBombsTransform, "", "BeatmapDataObstaclesAndBombsTransform");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0, "", "BeatmapDataObstaclesAndBombsTransform/<>c__DisplayClass0_0");
