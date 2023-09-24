#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__TypedUxmlAttributeDescription_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
class UnityEngine__UIElements__UxmlIntAttributeDescription____c;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__UxmlIntAttributeDescription____c;
}
namespace UnityEngine::UIElements {
class UxmlIntAttributeDescription;
}
// Type: ::<>c
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7078))
// CS Name: UnityEngine.UIElements.UxmlIntAttributeDescription::<>c
class CORDL_TYPE UnityEngine__UIElements__UxmlIntAttributeDescription____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__UIElements__UxmlIntAttributeDescription____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UxmlIntAttributeDescription____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__UxmlIntAttributeDescription____c(UnityEngine__UIElements__UxmlIntAttributeDescription____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UxmlIntAttributeDescription____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__UxmlIntAttributeDescription____c(UnityEngine__UIElements__UxmlIntAttributeDescription____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UxmlIntAttributeDescription____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__UxmlIntAttributeDescription____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__UxmlIntAttributeDescription____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__UxmlIntAttributeDescription____c& operator=(UnityEngine__UIElements__UxmlIntAttributeDescription____c&& o) noexcept = default;
  constexpr UnityEngine__UIElements__UxmlIntAttributeDescription____c& operator=(UnityEngine__UIElements__UxmlIntAttributeDescription____c const& o) noexcept = default;
                


// Fields

static UnityEngine::UIElements::UnityEngine__UIElements__UxmlIntAttributeDescription____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::UIElements::UnityEngine__UIElements__UxmlIntAttributeDescription____c value) ;

static UnityEngine::UIElements::UnityEngine__UIElements__UxmlIntAttributeDescription____c __get___9() ;

static System::Func_3<::StringW,int32_t,int32_t> __declspec(property(get=__get___9__3_0, put=__set___9__3_0))  __9__3_0;

static void __set___9__3_0(System::Func_3<::StringW,int32_t,int32_t> value) ;

static System::Func_3<::StringW,int32_t,int32_t> __get___9__3_0() ;

static System::Func_3<::StringW,int32_t,int32_t> __declspec(property(get=__get___9__4_0, put=__set___9__4_0))  __9__4_0;

static void __set___9__4_0(System::Func_3<::StringW,int32_t,int32_t> value) ;

static System::Func_3<::StringW,int32_t,int32_t> __get___9__4_0() ;


// Methods

static UnityEngine::UIElements::UnityEngine__UIElements__UxmlIntAttributeDescription____c New_ctor() ;

/// @brief Method .ctor addr 0x2c985d8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetValueFromBag>b__3_0 addr 0x2c985e0 size 0x40 virtual false final false
 int32_t _GetValueFromBag_b__3_0(::StringW s, int32_t i) ;

/// @brief Method <TryGetValueFromBag>b__4_0 addr 0x2c98620 size 0x40 virtual false final false
 int32_t _TryGetValueFromBag_b__4_0(::StringW s, int32_t i) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::UxmlIntAttributeDescription
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7073)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7073), inst: 92 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7079))
// CS Name: UnityEngine.UIElements.UxmlIntAttributeDescription
class CORDL_TYPE UxmlIntAttributeDescription : public UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t> {
public:
// Declarations
using __c = UnityEngine::UIElements::UnityEngine__UIElements__UxmlIntAttributeDescription____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~UxmlIntAttributeDescription() = default;

// Ctor Parameters [CppParam { name: "", ty: "UxmlIntAttributeDescription", modifiers: " const&", def_value: None }]
constexpr UxmlIntAttributeDescription(UxmlIntAttributeDescription const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UxmlIntAttributeDescription", modifiers: "&&", def_value: None }]
constexpr UxmlIntAttributeDescription(UxmlIntAttributeDescription&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UxmlIntAttributeDescription(void* ptr) noexcept : UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>(ptr) {
}


  constexpr UxmlIntAttributeDescription& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UxmlIntAttributeDescription& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UxmlIntAttributeDescription& operator=(UxmlIntAttributeDescription&& o) noexcept = default;
  constexpr UxmlIntAttributeDescription& operator=(UxmlIntAttributeDescription const& o) noexcept = default;
                


// Methods

static UnityEngine::UIElements::UxmlIntAttributeDescription New_ctor() ;

/// @brief Method .ctor addr 0x2c981c0 size 0x9c virtual false final false
 void _ctor() ;

/// @brief Method GetValueFromBag addr 0x2c9825c size 0x164 virtual true final false
 int32_t GetValueFromBag(UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc) ;

/// @brief Method TryGetValueFromBag addr 0x2c983c0 size 0x178 virtual false final false
 bool TryGetValueFromBag(UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc, ByRef<int32_t> value) ;

/// @brief Method ConvertValueToInt addr 0x2c98538 size 0x3c virtual false final false
static int32_t ConvertValueToInt(::StringW v, int32_t defaultValue) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__UxmlIntAttributeDescription____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__UxmlIntAttributeDescription____c, "UnityEngine.UIElements", "UxmlIntAttributeDescription/<>c");
NEED_NO_BOX(UnityEngine::UIElements::UxmlIntAttributeDescription);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UxmlIntAttributeDescription, "UnityEngine.UIElements", "UxmlIntAttributeDescription");
