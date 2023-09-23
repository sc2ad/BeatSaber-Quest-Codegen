#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct ChainBuilderStats;
}
// Type: UnityEngine.UIElements.UIR::ChainBuilderStats
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7488))
// CS Name: UnityEngine.UIElements.UIR.ChainBuilderStats
struct CORDL_TYPE ChainBuilderStats : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "elementsAdded", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "elementsRemoved", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "recursiveClipUpdates", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "recursiveClipUpdatesExpanded", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "nonRecursiveClipUpdates", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "recursiveTransformUpdates", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "recursiveTransformUpdatesExpanded", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "recursiveOpacityUpdates", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "recursiveOpacityUpdatesExpanded", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "colorUpdates", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "colorUpdatesExpanded", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "recursiveVisualUpdates", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "recursiveVisualUpdatesExpanded", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "nonRecursiveVisualUpdates", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "dirtyProcessed", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "nudgeTransformed", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "boneTransformed", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "skipTransformed", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "visualUpdateTransformed", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "updatedMeshAllocations", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "newMeshAllocations", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "groupTransformElementsChanged", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "immedateRenderersActive", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "textUpdates", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr ChainBuilderStats(uint32_t elementsAdded, uint32_t elementsRemoved, uint32_t recursiveClipUpdates, uint32_t recursiveClipUpdatesExpanded, uint32_t nonRecursiveClipUpdates, uint32_t recursiveTransformUpdates, uint32_t recursiveTransformUpdatesExpanded, uint32_t recursiveOpacityUpdates, uint32_t recursiveOpacityUpdatesExpanded, uint32_t colorUpdates, uint32_t colorUpdatesExpanded, uint32_t recursiveVisualUpdates, uint32_t recursiveVisualUpdatesExpanded, uint32_t nonRecursiveVisualUpdates, uint32_t dirtyProcessed, uint32_t nudgeTransformed, uint32_t boneTransformed, uint32_t skipTransformed, uint32_t visualUpdateTransformed, uint32_t updatedMeshAllocations, uint32_t newMeshAllocations, uint32_t groupTransformElementsChanged, uint32_t immedateRenderersActive, uint32_t textUpdates) noexcept;


                    constexpr ChainBuilderStats(ChainBuilderStats const&) = default;
                    constexpr ChainBuilderStats(ChainBuilderStats&&) = default;
                    constexpr ChainBuilderStats& operator=(ChainBuilderStats const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ChainBuilderStats& operator=(ChainBuilderStats&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x60};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ChainBuilderStats(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint32_t __declspec(property(get=__get_elementsAdded, put=__set_elementsAdded))  elementsAdded;

constexpr void __set_elementsAdded(uint32_t value) ;

constexpr uint32_t __get_elementsAdded() const;

 uint32_t __declspec(property(get=__get_elementsRemoved, put=__set_elementsRemoved))  elementsRemoved;

constexpr void __set_elementsRemoved(uint32_t value) ;

constexpr uint32_t __get_elementsRemoved() const;

 uint32_t __declspec(property(get=__get_recursiveClipUpdates, put=__set_recursiveClipUpdates))  recursiveClipUpdates;

constexpr void __set_recursiveClipUpdates(uint32_t value) ;

constexpr uint32_t __get_recursiveClipUpdates() const;

 uint32_t __declspec(property(get=__get_recursiveClipUpdatesExpanded, put=__set_recursiveClipUpdatesExpanded))  recursiveClipUpdatesExpanded;

constexpr void __set_recursiveClipUpdatesExpanded(uint32_t value) ;

constexpr uint32_t __get_recursiveClipUpdatesExpanded() const;

 uint32_t __declspec(property(get=__get_nonRecursiveClipUpdates, put=__set_nonRecursiveClipUpdates))  nonRecursiveClipUpdates;

constexpr void __set_nonRecursiveClipUpdates(uint32_t value) ;

constexpr uint32_t __get_nonRecursiveClipUpdates() const;

 uint32_t __declspec(property(get=__get_recursiveTransformUpdates, put=__set_recursiveTransformUpdates))  recursiveTransformUpdates;

constexpr void __set_recursiveTransformUpdates(uint32_t value) ;

constexpr uint32_t __get_recursiveTransformUpdates() const;

 uint32_t __declspec(property(get=__get_recursiveTransformUpdatesExpanded, put=__set_recursiveTransformUpdatesExpanded))  recursiveTransformUpdatesExpanded;

constexpr void __set_recursiveTransformUpdatesExpanded(uint32_t value) ;

constexpr uint32_t __get_recursiveTransformUpdatesExpanded() const;

 uint32_t __declspec(property(get=__get_recursiveOpacityUpdates, put=__set_recursiveOpacityUpdates))  recursiveOpacityUpdates;

constexpr void __set_recursiveOpacityUpdates(uint32_t value) ;

constexpr uint32_t __get_recursiveOpacityUpdates() const;

 uint32_t __declspec(property(get=__get_recursiveOpacityUpdatesExpanded, put=__set_recursiveOpacityUpdatesExpanded))  recursiveOpacityUpdatesExpanded;

constexpr void __set_recursiveOpacityUpdatesExpanded(uint32_t value) ;

constexpr uint32_t __get_recursiveOpacityUpdatesExpanded() const;

 uint32_t __declspec(property(get=__get_colorUpdates, put=__set_colorUpdates))  colorUpdates;

constexpr void __set_colorUpdates(uint32_t value) ;

constexpr uint32_t __get_colorUpdates() const;

 uint32_t __declspec(property(get=__get_colorUpdatesExpanded, put=__set_colorUpdatesExpanded))  colorUpdatesExpanded;

constexpr void __set_colorUpdatesExpanded(uint32_t value) ;

constexpr uint32_t __get_colorUpdatesExpanded() const;

 uint32_t __declspec(property(get=__get_recursiveVisualUpdates, put=__set_recursiveVisualUpdates))  recursiveVisualUpdates;

constexpr void __set_recursiveVisualUpdates(uint32_t value) ;

constexpr uint32_t __get_recursiveVisualUpdates() const;

 uint32_t __declspec(property(get=__get_recursiveVisualUpdatesExpanded, put=__set_recursiveVisualUpdatesExpanded))  recursiveVisualUpdatesExpanded;

constexpr void __set_recursiveVisualUpdatesExpanded(uint32_t value) ;

constexpr uint32_t __get_recursiveVisualUpdatesExpanded() const;

 uint32_t __declspec(property(get=__get_nonRecursiveVisualUpdates, put=__set_nonRecursiveVisualUpdates))  nonRecursiveVisualUpdates;

constexpr void __set_nonRecursiveVisualUpdates(uint32_t value) ;

constexpr uint32_t __get_nonRecursiveVisualUpdates() const;

 uint32_t __declspec(property(get=__get_dirtyProcessed, put=__set_dirtyProcessed))  dirtyProcessed;

constexpr void __set_dirtyProcessed(uint32_t value) ;

constexpr uint32_t __get_dirtyProcessed() const;

 uint32_t __declspec(property(get=__get_nudgeTransformed, put=__set_nudgeTransformed))  nudgeTransformed;

constexpr void __set_nudgeTransformed(uint32_t value) ;

constexpr uint32_t __get_nudgeTransformed() const;

 uint32_t __declspec(property(get=__get_boneTransformed, put=__set_boneTransformed))  boneTransformed;

constexpr void __set_boneTransformed(uint32_t value) ;

constexpr uint32_t __get_boneTransformed() const;

 uint32_t __declspec(property(get=__get_skipTransformed, put=__set_skipTransformed))  skipTransformed;

constexpr void __set_skipTransformed(uint32_t value) ;

constexpr uint32_t __get_skipTransformed() const;

 uint32_t __declspec(property(get=__get_visualUpdateTransformed, put=__set_visualUpdateTransformed))  visualUpdateTransformed;

constexpr void __set_visualUpdateTransformed(uint32_t value) ;

constexpr uint32_t __get_visualUpdateTransformed() const;

 uint32_t __declspec(property(get=__get_updatedMeshAllocations, put=__set_updatedMeshAllocations))  updatedMeshAllocations;

constexpr void __set_updatedMeshAllocations(uint32_t value) ;

constexpr uint32_t __get_updatedMeshAllocations() const;

 uint32_t __declspec(property(get=__get_newMeshAllocations, put=__set_newMeshAllocations))  newMeshAllocations;

constexpr void __set_newMeshAllocations(uint32_t value) ;

constexpr uint32_t __get_newMeshAllocations() const;

 uint32_t __declspec(property(get=__get_groupTransformElementsChanged, put=__set_groupTransformElementsChanged))  groupTransformElementsChanged;

constexpr void __set_groupTransformElementsChanged(uint32_t value) ;

constexpr uint32_t __get_groupTransformElementsChanged() const;

 uint32_t __declspec(property(get=__get_immedateRenderersActive, put=__set_immedateRenderersActive))  immedateRenderersActive;

constexpr void __set_immedateRenderersActive(uint32_t value) ;

constexpr uint32_t __get_immedateRenderersActive() const;

 uint32_t __declspec(property(get=__get_textUpdates, put=__set_textUpdates))  textUpdates;

constexpr void __set_textUpdates(uint32_t value) ;

constexpr uint32_t __get_textUpdates() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::ChainBuilderStats, "UnityEngine.UIElements.UIR", "ChainBuilderStats");
