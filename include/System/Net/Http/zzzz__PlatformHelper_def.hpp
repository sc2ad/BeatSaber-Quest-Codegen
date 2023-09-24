#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Threading {
struct CancellationToken;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Http {
class StreamContent;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace System::Net::Http {
class PlatformHelper;
}
// Type: System.Net.Http::PlatformHelper
namespace System::Net::Http {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14799))
// CS Name: System.Net.Http.PlatformHelper
class CORDL_TYPE PlatformHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PlatformHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlatformHelper", modifiers: " const&", def_value: None }]
constexpr PlatformHelper(PlatformHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlatformHelper", modifiers: "&&", def_value: None }]
constexpr PlatformHelper(PlatformHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlatformHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PlatformHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlatformHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlatformHelper& operator=(PlatformHelper&& o) noexcept = default;
  constexpr PlatformHelper& operator=(PlatformHelper const& o) noexcept = default;
                


// Methods

/// @brief Method IsContentHeader addr 0x269c9fc size 0x60 virtual false final false
static bool IsContentHeader(::StringW name) ;

/// @brief Method GetSingleHeaderString addr 0x269c730 size 0x64 virtual false final false
static ::StringW GetSingleHeaderString(::StringW name, System::Collections::Generic::IEnumerable_1<::StringW> values) ;

/// @brief Method CreateStreamContent addr 0x269c988 size 0x74 virtual false final false
static System::Net::Http::StreamContent CreateStreamContent(System::IO::Stream stream, System::Threading::CancellationToken cancellationToken) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http
NEED_NO_BOX(System::Net::Http::PlatformHelper);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::PlatformHelper, "System.Net.Http", "PlatformHelper");
