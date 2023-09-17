#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
namespace {
// Forward declare root types
namespace GlobalNamespace {
struct GetAssetBundleFileResult;
}
// Type: ::GetAssetBundleFileResult
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4431))
// CS Name: GetAssetBundleFileResult
struct CORDL_TYPE GetAssetBundleFileResult : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "isError", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "assetBundlePath", ty: "::StringW", modifiers: "", def_value: None }]
constexpr GetAssetBundleFileResult(bool isError, ::StringW assetBundlePath) noexcept;


                    constexpr GetAssetBundleFileResult(GetAssetBundleFileResult const&) = default;
                    constexpr GetAssetBundleFileResult(GetAssetBundleFileResult&&) = default;
                    constexpr GetAssetBundleFileResult& operator=(GetAssetBundleFileResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GetAssetBundleFileResult& operator=(GetAssetBundleFileResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GetAssetBundleFileResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_isError, put=__set_isError))  isError;

constexpr void __set_isError(bool value) ;

constexpr bool __get_isError() const;

 ::StringW __declspec(property(get=__get_assetBundlePath, put=__set_assetBundlePath))  assetBundlePath;

constexpr void __set_assetBundlePath(::StringW value) ;

constexpr ::StringW __get_assetBundlePath() const;


// Methods

/// @brief Method .ctor addr 0x21ed9e0 size 0x10 virtual false final false
 void _ctor(bool isError, ::StringW assetBundlePath) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GetAssetBundleFileResult, "", "GetAssetBundleFileResult");
