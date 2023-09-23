#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataObstaclesMergingTransform;
}
namespace GlobalNamespace {
class GlobalNamespace__BeatmapDataObstaclesMergingTransform____c__DisplayClass0_0;
}
// Type: ::<>c__DisplayClass0_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4160))
// CS Name: BeatmapDataObstaclesMergingTransform::<>c__DisplayClass0_0
class CORDL_TYPE GlobalNamespace__BeatmapDataObstaclesMergingTransform____c__DisplayClass0_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__BeatmapDataObstaclesMergingTransform____c__DisplayClass0_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapDataObstaclesMergingTransform____c__DisplayClass0_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BeatmapDataObstaclesMergingTransform____c__DisplayClass0_0(GlobalNamespace__BeatmapDataObstaclesMergingTransform____c__DisplayClass0_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapDataObstaclesMergingTransform____c__DisplayClass0_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BeatmapDataObstaclesMergingTransform____c__DisplayClass0_0(GlobalNamespace__BeatmapDataObstaclesMergingTransform____c__DisplayClass0_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapDataObstaclesMergingTransform____c__DisplayClass0_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__BeatmapDataObstaclesMergingTransform____c__DisplayClass0_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapDataObstaclesMergingTransform____c__DisplayClass0_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapDataObstaclesMergingTransform____c__DisplayClass0_0& operator=(GlobalNamespace__BeatmapDataObstaclesMergingTransform____c__DisplayClass0_0&& o) noexcept = default;
  constexpr GlobalNamespace__BeatmapDataObstaclesMergingTransform____c__DisplayClass0_0& operator=(GlobalNamespace__BeatmapDataObstaclesMergingTransform____c__DisplayClass0_0 const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::ObstacleData> __declspec(property(get=__get_prevObstacleDataInLines, put=__set_prevObstacleDataInLines))  prevObstacleDataInLines;

constexpr void __set_prevObstacleDataInLines(::ArrayW<GlobalNamespace::ObstacleData> value) ;

constexpr ::ArrayW<GlobalNamespace::ObstacleData> __get_prevObstacleDataInLines() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__BeatmapDataObstaclesMergingTransform____c__DisplayClass0_0() ;

/// @brief Method .ctor addr 0x21ba1b8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <CreateTransformedData>g__ProcessData|0 addr 0x21ba240 size 0x238 virtual false final false
 GlobalNamespace::BeatmapDataItem _CreateTransformedData_g__ProcessData_0(GlobalNamespace::BeatmapDataItem beatmapDataItem) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BeatmapDataObstaclesMergingTransform
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4161))
// CS Name: BeatmapDataObstaclesMergingTransform
class CORDL_TYPE BeatmapDataObstaclesMergingTransform : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass0_0 = GlobalNamespace::GlobalNamespace__BeatmapDataObstaclesMergingTransform____c__DisplayClass0_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BeatmapDataObstaclesMergingTransform() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataObstaclesMergingTransform", modifiers: " const&", def_value: None }]
constexpr BeatmapDataObstaclesMergingTransform(BeatmapDataObstaclesMergingTransform const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataObstaclesMergingTransform", modifiers: "&&", def_value: None }]
constexpr BeatmapDataObstaclesMergingTransform(BeatmapDataObstaclesMergingTransform&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapDataObstaclesMergingTransform(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapDataObstaclesMergingTransform& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapDataObstaclesMergingTransform& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapDataObstaclesMergingTransform& operator=(BeatmapDataObstaclesMergingTransform&& o) noexcept = default;
  constexpr BeatmapDataObstaclesMergingTransform& operator=(BeatmapDataObstaclesMergingTransform const& o) noexcept = default;
                


// Methods

/// @brief Method CreateTransformedData addr 0x21ba004 size 0x1b4 virtual false final false
static GlobalNamespace::IReadonlyBeatmapData CreateTransformedData(GlobalNamespace::IReadonlyBeatmapData beatmapData) ;

/// @brief Method CanBeMerged addr 0x21ba1c0 size 0x80 virtual false final false
static bool CanBeMerged(GlobalNamespace::ObstacleData firstObstacle, GlobalNamespace::ObstacleData secondObstacle) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapDataObstaclesMergingTransform);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDataObstaclesMergingTransform, "", "BeatmapDataObstaclesMergingTransform");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__BeatmapDataObstaclesMergingTransform____c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapDataObstaclesMergingTransform____c__DisplayClass0_0, "", "BeatmapDataObstaclesMergingTransform/<>c__DisplayClass0_0");
