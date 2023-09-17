#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_ImageFileFormat;
}
// Type: HoudiniEngineUnity::HAPI_ImageFileFormat
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9684))
// CS Name: HoudiniEngineUnity.HAPI_ImageFileFormat
struct CORDL_TYPE HAPI_ImageFileFormat : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "nameSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "descriptionSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "defaultExtensionSH", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_ImageFileFormat(int32_t nameSH, int32_t descriptionSH, int32_t defaultExtensionSH) noexcept;


                    constexpr HAPI_ImageFileFormat(HAPI_ImageFileFormat const&) = default;
                    constexpr HAPI_ImageFileFormat(HAPI_ImageFileFormat&&) = default;
                    constexpr HAPI_ImageFileFormat& operator=(HAPI_ImageFileFormat const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_ImageFileFormat& operator=(HAPI_ImageFileFormat&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_ImageFileFormat(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_nameSH, put=__set_nameSH))  nameSH;

constexpr void __set_nameSH(int32_t value) ;

constexpr int32_t __get_nameSH() const;

 int32_t __declspec(property(get=__get_descriptionSH, put=__set_descriptionSH))  descriptionSH;

constexpr void __set_descriptionSH(int32_t value) ;

constexpr int32_t __get_descriptionSH() const;

 int32_t __declspec(property(get=__get_defaultExtensionSH, put=__set_defaultExtensionSH))  defaultExtensionSH;

constexpr void __set_defaultExtensionSH(int32_t value) ;

constexpr int32_t __get_defaultExtensionSH() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_ImageFileFormat, "HoudiniEngineUnity", "HAPI_ImageFileFormat");
