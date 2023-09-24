#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace ModestTree::Util {
template<typename T1,typename T2>
class ValuePair_2;
}
namespace ModestTree::Util {
template<typename T1,typename T2,typename T3,typename T4>
class ValuePair_4;
}
namespace ModestTree::Util {
template<typename T1,typename T2,typename T3>
class ValuePair_3;
}
// Forward declare root types
namespace ModestTree::Util {
class ValuePair;
}
// Type: ModestTree.Util::ValuePair
namespace ModestTree::Util {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10571))
// CS Name: ModestTree.Util.ValuePair
class CORDL_TYPE ValuePair : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ValuePair() = default;

// Ctor Parameters [CppParam { name: "", ty: "ValuePair", modifiers: " const&", def_value: None }]
constexpr ValuePair(ValuePair const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ValuePair", modifiers: "&&", def_value: None }]
constexpr ValuePair(ValuePair&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ValuePair(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ValuePair& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ValuePair& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ValuePair& operator=(ValuePair&& o) noexcept = default;
  constexpr ValuePair& operator=(ValuePair const& o) noexcept = default;
                


// Methods

/// @brief Method New addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T1,typename T2>
static ModestTree::Util::ValuePair_2<T1,T2> New(T1 first, T2 second) ;

/// @brief Method New addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T1,typename T2,typename T3>
static ModestTree::Util::ValuePair_3<T1,T2,T3> New(T1 first, T2 second, T3 third) ;

/// @brief Method New addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T1,typename T2,typename T3,typename T4>
static ModestTree::Util::ValuePair_4<T1,T2,T3,T4> New(T1 first, T2 second, T3 third, T4 fourth) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ModestTree::Util
NEED_NO_BOX(ModestTree::Util::ValuePair);
DEFINE_IL2CPP_ARG_TYPE(ModestTree::Util::ValuePair, "ModestTree.Util", "ValuePair");
