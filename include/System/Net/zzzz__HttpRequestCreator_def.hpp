#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
class Uri;
}
namespace System::Net {
class IWebRequestCreate;
}
namespace System::Net {
class WebRequest;
}
// Forward declare root types
namespace System::Net {
class HttpRequestCreator;
}
// Type: System.Net::HttpRequestCreator
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8028))
// CS Name: System.Net.HttpRequestCreator
class CORDL_TYPE HttpRequestCreator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Net::IWebRequestCreate
constexpr operator  System::Net::IWebRequestCreate() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HttpRequestCreator() = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpRequestCreator", modifiers: " const&", def_value: None }]
constexpr HttpRequestCreator(HttpRequestCreator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpRequestCreator", modifiers: "&&", def_value: None }]
constexpr HttpRequestCreator(HttpRequestCreator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HttpRequestCreator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HttpRequestCreator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HttpRequestCreator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HttpRequestCreator& operator=(HttpRequestCreator&& o) noexcept = default;
  constexpr HttpRequestCreator& operator=(HttpRequestCreator const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit HttpRequestCreator() ;

/// @brief Method .ctor addr 0x28390f0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Create addr 0x28390f8 size 0x60 virtual true final true
 System::Net::WebRequest Create(System::Uri uri) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::HttpRequestCreator);
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpRequestCreator, "System.Net", "HttpRequestCreator");
