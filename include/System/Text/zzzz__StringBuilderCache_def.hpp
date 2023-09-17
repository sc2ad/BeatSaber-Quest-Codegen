#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace System::Text {
class StringBuilderCache;
}
// Type: System.Text::StringBuilderCache
namespace System::Text {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15436))
// CS Name: System.Text.StringBuilderCache
class CORDL_TYPE StringBuilderCache : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~StringBuilderCache() = default;

// Ctor Parameters [CppParam { name: "", ty: "StringBuilderCache", modifiers: " const&", def_value: None }]
constexpr StringBuilderCache(StringBuilderCache const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StringBuilderCache", modifiers: "&&", def_value: None }]
constexpr StringBuilderCache(StringBuilderCache&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StringBuilderCache(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StringBuilderCache& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StringBuilderCache& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StringBuilderCache& operator=(StringBuilderCache&& o) noexcept = default;
  constexpr StringBuilderCache& operator=(StringBuilderCache const& o) noexcept = default;
                


// Fields

static ::System::Text::StringBuilder __declspec(property(get=__get_t_cachedInstance, put=__set_t_cachedInstance))  t_cachedInstance;

static void __set_t_cachedInstance(::System::Text::StringBuilder value) ;

static ::System::Text::StringBuilder __get_t_cachedInstance() ;


// Methods

/// @brief Method Acquire addr 0x26cb7f0 size 0xc8 virtual false final false
static ::System::Text::StringBuilder Acquire(int32_t capacity) ;

/// @brief Method Release addr 0x26cf08c size 0x78 virtual false final false
static void Release(::System::Text::StringBuilder sb) ;

/// @brief Method GetStringAndRelease addr 0x26cb8b8 size 0x3c virtual false final false
static ::StringW GetStringAndRelease(::System::Text::StringBuilder sb) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
} // end anonymous namespace
NEED_NO_BOX(::System::Text::StringBuilderCache);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::StringBuilderCache, "System.Text", "StringBuilderCache");
