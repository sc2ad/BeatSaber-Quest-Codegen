#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Oculus::Platform {
struct ChallengeViewerFilter;
}
namespace System {
struct DateTime;
}
namespace Oculus::Platform {
struct ChallengeVisibility;
}
// Forward declare root types
namespace Oculus::Platform {
class ChallengeOptions;
}
// Type: Oculus.Platform::ChallengeOptions
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13178))
// CS Name: Oculus.Platform.ChallengeOptions
class CORDL_TYPE ChallengeOptions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ChallengeOptions() = default;

// Ctor Parameters [CppParam { name: "", ty: "ChallengeOptions", modifiers: " const&", def_value: None }]
constexpr ChallengeOptions(ChallengeOptions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ChallengeOptions", modifiers: "&&", def_value: None }]
constexpr ChallengeOptions(ChallengeOptions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ChallengeOptions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ChallengeOptions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ChallengeOptions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ChallengeOptions& operator=(ChallengeOptions&& o) noexcept = default;
  constexpr ChallengeOptions& operator=(ChallengeOptions const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_Handle, put=__set_Handle))  Handle;

constexpr void __set_Handle(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_Handle() const;


// Methods

// Ctor Parameters []
explicit ChallengeOptions() ;

/// @brief Method .ctor addr 0x257a5c8 size 0x64 virtual false final false
 void _ctor() ;

/// @brief Method SetDescription addr 0x257a62c size 0x68 virtual false final false
 void SetDescription(::StringW value) ;

/// @brief Method SetEndDate addr 0x257a694 size 0x68 virtual false final false
 void SetEndDate(System::DateTime value) ;

/// @brief Method SetIncludeActiveChallenges addr 0x257a6fc size 0x68 virtual false final false
 void SetIncludeActiveChallenges(bool value) ;

/// @brief Method SetIncludeFutureChallenges addr 0x257a764 size 0x68 virtual false final false
 void SetIncludeFutureChallenges(bool value) ;

/// @brief Method SetIncludePastChallenges addr 0x257a7cc size 0x68 virtual false final false
 void SetIncludePastChallenges(bool value) ;

/// @brief Method SetLeaderboardName addr 0x257a834 size 0x68 virtual false final false
 void SetLeaderboardName(::StringW value) ;

/// @brief Method SetStartDate addr 0x257a89c size 0x68 virtual false final false
 void SetStartDate(System::DateTime value) ;

/// @brief Method SetTitle addr 0x257a904 size 0x68 virtual false final false
 void SetTitle(::StringW value) ;

/// @brief Method SetViewerFilter addr 0x257a96c size 0x68 virtual false final false
 void SetViewerFilter(Oculus::Platform::ChallengeViewerFilter value) ;

/// @brief Method SetVisibility addr 0x257a9d4 size 0x68 virtual false final false
 void SetVisibility(Oculus::Platform::ChallengeVisibility value) ;

/// @brief Method op_Explicit addr 0x257aa3c size 0x58 virtual false final false
static ::cordl_internals::intptr_t op_Explicit___cordl_internals__intptr_t(Oculus::Platform::ChallengeOptions options) ;

/// @brief Method Finalize addr 0x257aa94 size 0xd4 virtual true final false
 void Finalize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::ChallengeOptions);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::ChallengeOptions, "Oculus.Platform", "ChallengeOptions");
