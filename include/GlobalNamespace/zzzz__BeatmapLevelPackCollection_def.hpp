#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace GlobalNamespace {
class IBeatmapLevelPackCollection;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelPackCollection;
}
// Type: ::BeatmapLevelPackCollection
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4373))
// CS Name: BeatmapLevelPackCollection
class CORDL_TYPE BeatmapLevelPackCollection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IBeatmapLevelPackCollection
constexpr operator  GlobalNamespace::IBeatmapLevelPackCollection() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BeatmapLevelPackCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelPackCollection", modifiers: " const&", def_value: None }]
constexpr BeatmapLevelPackCollection(BeatmapLevelPackCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelPackCollection", modifiers: "&&", def_value: None }]
constexpr BeatmapLevelPackCollection(BeatmapLevelPackCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapLevelPackCollection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapLevelPackCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapLevelPackCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapLevelPackCollection& operator=(BeatmapLevelPackCollection&& o) noexcept = default;
  constexpr BeatmapLevelPackCollection& operator=(BeatmapLevelPackCollection const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::IBeatmapLevelPack> __declspec(property(get=__get__beatmapLevelPacks, put=__set__beatmapLevelPacks))  _beatmapLevelPacks;

constexpr void __set__beatmapLevelPacks(::ArrayW<GlobalNamespace::IBeatmapLevelPack> value) ;

constexpr ::ArrayW<GlobalNamespace::IBeatmapLevelPack> __get__beatmapLevelPacks() const;


// Properties

 ::ArrayW<GlobalNamespace::IBeatmapLevelPack> __declspec(property(get=get_beatmapLevelPacks))  beatmapLevelPacks;


// Methods

/// @brief Method get_beatmapLevelPacks addr 0x21e5170 size 0x8 virtual true final true
 ::ArrayW<GlobalNamespace::IBeatmapLevelPack> get_beatmapLevelPacks() ;

static GlobalNamespace::BeatmapLevelPackCollection New_ctor(::ArrayW<GlobalNamespace::IBeatmapLevelPack> beatmapLevelPacks) ;

/// @brief Method .ctor addr 0x21e5178 size 0x28 virtual false final false
 void _ctor(::ArrayW<GlobalNamespace::IBeatmapLevelPack> beatmapLevelPacks) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapLevelPackCollection);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelPackCollection, "", "BeatmapLevelPackCollection");
