#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::UIElements {
template<typename T>
struct UQueryState_1;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
template<typename T>
struct UQueryBuilder_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UQueryExtensions;
}
// Type: UnityEngine.UIElements::UQueryExtensions
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7019))
// CS Name: UnityEngine.UIElements.UQueryExtensions
class CORDL_TYPE UQueryExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UQueryExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "UQueryExtensions", modifiers: " const&", def_value: None }]
constexpr UQueryExtensions(UQueryExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UQueryExtensions", modifiers: "&&", def_value: None }]
constexpr UQueryExtensions(UQueryExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UQueryExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UQueryExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UQueryExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UQueryExtensions& operator=(UQueryExtensions&& o) noexcept = default;
  constexpr UQueryExtensions& operator=(UQueryExtensions const& o) noexcept = default;
                


// Fields

static UnityEngine::UIElements::UQueryState_1<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_SingleElementEmptyQuery, put=__set_SingleElementEmptyQuery))  SingleElementEmptyQuery;

static void __set_SingleElementEmptyQuery(UnityEngine::UIElements::UQueryState_1<UnityEngine::UIElements::VisualElement> value) ;

static UnityEngine::UIElements::UQueryState_1<UnityEngine::UIElements::VisualElement> __get_SingleElementEmptyQuery() ;

static UnityEngine::UIElements::UQueryState_1<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_SingleElementNameQuery, put=__set_SingleElementNameQuery))  SingleElementNameQuery;

static void __set_SingleElementNameQuery(UnityEngine::UIElements::UQueryState_1<UnityEngine::UIElements::VisualElement> value) ;

static UnityEngine::UIElements::UQueryState_1<UnityEngine::UIElements::VisualElement> __get_SingleElementNameQuery() ;

static UnityEngine::UIElements::UQueryState_1<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_SingleElementClassQuery, put=__set_SingleElementClassQuery))  SingleElementClassQuery;

static void __set_SingleElementClassQuery(UnityEngine::UIElements::UQueryState_1<UnityEngine::UIElements::VisualElement> value) ;

static UnityEngine::UIElements::UQueryState_1<UnityEngine::UIElements::VisualElement> __get_SingleElementClassQuery() ;

static UnityEngine::UIElements::UQueryState_1<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_SingleElementNameAndClassQuery, put=__set_SingleElementNameAndClassQuery))  SingleElementNameAndClassQuery;

static void __set_SingleElementNameAndClassQuery(UnityEngine::UIElements::UQueryState_1<UnityEngine::UIElements::VisualElement> value) ;

static UnityEngine::UIElements::UQueryState_1<UnityEngine::UIElements::VisualElement> __get_SingleElementNameAndClassQuery() ;

static UnityEngine::UIElements::UQueryState_1<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_SingleElementTypeQuery, put=__set_SingleElementTypeQuery))  SingleElementTypeQuery;

static void __set_SingleElementTypeQuery(UnityEngine::UIElements::UQueryState_1<UnityEngine::UIElements::VisualElement> value) ;

static UnityEngine::UIElements::UQueryState_1<UnityEngine::UIElements::VisualElement> __get_SingleElementTypeQuery() ;

static UnityEngine::UIElements::UQueryState_1<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_SingleElementTypeAndNameQuery, put=__set_SingleElementTypeAndNameQuery))  SingleElementTypeAndNameQuery;

static void __set_SingleElementTypeAndNameQuery(UnityEngine::UIElements::UQueryState_1<UnityEngine::UIElements::VisualElement> value) ;

static UnityEngine::UIElements::UQueryState_1<UnityEngine::UIElements::VisualElement> __get_SingleElementTypeAndNameQuery() ;

static UnityEngine::UIElements::UQueryState_1<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_SingleElementTypeAndClassQuery, put=__set_SingleElementTypeAndClassQuery))  SingleElementTypeAndClassQuery;

static void __set_SingleElementTypeAndClassQuery(UnityEngine::UIElements::UQueryState_1<UnityEngine::UIElements::VisualElement> value) ;

static UnityEngine::UIElements::UQueryState_1<UnityEngine::UIElements::VisualElement> __get_SingleElementTypeAndClassQuery() ;

static UnityEngine::UIElements::UQueryState_1<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_SingleElementTypeAndNameAndClassQuery, put=__set_SingleElementTypeAndNameAndClassQuery))  SingleElementTypeAndNameAndClassQuery;

static void __set_SingleElementTypeAndNameAndClassQuery(UnityEngine::UIElements::UQueryState_1<UnityEngine::UIElements::VisualElement> value) ;

static UnityEngine::UIElements::UQueryState_1<UnityEngine::UIElements::VisualElement> __get_SingleElementTypeAndNameAndClassQuery() ;


// Methods

/// @brief Method Q addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T Q(UnityEngine::UIElements::VisualElement e, ::StringW name, ::StringW className) ;

/// @brief Method Q addr 0x2c8c0c4 size 0x3e0 virtual false final false
static UnityEngine::UIElements::VisualElement Q(UnityEngine::UIElements::VisualElement e, ::StringW name, ::StringW className) ;

/// @brief Method Query addr 0x2c8c4a4 size 0xbc virtual false final false
static UnityEngine::UIElements::UQueryBuilder_1<UnityEngine::UIElements::VisualElement> Query(UnityEngine::UIElements::VisualElement e, ::StringW name, ::StringW className) ;

/// @brief Method Query addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static UnityEngine::UIElements::UQueryBuilder_1<T> Query(UnityEngine::UIElements::VisualElement e, ::StringW name, ::StringW className) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::UQueryExtensions);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UQueryExtensions, "UnityEngine.UIElements", "UQueryExtensions");
