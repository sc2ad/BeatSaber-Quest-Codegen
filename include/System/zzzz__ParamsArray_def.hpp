#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System {
struct ParamsArray;
}
// Type: System::ParamsArray
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2457))
// CS Name: System.ParamsArray
struct CORDL_TYPE ParamsArray : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_arg0", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "_arg1", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "_arg2", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "_args", ty: "::ArrayW<::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }]
constexpr ParamsArray(::bs_hook::Il2CppWrapperType _arg0, ::bs_hook::Il2CppWrapperType _arg1, ::bs_hook::Il2CppWrapperType _arg2, ::ArrayW<::bs_hook::Il2CppWrapperType> _args) noexcept;


                    constexpr ParamsArray(ParamsArray const&) = default;
                    constexpr ParamsArray(ParamsArray&&) = default;
                    constexpr ParamsArray& operator=(ParamsArray const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ParamsArray& operator=(ParamsArray&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ParamsArray(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_s_oneArgArray, put=__set_s_oneArgArray))  s_oneArgArray;

static void __set_s_oneArgArray(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

static ::ArrayW<::bs_hook::Il2CppWrapperType> __get_s_oneArgArray() ;

static ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_s_twoArgArray, put=__set_s_twoArgArray))  s_twoArgArray;

static void __set_s_twoArgArray(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

static ::ArrayW<::bs_hook::Il2CppWrapperType> __get_s_twoArgArray() ;

static ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_s_threeArgArray, put=__set_s_threeArgArray))  s_threeArgArray;

static void __set_s_threeArgArray(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

static ::ArrayW<::bs_hook::Il2CppWrapperType> __get_s_threeArgArray() ;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__arg0, put=__set__arg0))  _arg0;

constexpr void __set__arg0(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__arg0() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__arg1, put=__set__arg1))  _arg1;

constexpr void __set__arg1(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__arg1() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__arg2, put=__set__arg2))  _arg2;

constexpr void __set__arg2(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__arg2() const;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__args, put=__set__args))  _args;

constexpr void __set__args(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get__args() const;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method .ctor addr 0x244fd8c size 0x74 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType arg0) ;

/// @brief Method .ctor addr 0x244fe00 size 0x78 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType arg0, ::bs_hook::Il2CppWrapperType arg1) ;

/// @brief Method .ctor addr 0x244fe78 size 0x84 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType arg0, ::bs_hook::Il2CppWrapperType arg1, ::bs_hook::Il2CppWrapperType arg2) ;

/// @brief Method .ctor addr 0x244fefc size 0x60 virtual false final false
 void _ctor(::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method get_Length addr 0x244ff5c size 0x1c virtual false final false
 int32_t get_Length() ;

/// @brief Method get_Item addr 0x244ff78 size 0x10 virtual false final false
 ::bs_hook::Il2CppWrapperType get_Item(int32_t index) ;

/// @brief Method GetAtSlow addr 0x244ff88 size 0x54 virtual false final false
 ::bs_hook::Il2CppWrapperType GetAtSlow(int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::ParamsArray, "System", "ParamsArray");
