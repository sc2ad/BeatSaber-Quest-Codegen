#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__EnvironmentEffectsFilterPreset_def.hpp"
#include "GlobalNamespace/zzzz__ValueDropdownController_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace GlobalNamespace {
struct EnvironmentEffectsFilterPreset;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentEffectsFilterPresetDropdown;
}
// Type: ::EnvironmentEffectsFilterPresetDropdown
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5694), inst: 4596 }), TypeDefinitionIndex(TypeDefinitionIndex(5694)), TypeDefinitionIndex(TypeDefinitionIndex(4731))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5695))
// CS Name: EnvironmentEffectsFilterPresetDropdown
class CORDL_TYPE EnvironmentEffectsFilterPresetDropdown : public ::GlobalNamespace::ValueDropdownController_1<::GlobalNamespace::EnvironmentEffectsFilterPreset> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~EnvironmentEffectsFilterPresetDropdown() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentEffectsFilterPresetDropdown", modifiers: " const&", def_value: None }]
constexpr EnvironmentEffectsFilterPresetDropdown(EnvironmentEffectsFilterPresetDropdown const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentEffectsFilterPresetDropdown", modifiers: "&&", def_value: None }]
constexpr EnvironmentEffectsFilterPresetDropdown(EnvironmentEffectsFilterPresetDropdown&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnvironmentEffectsFilterPresetDropdown(void* ptr) noexcept : ::GlobalNamespace::ValueDropdownController_1<::GlobalNamespace::EnvironmentEffectsFilterPreset>(ptr) {
}


  constexpr EnvironmentEffectsFilterPresetDropdown& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnvironmentEffectsFilterPresetDropdown& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnvironmentEffectsFilterPresetDropdown& operator=(EnvironmentEffectsFilterPresetDropdown&& o) noexcept = default;
  constexpr EnvironmentEffectsFilterPresetDropdown& operator=(EnvironmentEffectsFilterPresetDropdown const& o) noexcept = default;
                


// Methods

/// @brief Method GetNamedValues addr 0x2153d40 size 0x128 virtual true final false
 ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::EnvironmentEffectsFilterPreset,::StringW>> GetNamedValues() ;

// Ctor Parameters []
explicit EnvironmentEffectsFilterPresetDropdown() ;

/// @brief Method .ctor addr 0x2153e68 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown, "", "EnvironmentEffectsFilterPresetDropdown");
