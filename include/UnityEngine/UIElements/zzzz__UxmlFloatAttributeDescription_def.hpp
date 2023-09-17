#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__TypedUxmlAttributeDescription_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace {
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlFloatAttributeDescription;
}
namespace UnityEngine::UIElements {
class ____UnityEngine__UIElements__UxmlFloatAttributeDescription____c;
}
// Type: ::<>c
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7076))
// CS Name: UnityEngine.UIElements.UxmlFloatAttributeDescription::<>c
class CORDL_TYPE ____UnityEngine__UIElements__UxmlFloatAttributeDescription____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____UnityEngine__UIElements__UxmlFloatAttributeDescription____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__UxmlFloatAttributeDescription____c", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__UxmlFloatAttributeDescription____c(____UnityEngine__UIElements__UxmlFloatAttributeDescription____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__UxmlFloatAttributeDescription____c", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__UxmlFloatAttributeDescription____c(____UnityEngine__UIElements__UxmlFloatAttributeDescription____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__UxmlFloatAttributeDescription____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__UIElements__UxmlFloatAttributeDescription____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__UxmlFloatAttributeDescription____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__UxmlFloatAttributeDescription____c& operator=(____UnityEngine__UIElements__UxmlFloatAttributeDescription____c&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__UxmlFloatAttributeDescription____c& operator=(____UnityEngine__UIElements__UxmlFloatAttributeDescription____c const& o) noexcept = default;
                


// Fields

static ::UnityEngine::UIElements::____UnityEngine__UIElements__UxmlFloatAttributeDescription____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::UnityEngine::UIElements::____UnityEngine__UIElements__UxmlFloatAttributeDescription____c value) ;

static ::UnityEngine::UIElements::____UnityEngine__UIElements__UxmlFloatAttributeDescription____c __get___9() ;

static ::System::Func_3<::StringW,float_t,float_t> __declspec(property(get=__get___9__3_0, put=__set___9__3_0))  __9__3_0;

static void __set___9__3_0(::System::Func_3<::StringW,float_t,float_t> value) ;

static ::System::Func_3<::StringW,float_t,float_t> __get___9__3_0() ;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__UIElements__UxmlFloatAttributeDescription____c() ;

/// @brief Method .ctor addr 0x2c981b0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetValueFromBag>b__3_0 addr 0x2c981b8 size 0x8 virtual false final false
 float_t _GetValueFromBag_b__3_0(::StringW s, float_t f) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::UxmlFloatAttributeDescription
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7073)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7073), inst: 374 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7077))
// CS Name: UnityEngine.UIElements.UxmlFloatAttributeDescription
class CORDL_TYPE UxmlFloatAttributeDescription : public ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t> {
public:
// Declarations
using __c = ::UnityEngine::UIElements::____UnityEngine__UIElements__UxmlFloatAttributeDescription____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~UxmlFloatAttributeDescription() = default;

// Ctor Parameters [CppParam { name: "", ty: "UxmlFloatAttributeDescription", modifiers: " const&", def_value: None }]
constexpr UxmlFloatAttributeDescription(UxmlFloatAttributeDescription const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UxmlFloatAttributeDescription", modifiers: "&&", def_value: None }]
constexpr UxmlFloatAttributeDescription(UxmlFloatAttributeDescription&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UxmlFloatAttributeDescription(void* ptr) noexcept : ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>(ptr) {
}


  constexpr UxmlFloatAttributeDescription& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UxmlFloatAttributeDescription& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UxmlFloatAttributeDescription& operator=(UxmlFloatAttributeDescription&& o) noexcept = default;
  constexpr UxmlFloatAttributeDescription& operator=(UxmlFloatAttributeDescription const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UxmlFloatAttributeDescription() ;

/// @brief Method .ctor addr 0x2c97eb0 size 0x9c virtual false final false
 void _ctor() ;

/// @brief Method GetValueFromBag addr 0x2c97f4c size 0x164 virtual true final false
 float_t GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes bag, ::UnityEngine::UIElements::CreationContext cc) ;

/// @brief Method ConvertValueToFloat addr 0x2c980b0 size 0x9c virtual false final false
static float_t ConvertValueToFloat(::StringW v, float_t defaultValue) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::UxmlFloatAttributeDescription);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlFloatAttributeDescription, "UnityEngine.UIElements", "UxmlFloatAttributeDescription");
NEED_NO_BOX(::UnityEngine::UIElements::____UnityEngine__UIElements__UxmlFloatAttributeDescription____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__UxmlFloatAttributeDescription____c, "UnityEngine.UIElements", "UxmlFloatAttributeDescription/<>c");