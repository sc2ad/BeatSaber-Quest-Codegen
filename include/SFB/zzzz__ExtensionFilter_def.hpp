#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
// Forward declare root types
namespace SFB {
struct ExtensionFilter;
}
// Type: SFB::ExtensionFilter
namespace SFB {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6149))
// CS Name: SFB.ExtensionFilter
struct CORDL_TYPE ExtensionFilter : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_extensions", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }]
constexpr ExtensionFilter(::StringW _name, ::ArrayW<::StringW> _extensions) noexcept;


                    constexpr ExtensionFilter(ExtensionFilter const&) = default;
                    constexpr ExtensionFilter(ExtensionFilter&&) = default;
                    constexpr ExtensionFilter& operator=(ExtensionFilter const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ExtensionFilter& operator=(ExtensionFilter&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ExtensionFilter(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get__name, put=__set__name))  _name;

constexpr void __set__name(::StringW value) ;

constexpr ::StringW __get__name() const;

 ::ArrayW<::StringW> __declspec(property(get=__get__extensions, put=__set__extensions))  _extensions;

constexpr void __set__extensions(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__extensions() const;


// Methods

/// @brief Method .ctor addr 0x21d56a8 size 0x8 virtual false final false
 void _ctor(::StringW filterName, ::ArrayW<::StringW> filterExtensions) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def SFB
DEFINE_IL2CPP_ARG_TYPE(SFB::ExtensionFilter, "SFB", "ExtensionFilter");
