#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Reflection {
class MethodInfo;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class ____GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1;
}
namespace GlobalNamespace {
class HashSetExtensions;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class ____GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1<T>;
}
// Type: ::HashSetDelegateHolder`1
// Type: ::HashSetExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10548))
// CS Name: HashSetExtensions
class CORDL_TYPE HashSetExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename T>
using HashSetDelegateHolder_1 = ::GlobalNamespace::____GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1<T>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HashSetExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "HashSetExtensions", modifiers: " const&", def_value: None }]
constexpr HashSetExtensions(HashSetExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HashSetExtensions", modifiers: "&&", def_value: None }]
constexpr HashSetExtensions(HashSetExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HashSetExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HashSetExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HashSetExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HashSetExtensions& operator=(HashSetExtensions&& o) noexcept = default;
  constexpr HashSetExtensions& operator=(HashSetExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void SetCapacity(::System::Collections::Generic::HashSet_1<T> hs, int32_t capacity) ;

/// @brief Method GetHashSet addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::System::Collections::Generic::HashSet_1<T> GetHashSet(int32_t capacity) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::HashSetDelegateHolder`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10547))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10547), inst: 2 })
// CS Name: HashSetExtensions::HashSetDelegateHolder`1
class CORDL_TYPE ____GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1(____GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1(____GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1& operator=(____GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1&& o) noexcept = default;
  constexpr ____GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1& operator=(____GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1 const& o) noexcept = default;
                


// Fields

/// @brief Field Flags offset 0
static ::System::Reflection::BindingFlags const Flags;

static ::System::Reflection::MethodInfo __declspec(property(get=__get__InitializeMethod_k__BackingField, put=__set__InitializeMethod_k__BackingField))  _InitializeMethod_k__BackingField;

static void __set__InitializeMethod_k__BackingField(::System::Reflection::MethodInfo value) ;

static ::System::Reflection::MethodInfo __get__InitializeMethod_k__BackingField() ;


// Properties

static ::System::Reflection::MethodInfo __declspec(property(get=get_InitializeMethod))  InitializeMethod;


// Methods

/// @brief Method get_InitializeMethod addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Reflection::MethodInfo get_InitializeMethod() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::____GlobalNamespace__HashSetExtensions__HashSetDelegateHolder_1, "", "HashSetExtensions/HashSetDelegateHolder`1");
NEED_NO_BOX(::GlobalNamespace::HashSetExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HashSetExtensions, "", "HashSetExtensions");
