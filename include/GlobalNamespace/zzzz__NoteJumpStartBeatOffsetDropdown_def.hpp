#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__ValueDropdownController_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteJumpStartBeatOffsetDropdown;
}
// Type: ::NoteJumpStartBeatOffsetDropdown
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5694)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5694), inst: 374 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5698))
// CS Name: NoteJumpStartBeatOffsetDropdown
class CORDL_TYPE NoteJumpStartBeatOffsetDropdown : public GlobalNamespace::ValueDropdownController_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~NoteJumpStartBeatOffsetDropdown() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteJumpStartBeatOffsetDropdown", modifiers: " const&", def_value: None }]
constexpr NoteJumpStartBeatOffsetDropdown(NoteJumpStartBeatOffsetDropdown const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteJumpStartBeatOffsetDropdown", modifiers: "&&", def_value: None }]
constexpr NoteJumpStartBeatOffsetDropdown(NoteJumpStartBeatOffsetDropdown&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoteJumpStartBeatOffsetDropdown(void* ptr) noexcept : GlobalNamespace::ValueDropdownController_1<float_t>(ptr) {
}


  constexpr NoteJumpStartBeatOffsetDropdown& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoteJumpStartBeatOffsetDropdown& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoteJumpStartBeatOffsetDropdown& operator=(NoteJumpStartBeatOffsetDropdown&& o) noexcept = default;
  constexpr NoteJumpStartBeatOffsetDropdown& operator=(NoteJumpStartBeatOffsetDropdown const& o) noexcept = default;
                


// Methods

/// @brief Method GetNamedValues addr 0x2154190 size 0x198 virtual true final false
 System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<float_t,::StringW>> GetNamedValues() ;

// Ctor Parameters []
explicit NoteJumpStartBeatOffsetDropdown() ;

/// @brief Method .ctor addr 0x2154328 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::NoteJumpStartBeatOffsetDropdown);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteJumpStartBeatOffsetDropdown, "", "NoteJumpStartBeatOffsetDropdown");
