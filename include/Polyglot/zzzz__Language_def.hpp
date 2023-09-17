#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Polyglot {
struct Language;
}
// Type: Polyglot::Language
namespace Polyglot {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15530))
// CS Name: Polyglot.Language
struct CORDL_TYPE Language : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Language(int32_t value__) noexcept;


                    constexpr Language(Language const&) = default;
                    constexpr Language(Language&&) = default;
                    constexpr Language& operator=(Language const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Language& operator=(Language&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Language(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Language_Unwrapped : int32_t {
__English = 0,
__French = 1,
__Spanish = 2,
__German = 3,
__Italian = 4,
__Portuguese_Brazil = 5,
__Portuguese = 6,
__Russian = 7,
__Greek = 8,
__Turkish = 9,
__Danish = 10,
__Norwegian = 11,
__Swedish = 12,
__Dutch = 13,
__Polish = 14,
__Finnish = 15,
__Japanese = 16,
__Simplified_Chinese = 17,
__Traditional_Chinese = 18,
__Korean = 19,
__Czech = 20,
__Hungarian = 21,
__Romanian = 22,
__Thai = 23,
__Bulgarian = 24,
__Hebrew = 25,
__Arabic = 26,
__Bosnian = 27,
__Debug_Keys = 28,
__Debug_English_Reverted = 29,
__Debug_Word_With_Max_Lenght = 30,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Language_Unwrapped () const noexcept {
return std::bit_cast<__Language_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field English offset 0
static ::Polyglot::Language const English;

/// @brief Field French offset 0
static ::Polyglot::Language const French;

/// @brief Field Spanish offset 0
static ::Polyglot::Language const Spanish;

/// @brief Field German offset 0
static ::Polyglot::Language const German;

/// @brief Field Italian offset 0
static ::Polyglot::Language const Italian;

/// @brief Field Portuguese_Brazil offset 0
static ::Polyglot::Language const Portuguese_Brazil;

/// @brief Field Portuguese offset 0
static ::Polyglot::Language const Portuguese;

/// @brief Field Russian offset 0
static ::Polyglot::Language const Russian;

/// @brief Field Greek offset 0
static ::Polyglot::Language const Greek;

/// @brief Field Turkish offset 0
static ::Polyglot::Language const Turkish;

/// @brief Field Danish offset 0
static ::Polyglot::Language const Danish;

/// @brief Field Norwegian offset 0
static ::Polyglot::Language const Norwegian;

/// @brief Field Swedish offset 0
static ::Polyglot::Language const Swedish;

/// @brief Field Dutch offset 0
static ::Polyglot::Language const Dutch;

/// @brief Field Polish offset 0
static ::Polyglot::Language const Polish;

/// @brief Field Finnish offset 0
static ::Polyglot::Language const Finnish;

/// @brief Field Japanese offset 0
static ::Polyglot::Language const Japanese;

/// @brief Field Simplified_Chinese offset 0
static ::Polyglot::Language const Simplified_Chinese;

/// @brief Field Traditional_Chinese offset 0
static ::Polyglot::Language const Traditional_Chinese;

/// @brief Field Korean offset 0
static ::Polyglot::Language const Korean;

/// @brief Field Czech offset 0
static ::Polyglot::Language const Czech;

/// @brief Field Hungarian offset 0
static ::Polyglot::Language const Hungarian;

/// @brief Field Romanian offset 0
static ::Polyglot::Language const Romanian;

/// @brief Field Thai offset 0
static ::Polyglot::Language const Thai;

/// @brief Field Bulgarian offset 0
static ::Polyglot::Language const Bulgarian;

/// @brief Field Hebrew offset 0
static ::Polyglot::Language const Hebrew;

/// @brief Field Arabic offset 0
static ::Polyglot::Language const Arabic;

/// @brief Field Bosnian offset 0
static ::Polyglot::Language const Bosnian;

/// @brief Field Debug_Keys offset 0
static ::Polyglot::Language const Debug_Keys;

/// @brief Field Debug_English_Reverted offset 0
static ::Polyglot::Language const Debug_English_Reverted;

/// @brief Field Debug_Word_With_Max_Lenght offset 0
static ::Polyglot::Language const Debug_Word_With_Max_Lenght;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Polyglot
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Polyglot::Language, "Polyglot", "Language");
