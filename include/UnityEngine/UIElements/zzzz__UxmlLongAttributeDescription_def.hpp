#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__TypedUxmlAttributeDescription_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__UxmlLongAttributeDescription____c;
}
namespace UnityEngine::UIElements {
class UxmlLongAttributeDescription;
}
// Type: ::<>c
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7080))
// CS Name: UnityEngine.UIElements.UxmlLongAttributeDescription::<>c
class CORDL_TYPE UnityEngine__UIElements__UxmlLongAttributeDescription____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__UIElements__UxmlLongAttributeDescription____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UxmlLongAttributeDescription____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__UxmlLongAttributeDescription____c(UnityEngine__UIElements__UxmlLongAttributeDescription____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UxmlLongAttributeDescription____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__UxmlLongAttributeDescription____c(UnityEngine__UIElements__UxmlLongAttributeDescription____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UxmlLongAttributeDescription____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__UxmlLongAttributeDescription____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__UxmlLongAttributeDescription____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__UxmlLongAttributeDescription____c& operator=(UnityEngine__UIElements__UxmlLongAttributeDescription____c&& o) noexcept = default;
  constexpr UnityEngine__UIElements__UxmlLongAttributeDescription____c& operator=(UnityEngine__UIElements__UxmlLongAttributeDescription____c const& o) noexcept = default;
                


// Fields

static UnityEngine::UIElements::UnityEngine__UIElements__UxmlLongAttributeDescription____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::UIElements::UnityEngine__UIElements__UxmlLongAttributeDescription____c value) ;

static UnityEngine::UIElements::UnityEngine__UIElements__UxmlLongAttributeDescription____c __get___9() ;

static System::Func_3<::StringW,int64_t,int64_t> __declspec(property(get=__get___9__3_0, put=__set___9__3_0))  __9__3_0;

static void __set___9__3_0(System::Func_3<::StringW,int64_t,int64_t> value) ;

static System::Func_3<::StringW,int64_t,int64_t> __get___9__3_0() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__UxmlLongAttributeDescription____c() ;

/// @brief Method .ctor addr 0x2c98900 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetValueFromBag>b__3_0 addr 0x2c98908 size 0x40 virtual false final false
 int64_t _GetValueFromBag_b__3_0(::StringW s, int64_t l) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::UxmlLongAttributeDescription
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7073), inst: 830 }), TypeDefinitionIndex(TypeDefinitionIndex(7073))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7081))
// CS Name: UnityEngine.UIElements.UxmlLongAttributeDescription
class CORDL_TYPE UxmlLongAttributeDescription : public UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t> {
public:
// Declarations
using __c = UnityEngine::UIElements::UnityEngine__UIElements__UxmlLongAttributeDescription____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~UxmlLongAttributeDescription() = default;

// Ctor Parameters [CppParam { name: "", ty: "UxmlLongAttributeDescription", modifiers: " const&", def_value: None }]
constexpr UxmlLongAttributeDescription(UxmlLongAttributeDescription const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UxmlLongAttributeDescription", modifiers: "&&", def_value: None }]
constexpr UxmlLongAttributeDescription(UxmlLongAttributeDescription&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UxmlLongAttributeDescription(void* ptr) noexcept : UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>(ptr) {
}


  constexpr UxmlLongAttributeDescription& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UxmlLongAttributeDescription& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UxmlLongAttributeDescription& operator=(UxmlLongAttributeDescription&& o) noexcept = default;
  constexpr UxmlLongAttributeDescription& operator=(UxmlLongAttributeDescription const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UxmlLongAttributeDescription() ;

/// @brief Method .ctor addr 0x2c98660 size 0x9c virtual false final false
 void _ctor() ;

/// @brief Method GetValueFromBag addr 0x2c986fc size 0x164 virtual true final false
 int64_t GetValueFromBag(UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc) ;

/// @brief Method ConvertValueToLong addr 0x2c98860 size 0x3c virtual false final false
static int64_t ConvertValueToLong(::StringW v, int64_t defaultValue) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__UxmlLongAttributeDescription____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__UxmlLongAttributeDescription____c, "UnityEngine.UIElements", "UxmlLongAttributeDescription/<>c");
NEED_NO_BOX(UnityEngine::UIElements::UxmlLongAttributeDescription);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UxmlLongAttributeDescription, "UnityEngine.UIElements", "UxmlLongAttributeDescription");
