#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Xml::Schema {
struct Position;
}
// Type: System.Xml.Schema::Position
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11539))
// CS Name: System.Xml.Schema.Position
struct CORDL_TYPE Position : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "symbol", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "particle", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
constexpr Position(int32_t symbol, ::bs_hook::Il2CppWrapperType particle) noexcept;


                    constexpr Position(Position const&) = default;
                    constexpr Position(Position&&) = default;
                    constexpr Position& operator=(Position const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Position& operator=(Position&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Position(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_symbol, put=__set_symbol))  symbol;

constexpr void __set_symbol(int32_t value) ;

constexpr int32_t __get_symbol() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_particle, put=__set_particle))  particle;

constexpr void __set_particle(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_particle() const;


// Methods

/// @brief Method .ctor addr 0x271a0a8 size 0xc virtual false final false
 void _ctor(int32_t symbol, ::bs_hook::Il2CppWrapperType particle) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::Position, "System.Xml.Schema", "Position");
