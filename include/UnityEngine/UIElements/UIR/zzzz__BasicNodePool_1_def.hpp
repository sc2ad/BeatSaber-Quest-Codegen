#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BasicNode_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPool_1_def.hpp"
namespace UnityEngine::UIElements::UIR {
template<typename T>
class BasicNode_1;
}
namespace UnityEngine::UIElements::UIR {
struct TextureEntry;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
template<typename T>
class BasicNodePool_1;
}
namespace UnityEngine::UIElements::UIR {
template<::cordl_internals::il2cpp_reference_type T>
class BasicNodePool_1<T>;
}
namespace UnityEngine::UIElements::UIR {
template<>
class BasicNodePool_1<UnityEngine::UIElements::UIR::TextureEntry>;
}
// Type: UnityEngine.UIElements.UIR::BasicNodePool`1
// Type: UnityEngine.UIElements.UIR::BasicNodePool`1
namespace UnityEngine::UIElements::UIR {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7501)), TypeDefinitionIndex(TypeDefinitionIndex(7500)), TypeDefinitionIndex(TypeDefinitionIndex(7502)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7500), inst: 3841 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7501), inst: 899 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7502), inst: 2 })
// CS Name: UnityEngine.UIElements.UIR.BasicNodePool`1
class CORDL_TYPE BasicNodePool_1<T> : public UnityEngine::UIElements::UIR::LinkedPool_1<UnityEngine::UIElements::UIR::BasicNode_1<T>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~BasicNodePool_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicNodePool_1", modifiers: " const&", def_value: None }]
constexpr BasicNodePool_1(BasicNodePool_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicNodePool_1", modifiers: "&&", def_value: None }]
constexpr BasicNodePool_1(BasicNodePool_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BasicNodePool_1(void* ptr) noexcept : UnityEngine::UIElements::UIR::LinkedPool_1<UnityEngine::UIElements::UIR::BasicNode_1<T>>(ptr) {
}


  constexpr BasicNodePool_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BasicNodePool_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BasicNodePool_1& operator=(BasicNodePool_1&& o) noexcept = default;
  constexpr BasicNodePool_1& operator=(BasicNodePool_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual false final false
static void Reset(UnityEngine::UIElements::UIR::BasicNode_1<T> node) ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::UIElements::UIR::BasicNode_1<T> Create() ;

// Ctor Parameters []
explicit BasicNodePool_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
// Type: UnityEngine.UIElements.UIR::BasicNodePool`1
namespace UnityEngine::UIElements::UIR {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7500), inst: 3841 }), TypeDefinitionIndex(TypeDefinitionIndex(7501)), TypeDefinitionIndex(TypeDefinitionIndex(7500)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7501), inst: 899 }), TypeDefinitionIndex(TypeDefinitionIndex(7502))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7502), inst: 898 })
// CS Name: UnityEngine.UIElements.UIR.BasicNodePool`1
class CORDL_TYPE BasicNodePool_1<UnityEngine::UIElements::UIR::TextureEntry> : public UnityEngine::UIElements::UIR::LinkedPool_1<UnityEngine::UIElements::UIR::BasicNode_1<UnityEngine::UIElements::UIR::TextureEntry>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~BasicNodePool_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicNodePool_1", modifiers: " const&", def_value: None }]
constexpr BasicNodePool_1(BasicNodePool_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicNodePool_1", modifiers: "&&", def_value: None }]
constexpr BasicNodePool_1(BasicNodePool_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BasicNodePool_1(void* ptr) noexcept : UnityEngine::UIElements::UIR::LinkedPool_1<UnityEngine::UIElements::UIR::BasicNode_1<UnityEngine::UIElements::UIR::TextureEntry>>(ptr) {
}


  constexpr BasicNodePool_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BasicNodePool_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BasicNodePool_1& operator=(BasicNodePool_1&& o) noexcept = default;
  constexpr BasicNodePool_1& operator=(BasicNodePool_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual false final false
static void Reset(UnityEngine::UIElements::UIR::BasicNode_1<UnityEngine::UIElements::UIR::TextureEntry> node) ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::UIElements::UIR::BasicNode_1<UnityEngine::UIElements::UIR::TextureEntry> Create() ;

// Ctor Parameters []
explicit BasicNodePool_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::UIElements::UIR::BasicNodePool_1, "UnityEngine.UIElements.UIR", "BasicNodePool`1");
