#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
template<typename T>
class LinkedPoolItem_1;
}
namespace UnityEngine::UIElements::UIR {
template<::cordl_internals::il2cpp_reference_type T>
class LinkedPoolItem_1<T>;
}
// Type: UnityEngine.UIElements.UIR::LinkedPoolItem`1
// Type: UnityEngine.UIElements.UIR::LinkedPoolItem`1
namespace UnityEngine::UIElements::UIR {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7499))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7499), inst: 2 })
// CS Name: UnityEngine.UIElements.UIR.LinkedPoolItem`1
class CORDL_TYPE LinkedPoolItem_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~LinkedPoolItem_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "LinkedPoolItem_1", modifiers: " const&", def_value: None }]
constexpr LinkedPoolItem_1(LinkedPoolItem_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LinkedPoolItem_1", modifiers: "&&", def_value: None }]
constexpr LinkedPoolItem_1(LinkedPoolItem_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LinkedPoolItem_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LinkedPoolItem_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LinkedPoolItem_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LinkedPoolItem_1& operator=(LinkedPoolItem_1&& o) noexcept = default;
  constexpr LinkedPoolItem_1& operator=(LinkedPoolItem_1 const& o) noexcept = default;
                


// Fields

 T __declspec(property(get=__get_poolNext, put=__set_poolNext))  poolNext;

constexpr void __set_poolNext(T value) ;

constexpr T __get_poolNext() const;


// Methods

// Ctor Parameters []
explicit LinkedPoolItem_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::UIElements::UIR::LinkedPoolItem_1, "UnityEngine.UIElements.UIR", "LinkedPoolItem`1");
