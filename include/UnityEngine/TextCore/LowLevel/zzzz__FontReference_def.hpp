#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::TextCore::LowLevel {
struct FontReference;
}
// Type: UnityEngine.TextCore.LowLevel::FontReference
namespace UnityEngine::TextCore::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15512))
// CS Name: UnityEngine.TextCore.LowLevel.FontReference
struct CORDL_TYPE FontReference : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "familyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "styleName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "faceIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "filePath", ty: "::StringW", modifiers: "", def_value: None }]
constexpr FontReference(::StringW familyName, ::StringW styleName, int32_t faceIndex, ::StringW filePath) noexcept;


                    constexpr FontReference(FontReference const&) = default;
                    constexpr FontReference(FontReference&&) = default;
                    constexpr FontReference& operator=(FontReference const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FontReference& operator=(FontReference&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FontReference(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_familyName, put=__set_familyName))  familyName;

constexpr void __set_familyName(::StringW value) ;

constexpr ::StringW __get_familyName() const;

 ::StringW __declspec(property(get=__get_styleName, put=__set_styleName))  styleName;

constexpr void __set_styleName(::StringW value) ;

constexpr ::StringW __get_styleName() const;

 int32_t __declspec(property(get=__get_faceIndex, put=__set_faceIndex))  faceIndex;

constexpr void __set_faceIndex(int32_t value) ;

constexpr int32_t __get_faceIndex() const;

 ::StringW __declspec(property(get=__get_filePath, put=__set_filePath))  filePath;

constexpr void __set_filePath(::StringW value) ;

constexpr ::StringW __get_filePath() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::LowLevel
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::FontReference, "UnityEngine.TextCore.LowLevel", "FontReference");
