#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class UserReportID;
}
// Type: Oculus.Platform.Models::UserReportID
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13488))
// CS Name: Oculus.Platform.Models.UserReportID
class CORDL_TYPE UserReportID : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UserReportID() = default;

// Ctor Parameters [CppParam { name: "", ty: "UserReportID", modifiers: " const&", def_value: None }]
constexpr UserReportID(UserReportID const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UserReportID", modifiers: "&&", def_value: None }]
constexpr UserReportID(UserReportID&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UserReportID(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UserReportID& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UserReportID& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UserReportID& operator=(UserReportID&& o) noexcept = default;
  constexpr UserReportID& operator=(UserReportID const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_DidCancel, put=__set_DidCancel))  DidCancel;

constexpr void __set_DidCancel(bool value) ;

constexpr bool __get_DidCancel() const;

 uint64_t __declspec(property(get=__get_ID, put=__set_ID))  ID;

constexpr void __set_ID(uint64_t value) ;

constexpr uint64_t __get_ID() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UserReportID(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x25a3ce4 size 0x108c virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::UserReportID);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::UserReportID, "Oculus.Platform.Models", "UserReportID");
