#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
namespace {
// Forward declare root types
namespace System::Collections {
struct DictionaryEntry;
}
// Type: System.Collections::DictionaryEntry
namespace System::Collections {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3738))
// CS Name: System.Collections.DictionaryEntry
struct CORDL_TYPE DictionaryEntry : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_key", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "_value", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
constexpr DictionaryEntry(::bs_hook::Il2CppWrapperType _key, ::bs_hook::Il2CppWrapperType _value) noexcept;


                    constexpr DictionaryEntry(DictionaryEntry const&) = default;
                    constexpr DictionaryEntry(DictionaryEntry&&) = default;
                    constexpr DictionaryEntry& operator=(DictionaryEntry const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DictionaryEntry& operator=(DictionaryEntry&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DictionaryEntry(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__key, put=__set__key))  _key;

constexpr void __set__key(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__key() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__value() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Key))  Key;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x240e7e8 size 0x8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method get_Key addr 0x240e7f0 size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_Key() ;

/// @brief Method get_Value addr 0x240e7f8 size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_Value() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::DictionaryEntry, "System.Collections", "DictionaryEntry");
