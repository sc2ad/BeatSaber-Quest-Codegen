#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Oculus::Platform {
struct PlatformInitializeResult;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class PlatformInitialize;
}
// Type: Oculus.Platform.Models::PlatformInitialize
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13462))
// CS Name: Oculus.Platform.Models.PlatformInitialize
class CORDL_TYPE PlatformInitialize : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PlatformInitialize() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlatformInitialize", modifiers: " const&", def_value: None }]
constexpr PlatformInitialize(PlatformInitialize const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlatformInitialize", modifiers: "&&", def_value: None }]
constexpr PlatformInitialize(PlatformInitialize&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlatformInitialize(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PlatformInitialize& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlatformInitialize& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlatformInitialize& operator=(PlatformInitialize&& o) noexcept = default;
  constexpr PlatformInitialize& operator=(PlatformInitialize const& o) noexcept = default;
                


// Fields

 Oculus::Platform::PlatformInitializeResult __declspec(property(get=__get_Result, put=__set_Result))  Result;

constexpr void __set_Result(Oculus::Platform::PlatformInitializeResult value) ;

constexpr Oculus::Platform::PlatformInitializeResult __get_Result() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit PlatformInitialize(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x25a2390 size 0x78 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::PlatformInitialize);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::PlatformInitialize, "Oculus.Platform.Models", "PlatformInitialize");
