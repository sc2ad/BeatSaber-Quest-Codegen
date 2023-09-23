#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UIElements {
struct DragAndDropPosition;
}
namespace UnityEngine::UIElements {
class IDragAndDropData;
}
namespace UnityEngine::UIElements {
class IListDragAndDropArgs;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct ListDragAndDropArgs;
}
// Type: UnityEngine.UIElements::ListDragAndDropArgs
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7040))
// CS Name: UnityEngine.UIElements.ListDragAndDropArgs
struct CORDL_TYPE ListDragAndDropArgs : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to UnityEngine::UIElements::IListDragAndDropArgs
constexpr operator  UnityEngine::UIElements::IListDragAndDropArgs() const;

// Ctor Parameters [CppParam { name: "_target_k__BackingField", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "_insertAtIndex_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_dragAndDropPosition_k__BackingField", ty: "UnityEngine::UIElements::DragAndDropPosition", modifiers: "", def_value: None }, CppParam { name: "_dragAndDropData_k__BackingField", ty: "UnityEngine::UIElements::IDragAndDropData", modifiers: "", def_value: None }]
constexpr ListDragAndDropArgs(::bs_hook::Il2CppWrapperType _target_k__BackingField, int32_t _insertAtIndex_k__BackingField, UnityEngine::UIElements::DragAndDropPosition _dragAndDropPosition_k__BackingField, UnityEngine::UIElements::IDragAndDropData _dragAndDropData_k__BackingField) noexcept;


                    constexpr ListDragAndDropArgs(ListDragAndDropArgs const&) = default;
                    constexpr ListDragAndDropArgs(ListDragAndDropArgs&&) = default;
                    constexpr ListDragAndDropArgs& operator=(ListDragAndDropArgs const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ListDragAndDropArgs& operator=(ListDragAndDropArgs&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ListDragAndDropArgs(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__target_k__BackingField, put=__set__target_k__BackingField))  _target_k__BackingField;

constexpr void __set__target_k__BackingField(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__target_k__BackingField() const;

 int32_t __declspec(property(get=__get__insertAtIndex_k__BackingField, put=__set__insertAtIndex_k__BackingField))  _insertAtIndex_k__BackingField;

constexpr void __set__insertAtIndex_k__BackingField(int32_t value) ;

constexpr int32_t __get__insertAtIndex_k__BackingField() const;

 UnityEngine::UIElements::DragAndDropPosition __declspec(property(get=__get__dragAndDropPosition_k__BackingField, put=__set__dragAndDropPosition_k__BackingField))  _dragAndDropPosition_k__BackingField;

constexpr void __set__dragAndDropPosition_k__BackingField(UnityEngine::UIElements::DragAndDropPosition value) ;

constexpr UnityEngine::UIElements::DragAndDropPosition __get__dragAndDropPosition_k__BackingField() const;

 UnityEngine::UIElements::IDragAndDropData __declspec(property(get=__get__dragAndDropData_k__BackingField, put=__set__dragAndDropData_k__BackingField))  _dragAndDropData_k__BackingField;

constexpr void __set__dragAndDropData_k__BackingField(UnityEngine::UIElements::IDragAndDropData value) ;

constexpr UnityEngine::UIElements::IDragAndDropData __get__dragAndDropData_k__BackingField() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(put=set_target))  target;

 int32_t __declspec(property(get=get_insertAtIndex, put=set_insertAtIndex))  insertAtIndex;

 UnityEngine::UIElements::DragAndDropPosition __declspec(property(get=get_dragAndDropPosition, put=set_dragAndDropPosition))  dragAndDropPosition;

 UnityEngine::UIElements::IDragAndDropData __declspec(property(get=get_dragAndDropData, put=set_dragAndDropData))  dragAndDropData;


// Methods

/// @brief Method set_target addr 0x2c91068 size 0x8 virtual false final false
 void set_target(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method get_insertAtIndex addr 0x2c91070 size 0x8 virtual true final true
 int32_t get_insertAtIndex() ;

/// @brief Method set_insertAtIndex addr 0x2c91078 size 0x8 virtual false final false
 void set_insertAtIndex(int32_t value) ;

/// @brief Method get_dragAndDropPosition addr 0x2c91080 size 0x8 virtual true final true
 UnityEngine::UIElements::DragAndDropPosition get_dragAndDropPosition() ;

/// @brief Method set_dragAndDropPosition addr 0x2c91088 size 0x8 virtual false final false
 void set_dragAndDropPosition(UnityEngine::UIElements::DragAndDropPosition value) ;

/// @brief Method get_dragAndDropData addr 0x2c91090 size 0x8 virtual true final true
 UnityEngine::UIElements::IDragAndDropData get_dragAndDropData() ;

/// @brief Method set_dragAndDropData addr 0x2c91098 size 0x8 virtual false final false
 void set_dragAndDropData(UnityEngine::UIElements::IDragAndDropData value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::ListDragAndDropArgs, "UnityEngine.UIElements", "ListDragAndDropArgs");
