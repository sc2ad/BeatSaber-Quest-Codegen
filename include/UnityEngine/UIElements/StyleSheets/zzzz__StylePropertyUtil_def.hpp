#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StyleEnumType;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
class StylePropertyUtil;
}
// Type: UnityEngine.UIElements.StyleSheets::StylePropertyUtil
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7578))
// CS Name: UnityEngine.UIElements.StyleSheets.StylePropertyUtil
class CORDL_TYPE StylePropertyUtil : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~StylePropertyUtil() = default;

// Ctor Parameters [CppParam { name: "", ty: "StylePropertyUtil", modifiers: " const&", def_value: None }]
constexpr StylePropertyUtil(StylePropertyUtil const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StylePropertyUtil", modifiers: "&&", def_value: None }]
constexpr StylePropertyUtil(StylePropertyUtil&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StylePropertyUtil(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StylePropertyUtil& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StylePropertyUtil& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StylePropertyUtil& operator=(StylePropertyUtil&& o) noexcept = default;
  constexpr StylePropertyUtil& operator=(StylePropertyUtil const& o) noexcept = default;
                


// Fields

static ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId> __declspec(property(get=__get_s_AnimatablePropertiesHash, put=__set_s_AnimatablePropertiesHash))  s_AnimatablePropertiesHash;

static void __set_s_AnimatablePropertiesHash(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId> value) ;

static ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId> __get_s_AnimatablePropertiesHash() ;

static ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleSheets::StylePropertyId> __declspec(property(get=__get_s_NameToId, put=__set_s_NameToId))  s_NameToId;

static void __set_s_NameToId(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleSheets::StylePropertyId> value) ;

static ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleSheets::StylePropertyId> __get_s_NameToId() ;

static ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::StringW> __declspec(property(get=__get_s_IdToName, put=__set_s_IdToName))  s_IdToName;

static void __set_s_IdToName(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::StringW> value) ;

static ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::StringW> __get_s_IdToName() ;

static ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId> __declspec(property(get=__get_s_AnimatableProperties, put=__set_s_AnimatableProperties))  s_AnimatableProperties;

static void __set_s_AnimatableProperties(::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId> value) ;

static ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId> __get_s_AnimatableProperties() ;


// Methods

/// @brief Method IsAnimatable addr 0x2c7555c size 0x80 virtual false final false
static bool IsAnimatable(::UnityEngine::UIElements::StyleSheets::StylePropertyId id) ;

/// @brief Method TryGetEnumIntValue addr 0x2c755dc size 0xd98 virtual false final false
static bool TryGetEnumIntValue(::UnityEngine::UIElements::StyleSheets::StyleEnumType enumType, ::StringW value, ByRef<int32_t> intValue) ;

/// @brief Method IsMatchingShorthand addr 0x2c76374 size 0x130 virtual false final false
static bool IsMatchingShorthand(::UnityEngine::UIElements::StyleSheets::StylePropertyId shorthand, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::StyleSheets
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::StyleSheets::StylePropertyUtil);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::StylePropertyUtil, "UnityEngine.UIElements.StyleSheets", "StylePropertyUtil");
