#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
class Type;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace ModestTree {
class TypeStringFormatter;
}
namespace ModestTree {
class ____ModestTree__TypeStringFormatter____c;
}
// Type: ::<>c
namespace ModestTree {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10564))
// CS Name: ModestTree.TypeStringFormatter::<>c
class CORDL_TYPE ____ModestTree__TypeStringFormatter____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____ModestTree__TypeStringFormatter____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____ModestTree__TypeStringFormatter____c", modifiers: " const&", def_value: None }]
constexpr ____ModestTree__TypeStringFormatter____c(____ModestTree__TypeStringFormatter____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____ModestTree__TypeStringFormatter____c", modifiers: "&&", def_value: None }]
constexpr ____ModestTree__TypeStringFormatter____c(____ModestTree__TypeStringFormatter____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____ModestTree__TypeStringFormatter____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____ModestTree__TypeStringFormatter____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____ModestTree__TypeStringFormatter____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____ModestTree__TypeStringFormatter____c& operator=(____ModestTree__TypeStringFormatter____c&& o) noexcept = default;
  constexpr ____ModestTree__TypeStringFormatter____c& operator=(____ModestTree__TypeStringFormatter____c const& o) noexcept = default;
                


// Fields

static ::ModestTree::____ModestTree__TypeStringFormatter____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::ModestTree::____ModestTree__TypeStringFormatter____c value) ;

static ::ModestTree::____ModestTree__TypeStringFormatter____c __get___9() ;

static ::System::Func_2<::System::Type,::StringW> __declspec(property(get=__get___9__2_0, put=__set___9__2_0))  __9__2_0;

static void __set___9__2_0(::System::Func_2<::System::Type,::StringW> value) ;

static ::System::Func_2<::System::Type,::StringW> __get___9__2_0() ;


// Methods

// Ctor Parameters []
explicit ____ModestTree__TypeStringFormatter____c() ;

/// @brief Method .ctor addr 0x2d45038 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <PrettyNameInternal>b__2_0 addr 0x2d45040 size 0x54 virtual false final false
 ::StringW _PrettyNameInternal_b__2_0(::System::Type t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ModestTree
// Type: ModestTree::TypeStringFormatter
namespace ModestTree {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10565))
// CS Name: ModestTree.TypeStringFormatter
class CORDL_TYPE TypeStringFormatter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = ::ModestTree::____ModestTree__TypeStringFormatter____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TypeStringFormatter() = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeStringFormatter", modifiers: " const&", def_value: None }]
constexpr TypeStringFormatter(TypeStringFormatter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeStringFormatter", modifiers: "&&", def_value: None }]
constexpr TypeStringFormatter(TypeStringFormatter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TypeStringFormatter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TypeStringFormatter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TypeStringFormatter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TypeStringFormatter& operator=(TypeStringFormatter&& o) noexcept = default;
  constexpr TypeStringFormatter& operator=(TypeStringFormatter const& o) noexcept = default;
                


// Fields

static ::System::Collections::Generic::Dictionary_2<::System::Type,::StringW> __declspec(property(get=__get__prettyNameCache, put=__set__prettyNameCache))  _prettyNameCache;

static void __set__prettyNameCache(::System::Collections::Generic::Dictionary_2<::System::Type,::StringW> value) ;

static ::System::Collections::Generic::Dictionary_2<::System::Type,::StringW> __get__prettyNameCache() ;


// Methods

/// @brief Method PrettyName addr 0x2d42f10 size 0xec virtual false final false
static ::StringW PrettyName(::System::Type type) ;

/// @brief Method PrettyNameInternal addr 0x2d44818 size 0x438 virtual false final false
static ::StringW PrettyNameInternal(::System::Type type) ;

/// @brief Method GetCSharpTypeName addr 0x2d44c50 size 0x2f8 virtual false final false
static ::StringW GetCSharpTypeName(::StringW typeName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ModestTree
} // end anonymous namespace
NEED_NO_BOX(::ModestTree::TypeStringFormatter);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::TypeStringFormatter, "ModestTree", "TypeStringFormatter");
NEED_NO_BOX(::ModestTree::____ModestTree__TypeStringFormatter____c);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::____ModestTree__TypeStringFormatter____c, "ModestTree", "TypeStringFormatter/<>c");
