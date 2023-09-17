#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace GlobalNamespace {
class LightGroupSO;
}
namespace GlobalNamespace {
class ColorArrayLightWithIds;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorArrayLightWithIdsGroupEntry;
}
// Type: ::ColorArrayLightWithIdsGroupEntry
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14680))
// CS Name: ColorArrayLightWithIdsGroupEntry
class CORDL_TYPE ColorArrayLightWithIdsGroupEntry : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ColorArrayLightWithIdsGroupEntry() = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorArrayLightWithIdsGroupEntry", modifiers: " const&", def_value: None }]
constexpr ColorArrayLightWithIdsGroupEntry(ColorArrayLightWithIdsGroupEntry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorArrayLightWithIdsGroupEntry", modifiers: "&&", def_value: None }]
constexpr ColorArrayLightWithIdsGroupEntry(ColorArrayLightWithIdsGroupEntry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ColorArrayLightWithIdsGroupEntry(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ColorArrayLightWithIdsGroupEntry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ColorArrayLightWithIdsGroupEntry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ColorArrayLightWithIdsGroupEntry& operator=(ColorArrayLightWithIdsGroupEntry&& o) noexcept = default;
  constexpr ColorArrayLightWithIdsGroupEntry& operator=(ColorArrayLightWithIdsGroupEntry const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::ColorArrayLightWithIds __declspec(property(get=__get__colorArrayLightWithIds, put=__set__colorArrayLightWithIds))  _colorArrayLightWithIds;

constexpr void __set__colorArrayLightWithIds(::GlobalNamespace::ColorArrayLightWithIds value) ;

constexpr ::GlobalNamespace::ColorArrayLightWithIds __get__colorArrayLightWithIds() const;

 ::ArrayW<::GlobalNamespace::LightGroupSO> __declspec(property(get=__get__lightGroups, put=__set__lightGroups))  _lightGroups;

constexpr void __set__lightGroups(::ArrayW<::GlobalNamespace::LightGroupSO> value) ;

constexpr ::ArrayW<::GlobalNamespace::LightGroupSO> __get__lightGroups() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__excludedLightIds, put=__set__excludedLightIds))  _excludedLightIds;

constexpr void __set__excludedLightIds(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__excludedLightIds() const;


// Properties

 ::ArrayW<::GlobalNamespace::LightGroupSO> __declspec(property(get=get_lightGroups))  lightGroups;


// Methods

/// @brief Method get_lightGroups addr 0x1f9cb7c size 0x8 virtual false final false
 ::ArrayW<::GlobalNamespace::LightGroupSO> get_lightGroups() ;

// Ctor Parameters []
explicit ColorArrayLightWithIdsGroupEntry() ;

/// @brief Method .ctor addr 0x1f9cb84 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ColorArrayLightWithIdsGroupEntry);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorArrayLightWithIdsGroupEntry, "", "ColorArrayLightWithIdsGroupEntry");
