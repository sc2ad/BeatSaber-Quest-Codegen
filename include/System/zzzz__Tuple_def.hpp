#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
class Tuple_4;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Tuple_3;
}
// Forward declare root types
namespace System {
class Tuple;
}
// Type: System::Tuple
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2488))
// CS Name: System.Tuple
class CORDL_TYPE Tuple : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Tuple() = default;

// Ctor Parameters [CppParam { name: "", ty: "Tuple", modifiers: " const&", def_value: None }]
constexpr Tuple(Tuple const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Tuple", modifiers: "&&", def_value: None }]
constexpr Tuple(Tuple&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Tuple(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Tuple& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Tuple& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Tuple& operator=(Tuple&& o) noexcept = default;
  constexpr Tuple& operator=(Tuple const& o) noexcept = default;
                


// Methods

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T1,typename T2>
static ::System::Tuple_2<T1,T2> Create(T1 item1, T2 item2) ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T1,typename T2,typename T3>
static ::System::Tuple_3<T1,T2,T3> Create(T1 item1, T2 item2, T3 item3) ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T1,typename T2,typename T3,typename T4>
static ::System::Tuple_4<T1,T2,T3,T4> Create(T1 item1, T2 item2, T3 item3, T4 item4) ;

/// @brief Method CombineHashCodes addr 0x2458f8c size 0xc virtual false final false
static int32_t CombineHashCodes(int32_t h1, int32_t h2) ;

/// @brief Method CombineHashCodes addr 0x2458f98 size 0x14 virtual false final false
static int32_t CombineHashCodes(int32_t h1, int32_t h2, int32_t h3) ;

/// @brief Method CombineHashCodes addr 0x2458fac size 0x1c virtual false final false
static int32_t CombineHashCodes(int32_t h1, int32_t h2, int32_t h3, int32_t h4) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::Tuple);
DEFINE_IL2CPP_ARG_TYPE(::System::Tuple, "System", "Tuple");
