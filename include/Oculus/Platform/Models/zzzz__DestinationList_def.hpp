#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__Destination_def.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class DestinationList;
}
// Type: Oculus.Platform.Models::DestinationList
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13411)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13410), inst: 1136 }), TypeDefinitionIndex(TypeDefinitionIndex(13410))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13412))
// CS Name: Oculus.Platform.Models.DestinationList
class CORDL_TYPE DestinationList : public Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::Destination> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~DestinationList() = default;

// Ctor Parameters [CppParam { name: "", ty: "DestinationList", modifiers: " const&", def_value: None }]
constexpr DestinationList(DestinationList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DestinationList", modifiers: "&&", def_value: None }]
constexpr DestinationList(DestinationList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DestinationList(void* ptr) noexcept : Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::Destination>(ptr) {
}


  constexpr DestinationList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DestinationList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DestinationList& operator=(DestinationList&& o) noexcept = default;
  constexpr DestinationList& operator=(DestinationList const& o) noexcept = default;
                


// Methods

static Oculus::Platform::Models::DestinationList New_ctor(::cordl_internals::intptr_t a) ;

/// @brief Method .ctor addr 0x259e8c4 size 0x25c virtual false final false
 void _ctor(::cordl_internals::intptr_t a) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::DestinationList);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::DestinationList, "Oculus.Platform.Models", "DestinationList");
