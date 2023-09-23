#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
// Forward declare root types
namespace System::Text::RegularExpressions {
struct RegexPrefix;
}
// Type: System.Text.RegularExpressions::RegexPrefix
namespace System::Text::RegularExpressions {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7778))
// CS Name: System.Text.RegularExpressions.RegexPrefix
struct CORDL_TYPE RegexPrefix : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_CaseInsensitive_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_Prefix_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }]
constexpr RegexPrefix(bool _CaseInsensitive_k__BackingField, ::StringW _Prefix_k__BackingField) noexcept;


                    constexpr RegexPrefix(RegexPrefix const&) = default;
                    constexpr RegexPrefix(RegexPrefix&&) = default;
                    constexpr RegexPrefix& operator=(RegexPrefix const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RegexPrefix& operator=(RegexPrefix&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RegexPrefix(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get__CaseInsensitive_k__BackingField, put=__set__CaseInsensitive_k__BackingField))  _CaseInsensitive_k__BackingField;

constexpr void __set__CaseInsensitive_k__BackingField(bool value) ;

constexpr bool __get__CaseInsensitive_k__BackingField() const;

static System::Text::RegularExpressions::RegexPrefix __declspec(property(get=__get__Empty_k__BackingField, put=__set__Empty_k__BackingField))  _Empty_k__BackingField;

static void __set__Empty_k__BackingField(System::Text::RegularExpressions::RegexPrefix value) ;

static System::Text::RegularExpressions::RegexPrefix __get__Empty_k__BackingField() ;

 ::StringW __declspec(property(get=__get__Prefix_k__BackingField, put=__set__Prefix_k__BackingField))  _Prefix_k__BackingField;

constexpr void __set__Prefix_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Prefix_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_CaseInsensitive))  CaseInsensitive;

static System::Text::RegularExpressions::RegexPrefix __declspec(property(get=get_Empty))  Empty;

 ::StringW __declspec(property(get=get_Prefix))  Prefix;


// Methods

/// @brief Method .ctor addr 0x27cbf90 size 0x10 virtual false final false
 void _ctor(::StringW prefix, bool ci) ;

/// @brief Method get_CaseInsensitive addr 0x27d602c size 0x8 virtual false final false
 bool get_CaseInsensitive() ;

/// @brief Method get_Empty addr 0x27d6034 size 0x58 virtual false final false
static System::Text::RegularExpressions::RegexPrefix get_Empty() ;

/// @brief Method get_Prefix addr 0x27d608c size 0x8 virtual false final false
 ::StringW get_Prefix() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Text::RegularExpressions
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::RegexPrefix, "System.Text.RegularExpressions", "RegexPrefix");
