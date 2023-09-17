#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__Pid_def.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Oculus::Platform::Models {
class PidList;
}
// Type: Oculus.Platform.Models::PidList
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13410)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13410), inst: 1145 }), TypeDefinitionIndex(TypeDefinitionIndex(13459))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13460))
// CS Name: Oculus.Platform.Models.PidList
class CORDL_TYPE PidList : public ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::Pid> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~PidList() = default;

// Ctor Parameters [CppParam { name: "", ty: "PidList", modifiers: " const&", def_value: None }]
constexpr PidList(PidList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PidList", modifiers: "&&", def_value: None }]
constexpr PidList(PidList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PidList(void* ptr) noexcept : ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::Pid>(ptr) {
}


  constexpr PidList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PidList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PidList& operator=(PidList&& o) noexcept = default;
  constexpr PidList& operator=(PidList const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "a", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit PidList(::cordl_internals::intptr_t a) ;

/// @brief Method .ctor addr 0x25a2058 size 0x23c virtual false final false
 void _ctor(::cordl_internals::intptr_t a) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::Models::PidList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::PidList, "Oculus.Platform.Models", "PidList");
