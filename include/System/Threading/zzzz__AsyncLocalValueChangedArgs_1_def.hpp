#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace {
// Forward declare root types
namespace System::Threading {
template<typename T>
struct AsyncLocalValueChangedArgs_1;
}
namespace System::Threading {
template<::cordl_internals::il2cpp_reference_type T>
struct AsyncLocalValueChangedArgs_1<T>;
}
// Type: System.Threading::AsyncLocalValueChangedArgs`1
// Type: System.Threading::AsyncLocalValueChangedArgs`1
namespace System::Threading {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2658)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2658), inst: 2 })
// CS Name: System.Threading.AsyncLocalValueChangedArgs`1
struct CORDL_TYPE AsyncLocalValueChangedArgs_1<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_PreviousValue_k__BackingField", ty: "T", modifiers: "", def_value: None }, CppParam { name: "_CurrentValue_k__BackingField", ty: "T", modifiers: "", def_value: None }, CppParam { name: "_ThreadContextChanged_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
constexpr AsyncLocalValueChangedArgs_1(T _PreviousValue_k__BackingField, T _CurrentValue_k__BackingField, bool _ThreadContextChanged_k__BackingField) noexcept;


                    constexpr AsyncLocalValueChangedArgs_1(AsyncLocalValueChangedArgs_1 const&) = default;
                    constexpr AsyncLocalValueChangedArgs_1(AsyncLocalValueChangedArgs_1&&) = default;
                    constexpr AsyncLocalValueChangedArgs_1& operator=(AsyncLocalValueChangedArgs_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AsyncLocalValueChangedArgs_1& operator=(AsyncLocalValueChangedArgs_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AsyncLocalValueChangedArgs_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 T __declspec(property(get=__get__PreviousValue_k__BackingField, put=__set__PreviousValue_k__BackingField))  _PreviousValue_k__BackingField;

constexpr void __set__PreviousValue_k__BackingField(T value) ;

constexpr T __get__PreviousValue_k__BackingField() const;

 T __declspec(property(get=__get__CurrentValue_k__BackingField, put=__set__CurrentValue_k__BackingField))  _CurrentValue_k__BackingField;

constexpr void __set__CurrentValue_k__BackingField(T value) ;

constexpr T __get__CurrentValue_k__BackingField() const;

 bool __declspec(property(get=__get__ThreadContextChanged_k__BackingField, put=__set__ThreadContextChanged_k__BackingField))  _ThreadContextChanged_k__BackingField;

constexpr void __set__ThreadContextChanged_k__BackingField(bool value) ;

constexpr bool __get__ThreadContextChanged_k__BackingField() const;


// Properties

 T __declspec(property(get=get_CurrentValue))  CurrentValue;


// Methods

/// @brief Method get_CurrentValue addr 0x0 size 0xffffffffffffffff virtual false final false
 T get_CurrentValue() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(T previousValue, T currentValue, bool contextChanged) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Threading
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Threading::AsyncLocalValueChangedArgs_1, "System.Threading", "AsyncLocalValueChangedArgs`1");
