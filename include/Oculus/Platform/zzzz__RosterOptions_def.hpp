#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Oculus::Platform {
class RosterOptions;
}
// Type: Oculus.Platform::RosterOptions
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13356))
// CS Name: Oculus.Platform.RosterOptions
class CORDL_TYPE RosterOptions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RosterOptions() = default;

// Ctor Parameters [CppParam { name: "", ty: "RosterOptions", modifiers: " const&", def_value: None }]
constexpr RosterOptions(RosterOptions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RosterOptions", modifiers: "&&", def_value: None }]
constexpr RosterOptions(RosterOptions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RosterOptions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RosterOptions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RosterOptions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RosterOptions& operator=(RosterOptions&& o) noexcept = default;
  constexpr RosterOptions& operator=(RosterOptions const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_Handle, put=__set_Handle))  Handle;

constexpr void __set_Handle(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_Handle() const;


// Methods

// Ctor Parameters []
explicit RosterOptions() ;

/// @brief Method .ctor addr 0x2599d74 size 0x68 virtual false final false
 void _ctor() ;

/// @brief Method AddSuggestedUser addr 0x2599ddc size 0x6c virtual false final false
 void AddSuggestedUser(uint64_t userID) ;

/// @brief Method ClearSuggestedUsers addr 0x2599e48 size 0x5c virtual false final false
 void ClearSuggestedUsers() ;

/// @brief Method op_Explicit addr 0x25947ec size 0x58 virtual false final false
static ::cordl_internals::intptr_t op_Explicit___cordl_internals__intptr_t(::Oculus::Platform::RosterOptions options) ;

/// @brief Method Finalize addr 0x2599ea4 size 0xd8 virtual true final false
 void Finalize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::RosterOptions);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::RosterOptions, "Oculus.Platform", "RosterOptions");
