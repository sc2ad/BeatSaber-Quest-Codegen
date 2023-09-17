#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace {
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace System::Threading {
class LazyInitializer;
}
// Type: System.Threading::LazyInitializer
namespace System::Threading {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2661))
// CS Name: System.Threading.LazyInitializer
class CORDL_TYPE LazyInitializer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~LazyInitializer() = default;

// Ctor Parameters [CppParam { name: "", ty: "LazyInitializer", modifiers: " const&", def_value: None }]
constexpr LazyInitializer(LazyInitializer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LazyInitializer", modifiers: "&&", def_value: None }]
constexpr LazyInitializer(LazyInitializer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LazyInitializer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LazyInitializer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LazyInitializer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LazyInitializer& operator=(LazyInitializer&& o) noexcept = default;
  constexpr LazyInitializer& operator=(LazyInitializer const& o) noexcept = default;
                


// Methods

/// @brief Method EnsureInitialized addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T EnsureInitialized(ByRef<T> target) ;

/// @brief Method EnsureInitializedCore addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T EnsureInitializedCore(ByRef<T> target) ;

/// @brief Method EnsureInitialized addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T EnsureInitialized(ByRef<T> target, ::System::Func_1<T> valueFactory) ;

/// @brief Method EnsureInitializedCore addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T EnsureInitializedCore(ByRef<T> target, ::System::Func_1<T> valueFactory) ;

/// @brief Method EnsureInitialized addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T EnsureInitialized(ByRef<T> target, ByRef<::bs_hook::Il2CppWrapperType> syncLock, ::System::Func_1<T> valueFactory) ;

/// @brief Method EnsureInitializedCore addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T EnsureInitializedCore(ByRef<T> target, ByRef<::bs_hook::Il2CppWrapperType> syncLock, ::System::Func_1<T> valueFactory) ;

/// @brief Method EnsureLockInitialized addr 0x24a27b0 size 0x80 virtual false final false
static ::bs_hook::Il2CppWrapperType EnsureLockInitialized(ByRef<::bs_hook::Il2CppWrapperType> syncLock) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
} // end anonymous namespace
NEED_NO_BOX(::System::Threading::LazyInitializer);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::LazyInitializer, "System.Threading", "LazyInitializer");
