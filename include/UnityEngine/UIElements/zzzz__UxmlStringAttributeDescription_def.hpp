#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__TypedUxmlAttributeDescription_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__UxmlStringAttributeDescription____c;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__UxmlStringAttributeDescription____c;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
// Type: ::<>c
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7074))
// CS Name: UnityEngine.UIElements.UxmlStringAttributeDescription::<>c
class CORDL_TYPE UnityEngine__UIElements__UxmlStringAttributeDescription____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__UIElements__UxmlStringAttributeDescription____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UxmlStringAttributeDescription____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__UxmlStringAttributeDescription____c(UnityEngine__UIElements__UxmlStringAttributeDescription____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UxmlStringAttributeDescription____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__UxmlStringAttributeDescription____c(UnityEngine__UIElements__UxmlStringAttributeDescription____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UxmlStringAttributeDescription____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__UxmlStringAttributeDescription____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__UxmlStringAttributeDescription____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__UxmlStringAttributeDescription____c& operator=(UnityEngine__UIElements__UxmlStringAttributeDescription____c&& o) noexcept = default;
  constexpr UnityEngine__UIElements__UxmlStringAttributeDescription____c& operator=(UnityEngine__UIElements__UxmlStringAttributeDescription____c const& o) noexcept = default;
                


// Fields

static UnityEngine::UIElements::UnityEngine__UIElements__UxmlStringAttributeDescription____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::UIElements::UnityEngine__UIElements__UxmlStringAttributeDescription____c value) ;

static UnityEngine::UIElements::UnityEngine__UIElements__UxmlStringAttributeDescription____c __get___9() ;

static System::Func_3<::StringW,::StringW,::StringW> __declspec(property(get=__get___9__3_0, put=__set___9__3_0))  __9__3_0;

static void __set___9__3_0(System::Func_3<::StringW,::StringW,::StringW> value) ;

static System::Func_3<::StringW,::StringW,::StringW> __get___9__3_0() ;


// Methods

static UnityEngine::UIElements::UnityEngine__UIElements__UxmlStringAttributeDescription____c New_ctor() ;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7073)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7073), inst: 380 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7075))
// CS Name: UnityEngine.UIElements.UxmlStringAttributeDescription
class CORDL_TYPE UxmlStringAttributeDescription : public UnityEngine::UIElements::TypedUxmlAttributeDescription_1<::StringW> {
public:
// Declarations
using __c = UnityEngine::UIElements::UnityEngine__UIElements__UxmlStringAttributeDescription____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~UxmlStringAttributeDescription() = default;

// Ctor Parameters [CppParam { name: "", ty: "UxmlStringAttributeDescription", modifiers: " const&", def_value: None }]
constexpr UxmlStringAttributeDescription(UxmlStringAttributeDescription const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UxmlStringAttributeDescription", modifiers: "&&", def_value: None }]
constexpr UxmlStringAttributeDescription(UxmlStringAttributeDescription&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UxmlStringAttributeDescription(void* ptr) noexcept : UnityEngine::UIElements::TypedUxmlAttributeDescription_1<::StringW>(ptr) {
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

static UnityEngine::UIElements::UxmlStringAttributeDescription New_ctor() ;

/// @brief Method .ctor addr 0x2c97c1c size 0xbc virtual false final false
 void _ctor() ;

/// @brief Method GetValueFromBag addr 0x2c97cd8 size 0x164 virtual true final false
 ::StringW GetValueFromBag(UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__UxmlStringAttributeDescription____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__UxmlStringAttributeDescription____c, "UnityEngine.UIElements", "UxmlStringAttributeDescription/<>c");
NEED_NO_BOX(UnityEngine::UIElements::UxmlStringAttributeDescription);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UxmlStringAttributeDescription, "UnityEngine.UIElements", "UxmlStringAttributeDescription");
