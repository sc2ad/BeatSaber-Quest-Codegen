#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Oculus::Platform::Models {
class ShareMediaResult;
}
namespace Oculus::Platform {
struct MediaContentType;
}
namespace Oculus::Platform {
template<typename T>
class Request_1;
}
// Forward declare root types
namespace Oculus::Platform {
class Media;
}
// Type: Oculus.Platform::Media
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13333))
// CS Name: Oculus.Platform.Media
class CORDL_TYPE Media : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Media() = default;

// Ctor Parameters [CppParam { name: "", ty: "Media", modifiers: " const&", def_value: None }]
constexpr Media(Media const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Media", modifiers: "&&", def_value: None }]
constexpr Media(Media&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Media(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Media& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Media& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Media& operator=(Media&& o) noexcept = default;
  constexpr Media& operator=(Media const& o) noexcept = default;
                


// Methods

/// @brief Method ShareToFacebook addr 0x259631c size 0x17c virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::ShareMediaResult> ShareToFacebook(::StringW postTextSuggestion, ::StringW filePath, Oculus::Platform::MediaContentType contentType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::Media);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Media, "Oculus.Platform", "Media");
