#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Oculus::Platform::Models {
class AvatarEditorResult;
}
namespace Oculus::Platform {
template<typename T>
class Request_1;
}
namespace Oculus::Platform {
class AvatarEditorOptions;
}
// Forward declare root types
namespace Oculus::Platform {
class Avatar;
}
// Type: Oculus.Platform::Avatar
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13325))
// CS Name: Oculus.Platform.Avatar
class CORDL_TYPE Avatar : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Avatar() = default;

// Ctor Parameters [CppParam { name: "", ty: "Avatar", modifiers: " const&", def_value: None }]
constexpr Avatar(Avatar const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Avatar", modifiers: "&&", def_value: None }]
constexpr Avatar(Avatar&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Avatar(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Avatar& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Avatar& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Avatar& operator=(Avatar&& o) noexcept = default;
  constexpr Avatar& operator=(Avatar const& o) noexcept = default;
                


// Methods

/// @brief Method LaunchAvatarEditor addr 0x2591a8c size 0x1a0 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::AvatarEditorResult> LaunchAvatarEditor(Oculus::Platform::AvatarEditorOptions options) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::Avatar);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Avatar, "Oculus.Platform", "Avatar");
