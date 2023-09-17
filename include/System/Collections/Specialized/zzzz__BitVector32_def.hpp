#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Collections::Specialized {
struct BitVector32;
}
// Type: System.Collections.Specialized::BitVector32
namespace System::Collections::Specialized {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8358))
// CS Name: System.Collections.Specialized.BitVector32
struct CORDL_TYPE BitVector32 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_data", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr BitVector32(uint32_t _data) noexcept;


                    constexpr BitVector32(BitVector32 const&) = default;
                    constexpr BitVector32(BitVector32&&) = default;
                    constexpr BitVector32& operator=(BitVector32 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BitVector32& operator=(BitVector32&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BitVector32(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint32_t __declspec(property(get=__get__data, put=__set__data))  _data;

constexpr void __set__data(uint32_t value) ;

constexpr uint32_t __get__data() const;


// Properties

 bool __declspec(property(get=get_Item, put=set_Item))  Item;


// Methods

/// @brief Method get_Item addr 0x27a8b64 size 0x18 virtual false final false
 bool get_Item(int32_t bit) ;

/// @brief Method set_Item addr 0x27a8b7c size 0x1c virtual false final false
 void set_Item(int32_t bit, bool value) ;

/// @brief Method CreateMask addr 0x27a8b98 size 0x8 virtual false final false
static int32_t CreateMask() ;

/// @brief Method CreateMask addr 0x27a8ba0 size 0x70 virtual false final false
static int32_t CreateMask(int32_t previous) ;

/// @brief Method Equals addr 0x27a8c10 size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method GetHashCode addr 0x27a8c88 size 0x64 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x27a8cec size 0xd0 virtual false final false
static ::StringW ToString(::System::Collections::Specialized::BitVector32 value) ;

/// @brief Method ToString addr 0x27a8dbc size 0x8 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Specialized
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::BitVector32, "System.Collections.Specialized", "BitVector32");
