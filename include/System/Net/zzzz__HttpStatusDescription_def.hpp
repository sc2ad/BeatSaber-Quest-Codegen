#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Net {
struct HttpStatusCode;
}
// Forward declare root types
namespace System::Net {
class HttpStatusDescription;
}
// Type: System.Net::HttpStatusDescription
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7872))
// CS Name: System.Net.HttpStatusDescription
class CORDL_TYPE HttpStatusDescription : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HttpStatusDescription() = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpStatusDescription", modifiers: " const&", def_value: None }]
constexpr HttpStatusDescription(HttpStatusDescription const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpStatusDescription", modifiers: "&&", def_value: None }]
constexpr HttpStatusDescription(HttpStatusDescription&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HttpStatusDescription(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HttpStatusDescription& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HttpStatusDescription& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HttpStatusDescription& operator=(HttpStatusDescription&& o) noexcept = default;
  constexpr HttpStatusDescription& operator=(HttpStatusDescription const& o) noexcept = default;
                


// Methods

/// @brief Method Get addr 0x27f6f84 size 0x4 virtual false final false
static ::StringW Get(::System::Net::HttpStatusCode code) ;

/// @brief Method Get addr 0x27f6f88 size 0x698 virtual false final false
static ::StringW Get(int32_t code) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
NEED_NO_BOX(::System::Net::HttpStatusDescription);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpStatusDescription, "System.Net", "HttpStatusDescription");
