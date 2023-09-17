#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine {
struct SystemLanguage;
}
// Type: UnityEngine::SystemLanguage
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9977))
// CS Name: UnityEngine.SystemLanguage
struct CORDL_TYPE SystemLanguage : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SystemLanguage(int32_t value__) noexcept;


                    constexpr SystemLanguage(SystemLanguage const&) = default;
                    constexpr SystemLanguage(SystemLanguage&&) = default;
                    constexpr SystemLanguage& operator=(SystemLanguage const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SystemLanguage& operator=(SystemLanguage&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SystemLanguage(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __SystemLanguage_Unwrapped : int32_t {
__Afrikaans = 0,
__Arabic = 1,
__Basque = 2,
__Belarusian = 3,
__Bulgarian = 4,
__Catalan = 5,
__Chinese = 6,
__Czech = 7,
__Danish = 8,
__Dutch = 9,
__English = 10,
__Estonian = 11,
__Faroese = 12,
__Finnish = 13,
__French = 14,
__German = 15,
__Greek = 16,
__Hebrew = 17,
__Icelandic = 19,
__Indonesian = 20,
__Italian = 21,
__Japanese = 22,
__Korean = 23,
__Latvian = 24,
__Lithuanian = 25,
__Norwegian = 26,
__Polish = 27,
__Portuguese = 28,
__Romanian = 29,
__Russian = 30,
__SerboCroatian = 31,
__Slovak = 32,
__Slovenian = 33,
__Spanish = 34,
__Swedish = 35,
__Thai = 36,
__Turkish = 37,
__Ukrainian = 38,
__Vietnamese = 39,
__ChineseSimplified = 40,
__ChineseTraditional = 41,
__Unknown = 42,
__Hungarian = 18,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SystemLanguage_Unwrapped () const noexcept {
return std::bit_cast<__SystemLanguage_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Afrikaans offset 0
static ::UnityEngine::SystemLanguage const Afrikaans;

/// @brief Field Arabic offset 0
static ::UnityEngine::SystemLanguage const Arabic;

/// @brief Field Basque offset 0
static ::UnityEngine::SystemLanguage const Basque;

/// @brief Field Belarusian offset 0
static ::UnityEngine::SystemLanguage const Belarusian;

/// @brief Field Bulgarian offset 0
static ::UnityEngine::SystemLanguage const Bulgarian;

/// @brief Field Catalan offset 0
static ::UnityEngine::SystemLanguage const Catalan;

/// @brief Field Chinese offset 0
static ::UnityEngine::SystemLanguage const Chinese;

/// @brief Field Czech offset 0
static ::UnityEngine::SystemLanguage const Czech;

/// @brief Field Danish offset 0
static ::UnityEngine::SystemLanguage const Danish;

/// @brief Field Dutch offset 0
static ::UnityEngine::SystemLanguage const Dutch;

/// @brief Field English offset 0
static ::UnityEngine::SystemLanguage const English;

/// @brief Field Estonian offset 0
static ::UnityEngine::SystemLanguage const Estonian;

/// @brief Field Faroese offset 0
static ::UnityEngine::SystemLanguage const Faroese;

/// @brief Field Finnish offset 0
static ::UnityEngine::SystemLanguage const Finnish;

/// @brief Field French offset 0
static ::UnityEngine::SystemLanguage const French;

/// @brief Field German offset 0
static ::UnityEngine::SystemLanguage const German;

/// @brief Field Greek offset 0
static ::UnityEngine::SystemLanguage const Greek;

/// @brief Field Hebrew offset 0
static ::UnityEngine::SystemLanguage const Hebrew;

/// @brief Field Icelandic offset 0
static ::UnityEngine::SystemLanguage const Icelandic;

/// @brief Field Indonesian offset 0
static ::UnityEngine::SystemLanguage const Indonesian;

/// @brief Field Italian offset 0
static ::UnityEngine::SystemLanguage const Italian;

/// @brief Field Japanese offset 0
static ::UnityEngine::SystemLanguage const Japanese;

/// @brief Field Korean offset 0
static ::UnityEngine::SystemLanguage const Korean;

/// @brief Field Latvian offset 0
static ::UnityEngine::SystemLanguage const Latvian;

/// @brief Field Lithuanian offset 0
static ::UnityEngine::SystemLanguage const Lithuanian;

/// @brief Field Norwegian offset 0
static ::UnityEngine::SystemLanguage const Norwegian;

/// @brief Field Polish offset 0
static ::UnityEngine::SystemLanguage const Polish;

/// @brief Field Portuguese offset 0
static ::UnityEngine::SystemLanguage const Portuguese;

/// @brief Field Romanian offset 0
static ::UnityEngine::SystemLanguage const Romanian;

/// @brief Field Russian offset 0
static ::UnityEngine::SystemLanguage const Russian;

/// @brief Field SerboCroatian offset 0
static ::UnityEngine::SystemLanguage const SerboCroatian;

/// @brief Field Slovak offset 0
static ::UnityEngine::SystemLanguage const Slovak;

/// @brief Field Slovenian offset 0
static ::UnityEngine::SystemLanguage const Slovenian;

/// @brief Field Spanish offset 0
static ::UnityEngine::SystemLanguage const Spanish;

/// @brief Field Swedish offset 0
static ::UnityEngine::SystemLanguage const Swedish;

/// @brief Field Thai offset 0
static ::UnityEngine::SystemLanguage const Thai;

/// @brief Field Turkish offset 0
static ::UnityEngine::SystemLanguage const Turkish;

/// @brief Field Ukrainian offset 0
static ::UnityEngine::SystemLanguage const Ukrainian;

/// @brief Field Vietnamese offset 0
static ::UnityEngine::SystemLanguage const Vietnamese;

/// @brief Field ChineseSimplified offset 0
static ::UnityEngine::SystemLanguage const ChineseSimplified;

/// @brief Field ChineseTraditional offset 0
static ::UnityEngine::SystemLanguage const ChineseTraditional;

/// @brief Field Unknown offset 0
static ::UnityEngine::SystemLanguage const Unknown;

/// @brief Field Hungarian offset 0
static ::UnityEngine::SystemLanguage const Hungarian;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SystemLanguage, "UnityEngine", "SystemLanguage");
