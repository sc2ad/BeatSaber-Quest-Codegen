#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__InstalledApplication_def.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class InstalledApplicationList;
}
// Type: Oculus.Platform.Models::InstalledApplicationList
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13410), inst: 1137 }), TypeDefinitionIndex(TypeDefinitionIndex(13410)), TypeDefinitionIndex(TypeDefinitionIndex(13417))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13418))
// CS Name: Oculus.Platform.Models.InstalledApplicationList
class CORDL_TYPE InstalledApplicationList : public Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::InstalledApplication> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~InstalledApplicationList() = default;

// Ctor Parameters [CppParam { name: "", ty: "InstalledApplicationList", modifiers: " const&", def_value: None }]
constexpr InstalledApplicationList(InstalledApplicationList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InstalledApplicationList", modifiers: "&&", def_value: None }]
constexpr InstalledApplicationList(InstalledApplicationList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InstalledApplicationList(void* ptr) noexcept : Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::InstalledApplication>(ptr) {
}


  constexpr InstalledApplicationList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InstalledApplicationList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InstalledApplicationList& operator=(InstalledApplicationList&& o) noexcept = default;
  constexpr InstalledApplicationList& operator=(InstalledApplicationList const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "a", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit InstalledApplicationList(::cordl_internals::intptr_t a) ;

/// @brief Method .ctor addr 0x259eeac size 0x23c virtual false final false
 void _ctor(::cordl_internals::intptr_t a) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::InstalledApplicationList);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::InstalledApplicationList, "Oculus.Platform.Models", "InstalledApplicationList");
