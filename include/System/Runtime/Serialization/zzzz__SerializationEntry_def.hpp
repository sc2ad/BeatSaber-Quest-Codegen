#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
struct SerializationEntry;
}
// Type: System.Runtime.Serialization::SerializationEntry
namespace System::Runtime::Serialization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3194))
// CS Name: System.Runtime.Serialization.SerializationEntry
struct CORDL_TYPE SerializationEntry : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_value", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "_type", ty: "System::Type", modifiers: "", def_value: None }]
constexpr SerializationEntry(::StringW _name, ::bs_hook::Il2CppWrapperType _value, System::Type _type) noexcept;


                    constexpr SerializationEntry(SerializationEntry const&) = default;
                    constexpr SerializationEntry(SerializationEntry&&) = default;
                    constexpr SerializationEntry& operator=(SerializationEntry const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SerializationEntry& operator=(SerializationEntry&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SerializationEntry(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get__name, put=__set__name))  _name;

constexpr void __set__name(::StringW value) ;

constexpr ::StringW __get__name() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__value() const;

 System::Type __declspec(property(get=__get__type, put=__set__type))  _type;

constexpr void __set__type(System::Type value) ;

constexpr System::Type __get__type() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Value))  Value;

 ::StringW __declspec(property(get=get_Name))  Name;


// Methods

/// @brief Method .ctor addr 0x23482c4 size 0xc virtual false final false
 void _ctor(::StringW entryName, ::bs_hook::Il2CppWrapperType entryValue, System::Type entryType) ;

/// @brief Method get_Value addr 0x23482d0 size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_Value() ;

/// @brief Method get_Name addr 0x23482d8 size 0x8 virtual false final false
 ::StringW get_Name() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::SerializationEntry, "System.Runtime.Serialization", "SerializationEntry");
