#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace GlobalNamespace {
class NamedPreset;
}
// Forward declare root types
namespace GlobalNamespace {
class NamedPresetsSO;
}
// Type: ::NamedPresetsSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4460))
// CS Name: NamedPresetsSO
class CORDL_TYPE NamedPresetsSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~NamedPresetsSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "NamedPresetsSO", modifiers: " const&", def_value: None }]
constexpr NamedPresetsSO(NamedPresetsSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NamedPresetsSO", modifiers: "&&", def_value: None }]
constexpr NamedPresetsSO(NamedPresetsSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NamedPresetsSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr NamedPresetsSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NamedPresetsSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NamedPresetsSO& operator=(NamedPresetsSO&& o) noexcept = default;
  constexpr NamedPresetsSO& operator=(NamedPresetsSO const& o) noexcept = default;
                


// Properties

 ::ArrayW<GlobalNamespace::NamedPreset> __declspec(property(get=get_namedPresets))  namedPresets;


// Methods

/// @brief Method get_namedPresets addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<GlobalNamespace::NamedPreset> get_namedPresets() ;

static GlobalNamespace::NamedPresetsSO New_ctor() ;

/// @brief Method .ctor addr 0x21f0844 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::NamedPresetsSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NamedPresetsSO, "", "NamedPresetsSO");
