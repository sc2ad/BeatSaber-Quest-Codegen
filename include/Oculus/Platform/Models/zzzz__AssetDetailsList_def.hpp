#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__AssetDetails_def.hpp"
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class AssetDetailsList;
}
// Type: Oculus.Platform.Models::AssetDetailsList
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13410)), TypeDefinitionIndex(TypeDefinitionIndex(13388)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13410), inst: 1130 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13389))
// CS Name: Oculus.Platform.Models.AssetDetailsList
class CORDL_TYPE AssetDetailsList : public Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::AssetDetails> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~AssetDetailsList() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetDetailsList", modifiers: " const&", def_value: None }]
constexpr AssetDetailsList(AssetDetailsList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetDetailsList", modifiers: "&&", def_value: None }]
constexpr AssetDetailsList(AssetDetailsList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssetDetailsList(void* ptr) noexcept : Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::AssetDetails>(ptr) {
}


  constexpr AssetDetailsList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssetDetailsList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssetDetailsList& operator=(AssetDetailsList&& o) noexcept = default;
  constexpr AssetDetailsList& operator=(AssetDetailsList const& o) noexcept = default;
                


// Methods

static Oculus::Platform::Models::AssetDetailsList New_ctor(::cordl_internals::intptr_t a) ;

/// @brief Method .ctor addr 0x259cba0 size 0x23c virtual false final false
 void _ctor(::cordl_internals::intptr_t a) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::AssetDetailsList);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::AssetDetailsList, "Oculus.Platform.Models", "AssetDetailsList");
