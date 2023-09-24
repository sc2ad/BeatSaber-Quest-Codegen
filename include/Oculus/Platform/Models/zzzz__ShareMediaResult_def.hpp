#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Oculus::Platform {
struct ShareMediaStatus;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class ShareMediaResult;
}
// Type: Oculus.Platform.Models::ShareMediaResult
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13475))
// CS Name: Oculus.Platform.Models.ShareMediaResult
class CORDL_TYPE ShareMediaResult : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ShareMediaResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "ShareMediaResult", modifiers: " const&", def_value: None }]
constexpr ShareMediaResult(ShareMediaResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ShareMediaResult", modifiers: "&&", def_value: None }]
constexpr ShareMediaResult(ShareMediaResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ShareMediaResult(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ShareMediaResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ShareMediaResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ShareMediaResult& operator=(ShareMediaResult&& o) noexcept = default;
  constexpr ShareMediaResult& operator=(ShareMediaResult const& o) noexcept = default;
                


// Fields

 Oculus::Platform::ShareMediaStatus __declspec(property(get=__get_Status, put=__set_Status))  Status;

constexpr void __set_Status(Oculus::Platform::ShareMediaStatus value) ;

constexpr Oculus::Platform::ShareMediaStatus __get_Status() const;


// Methods

static Oculus::Platform::Models::ShareMediaResult New_ctor(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x25a3360 size 0x78 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::ShareMediaResult);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::ShareMediaResult, "Oculus.Platform.Models", "ShareMediaResult");
