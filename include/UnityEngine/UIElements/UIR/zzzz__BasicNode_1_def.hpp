#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace {
namespace UnityEngine::UIElements::UIR {
struct TextureEntry;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
template<typename T>
class BasicNode_1;
}
namespace UnityEngine::UIElements::UIR {
template<::cordl_internals::il2cpp_reference_type T>
class BasicNode_1<T>;
}
namespace UnityEngine::UIElements::UIR {
template<>
class BasicNode_1<::UnityEngine::UIElements::UIR::TextureEntry>;
}
// Type: UnityEngine.UIElements.UIR::BasicNode`1
// Type: UnityEngine.UIElements.UIR::BasicNode`1
namespace UnityEngine::UIElements::UIR {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7499), inst: 3837 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7501), inst: 900 }), TypeDefinitionIndex(TypeDefinitionIndex(7501)), TypeDefinitionIndex(TypeDefinitionIndex(7499))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7501), inst: 2 })
// CS Name: UnityEngine.UIElements.UIR.BasicNode`1
class CORDL_TYPE BasicNode_1<T> : public ::UnityEngine::UIElements::UIR::LinkedPoolItem_1<::UnityEngine::UIElements::UIR::BasicNode_1<T>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BasicNode_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicNode_1", modifiers: " const&", def_value: None }]
constexpr BasicNode_1(BasicNode_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicNode_1", modifiers: "&&", def_value: None }]
constexpr BasicNode_1(BasicNode_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BasicNode_1(void* ptr) noexcept : ::UnityEngine::UIElements::UIR::LinkedPoolItem_1<::UnityEngine::UIElements::UIR::BasicNode_1<T>>(ptr) {
}


  constexpr BasicNode_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BasicNode_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BasicNode_1& operator=(BasicNode_1&& o) noexcept = default;
  constexpr BasicNode_1& operator=(BasicNode_1 const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UIElements::UIR::BasicNode_1<T> __declspec(property(get=__get_next, put=__set_next))  next;

constexpr void __set_next(::UnityEngine::UIElements::UIR::BasicNode_1<T> value) ;

constexpr ::UnityEngine::UIElements::UIR::BasicNode_1<T> __get_next() const;

 T __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(T value) ;

constexpr T __get_data() const;


// Methods

/// @brief Method AppendTo addr 0x0 size 0xffffffffffffffff virtual false final false
 void AppendTo(ByRef<::UnityEngine::UIElements::UIR::BasicNode_1<T>> first) ;

// Ctor Parameters []
explicit BasicNode_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
// Type: UnityEngine.UIElements.UIR::BasicNode`1
namespace UnityEngine::UIElements::UIR {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7499)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7499), inst: 3837 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7501), inst: 900 }), TypeDefinitionIndex(TypeDefinitionIndex(7501))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7501), inst: 898 })
// CS Name: UnityEngine.UIElements.UIR.BasicNode`1
class CORDL_TYPE BasicNode_1<::UnityEngine::UIElements::UIR::TextureEntry> : public ::UnityEngine::UIElements::UIR::LinkedPoolItem_1<::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::TextureEntry>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BasicNode_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicNode_1", modifiers: " const&", def_value: None }]
constexpr BasicNode_1(BasicNode_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicNode_1", modifiers: "&&", def_value: None }]
constexpr BasicNode_1(BasicNode_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BasicNode_1(void* ptr) noexcept : ::UnityEngine::UIElements::UIR::LinkedPoolItem_1<::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::TextureEntry>>(ptr) {
}


  constexpr BasicNode_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BasicNode_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BasicNode_1& operator=(BasicNode_1&& o) noexcept = default;
  constexpr BasicNode_1& operator=(BasicNode_1 const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::TextureEntry> __declspec(property(get=__get_next, put=__set_next))  next;

constexpr void __set_next(::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::TextureEntry> value) ;

constexpr ::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::TextureEntry> __get_next() const;

 ::UnityEngine::UIElements::UIR::TextureEntry __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(::UnityEngine::UIElements::UIR::TextureEntry value) ;

constexpr ::UnityEngine::UIElements::UIR::TextureEntry __get_data() const;


// Methods

/// @brief Method AppendTo addr 0x0 size 0xffffffffffffffff virtual false final false
 void AppendTo(ByRef<::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::TextureEntry>> first) ;

// Ctor Parameters []
explicit BasicNode_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::UIR::BasicNode_1, "UnityEngine.UIElements.UIR", "BasicNode`1");
