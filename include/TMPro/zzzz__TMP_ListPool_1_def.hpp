#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace TMPro {
template<typename T>
class TMP_ObjectPool_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro {
template<typename T>
class TMPro__TMP_ListPool_1____c;
}
// Forward declare root types
namespace TMPro {
template<typename T>
class TMP_ListPool_1;
}
namespace TMPro {
template<typename T>
class TMPro__TMP_ListPool_1____c;
}
namespace TMPro {
template<::cordl_internals::il2cpp_reference_type T>
class TMP_ListPool_1<T>;
}
namespace TMPro {
template<::cordl_internals::il2cpp_reference_type T>
class TMPro__TMP_ListPool_1____c<T>;
}
// Type: ::<>c
// Type: TMPro::TMP_ListPool`1
// Type: ::<>c
namespace TMPro {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12337))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12337), inst: 2 })
// CS Name: TMPro.TMP_ListPool`1::<>c
class CORDL_TYPE TMPro__TMP_ListPool_1____c<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TMPro__TMP_ListPool_1____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TMP_ListPool_1____c", modifiers: " const&", def_value: None }]
constexpr TMPro__TMP_ListPool_1____c(TMPro__TMP_ListPool_1____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TMP_ListPool_1____c", modifiers: "&&", def_value: None }]
constexpr TMPro__TMP_ListPool_1____c(TMPro__TMP_ListPool_1____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMPro__TMP_ListPool_1____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TMPro__TMP_ListPool_1____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMPro__TMP_ListPool_1____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMPro__TMP_ListPool_1____c& operator=(TMPro__TMP_ListPool_1____c&& o) noexcept = default;
  constexpr TMPro__TMP_ListPool_1____c& operator=(TMPro__TMP_ListPool_1____c const& o) noexcept = default;
                


// Fields

static TMPro::TMPro__TMP_ListPool_1____c<T> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(TMPro::TMPro__TMP_ListPool_1____c<T> value) ;

static TMPro::TMPro__TMP_ListPool_1____c<T> __get___9() ;


// Methods

static TMPro::TMPro__TMP_ListPool_1____c<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <.cctor>b__3_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void __cctor_b__3_0(System::Collections::Generic::List_1<T> l) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
// Type: TMPro::TMP_ListPool`1
namespace TMPro {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12338))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12338), inst: 2 })
// CS Name: TMPro.TMP_ListPool`1
class CORDL_TYPE TMP_ListPool_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = TMPro::TMPro__TMP_ListPool_1____c<T>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TMP_ListPool_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_ListPool_1", modifiers: " const&", def_value: None }]
constexpr TMP_ListPool_1(TMP_ListPool_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_ListPool_1", modifiers: "&&", def_value: None }]
constexpr TMP_ListPool_1(TMP_ListPool_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMP_ListPool_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TMP_ListPool_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMP_ListPool_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMP_ListPool_1& operator=(TMP_ListPool_1&& o) noexcept = default;
  constexpr TMP_ListPool_1& operator=(TMP_ListPool_1 const& o) noexcept = default;
                


// Fields

static TMPro::TMP_ObjectPool_1<System::Collections::Generic::List_1<T>> __declspec(property(get=__get_s_ListPool, put=__set_s_ListPool))  s_ListPool;

static void __set_s_ListPool(TMPro::TMP_ObjectPool_1<System::Collections::Generic::List_1<T>> value) ;

static TMPro::TMP_ObjectPool_1<System::Collections::Generic::List_1<T>> __get_s_ListPool() ;


// Methods

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
static System::Collections::Generic::List_1<T> Get() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
static void Release(System::Collections::Generic::List_1<T> toRelease) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(TMPro::TMP_ListPool_1, "TMPro", "TMP_ListPool`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(TMPro::TMPro__TMP_ListPool_1____c, "TMPro", "TMP_ListPool`1/<>c");
