#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Net::Http::Headers {
class NameValueHeaderValue;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class CollectionExtensions;
}
// Type: System.Net.Http.Headers::CollectionExtensions
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14820))
// CS Name: System.Net.Http.Headers.CollectionExtensions
class CORDL_TYPE CollectionExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CollectionExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "CollectionExtensions", modifiers: " const&", def_value: None }]
constexpr CollectionExtensions(CollectionExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CollectionExtensions", modifiers: "&&", def_value: None }]
constexpr CollectionExtensions(CollectionExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CollectionExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CollectionExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CollectionExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CollectionExtensions& operator=(CollectionExtensions&& o) noexcept = default;
  constexpr CollectionExtensions& operator=(CollectionExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method SequenceEqual addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TSource>
static bool SequenceEqual(System::Collections::Generic::List_1<TSource> first, System::Collections::Generic::List_1<TSource> second) ;

/// @brief Method SetValue addr 0x26a5750 size 0x1d4 virtual false final false
static void SetValue(System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue> parameters, ::StringW key, ::StringW value) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::StringW ToString(System::Collections::Generic::List_1<T> list) ;

/// @brief Method ToStringBuilder addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void ToStringBuilder(System::Collections::Generic::List_1<T> list, System::Text::StringBuilder sb) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
NEED_NO_BOX(System::Net::Http::Headers::CollectionExtensions);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::CollectionExtensions, "System.Net.Http.Headers", "CollectionExtensions");
