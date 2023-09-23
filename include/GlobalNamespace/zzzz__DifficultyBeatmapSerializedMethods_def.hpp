#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
// Forward declare root types
namespace GlobalNamespace {
class DifficultyBeatmapSerializedMethods;
}
// Type: ::DifficultyBeatmapSerializedMethods
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4415))
// CS Name: DifficultyBeatmapSerializedMethods
class CORDL_TYPE DifficultyBeatmapSerializedMethods : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DifficultyBeatmapSerializedMethods() = default;

// Ctor Parameters [CppParam { name: "", ty: "DifficultyBeatmapSerializedMethods", modifiers: " const&", def_value: None }]
constexpr DifficultyBeatmapSerializedMethods(DifficultyBeatmapSerializedMethods const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DifficultyBeatmapSerializedMethods", modifiers: "&&", def_value: None }]
constexpr DifficultyBeatmapSerializedMethods(DifficultyBeatmapSerializedMethods&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DifficultyBeatmapSerializedMethods(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DifficultyBeatmapSerializedMethods& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DifficultyBeatmapSerializedMethods& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DifficultyBeatmapSerializedMethods& operator=(DifficultyBeatmapSerializedMethods&& o) noexcept = default;
  constexpr DifficultyBeatmapSerializedMethods& operator=(DifficultyBeatmapSerializedMethods const& o) noexcept = default;
                


// Methods

/// @brief Method SerializedName addr 0x21ebecc size 0x26c virtual false final false
static ::StringW SerializedName(GlobalNamespace::IDifficultyBeatmap difficultyBeatmap) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::DifficultyBeatmapSerializedMethods);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DifficultyBeatmapSerializedMethods, "", "DifficultyBeatmapSerializedMethods");
