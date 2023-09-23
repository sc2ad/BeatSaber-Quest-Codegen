#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__TypedUxmlAttributeDescription_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
struct Int32Enum;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class UnityEngine__UIElements__UxmlEnumAttributeDescription_1____c;
}
namespace UnityEngine::UIElements {
template<typename T>
class UxmlEnumAttributeDescription_1;
}
namespace UnityEngine::UIElements {
template<>
class UnityEngine__UIElements__UxmlEnumAttributeDescription_1____c<System::Int32Enum>;
}
namespace UnityEngine::UIElements {
template<>
class UxmlEnumAttributeDescription_1<System::Int32Enum>;
}
// Type: ::<>c
// Type: UnityEngine.UIElements::UxmlEnumAttributeDescription`1
// Type: ::<>c
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7084))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7084), inst: 4825 })
// CS Name: UnityEngine.UIElements.UxmlEnumAttributeDescription`1::<>c
class CORDL_TYPE UnityEngine__UIElements__UxmlEnumAttributeDescription_1____c<System::Int32Enum> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__UIElements__UxmlEnumAttributeDescription_1____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UxmlEnumAttributeDescription_1____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__UxmlEnumAttributeDescription_1____c(UnityEngine__UIElements__UxmlEnumAttributeDescription_1____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UxmlEnumAttributeDescription_1____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__UxmlEnumAttributeDescription_1____c(UnityEngine__UIElements__UxmlEnumAttributeDescription_1____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UxmlEnumAttributeDescription_1____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__UxmlEnumAttributeDescription_1____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__UxmlEnumAttributeDescription_1____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__UxmlEnumAttributeDescription_1____c& operator=(UnityEngine__UIElements__UxmlEnumAttributeDescription_1____c&& o) noexcept = default;
  constexpr UnityEngine__UIElements__UxmlEnumAttributeDescription_1____c& operator=(UnityEngine__UIElements__UxmlEnumAttributeDescription_1____c const& o) noexcept = default;
                


// Fields

static UnityEngine::UIElements::UnityEngine__UIElements__UxmlEnumAttributeDescription_1____c<System::Int32Enum> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::UIElements::UnityEngine__UIElements__UxmlEnumAttributeDescription_1____c<System::Int32Enum> value) ;

static UnityEngine::UIElements::UnityEngine__UIElements__UxmlEnumAttributeDescription_1____c<System::Int32Enum> __get___9() ;

static System::Func_3<::StringW,System::Int32Enum,System::Int32Enum> __declspec(property(get=__get___9__3_0, put=__set___9__3_0))  __9__3_0;

static void __set___9__3_0(System::Func_3<::StringW,System::Int32Enum,System::Int32Enum> value) ;

static System::Func_3<::StringW,System::Int32Enum,System::Int32Enum> __get___9__3_0() ;

static System::Func_3<::StringW,System::Int32Enum,System::Int32Enum> __declspec(property(get=__get___9__4_0, put=__set___9__4_0))  __9__4_0;

static void __set___9__4_0(System::Func_3<::StringW,System::Int32Enum,System::Int32Enum> value) ;

static System::Func_3<::StringW,System::Int32Enum,System::Int32Enum> __get___9__4_0() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__UxmlEnumAttributeDescription_1____c() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <GetValueFromBag>b__3_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Int32Enum _GetValueFromBag_b__3_0(::StringW s, System::Int32Enum convertible) ;

/// @brief Method <TryGetValueFromBag>b__4_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Int32Enum _TryGetValueFromBag_b__4_0(::StringW s, System::Int32Enum convertible) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::UxmlEnumAttributeDescription`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7073)), TypeDefinitionIndex(TypeDefinitionIndex(7085)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7073), inst: 5042 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7085), inst: 4825 })
// CS Name: UnityEngine.UIElements.UxmlEnumAttributeDescription`1
class CORDL_TYPE UxmlEnumAttributeDescription_1<System::Int32Enum> : public UnityEngine::UIElements::TypedUxmlAttributeDescription_1<System::Int32Enum> {
public:
// Declarations
using __c = UnityEngine::UIElements::UnityEngine__UIElements__UxmlEnumAttributeDescription_1____c<System::Int32Enum>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~UxmlEnumAttributeDescription_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UxmlEnumAttributeDescription_1", modifiers: " const&", def_value: None }]
constexpr UxmlEnumAttributeDescription_1(UxmlEnumAttributeDescription_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UxmlEnumAttributeDescription_1", modifiers: "&&", def_value: None }]
constexpr UxmlEnumAttributeDescription_1(UxmlEnumAttributeDescription_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UxmlEnumAttributeDescription_1(void* ptr) noexcept : UnityEngine::UIElements::TypedUxmlAttributeDescription_1<System::Int32Enum>(ptr) {
}


  constexpr UxmlEnumAttributeDescription_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UxmlEnumAttributeDescription_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UxmlEnumAttributeDescription_1& operator=(UxmlEnumAttributeDescription_1&& o) noexcept = default;
  constexpr UxmlEnumAttributeDescription_1& operator=(UxmlEnumAttributeDescription_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UxmlEnumAttributeDescription_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method GetValueFromBag addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Int32Enum GetValueFromBag(UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc) ;

/// @brief Method TryGetValueFromBag addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryGetValueFromBag(UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc, ByRef<System::Int32Enum> value) ;

/// @brief Method ConvertValueToEnum addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
static U ConvertValueToEnum(::StringW v, U defaultValue) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::UIElements::UnityEngine__UIElements__UxmlEnumAttributeDescription_1____c, "UnityEngine.UIElements", "UxmlEnumAttributeDescription`1/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::UIElements::UxmlEnumAttributeDescription_1, "UnityEngine.UIElements", "UxmlEnumAttributeDescription`1");
