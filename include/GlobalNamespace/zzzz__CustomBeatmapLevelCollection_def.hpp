#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class CustomPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class IBeatmapLevelCollection;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomBeatmapLevelCollection;
}
// Type: ::CustomBeatmapLevelCollection
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4397))
// CS Name: CustomBeatmapLevelCollection
class CORDL_TYPE CustomBeatmapLevelCollection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IBeatmapLevelCollection
constexpr operator  GlobalNamespace::IBeatmapLevelCollection() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CustomBeatmapLevelCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomBeatmapLevelCollection", modifiers: " const&", def_value: None }]
constexpr CustomBeatmapLevelCollection(CustomBeatmapLevelCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomBeatmapLevelCollection", modifiers: "&&", def_value: None }]
constexpr CustomBeatmapLevelCollection(CustomBeatmapLevelCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CustomBeatmapLevelCollection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CustomBeatmapLevelCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CustomBeatmapLevelCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CustomBeatmapLevelCollection& operator=(CustomBeatmapLevelCollection&& o) noexcept = default;
  constexpr CustomBeatmapLevelCollection& operator=(CustomBeatmapLevelCollection const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::CustomPreviewBeatmapLevel> __declspec(property(get=__get__customPreviewBeatmapLevels, put=__set__customPreviewBeatmapLevels))  _customPreviewBeatmapLevels;

constexpr void __set__customPreviewBeatmapLevels(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::CustomPreviewBeatmapLevel> value) ;

constexpr System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::CustomPreviewBeatmapLevel> __get__customPreviewBeatmapLevels() const;


// Properties

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IPreviewBeatmapLevel> __declspec(property(get=get_beatmapLevels))  beatmapLevels;


// Methods

/// @brief Method get_beatmapLevels addr 0x21e9698 size 0x8 virtual true final true
 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IPreviewBeatmapLevel> get_beatmapLevels() ;

static GlobalNamespace::CustomBeatmapLevelCollection New_ctor(::ArrayW<GlobalNamespace::CustomPreviewBeatmapLevel> customPreviewBeatmapLevels) ;

/// @brief Method .ctor addr 0x21e96a0 size 0x28 virtual false final false
 void _ctor(::ArrayW<GlobalNamespace::CustomPreviewBeatmapLevel> customPreviewBeatmapLevels) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::CustomBeatmapLevelCollection);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CustomBeatmapLevelCollection, "", "CustomBeatmapLevelCollection");
