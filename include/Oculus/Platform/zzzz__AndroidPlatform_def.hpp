#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace Oculus::Platform::Models {
class PlatformInitialize;
}
namespace Oculus::Platform {
template<typename T>
class Request_1;
}
// Forward declare root types
namespace Oculus::Platform {
class AndroidPlatform;
}
// Type: Oculus.Platform::AndroidPlatform
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13163))
// CS Name: Oculus.Platform.AndroidPlatform
class CORDL_TYPE AndroidPlatform : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AndroidPlatform() = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidPlatform", modifiers: " const&", def_value: None }]
constexpr AndroidPlatform(AndroidPlatform const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidPlatform", modifiers: "&&", def_value: None }]
constexpr AndroidPlatform(AndroidPlatform&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AndroidPlatform(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AndroidPlatform& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AndroidPlatform& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AndroidPlatform& operator=(AndroidPlatform&& o) noexcept = default;
  constexpr AndroidPlatform& operator=(AndroidPlatform const& o) noexcept = default;
                


// Methods

/// @brief Method Initialize addr 0x2552d7c size 0xb0 virtual false final false
 bool Initialize(::StringW appId) ;

/// @brief Method AsyncInitialize addr 0x2552ec4 size 0x108 virtual false final false
 ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize> AsyncInitialize(::StringW appId) ;

// Ctor Parameters []
explicit AndroidPlatform() ;

/// @brief Method .ctor addr 0x2553060 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::AndroidPlatform);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::AndroidPlatform, "Oculus.Platform", "AndroidPlatform");
