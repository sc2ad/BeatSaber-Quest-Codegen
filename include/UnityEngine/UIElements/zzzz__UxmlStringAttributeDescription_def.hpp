#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__TypedUxmlAttributeDescription_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
namespace UnityEngine::UIElements {
class ____UnityEngine__UIElements__UxmlStringAttributeDescription____c;
}
// Type: ::<>c
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7074))
// CS Name: UnityEngine.UIElements.UxmlStringAttributeDescription::<>c
class CORDL_TYPE ____UnityEngine__UIElements__UxmlStringAttributeDescription____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____UnityEngine__UIElements__UxmlStringAttributeDescription____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__UxmlStringAttributeDescription____c", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__UxmlStringAttributeDescription____c(____UnityEngine__UIElements__UxmlStringAttributeDescription____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__UxmlStringAttributeDescription____c", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__UxmlStringAttributeDescription____c(____UnityEngine__UIElements__UxmlStringAttributeDescription____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__UxmlStringAttributeDescription____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__UIElements__UxmlStringAttributeDescription____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__UxmlStringAttributeDescription____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__UxmlStringAttributeDescription____c& operator=(____UnityEngine__UIElements__UxmlStringAttributeDescription____c&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__UxmlStringAttributeDescription____c& operator=(____UnityEngine__UIElements__UxmlStringAttributeDescription____c const& o) noexcept = default;
                


// Fields

static ::UnityEngine::UIElements::____UnityEngine__UIElements__UxmlStringAttributeDescription____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::UnityEngine::UIElements::____UnityEngine__UIElements__UxmlStringAttributeDescription____c value) ;

static ::UnityEngine::UIElements::____UnityEngine__UIElements__UxmlStringAttributeDescription____c __get___9() ;

static ::System::Func_3<::StringW,::StringW,::StringW> __declspec(property(get=__get___9__3_0, put=__set___9__3_0))  __9__3_0;

static void __set___9__3_0(::System::Func_3<::StringW,::StringW,::StringW> value) ;

static ::System::Func_3<::StringW,::StringW,::StringW> __get___9__3_0() ;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__UIElements__UxmlStringAttributeDescription____c() ;

/// @brief Method .ctor addr 0x2c97ea0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetValueFromBag>b__3_0 addr 0x2c97ea8 size 0x8 virtual false final false
 ::StringW _GetValueFromBag_b__3_0(::StringW s, ::StringW t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::UxmlStringAttributeDescription
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7073), inst: 380 }), TypeDefinitionIndex(TypeDefinitionIndex(7073))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7075))
// CS Name: UnityEngine.UIElements.UxmlStringAttributeDescription
class CORDL_TYPE UxmlStringAttributeDescription : public ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<::StringW> {
public:
// Declarations
using __c = ::UnityEngine::UIElements::____UnityEngine__UIElements__UxmlStringAttributeDescription____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~UxmlStringAttributeDescription() = default;

// Ctor Parameters [CppParam { name: "", ty: "UxmlStringAttributeDescription", modifiers: " const&", def_value: None }]
constexpr UxmlStringAttributeDescription(UxmlStringAttributeDescription const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UxmlStringAttributeDescription", modifiers: "&&", def_value: None }]
constexpr UxmlStringAttributeDescription(UxmlStringAttributeDescription&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UxmlStringAttributeDescription(void* ptr) noexcept : ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<::StringW>(ptr) {
}


  constexpr UxmlStringAttributeDescription& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UxmlStringAttributeDescription& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UxmlStringAttributeDescription& operator=(UxmlStringAttributeDescription&& o) noexcept = default;
  constexpr UxmlStringAttributeDescription& operator=(UxmlStringAttributeDescription const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UxmlStringAttributeDescription() ;

/// @brief Method .ctor addr 0x2c97c1c size 0xbc virtual false final false
 void _ctor() ;

/// @brief Method GetValueFromBag addr 0x2c97cd8 size 0x164 virtual true final false
 ::StringW GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes bag, ::UnityEngine::UIElements::CreationContext cc) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::UxmlStringAttributeDescription);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlStringAttributeDescription, "UnityEngine.UIElements", "UxmlStringAttributeDescription");
NEED_NO_BOX(::UnityEngine::UIElements::____UnityEngine__UIElements__UxmlStringAttributeDescription____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__UxmlStringAttributeDescription____c, "UnityEngine.UIElements", "UxmlStringAttributeDescription/<>c");
