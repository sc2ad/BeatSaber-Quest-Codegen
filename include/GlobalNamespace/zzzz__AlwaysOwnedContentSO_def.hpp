#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace GlobalNamespace {
class BeatmapLevelPackSO;
}
namespace GlobalNamespace {
class BeatmapLevelSO;
}
// Forward declare root types
namespace GlobalNamespace {
class AlwaysOwnedContentSO;
}
// Type: ::AlwaysOwnedContentSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4127))
// CS Name: AlwaysOwnedContentSO
class CORDL_TYPE AlwaysOwnedContentSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~AlwaysOwnedContentSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "AlwaysOwnedContentSO", modifiers: " const&", def_value: None }]
constexpr AlwaysOwnedContentSO(AlwaysOwnedContentSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AlwaysOwnedContentSO", modifiers: "&&", def_value: None }]
constexpr AlwaysOwnedContentSO(AlwaysOwnedContentSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AlwaysOwnedContentSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr AlwaysOwnedContentSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AlwaysOwnedContentSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AlwaysOwnedContentSO& operator=(AlwaysOwnedContentSO&& o) noexcept = default;
  constexpr AlwaysOwnedContentSO& operator=(AlwaysOwnedContentSO const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::BeatmapLevelPackSO> __declspec(property(get=__get__alwaysOwnedPacks, put=__set__alwaysOwnedPacks))  _alwaysOwnedPacks;

constexpr void __set__alwaysOwnedPacks(::ArrayW<GlobalNamespace::BeatmapLevelPackSO> value) ;

constexpr ::ArrayW<GlobalNamespace::BeatmapLevelPackSO> __get__alwaysOwnedPacks() const;

 ::ArrayW<GlobalNamespace::BeatmapLevelSO> __declspec(property(get=__get__alwaysOwnedBeatmapLevels, put=__set__alwaysOwnedBeatmapLevels))  _alwaysOwnedBeatmapLevels;

constexpr void __set__alwaysOwnedBeatmapLevels(::ArrayW<GlobalNamespace::BeatmapLevelSO> value) ;

constexpr ::ArrayW<GlobalNamespace::BeatmapLevelSO> __get__alwaysOwnedBeatmapLevels() const;


// Properties

 ::ArrayW<GlobalNamespace::BeatmapLevelPackSO> __declspec(property(get=get_alwaysOwnedPacks))  alwaysOwnedPacks;

 ::ArrayW<GlobalNamespace::BeatmapLevelSO> __declspec(property(get=get_alwaysOwnedBeatmapLevels))  alwaysOwnedBeatmapLevels;


// Methods

/// @brief Method get_alwaysOwnedPacks addr 0x20c81e4 size 0x8 virtual false final false
 ::ArrayW<GlobalNamespace::BeatmapLevelPackSO> get_alwaysOwnedPacks() ;

/// @brief Method get_alwaysOwnedBeatmapLevels addr 0x20c81ec size 0x8 virtual false final false
 ::ArrayW<GlobalNamespace::BeatmapLevelSO> get_alwaysOwnedBeatmapLevels() ;

static GlobalNamespace::AlwaysOwnedContentSO New_ctor() ;

/// @brief Method .ctor addr 0x20c81f4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::AlwaysOwnedContentSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AlwaysOwnedContentSO, "", "AlwaysOwnedContentSO");
