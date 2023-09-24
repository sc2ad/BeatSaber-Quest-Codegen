#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElementAsset_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__VisualTreeAsset__SlotUsageEntry;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__TemplateAsset__AttributeOverride;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TemplateAsset;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__TemplateAsset__AttributeOverride;
}
// Type: ::AttributeOverride
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7092))
// CS Name: UnityEngine.UIElements.TemplateAsset::AttributeOverride
struct CORDL_TYPE UnityEngine__UIElements__TemplateAsset__AttributeOverride : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_ElementName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_AttributeName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Value", ty: "::StringW", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__TemplateAsset__AttributeOverride(::StringW m_ElementName, ::StringW m_AttributeName, ::StringW m_Value) noexcept;


                    constexpr UnityEngine__UIElements__TemplateAsset__AttributeOverride(UnityEngine__UIElements__TemplateAsset__AttributeOverride const&) = default;
                    constexpr UnityEngine__UIElements__TemplateAsset__AttributeOverride(UnityEngine__UIElements__TemplateAsset__AttributeOverride&&) = default;
                    constexpr UnityEngine__UIElements__TemplateAsset__AttributeOverride& operator=(UnityEngine__UIElements__TemplateAsset__AttributeOverride const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__TemplateAsset__AttributeOverride& operator=(UnityEngine__UIElements__TemplateAsset__AttributeOverride&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__TemplateAsset__AttributeOverride(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_m_ElementName, put=__set_m_ElementName))  m_ElementName;

constexpr void __set_m_ElementName(::StringW value) ;

constexpr ::StringW __get_m_ElementName() const;

 ::StringW __declspec(property(get=__get_m_AttributeName, put=__set_m_AttributeName))  m_AttributeName;

constexpr void __set_m_AttributeName(::StringW value) ;

constexpr ::StringW __get_m_AttributeName() const;

 ::StringW __declspec(property(get=__get_m_Value, put=__set_m_Value))  m_Value;

constexpr void __set_m_Value(::StringW value) ;

constexpr ::StringW __get_m_Value() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::TemplateAsset
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7106))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7093))
// CS Name: UnityEngine.UIElements.TemplateAsset
class CORDL_TYPE TemplateAsset : public UnityEngine::UIElements::VisualElementAsset {
public:
// Declarations
using AttributeOverride = UnityEngine::UIElements::UnityEngine__UIElements__TemplateAsset__AttributeOverride;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~TemplateAsset() = default;

// Ctor Parameters [CppParam { name: "", ty: "TemplateAsset", modifiers: " const&", def_value: None }]
constexpr TemplateAsset(TemplateAsset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TemplateAsset", modifiers: "&&", def_value: None }]
constexpr TemplateAsset(TemplateAsset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TemplateAsset(void* ptr) noexcept : UnityEngine::UIElements::VisualElementAsset(ptr) {
}


  constexpr TemplateAsset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TemplateAsset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TemplateAsset& operator=(TemplateAsset&& o) noexcept = default;
  constexpr TemplateAsset& operator=(TemplateAsset const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_TemplateAlias, put=__set_m_TemplateAlias))  m_TemplateAlias;

constexpr void __set_m_TemplateAlias(::StringW value) ;

constexpr ::StringW __get_m_TemplateAlias() const;

 System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__TemplateAsset__AttributeOverride> __declspec(property(get=__get_m_AttributeOverrides, put=__set_m_AttributeOverrides))  m_AttributeOverrides;

constexpr void __set_m_AttributeOverrides(System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__TemplateAsset__AttributeOverride> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__TemplateAsset__AttributeOverride> __get_m_AttributeOverrides() const;

 System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__VisualTreeAsset__SlotUsageEntry> __declspec(property(get=__get_m_SlotUsages, put=__set_m_SlotUsages))  m_SlotUsages;

constexpr void __set_m_SlotUsages(System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__VisualTreeAsset__SlotUsageEntry> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__VisualTreeAsset__SlotUsageEntry> __get_m_SlotUsages() const;


// Properties

 System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__TemplateAsset__AttributeOverride> __declspec(property(get=get_attributeOverrides))  attributeOverrides;

 System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__VisualTreeAsset__SlotUsageEntry> __declspec(property(get=get_slotUsages))  slotUsages;


// Methods

/// @brief Method get_attributeOverrides addr 0x2c98fc0 size 0x80 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__TemplateAsset__AttributeOverride> get_attributeOverrides() ;

/// @brief Method get_slotUsages addr 0x2c99040 size 0x8 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__VisualTreeAsset__SlotUsageEntry> get_slotUsages() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::TemplateAsset);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::TemplateAsset, "UnityEngine.UIElements", "TemplateAsset");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__TemplateAsset__AttributeOverride, "UnityEngine.UIElements", "TemplateAsset/AttributeOverride");
