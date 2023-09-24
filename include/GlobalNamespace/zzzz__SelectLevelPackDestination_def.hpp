#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__MenuDestination_def.hpp"
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
// Forward declare root types
namespace GlobalNamespace {
class SelectLevelPackDestination;
}
// Type: ::SelectLevelPackDestination
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4184))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4187))
// CS Name: SelectLevelPackDestination
class CORDL_TYPE SelectLevelPackDestination : public GlobalNamespace::MenuDestination {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SelectLevelPackDestination() = default;

// Ctor Parameters [CppParam { name: "", ty: "SelectLevelPackDestination", modifiers: " const&", def_value: None }]
constexpr SelectLevelPackDestination(SelectLevelPackDestination const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SelectLevelPackDestination", modifiers: "&&", def_value: None }]
constexpr SelectLevelPackDestination(SelectLevelPackDestination&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SelectLevelPackDestination(void* ptr) noexcept : GlobalNamespace::MenuDestination(ptr) {
}


  constexpr SelectLevelPackDestination& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SelectLevelPackDestination& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SelectLevelPackDestination& operator=(SelectLevelPackDestination&& o) noexcept = default;
  constexpr SelectLevelPackDestination& operator=(SelectLevelPackDestination const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IBeatmapLevelPack __declspec(property(get=__get_beatmapLevelPack, put=__set_beatmapLevelPack))  beatmapLevelPack;

constexpr void __set_beatmapLevelPack(GlobalNamespace::IBeatmapLevelPack value) ;

constexpr GlobalNamespace::IBeatmapLevelPack __get_beatmapLevelPack() const;


// Methods

static GlobalNamespace::SelectLevelPackDestination New_ctor(GlobalNamespace::IBeatmapLevelPack beatmapLevelPack) ;

/// @brief Method .ctor addr 0x21bc5f0 size 0x28 virtual false final false
 void _ctor(GlobalNamespace::IBeatmapLevelPack beatmapLevelPack) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SelectLevelPackDestination);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SelectLevelPackDestination, "", "SelectLevelPackDestination");
