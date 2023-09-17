#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::Assertions {
class AssertionMessageUtil;
}
// Type: UnityEngine.Assertions::AssertionMessageUtil
namespace UnityEngine::Assertions {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10251))
// CS Name: UnityEngine.Assertions.AssertionMessageUtil
class CORDL_TYPE AssertionMessageUtil : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AssertionMessageUtil() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssertionMessageUtil", modifiers: " const&", def_value: None }]
constexpr AssertionMessageUtil(AssertionMessageUtil const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssertionMessageUtil", modifiers: "&&", def_value: None }]
constexpr AssertionMessageUtil(AssertionMessageUtil&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssertionMessageUtil(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AssertionMessageUtil& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssertionMessageUtil& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssertionMessageUtil& operator=(AssertionMessageUtil&& o) noexcept = default;
  constexpr AssertionMessageUtil& operator=(AssertionMessageUtil const& o) noexcept = default;
                


// Methods

/// @brief Method GetMessage addr 0x2b71774 size 0xec virtual false final false
static ::StringW GetMessage(::StringW failureMessage) ;

/// @brief Method GetMessage addr 0x2b71860 size 0x158 virtual false final false
static ::StringW GetMessage(::StringW failureMessage, ::StringW expected) ;

/// @brief Method GetEqualityMessage addr 0x2b713e0 size 0x1f4 virtual false final false
static ::StringW GetEqualityMessage(::bs_hook::Il2CppWrapperType actual, ::bs_hook::Il2CppWrapperType expected, bool expectEqual) ;

/// @brief Method NullFailureMessage addr 0x2b71080 size 0x168 virtual false final false
static ::StringW NullFailureMessage(::bs_hook::Il2CppWrapperType value, bool expectNull) ;

/// @brief Method BooleanFailureMessage addr 0x2b70d8c size 0x90 virtual false final false
static ::StringW BooleanFailureMessage(bool expected) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Assertions
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Assertions::AssertionMessageUtil);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Assertions::AssertionMessageUtil, "UnityEngine.Assertions", "AssertionMessageUtil");
