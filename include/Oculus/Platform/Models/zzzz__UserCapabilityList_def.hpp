#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserCapability_def.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class UserCapabilityList;
}
// Type: Oculus.Platform.Models::UserCapabilityList
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13484)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13410), inst: 1152 }), TypeDefinitionIndex(TypeDefinitionIndex(13410))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13485))
// CS Name: Oculus.Platform.Models.UserCapabilityList
class CORDL_TYPE UserCapabilityList : public Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::UserCapability> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~UserCapabilityList() = default;

// Ctor Parameters [CppParam { name: "", ty: "UserCapabilityList", modifiers: " const&", def_value: None }]
constexpr UserCapabilityList(UserCapabilityList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UserCapabilityList", modifiers: "&&", def_value: None }]
constexpr UserCapabilityList(UserCapabilityList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UserCapabilityList(void* ptr) noexcept : Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::UserCapability>(ptr) {
}


  constexpr UserCapabilityList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UserCapabilityList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UserCapabilityList& operator=(UserCapabilityList&& o) noexcept = default;
  constexpr UserCapabilityList& operator=(UserCapabilityList const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "a", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UserCapabilityList(::cordl_internals::intptr_t a) ;

/// @brief Method .ctor addr 0x25a3994 size 0x25c virtual false final false
 void _ctor(::cordl_internals::intptr_t a) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::UserCapabilityList);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::UserCapabilityList, "Oculus.Platform.Models", "UserCapabilityList");
