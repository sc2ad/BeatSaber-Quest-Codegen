#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IReadOnlyDictionary_2;
}
// Forward declare root types
namespace System::Collections::Generic {
class CollectionExtensions;
}
// Type: System.Collections.Generic::CollectionExtensions
namespace System::Collections::Generic {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3836))
// CS Name: System.Collections.Generic.CollectionExtensions
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

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TKey,typename TValue>
static TValue GetValueOrDefault(::System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue> dictionary, TKey key) ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TKey,typename TValue>
static TValue GetValueOrDefault(::System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue> dictionary, TKey key, TValue defaultValue) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
} // end anonymous namespace
NEED_NO_BOX(::System::Collections::Generic::CollectionExtensions);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Generic::CollectionExtensions, "System.Collections.Generic", "CollectionExtensions");
