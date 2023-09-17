#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
namespace {
namespace UnityEngine::UIElements::StyleSheets {
struct MatchResultErrorCode;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
struct MatchResult;
}
// Type: UnityEngine.UIElements.StyleSheets::MatchResult
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7581))
// CS Name: UnityEngine.UIElements.StyleSheets.MatchResult
struct CORDL_TYPE MatchResult : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "errorCode", ty: "::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode", modifiers: "", def_value: None }, CppParam { name: "errorValue", ty: "::StringW", modifiers: "", def_value: None }]
constexpr MatchResult(::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode errorCode, ::StringW errorValue) noexcept;


                    constexpr MatchResult(MatchResult const&) = default;
                    constexpr MatchResult(MatchResult&&) = default;
                    constexpr MatchResult& operator=(MatchResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MatchResult& operator=(MatchResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MatchResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode __declspec(property(get=__get_errorCode, put=__set_errorCode))  errorCode;

constexpr void __set_errorCode(::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode value) ;

constexpr ::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode __get_errorCode() const;

 ::StringW __declspec(property(get=__get_errorValue, put=__set_errorValue))  errorValue;

constexpr void __set_errorValue(::StringW value) ;

constexpr ::StringW __get_errorValue() const;


// Properties

 bool __declspec(property(get=get_success))  success;


// Methods

/// @brief Method get_success addr 0x2c778a8 size 0x10 virtual false final false
 bool get_success() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::StyleSheets
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::MatchResult, "UnityEngine.UIElements.StyleSheets", "MatchResult");
