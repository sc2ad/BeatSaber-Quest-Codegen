#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class Pid;
}
// Type: Oculus.Platform.Models::Pid
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13459))
// CS Name: Oculus.Platform.Models.Pid
class CORDL_TYPE Pid : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Pid() = default;

// Ctor Parameters [CppParam { name: "", ty: "Pid", modifiers: " const&", def_value: None }]
constexpr Pid(Pid const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Pid", modifiers: "&&", def_value: None }]
constexpr Pid(Pid&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Pid(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Pid& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Pid& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Pid& operator=(Pid&& o) noexcept = default;
  constexpr Pid& operator=(Pid const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_Id, put=__set_Id))  Id;

constexpr void __set_Id(::StringW value) ;

constexpr ::StringW __get_Id() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Pid(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x25a1fe0 size 0x78 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::Pid);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::Pid, "Oculus.Platform.Models", "Pid");
