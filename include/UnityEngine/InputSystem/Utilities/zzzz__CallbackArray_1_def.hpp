#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct InlinedArray_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
template<typename TDelegate>
struct CallbackArray_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<::cordl_internals::il2cpp_reference_type TDelegate>
struct CallbackArray_1<TDelegate>;
}
// Type: UnityEngine.InputSystem.Utilities::CallbackArray`1
// Type: UnityEngine.InputSystem.Utilities::CallbackArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<::cordl_internals::il2cpp_reference_type TDelegate>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(6743))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6743), inst: 2 })
// CS Name: UnityEngine.InputSystem.Utilities.CallbackArray`1
struct CORDL_TYPE CallbackArray_1<TDelegate> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_CannotMutateCallbacksArray", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_Callbacks", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>", modifiers: "", def_value: None }, CppParam { name: "m_CallbacksToAdd", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>", modifiers: "", def_value: None }, CppParam { name: "m_CallbacksToRemove", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>", modifiers: "", def_value: None }]
constexpr CallbackArray_1(bool m_CannotMutateCallbacksArray, ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate> m_Callbacks, ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate> m_CallbacksToAdd, ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate> m_CallbacksToRemove) noexcept;


                    constexpr CallbackArray_1(CallbackArray_1 const&) = default;
                    constexpr CallbackArray_1(CallbackArray_1&&) = default;
                    constexpr CallbackArray_1& operator=(CallbackArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CallbackArray_1& operator=(CallbackArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CallbackArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_m_CannotMutateCallbacksArray, put=__set_m_CannotMutateCallbacksArray))  m_CannotMutateCallbacksArray;

constexpr void __set_m_CannotMutateCallbacksArray(bool value) ;

constexpr bool __get_m_CannotMutateCallbacksArray() const;

 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate> __declspec(property(get=__get_m_Callbacks, put=__set_m_Callbacks))  m_Callbacks;

constexpr void __set_m_Callbacks(::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate> __get_m_Callbacks() const;

 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate> __declspec(property(get=__get_m_CallbacksToAdd, put=__set_m_CallbacksToAdd))  m_CallbacksToAdd;

constexpr void __set_m_CallbacksToAdd(::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate> __get_m_CallbacksToAdd() const;

 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate> __declspec(property(get=__get_m_CallbacksToRemove, put=__set_m_CallbacksToRemove))  m_CallbacksToRemove;

constexpr void __set_m_CallbacksToRemove(::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate> __get_m_CallbacksToRemove() const;


// Properties

 int32_t __declspec(property(get=get_length))  length;

 TDelegate __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method get_length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 TDelegate get_Item(int32_t index) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method AddCallback addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddCallback(TDelegate dlg) ;

/// @brief Method RemoveCallback addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveCallback(TDelegate dlg) ;

/// @brief Method LockForChanges addr 0x0 size 0xffffffffffffffff virtual false final false
 void LockForChanges() ;

/// @brief Method UnlockForChanges addr 0x0 size 0xffffffffffffffff virtual false final false
 void UnlockForChanges() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::InputSystem::Utilities::CallbackArray_1, "UnityEngine.InputSystem.Utilities", "CallbackArray`1");
