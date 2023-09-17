#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__TypedUxmlAttributeDescription_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
class UxmlBoolAttributeDescription;
}
namespace UnityEngine::UIElements {
class ____UnityEngine__UIElements__UxmlBoolAttributeDescription____c;
}
// Type: ::<>c
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7082))
// CS Name: UnityEngine.UIElements.UxmlBoolAttributeDescription::<>c
class CORDL_TYPE ____UnityEngine__UIElements__UxmlBoolAttributeDescription____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____UnityEngine__UIElements__UxmlBoolAttributeDescription____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__UxmlBoolAttributeDescription____c", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__UxmlBoolAttributeDescription____c(____UnityEngine__UIElements__UxmlBoolAttributeDescription____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__UxmlBoolAttributeDescription____c", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__UxmlBoolAttributeDescription____c(____UnityEngine__UIElements__UxmlBoolAttributeDescription____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__UxmlBoolAttributeDescription____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__UIElements__UxmlBoolAttributeDescription____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__UxmlBoolAttributeDescription____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__UxmlBoolAttributeDescription____c& operator=(____UnityEngine__UIElements__UxmlBoolAttributeDescription____c&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__UxmlBoolAttributeDescription____c& operator=(____UnityEngine__UIElements__UxmlBoolAttributeDescription____c const& o) noexcept = default;
                


// Fields

static ::UnityEngine::UIElements::____UnityEngine__UIElements__UxmlBoolAttributeDescription____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::UnityEngine::UIElements::____UnityEngine__UIElements__UxmlBoolAttributeDescription____c value) ;

static ::UnityEngine::UIElements::____UnityEngine__UIElements__UxmlBoolAttributeDescription____c __get___9() ;

static ::System::Func_3<::StringW,bool,bool> __declspec(property(get=__get___9__3_0, put=__set___9__3_0))  __9__3_0;

static void __set___9__3_0(::System::Func_3<::StringW,bool,bool> value) ;

static ::System::Func_3<::StringW,bool,bool> __get___9__3_0() ;

static ::System::Func_3<::StringW,bool,bool> __declspec(property(get=__get___9__4_0, put=__set___9__4_0))  __9__4_0;

static void __set___9__4_0(::System::Func_3<::StringW,bool,bool> value) ;

static ::System::Func_3<::StringW,bool,bool> __get___9__4_0() ;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__UIElements__UxmlBoolAttributeDescription____c() ;

/// @brief Method .ctor addr 0x2c98db0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetValueFromBag>b__3_0 addr 0x2c98db8 size 0x10 virtual false final false
 bool _GetValueFromBag_b__3_0(::StringW s, bool b) ;

/// @brief Method <TryGetValueFromBag>b__4_0 addr 0x2c98dc8 size 0x10 virtual false final false
 bool _TryGetValueFromBag_b__4_0(::StringW s, bool b) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::UxmlBoolAttributeDescription
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7073), inst: 99 }), TypeDefinitionIndex(TypeDefinitionIndex(7073))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7083))
// CS Name: UnityEngine.UIElements.UxmlBoolAttributeDescription
class CORDL_TYPE UxmlBoolAttributeDescription : public ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool> {
public:
// Declarations
using __c = ::UnityEngine::UIElements::____UnityEngine__UIElements__UxmlBoolAttributeDescription____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~UxmlBoolAttributeDescription() = default;

// Ctor Parameters [CppParam { name: "", ty: "UxmlBoolAttributeDescription", modifiers: " const&", def_value: None }]
constexpr UxmlBoolAttributeDescription(UxmlBoolAttributeDescription const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UxmlBoolAttributeDescription", modifiers: "&&", def_value: None }]
constexpr UxmlBoolAttributeDescription(UxmlBoolAttributeDescription&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UxmlBoolAttributeDescription(void* ptr) noexcept : ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>(ptr) {
}


  constexpr UxmlBoolAttributeDescription& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UxmlBoolAttributeDescription& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UxmlBoolAttributeDescription& operator=(UxmlBoolAttributeDescription&& o) noexcept = default;
  constexpr UxmlBoolAttributeDescription& operator=(UxmlBoolAttributeDescription const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UxmlBoolAttributeDescription() ;

/// @brief Method .ctor addr 0x2c98948 size 0x9c virtual false final false
 void _ctor() ;

/// @brief Method GetValueFromBag addr 0x2c989e4 size 0x168 virtual true final false
 bool GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes bag, ::UnityEngine::UIElements::CreationContext cc) ;

/// @brief Method TryGetValueFromBag addr 0x2c98b4c size 0x178 virtual false final false
 bool TryGetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes bag, ::UnityEngine::UIElements::CreationContext cc, ByRef<bool> value) ;

/// @brief Method ConvertValueToBool addr 0x2c98cc4 size 0x88 virtual false final false
static bool ConvertValueToBool(::StringW v, bool defaultValue) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::UxmlBoolAttributeDescription);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlBoolAttributeDescription, "UnityEngine.UIElements", "UxmlBoolAttributeDescription");
NEED_NO_BOX(::UnityEngine::UIElements::____UnityEngine__UIElements__UxmlBoolAttributeDescription____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__UxmlBoolAttributeDescription____c, "UnityEngine.UIElements", "UxmlBoolAttributeDescription/<>c");
