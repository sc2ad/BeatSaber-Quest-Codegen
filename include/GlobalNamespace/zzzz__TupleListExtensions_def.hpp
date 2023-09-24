#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
template<typename T1,typename T2,typename T3>
class Tuple_3;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
class Tuple_4;
}
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
class TupleListExtensions;
}
// Type: ::TupleListExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13843))
// CS Name: TupleListExtensions
class CORDL_TYPE TupleListExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TupleListExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "TupleListExtensions", modifiers: " const&", def_value: None }]
constexpr TupleListExtensions(TupleListExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TupleListExtensions", modifiers: "&&", def_value: None }]
constexpr TupleListExtensions(TupleListExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TupleListExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TupleListExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TupleListExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TupleListExtensions& operator=(TupleListExtensions&& o) noexcept = default;
  constexpr TupleListExtensions& operator=(TupleListExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T1,typename T2>
static void Add(System::Collections::Generic::IList_1<System::Tuple_2<T1,T2>> list, T1 item1, T2 item2) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T1,typename T2,typename T3>
static void Add(System::Collections::Generic::IList_1<System::Tuple_3<T1,T2,T3>> list, T1 item1, T2 item2, T3 item3) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T1,typename T2,typename T3,typename T4>
static void Add(System::Collections::Generic::IList_1<System::Tuple_4<T1,T2,T3,T4>> list, T1 item1, T2 item2, T3 item3, T4 item4) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::TupleListExtensions);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TupleListExtensions, "", "TupleListExtensions");
