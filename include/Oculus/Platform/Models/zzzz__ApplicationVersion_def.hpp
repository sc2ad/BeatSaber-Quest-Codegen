#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class ApplicationVersion;
}
// Type: Oculus.Platform.Models::ApplicationVersion
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13387))
// CS Name: Oculus.Platform.Models.ApplicationVersion
class CORDL_TYPE ApplicationVersion : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ApplicationVersion() = default;

// Ctor Parameters [CppParam { name: "", ty: "ApplicationVersion", modifiers: " const&", def_value: None }]
constexpr ApplicationVersion(ApplicationVersion const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ApplicationVersion", modifiers: "&&", def_value: None }]
constexpr ApplicationVersion(ApplicationVersion&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ApplicationVersion(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ApplicationVersion& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ApplicationVersion& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ApplicationVersion& operator=(ApplicationVersion&& o) noexcept = default;
  constexpr ApplicationVersion& operator=(ApplicationVersion const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_CurrentCode, put=__set_CurrentCode))  CurrentCode;

constexpr void __set_CurrentCode(int32_t value) ;

constexpr int32_t __get_CurrentCode() const;

 ::StringW __declspec(property(get=__get_CurrentName, put=__set_CurrentName))  CurrentName;

constexpr void __set_CurrentName(::StringW value) ;

constexpr ::StringW __get_CurrentName() const;

 int32_t __declspec(property(get=__get_LatestCode, put=__set_LatestCode))  LatestCode;

constexpr void __set_LatestCode(int32_t value) ;

constexpr int32_t __get_LatestCode() const;

 ::StringW __declspec(property(get=__get_LatestName, put=__set_LatestName))  LatestName;

constexpr void __set_LatestName(::StringW value) ;

constexpr ::StringW __get_LatestName() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ApplicationVersion(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x259c8f8 size 0xa8 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::ApplicationVersion);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::ApplicationVersion, "Oculus.Platform.Models", "ApplicationVersion");
