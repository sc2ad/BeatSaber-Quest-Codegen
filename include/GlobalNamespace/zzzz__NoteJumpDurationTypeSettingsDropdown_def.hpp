#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__NoteJumpDurationTypeSettings_def.hpp"
#include "GlobalNamespace/zzzz__ValueDropdownController_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
namespace GlobalNamespace {
struct NoteJumpDurationTypeSettings;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteJumpDurationTypeSettingsDropdown;
}
// Type: ::NoteJumpDurationTypeSettingsDropdown
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4732)), TypeDefinitionIndex(TypeDefinitionIndex(5694)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5694), inst: 4608 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5697))
// CS Name: NoteJumpDurationTypeSettingsDropdown
class CORDL_TYPE NoteJumpDurationTypeSettingsDropdown : public GlobalNamespace::ValueDropdownController_1<GlobalNamespace::NoteJumpDurationTypeSettings> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~NoteJumpDurationTypeSettingsDropdown() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteJumpDurationTypeSettingsDropdown", modifiers: " const&", def_value: None }]
constexpr NoteJumpDurationTypeSettingsDropdown(NoteJumpDurationTypeSettingsDropdown const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteJumpDurationTypeSettingsDropdown", modifiers: "&&", def_value: None }]
constexpr NoteJumpDurationTypeSettingsDropdown(NoteJumpDurationTypeSettingsDropdown&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoteJumpDurationTypeSettingsDropdown(void* ptr) noexcept : GlobalNamespace::ValueDropdownController_1<GlobalNamespace::NoteJumpDurationTypeSettings>(ptr) {
}


  constexpr NoteJumpDurationTypeSettingsDropdown& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoteJumpDurationTypeSettingsDropdown& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoteJumpDurationTypeSettingsDropdown& operator=(NoteJumpDurationTypeSettingsDropdown&& o) noexcept = default;
  constexpr NoteJumpDurationTypeSettingsDropdown& operator=(NoteJumpDurationTypeSettingsDropdown const& o) noexcept = default;
                


// Methods

/// @brief Method GetNamedValues addr 0x2154054 size 0xf4 virtual true final false
 System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<GlobalNamespace::NoteJumpDurationTypeSettings,::StringW>> GetNamedValues() ;

static GlobalNamespace::NoteJumpDurationTypeSettingsDropdown New_ctor() ;

/// @brief Method .ctor addr 0x2154148 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::NoteJumpDurationTypeSettingsDropdown);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteJumpDurationTypeSettingsDropdown, "", "NoteJumpDurationTypeSettingsDropdown");
