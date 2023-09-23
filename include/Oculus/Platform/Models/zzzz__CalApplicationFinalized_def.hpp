#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class CalApplicationFinalized;
}
// Type: Oculus.Platform.Models::CalApplicationFinalized
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13397))
// CS Name: Oculus.Platform.Models.CalApplicationFinalized
class CORDL_TYPE CalApplicationFinalized : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CalApplicationFinalized() = default;

// Ctor Parameters [CppParam { name: "", ty: "CalApplicationFinalized", modifiers: " const&", def_value: None }]
constexpr CalApplicationFinalized(CalApplicationFinalized const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CalApplicationFinalized", modifiers: "&&", def_value: None }]
constexpr CalApplicationFinalized(CalApplicationFinalized&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CalApplicationFinalized(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CalApplicationFinalized& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CalApplicationFinalized& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CalApplicationFinalized& operator=(CalApplicationFinalized&& o) noexcept = default;
  constexpr CalApplicationFinalized& operator=(CalApplicationFinalized const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_CountdownMS, put=__set_CountdownMS))  CountdownMS;

constexpr void __set_CountdownMS(int32_t value) ;

constexpr int32_t __get_CountdownMS() const;

 uint64_t __declspec(property(get=__get_ID, put=__set_ID))  ID;

constexpr void __set_ID(uint64_t value) ;

constexpr uint64_t __get_ID() const;

 ::StringW __declspec(property(get=__get_LaunchDetails, put=__set_LaunchDetails))  LaunchDetails;

constexpr void __set_LaunchDetails(::StringW value) ;

constexpr ::StringW __get_LaunchDetails() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit CalApplicationFinalized(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x259d3c8 size 0x98 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::CalApplicationFinalized);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::CalApplicationFinalized, "Oculus.Platform.Models", "CalApplicationFinalized");
