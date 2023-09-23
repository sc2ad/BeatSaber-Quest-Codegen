#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace UnityEngine::UIElements {
class Box;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__Box__UxmlFactory;
}
// Type: UnityEngine.UIElements::Box
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6828))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7162))
// CS Name: UnityEngine.UIElements.Box
class CORDL_TYPE Box : public UnityEngine::UIElements::VisualElement {
public:
// Declarations
using UxmlFactory = UnityEngine::UIElements::UnityEngine__UIElements__Box__UxmlFactory;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x3b0};

virtual ~Box() = default;

// Ctor Parameters [CppParam { name: "", ty: "Box", modifiers: " const&", def_value: None }]
constexpr Box(Box const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Box", modifiers: "&&", def_value: None }]
constexpr Box(Box&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Box(void* ptr) noexcept : UnityEngine::UIElements::VisualElement(ptr) {
}


  constexpr Box& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Box& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Box& operator=(Box&& o) noexcept = default;
  constexpr Box& operator=(Box const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_ussClassName, put=__set_ussClassName))  ussClassName;

static void __set_ussClassName(::StringW value) ;

static ::StringW __get_ussClassName() ;


// Methods

// Ctor Parameters []
explicit Box() ;

/// @brief Method .ctor addr 0x2cb4900 size 0x94 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::UxmlFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7090), inst: 5081 }), TypeDefinitionIndex(TypeDefinitionIndex(7090)), TypeDefinitionIndex(TypeDefinitionIndex(7162))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7161))
// CS Name: UnityEngine.UIElements.Box::UxmlFactory
class CORDL_TYPE UnityEngine__UIElements__Box__UxmlFactory : public UnityEngine::UIElements::UxmlFactory_1<UnityEngine::UIElements::Box> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnityEngine__UIElements__Box__UxmlFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__Box__UxmlFactory", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__Box__UxmlFactory(UnityEngine__UIElements__Box__UxmlFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__Box__UxmlFactory", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__Box__UxmlFactory(UnityEngine__UIElements__Box__UxmlFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__Box__UxmlFactory(void* ptr) noexcept : UnityEngine::UIElements::UxmlFactory_1<UnityEngine::UIElements::Box>(ptr) {
}


  constexpr UnityEngine__UIElements__Box__UxmlFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__Box__UxmlFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__Box__UxmlFactory& operator=(UnityEngine__UIElements__Box__UxmlFactory&& o) noexcept = default;
  constexpr UnityEngine__UIElements__Box__UxmlFactory& operator=(UnityEngine__UIElements__Box__UxmlFactory const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__Box__UxmlFactory() ;

/// @brief Method .ctor addr 0x2cb49f4 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::Box);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::Box, "UnityEngine.UIElements", "Box");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__Box__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__Box__UxmlFactory, "UnityEngine.UIElements", "Box/UxmlFactory");
