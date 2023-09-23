#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Oculus::Platform {
template<typename T>
class Oculus__Platform__Message_1__Callback;
}
// Forward declare root types
namespace Oculus::Platform {
class Vrcamera;
}
// Type: Oculus.Platform::Vrcamera
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13339))
// CS Name: Oculus.Platform.Vrcamera
class CORDL_TYPE Vrcamera : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Vrcamera() = default;

// Ctor Parameters [CppParam { name: "", ty: "Vrcamera", modifiers: " const&", def_value: None }]
constexpr Vrcamera(Vrcamera const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Vrcamera", modifiers: "&&", def_value: None }]
constexpr Vrcamera(Vrcamera&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Vrcamera(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Vrcamera& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Vrcamera& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Vrcamera& operator=(Vrcamera&& o) noexcept = default;
  constexpr Vrcamera& operator=(Vrcamera const& o) noexcept = default;
                


// Methods

/// @brief Method SetGetDataChannelMessageUpdateNotificationCallback addr 0x2597dd8 size 0x74 virtual false final false
static void SetGetDataChannelMessageUpdateNotificationCallback(Oculus::Platform::Oculus__Platform__Message_1__Callback<::StringW> callback) ;

/// @brief Method SetGetSurfaceUpdateNotificationCallback addr 0x2597e4c size 0x74 virtual false final false
static void SetGetSurfaceUpdateNotificationCallback(Oculus::Platform::Oculus__Platform__Message_1__Callback<::StringW> callback) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::Vrcamera);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Vrcamera, "Oculus.Platform", "Vrcamera");
