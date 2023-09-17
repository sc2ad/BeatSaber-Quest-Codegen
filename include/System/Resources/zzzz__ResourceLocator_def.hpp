#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Resources {
struct ResourceTypeCode;
}
// Forward declare root types
namespace System::Resources {
struct ResourceLocator;
}
// Type: System.Resources::ResourceLocator
namespace System::Resources {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3431))
// CS Name: System.Resources.ResourceLocator
struct CORDL_TYPE ResourceLocator : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_value", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "_dataPos", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ResourceLocator(::bs_hook::Il2CppWrapperType _value, int32_t _dataPos) noexcept;


                    constexpr ResourceLocator(ResourceLocator const&) = default;
                    constexpr ResourceLocator(ResourceLocator&&) = default;
                    constexpr ResourceLocator& operator=(ResourceLocator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ResourceLocator& operator=(ResourceLocator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ResourceLocator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__value() const;

 int32_t __declspec(property(get=__get__dataPos, put=__set__dataPos))  _dataPos;

constexpr void __set__dataPos(int32_t value) ;

constexpr int32_t __get__dataPos() const;


// Properties

 int32_t __declspec(property(get=get_DataPosition))  DataPosition;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Value, put=set_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x2374320 size 0xc virtual false final false
 void _ctor(int32_t dataPos, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method get_DataPosition addr 0x237432c size 0x8 virtual false final false
 int32_t get_DataPosition() ;

/// @brief Method get_Value addr 0x2374334 size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_Value() ;

/// @brief Method set_Value addr 0x237433c size 0x8 virtual false final false
 void set_Value(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method CanCache addr 0x2374344 size 0xc virtual false final false
static bool CanCache(::System::Resources::ResourceTypeCode value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Resources
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::ResourceLocator, "System.Resources", "ResourceLocator");
