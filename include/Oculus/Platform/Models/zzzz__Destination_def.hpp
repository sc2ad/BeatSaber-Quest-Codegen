#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class Destination;
}
// Type: Oculus.Platform.Models::Destination
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13411))
// CS Name: Oculus.Platform.Models.Destination
class CORDL_TYPE Destination : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Destination() = default;

// Ctor Parameters [CppParam { name: "", ty: "Destination", modifiers: " const&", def_value: None }]
constexpr Destination(Destination const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Destination", modifiers: "&&", def_value: None }]
constexpr Destination(Destination&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Destination(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Destination& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Destination& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Destination& operator=(Destination&& o) noexcept = default;
  constexpr Destination& operator=(Destination const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_ApiName, put=__set_ApiName))  ApiName;

constexpr void __set_ApiName(::StringW value) ;

constexpr ::StringW __get_ApiName() const;

 ::StringW __declspec(property(get=__get_DeeplinkMessage, put=__set_DeeplinkMessage))  DeeplinkMessage;

constexpr void __set_DeeplinkMessage(::StringW value) ;

constexpr ::StringW __get_DeeplinkMessage() const;

 ::StringW __declspec(property(get=__get_DisplayName, put=__set_DisplayName))  DisplayName;

constexpr void __set_DisplayName(::StringW value) ;

constexpr ::StringW __get_DisplayName() const;


// Methods

static Oculus::Platform::Models::Destination New_ctor(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x259c4dc size 0x98 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::Destination);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::Destination, "Oculus.Platform.Models", "Destination");
