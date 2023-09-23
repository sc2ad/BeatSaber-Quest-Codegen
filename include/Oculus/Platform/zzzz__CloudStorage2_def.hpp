#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Oculus::Platform {
template<typename T>
class Request_1;
}
// Forward declare root types
namespace Oculus::Platform {
class CloudStorage2;
}
// Type: Oculus.Platform::CloudStorage2
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13327))
// CS Name: Oculus.Platform.CloudStorage2
class CORDL_TYPE CloudStorage2 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CloudStorage2() = default;

// Ctor Parameters [CppParam { name: "", ty: "CloudStorage2", modifiers: " const&", def_value: None }]
constexpr CloudStorage2(CloudStorage2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CloudStorage2", modifiers: "&&", def_value: None }]
constexpr CloudStorage2(CloudStorage2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CloudStorage2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CloudStorage2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CloudStorage2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CloudStorage2& operator=(CloudStorage2&& o) noexcept = default;
  constexpr CloudStorage2& operator=(CloudStorage2 const& o) noexcept = default;
                


// Methods

/// @brief Method GetUserDirectoryPath addr 0x2593b1c size 0x15c virtual false final false
static Oculus::Platform::Request_1<::StringW> GetUserDirectoryPath() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::CloudStorage2);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::CloudStorage2, "Oculus.Platform", "CloudStorage2");
