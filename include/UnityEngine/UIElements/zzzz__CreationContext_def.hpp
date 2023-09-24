#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__TemplateAsset__AttributeOverride;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class VisualTreeAsset;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct CreationContext;
}
// Type: UnityEngine.UIElements::CreationContext
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7104))
// CS Name: UnityEngine.UIElements.CreationContext
struct CORDL_TYPE CreationContext : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::UIElements::CreationContext>
constexpr operator  System::IEquatable_1<UnityEngine::UIElements::CreationContext>() const;

// Ctor Parameters [CppParam { name: "_target_k__BackingField", ty: "UnityEngine::UIElements::VisualElement", modifiers: "", def_value: None }, CppParam { name: "_visualTreeAsset_k__BackingField", ty: "UnityEngine::UIElements::VisualTreeAsset", modifiers: "", def_value: None }, CppParam { name: "_slotInsertionPoints_k__BackingField", ty: "System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::UIElements::VisualElement>", modifiers: "", def_value: None }, CppParam { name: "_attributeOverrides_k__BackingField", ty: "System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__TemplateAsset__AttributeOverride>", modifiers: "", def_value: None }]
constexpr CreationContext(UnityEngine::UIElements::VisualElement _target_k__BackingField, UnityEngine::UIElements::VisualTreeAsset _visualTreeAsset_k__BackingField, System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::UIElements::VisualElement> _slotInsertionPoints_k__BackingField, System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__TemplateAsset__AttributeOverride> _attributeOverrides_k__BackingField) noexcept;


                    constexpr CreationContext(CreationContext const&) = default;
                    constexpr CreationContext(CreationContext&&) = default;
                    constexpr CreationContext& operator=(CreationContext const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CreationContext& operator=(CreationContext&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CreationContext(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static UnityEngine::UIElements::CreationContext __declspec(property(get=__get_Default, put=__set_Default))  Default;

static void __set_Default(UnityEngine::UIElements::CreationContext value) ;

static UnityEngine::UIElements::CreationContext __get_Default() ;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get__target_k__BackingField, put=__set__target_k__BackingField))  _target_k__BackingField;

constexpr void __set__target_k__BackingField(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get__target_k__BackingField() const;

 UnityEngine::UIElements::VisualTreeAsset __declspec(property(get=__get__visualTreeAsset_k__BackingField, put=__set__visualTreeAsset_k__BackingField))  _visualTreeAsset_k__BackingField;

constexpr void __set__visualTreeAsset_k__BackingField(UnityEngine::UIElements::VisualTreeAsset value) ;

constexpr UnityEngine::UIElements::VisualTreeAsset __get__visualTreeAsset_k__BackingField() const;

 System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::UIElements::VisualElement> __declspec(property(get=__get__slotInsertionPoints_k__BackingField, put=__set__slotInsertionPoints_k__BackingField))  _slotInsertionPoints_k__BackingField;

constexpr void __set__slotInsertionPoints_k__BackingField(System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::UIElements::VisualElement> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::UIElements::VisualElement> __get__slotInsertionPoints_k__BackingField() const;

 System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__TemplateAsset__AttributeOverride> __declspec(property(get=__get__attributeOverrides_k__BackingField, put=__set__attributeOverrides_k__BackingField))  _attributeOverrides_k__BackingField;

constexpr void __set__attributeOverrides_k__BackingField(System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__TemplateAsset__AttributeOverride> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__TemplateAsset__AttributeOverride> __get__attributeOverrides_k__BackingField() const;


// Properties

 UnityEngine::UIElements::VisualElement __declspec(property(get=get_target, put=set_target))  target;

 UnityEngine::UIElements::VisualTreeAsset __declspec(property(get=get_visualTreeAsset, put=set_visualTreeAsset))  visualTreeAsset;

 System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::UIElements::VisualElement> __declspec(property(get=get_slotInsertionPoints, put=set_slotInsertionPoints))  slotInsertionPoints;

 System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__TemplateAsset__AttributeOverride> __declspec(property(get=get_attributeOverrides, put=set_attributeOverrides))  attributeOverrides;


// Methods

/// @brief Method get_target addr 0x2c9d884 size 0x8 virtual false final false
 UnityEngine::UIElements::VisualElement get_target() ;

/// @brief Method set_target addr 0x2c9d88c size 0x8 virtual false final false
 void set_target(UnityEngine::UIElements::VisualElement value) ;

/// @brief Method get_visualTreeAsset addr 0x2c9d894 size 0x8 virtual false final false
 UnityEngine::UIElements::VisualTreeAsset get_visualTreeAsset() ;

/// @brief Method set_visualTreeAsset addr 0x2c9d89c size 0x8 virtual false final false
 void set_visualTreeAsset(UnityEngine::UIElements::VisualTreeAsset value) ;

/// @brief Method get_slotInsertionPoints addr 0x2c9d8a4 size 0x8 virtual false final false
 System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::UIElements::VisualElement> get_slotInsertionPoints() ;

/// @brief Method set_slotInsertionPoints addr 0x2c9d8ac size 0x8 virtual false final false
 void set_slotInsertionPoints(System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::UIElements::VisualElement> value) ;

/// @brief Method get_attributeOverrides addr 0x2c9d8b4 size 0x8 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__TemplateAsset__AttributeOverride> get_attributeOverrides() ;

/// @brief Method set_attributeOverrides addr 0x2c9d8bc size 0x8 virtual false final false
 void set_attributeOverrides(System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__TemplateAsset__AttributeOverride> value) ;

/// @brief Method .ctor addr 0x2c9b36c size 0xc virtual false final false
 void _ctor(System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::UIElements::VisualElement> slotInsertionPoints, System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__TemplateAsset__AttributeOverride> attributeOverrides, UnityEngine::UIElements::VisualTreeAsset vta, UnityEngine::UIElements::VisualElement target) ;

/// @brief Method Equals addr 0x2c9d8c4 size 0x88 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x2c9d94c size 0xf0 virtual true final true
 bool Equals(UnityEngine::UIElements::CreationContext other) ;

/// @brief Method GetHashCode addr 0x2c9da3c size 0xf0 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::CreationContext, "UnityEngine.UIElements", "CreationContext");
